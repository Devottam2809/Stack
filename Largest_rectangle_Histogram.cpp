// Leetcode 84 Largest Rectangle Histogram @devottam2809

#define pb push_back
#define all(v) (v).begin(),(v).end()
class Solution {
public:
    vector<int> NSR(vector<int> &nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> v;
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            if(st.size() == 0) v.pb(n);
            else v.pb(st.top());
            st.push(i);
        }
        reverse(all(v));
        return v;
    }

    vector<int> NSL(vector<int> &nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> v;
        for(int i = 0; i < n; i++){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            if(st.size() == 0) v.pb(-1);
            else v.pb(st.top());
            st.push(i);
        }
        return v;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> right = NSR(heights);
        vector<int> left = NSL(heights);
        int N = heights.size();
        int res = -1;

        for(int i = 0; i < N; i++){
            int area = (right[i] - left[i] - 1) * heights[i];
            res = max(res, area);
        }

        return res;
    }
};
