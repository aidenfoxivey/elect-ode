class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem, c = 0;

        for (auto num : nums) {
            if (c == 0) {
                elem = num;
                c = 1;
            } else if (elem == num) {
                c++;
            } else {
                c--;
            }
        }

        return elem;
    }
};
