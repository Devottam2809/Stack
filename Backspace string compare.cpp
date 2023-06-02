// BackSpace string compare   Leetcode 844    @devottam2809
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1,s2;
        string ans1="";
        string ans2="";

        for(auto i: s){
            if( i == '#' && s1.size()>0){
                s1.pop();
                continue;
            }
        s1.push(i);
        }

        for(auto i: t){
            if( i == '#' && s2.size()>0){
                s2.pop();
                continue;
            }
        s2.push(i);
        }

        // if(s1 == s2)
           // return true;
        while(s1.size()>0){
            if(s1.top()!='#')
                ans1+=s1.top();
            s1.pop();
        }
        
        while(s2.size()>0){
            if(s2.top()!='#')
            ans2+=s2.top();
            s2.pop();
        }
        cout<<ans1<<" "<<ans2;
    if(ans1 == ans2)
        return true;
    return false;
    }
};
