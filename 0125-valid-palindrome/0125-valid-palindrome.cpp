class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        
        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
            } else if (!isalnum(s[right])) {
                right--;
            } else {
                if (tolower(s[left]) != tolower(s[right])) return false;
                left++;
                right--;
            }
        }
        return true;
    }
};


// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string pal = "";

//         for (auto c : s) {
//             if(isalnum(c)) {
//                 pal += tolower(c);
//             }
//         }

//         int i = 0, j = pal.length() - 1;
//         while (i < j) {
//             if (pal[i] != pal[j]) return false;
//             i++; j--;
//         }

//         return true;
//     }
// };