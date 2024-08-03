class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int max = 0, max_count = 0;

        for (int num : nums) {
            map[num]++;
        }

        for (auto num : nums) {
            if (map[num] > max_count) {
                max = num;
                max_count = map[num];
            }
        }

        return max;
    }
};
