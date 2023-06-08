// Remove All Adjacent Duplicates in String II    Leetcode 1209   @devottam2809

class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        stack<pair<char,int>>st;
        int count=1;

        for(int i=0;i<s.length();i++)
        {
            if(st.size()==0)
            {
                st.push({s[i],count});
                continue;
            }

            if(st.top().first==s[i])
            {
                st.top().second++;

                if(st.top().second==k)
                st.pop();
            }
            else
            {
                count=1;
                st.push({s[i],count});
            }
        }

        string ans;
        while(st.size()!=0)
        {
             while(st.top().second!=0)
            {
                 ans.push_back(st.top().first);
                 st.top().second--;
            }

            st.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
