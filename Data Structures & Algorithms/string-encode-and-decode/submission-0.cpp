class Solution {
public:

    string encode(vector<string>& strs) {
        int length = 0;
        string returnString = "";
        for(auto word : strs){
            length = word.size();
            returnString += to_string(length) + ";" + word;
        }
        return returnString;
    }

    vector<string> decode(string s) {
        vector<string> returnVec;
        int index = 0;
        while(index < s.size()){
            int pos = s.find(';', index);
            int len = stoi(s.substr(index, pos - index));
            returnVec.push_back(s.substr(pos+1,len));
            index = pos + 1 + len;
        }
        return returnVec;
    }
};
