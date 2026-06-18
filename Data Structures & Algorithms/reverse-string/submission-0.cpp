class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        char temp = 'a';
        for(int right = s.size() - 1; right > left; --right){
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            ++left;
        }
    }
};