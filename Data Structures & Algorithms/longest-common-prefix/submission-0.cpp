class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string prefix{strs[0]};
        for( int i {1}; i < strs.size(); i++){
            string evaluatedString = strs[i];
            int j = 0;
            while (j < prefix.size() && j < evaluatedString.size() && prefix[j] == evaluatedString[j]){
                j++;
            }
            prefix = prefix.substr(0, j);
        }
        return prefix;
    }
};