// Leetcode 20 Valid paranthesis    //devottam2809

class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(auto i: s)
        {
            if(i=='(' || i=='{' || i=='[')
                stk.push(i);
            else{
                    if(!stk.empty()){
                        char x=stk.top();
                        if(i==')' && x=='(' || i=='}' && x=='{' || i==']' && x=='[' )
                            stk.pop();
                        else
                            return false;
                    }
                    else{
                        return false;
                    } 
                }
            }
        if(stk.empty())
            return true;
    return false;
    }
};
