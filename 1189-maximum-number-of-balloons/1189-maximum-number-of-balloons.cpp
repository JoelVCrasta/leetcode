class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> map;
        int count = 0;

        for (char c : text) {
            map[c]++;
        }

        int bCount = map['b'];
        int aCount = map['a'];
        int lCount = map['l'] / 2;
        int oCount = map['o'] / 2;
        int nCount = map['n'];

        return min({bCount, aCount, lCount, oCount, nCount});
    }
};