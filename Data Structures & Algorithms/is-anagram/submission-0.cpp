class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {return false;}
        unordered_map<int, char> hashS;
        unordered_map<int, char> hashT;
        for(int i = 0; i < s.size(); i++){
            hashS[s[i]]++;
            hashT[t[i]]++;
        }
        return hashS == hashT;
    }
};
