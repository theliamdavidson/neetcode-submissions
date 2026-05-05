class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> sequence;
        int streak = 0;
        for(int i : nums)
            sequence.insert(i);
        for(int n : sequence){
            if(sequence.find(n-1) == sequence.end()){
                int currentNum = n;
                int currentStreak = 1;
                while (sequence.count(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                streak = max(streak, currentStreak);
            }
            
        }
        return streak;
    }
};
