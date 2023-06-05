// daily Temperatures   Leetcode 739      @devottam2809

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>s1;
        int n=temp.size();
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
                if(s1.size()==0)
                    ans.push_back(0);
                else if(s1.size()>0 && s1.top().first>temp[i])
                    ans.push_back(s1.top().second-i);
                else if(s1.size()>0 && s1.top().first<=temp[i]){
                    while(s1.size()>0 && s1.top().first<=temp[i]){
                        s1.pop();
                    }
                    if(s1.size()==0)
                        ans.push_back(0);
                    else
                        ans.push_back(s1.top().second-i);
                }
        s1.push({temp[i],i});
        }
        reverse(ans.begin(),ans.end());
    return ans;
    }
};
