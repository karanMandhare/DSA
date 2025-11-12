class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return true;

        int pos = 1;
        while(pos < n && nums[pos] >= nums[pos - 1]) {
            pos++;
        }

        if(pos == n) return true;

        // Check if the rest is sorted and wraps correctly
        for(int i = pos + 1; i < n; i++) {
            if(nums[i] < nums[i - 1]) return false;
        }

        // Final wrap check
        return nums[n - 1] <= nums[0];
    }
};