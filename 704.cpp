class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        while (1) {
            int m = (l + r) / 2;
            if (nums[m] == target)
                return m;

            if (l == m)
                break;

            else if (nums[m] <= target)
                l = m;

            else if (nums[m] > target)
                r = m;
        }
        return -1;
    }
};
