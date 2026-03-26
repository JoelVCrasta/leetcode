class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();

        if (n < m) return {};

        vector<int> p_freq(26, 0);
        vector<int> sub_freq(26, 0);
        vector<int> result;

        for (int i = 0; i < m; i++) {
            p_freq[p[i] - 'a']++;
            sub_freq[s[i] - 'a']++;
        }

        if (sub_freq == p_freq) result.push_back(0);

        for (int i = m; i < n; i++) {
            sub_freq[s[i - m] - 'a']--;
            sub_freq[s[i] - 'a']++;

            if (sub_freq == p_freq) result.push_back(i - m + 1);
        } 

        return result;
    }
};