class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];

        sort(strs.begin(), strs.end());
        
        string result;
        int i = 0;
        string front = strs.front();
        string back = strs.back();
        while (i < min(front.length(), back.length()) && front[i] == back[i] ) {
            result += front[i++];
        }

        return result;
    }
};