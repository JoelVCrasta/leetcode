class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> map;
        int count = 0;
        string word = "balloon";

        for (char c : text) {
            map[c]++;
        }

        while(true) {
            for (char c : word) {
                if (map[c] == 0) return count;

                map[c]--;
            }
            count++;
        }

        return count;
    }
};