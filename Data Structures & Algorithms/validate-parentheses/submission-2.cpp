class Solution {
public:
    bool isValid(string s) {
        std::stack<char> paren;
        std::map<char, char> brackets = {
            {'}', '{'}, {')', '('}, {']', '['}
        };
        for(int i =0; i < s.size(); i++){
            if(brackets.find(s[i]) == brackets.end()){
                paren.push(s[i]);
            }
            else{
                if(paren.empty() || paren.top() != brackets[s[i]]) return false;
                paren.pop();
            }
        }
        return paren.empty();
    }
};
