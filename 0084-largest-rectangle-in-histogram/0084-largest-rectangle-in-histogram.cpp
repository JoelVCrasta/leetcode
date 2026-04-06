class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> stk;
        int maxArea = 0;

        for (int i = 0; i <= n; i++) {
            int currHeight = (i == n) ? 0 : heights[i]; 

            while(!stk.empty() && currHeight < heights[stk.top()]) {
                int h = heights[stk.top()];
                stk.pop();

                int w = stk.empty() ? i : i - stk.top() - 1;
                maxArea = max(maxArea, w * h);
            }
            stk.push(i);
        }

        return maxArea;
    }
};


// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         unordered_map<int, int> map;
//         int n = heights.size();

//         for (int i = 0; i < n; i++) {
//             int j = i + 1;
//             map[i]++;

//             while (j < n && heights[j] >= heights[i]) {
//                 map[i]++;
//                 j++;
//             }

//             j = i - 1;
//             while(j >= 0 && heights[j] >= heights[i]) {
//                 map[i]++;
//                 j--;
//             }
//         }

//         int biggest = 0;
//         for (auto& [k, v] : map) {
//             biggest = max(biggest, heights[k] * v);
//         }

//         return biggest;
//     }
// };