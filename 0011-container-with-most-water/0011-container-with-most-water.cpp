class Solution {
public:
    int maxArea(vector<int>& height) {
       int area=0,left=0,right = height.size()-1,Max=0;
       while (left<right){
        int h=min(height[left],height[right]);
        int w=right-left;
        area=h*w;
        Max=max(area,Max);
        if(height[left]<height[right]) left++;
        else right--;
       } 
       return Max;
    }
};