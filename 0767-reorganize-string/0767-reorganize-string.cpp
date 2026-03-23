class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int, char>> pq;
        unordered_map<char, int> count;
        string result = "";

        for (char& c : s) {
            count[c]++;

            if (count[c] > (s.length() + 1) / 2) return "";
        }

        for (const auto& c : count) {
            pq.push({c.second, c.first});
        }   

        pair<int, char> prev = {-1, '#'};

        while (!pq.empty()) {
            auto curr = pq.top(); 
            pq.pop();

            result += curr.second;
            curr.first--;

            if (prev.first > 0) {
                pq.push(prev);
            }

            prev = curr;
        }

        return result;
    }
};