class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;

        for (const string& str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());

            map[temp].push_back(str);
        }

        for (const auto& m : map) {
            result.push_back(move(m.second));
        }

        return result;
    }
};