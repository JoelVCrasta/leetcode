class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int largestVolume = 0;

        while (left < right) {
            int w = right - left;
            int h = min(height[left], height[right]);
            int volume = w * h;

            largestVolume = max(largestVolume, volume);

            if (h == height[right]) right--;
            else left++;
        }

        return largestVolume;
    }
};