// just compare the freq of chars in the p string and the substring of s
// if they are equal then return true

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        if (n < m) return false;

        vector<int> p_freq(26, 0);
        vector<int> sub_freq(26, 0);

        for (int i = 0; i < m; i++) {
            p_freq[s1[i] - 'a']++;
            sub_freq[s2[i] - 'a']++;
        }

        if (sub_freq == p_freq) return true;

        for (int i = m; i < n; i++) {
            sub_freq[s2[i - m] - 'a']--;
            sub_freq[s2[i] - 'a']++;

            if (sub_freq == p_freq) return true;
        } 

        return false;
    }
};
