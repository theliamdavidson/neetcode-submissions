class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int reservoir = 0; 

        while (left < right){
            int area = min(heights[left], heights[right]) * (right-left);
            reservoir = max(reservoir, area);

            if (heights[left] <= heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return reservoir;
    }
};
