class Solution {
public:
    bool isValid(string s) {
        std::stack<char> paren;
        std::unordered_map<char, char> brackets = {
            {'}', '{'}, {')', '('}, {']', '['}
        };
        for(char c : s){
            if(brackets.find(c) == brackets.end()){
                paren.push(c);
            }
            else{
                if(paren.empty() || paren.top() != brackets[c]) return false;
                paren.pop();
            }
        }
        return paren.empty();
    }
};
