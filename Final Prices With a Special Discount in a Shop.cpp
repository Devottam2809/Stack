// Leetcode 1475    Final Prices With a Special Discount in a Shop      @devottam2809

class Solution {

public:
    vector<int> finalPrices(vector<int>& v) {
        // NSR to right - prices [i] to get output
    stack<int>s;
    vector<int>ans;
    int n=v.size();
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
            ans.push_back(-1);
        else if(s.top()<=v[i])
            ans.push_back(s.top());
        else if(s.size()>0 && s.top()>=v[i])
        {
            while(s.size()>0 && s.top()>v[i])
                s.pop();
                if(s.size()==0)
                    ans.push_back(-1);
                else
                    ans.push_back(s.top());
        }
    s.push(v[i]);
    }
    reverse(ans.begin(),ans.end());
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(ans[i]!=-1)
             temp.push_back(v[i]-ans[i]);
        else
            temp.push_back(v[i]);
    }
    return temp;
    }
};
