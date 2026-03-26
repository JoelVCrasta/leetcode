class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> map;
        vector<int> result;

        int wordLength = words[0].length();
        int wordsSize = words.size();
        int windowSize = wordLength * wordsSize;
        int n = s.size();

        for (const string& word : words) {
            map[word]++;
        }

        for (int offset = 0; offset < wordLength; offset++) {
            unordered_map<string, int> seen;
            int count = 0;

            for (int i = offset; i + wordLength <= n; i += wordLength) {
                string sub = s.substr(i, wordLength);

                auto it = map.find(sub);
                if (it == map.end()) {
                    seen.clear();
                    count = 0;
                    continue;
                }

                seen[sub]++;
                count++;

                while (seen[sub] > it->second) {
                    string first = s.substr(i - (count - 1) * wordLength, wordLength);

                    seen[first]--;
                    count--;
                }

                if (count == wordsSize) {
                    result.push_back(i - (count - 1) * wordLength);
                }
            }
        }

        return result;
    }
};