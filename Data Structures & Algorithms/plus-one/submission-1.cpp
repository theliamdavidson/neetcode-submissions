class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        std::vector<int>::reverse_iterator backDigits = digits.rbegin();
        for( ; backDigits != digits.rend(); ++backDigits){
            if (*backDigits < 9){
                *backDigits += 1;
                return digits;
            }
            *backDigits = 0;
            if(backDigits+1 == digits.rend()) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        return digits;
    }
};
