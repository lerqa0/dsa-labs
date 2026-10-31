//lab1.1 running sum of 1d array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> totals;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            totals.push_back(sum);
        }
        return totals;
    }
};
