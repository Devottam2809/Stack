// Leetcode 1700    Number of Students Unable to Eat Lunch      @devottam2809

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        reverse(sandwiches.begin(),sandwiches.end());
        stack<int>st;
        queue<int>q;
        for(auto i: students)   
            q.push(i);

        for(auto i: sandwiches)
            st.push(i);

        int counter = 0;
        while(!q.empty() and !st.empty()){
            if(st.top() == q.front()){
                st.pop();
                q.pop();
                counter = 0;
            }
            else{
                counter++;
                q.push(q.front());
                q.pop();
            }
            if(counter>=q.size())
                break;
        }
    return counter;
    }
};
