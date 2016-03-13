// Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

// Note: You may not slant the container.

// Subscribe to see which companies asked this question

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1,h=0,capacity=0;
        while (i<j)
        {
            h=min(height[i],height[j]);
            capacity=max(capacity,(j-i)*h);
            while (height[i]==h && i<j) ++i;
            while (height[j]==h && i<j) --j;
        }
        return capacity;
    }
};