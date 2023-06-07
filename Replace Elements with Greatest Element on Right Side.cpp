// Leetcode 1299    Replace Elements with Greatest Element on Right Side      @devottam2809


class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int>st;
        vector<int>ans;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            if(st.size()==0 && ans.size()==0){
                ans.push_back(-1);
                st.push(arr[i]);
            }
            else if(st.size()>0 && arr[i]>=st.top()){
                ans.push_back(st.top());
                st.push(arr[i]);
            }
            else if(st.size()>0 && arr[i]<st.top())
                ans.push_back(st.top());
        }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
