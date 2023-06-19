// Make String Great    leetcode1544      @devottam2809

class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(st.size()==0)
                st.push(s[i]);
            else if(st.size()>0 and islower(s[i])){
                char temp=s[i]-32;
                if(temp==st.top())
                    st.pop();
                else 
                    st.push(s[i]);
            }
            else if(st.size()>0 and isupper(s[i])){
                char temp=s[i]+32;
                if(temp==st.top())
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        while(st.size()>0){
            ans+=st.top();
            st.pop();
        }
    reverse(ans.begin(),ans.end());
return ans;
    }
};
