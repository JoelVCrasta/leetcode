class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_set<char> visited;
        unordered_map<char, int> lastOccurence;
        string res = "";

        int n = s.length();

        for (int i = 0; i < n; i++) {
            lastOccurence[s[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            if (visited.find(s[i]) != visited.end()) {
                continue;
            }

            while (res.length() > 0 && s[i] < res.back() && i < lastOccurence[res.back()]) {
                char top = res.back();
                res.pop_back();
                visited.erase(top);
            }

            res.push_back(s[i]);
            visited.insert(s[i]);
        }

        return res;
    }
};