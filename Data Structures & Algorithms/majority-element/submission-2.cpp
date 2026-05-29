class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for(const auto& element : nums){
            if (count == 0){
                candidate = element;
                count = 1;
            }
            else if(element == candidate){
                ++count;
            }
            else{
                --count;
            }
        }
        return candidate; 
    }
};