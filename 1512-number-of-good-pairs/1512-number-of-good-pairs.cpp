class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        int totalPairs = 0;

        for (int n : nums) {
            map[n]++;
        }

        for (auto& m : map) {
            totalPairs += ((m.second - 1) * m.second) / 2;
        }

        return totalPairs;
    }
};