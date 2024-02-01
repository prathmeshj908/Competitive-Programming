class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int k = 1;
        int longestStreak = 1;

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                k++;
            } else if (nums[i] != nums[i - 1]) {
                longestStreak = max(longestStreak, k);
                k = 1;
            }
        }

        return max(longestStreak, k);
    }
};