class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int result = 0, left = 0;

        for(int right = k - 1; right < arr.size(); ++right){
            int sum = 0;
            for (int i = left; i <= right; ++i){
                sum+= arr[i];
            }
            if(sum / k >=threshold){
                ++result;
            }
            ++left;
        }
        return result;
    }
};