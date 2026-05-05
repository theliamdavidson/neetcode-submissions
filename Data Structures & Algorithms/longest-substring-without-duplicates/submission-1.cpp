class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int left = 0;
        std::set<char> found; 
        for(int right = 0; right < s.size(); right++){
            while(found.find(s[right]) != found.end()){
                found.erase(s[left]);
                left++;
            }
            found.insert(s[right]);
            maxLen = max(maxLen, (int)found.size());

        }
        return maxLen;
    }
};
