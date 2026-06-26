class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);

        // Find duplicate
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1;

            if (nums[idx] < 0) {
                ans[0] = abs(nums[i]);   // Duplicate
            } else {
                nums[idx] *= -1;
            }
        }

        // Find missing
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans[1] = i + 1;          // Missing
                break;
            }
        }

        return ans;
    }
};