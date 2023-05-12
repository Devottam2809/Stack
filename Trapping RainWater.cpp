class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left;
        vector<int>right;

        int sum=0;
        left[0]=height[0];
        right[n-1]=height[n-1];

        for(int i=1;i<n;i++)
            left[i]=max(left[i-1],height[i]);

        for(int i=n-2;i>=0;i--)
            right[i]=max(right[i+1],height[i]);
        

        for(int i=1;i<n;i++){
            int var=min(left[i],right[i]);
            if(var>height[i])
                sum+=var-height[i];
        }
    return sum;
    }
};
