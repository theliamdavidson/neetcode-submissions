class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(auto iterator = digits.rbegin();iterator != digits.rend(); ++iterator){
            if (*iterator == 9){
                *iterator = 0;
            }
            else{
                *iterator += 1;
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
        
    }
};
