#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    vector<int>v;
    cout<<"Enter the elements of the vector :"<<endl;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        v.push_back(data);
    }

    stack<int>s;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
            ans.push_back(-1);
        else if(s.top()>v[i])
            ans.push_back(s.top());
        else if(s.size()>0 && s.top()<=v[i])
        {
            while(s.size()>0 && s.top()<=v[i])
                s.pop();
                if(s.size()==0)
                    ans.push_back(-1);
                else
                    ans.push_back(s.top());
        }
    s.push(v[i]);
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}
