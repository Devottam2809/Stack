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

    stack<pair<int,int>>s;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
            ans.push_back(-1);
        else if(s.top().first>v[i])
            ans.push_back(s.top().second);
        else if(s.size()>0 && s.top().first<=v[i])
        {
            while(s.size()>0 && s.top().first<=v[i])
                s.pop();
                if(s.size()==0)
                    ans.push_back(-1);
                else
                    ans.push_back(s.top().second);
        }
    s.push({v[i],i});
    }

    for(int i=0;i<v.size();i++)
        cout<<i-ans[i]<<" ";
    return 0;
}
