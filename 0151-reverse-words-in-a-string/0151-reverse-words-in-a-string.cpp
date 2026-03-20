class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int write_idx = 0;

        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                if (write_idx != 0) s[write_idx++] = ' ';

                int start = write_idx;
                while(i < n && s[i] != ' ') {
                    s[write_idx++] = s[i++];
                }

                reverse(s.begin() + start, s.begin() + write_idx);
            }
        }

        s.resize(write_idx);

        return s;
    }
};