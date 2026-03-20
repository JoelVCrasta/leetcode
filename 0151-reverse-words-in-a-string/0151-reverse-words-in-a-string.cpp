class Solution {
public:
    string reverseWords(string s) {
        string result("");
        string sub("");
        vector <string> store;
        int j = -1, len = 0;
        int size = s.length();

        for (int i = 0 ; i < size ; i++){
            if (s[i] == ' ') {    
                if (j != -1){
                    sub = s.substr(j, len);
                    store.push_back(sub);
                    j = -1;
                }
                continue;
            }
            if (j == -1)  j = i; 
            if (j != -1 && s[i] != ' ') len = i - j + 1;
            if(j != -1 && i == size - 1 ) {
                sub = s.substr(j, len);
                store.push_back(sub);
            }
        }

        for (int k = store.size() - 1 ; k >= 0 ; k--){
            if (k != 0) result += store[k] + " ";
            else result += store[k];
        }

        return result;
    }
};