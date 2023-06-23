// Leetcode 2073    Time Needed to Buy Tickets    @devottam2809

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        vector<pair<int,int>> ans;
        queue<pair<int,int>> q;
        
        for (int i = 0; i < tickets.size(); i++)
            q.push({tickets[i], i});
        
        int time = 0;
        
        while (!q.empty()) {
            time++;
            int val = q.front().first;
            val--;
            
            if (val == 0) {
                ans.push_back({time, q.front().second});
                q.pop();
            }
            else{
                q.push({val, q.front().second});
                q.pop();
            }
        }
        
        int ANS = -1;  
        
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i].second == k) {
                ANS = ans[i].first;
                break;  
            }
        }
        
        return ANS;
    }
};
