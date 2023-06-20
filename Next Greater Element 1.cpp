// Leetcode 496   Next Greater element 1    @devottam2809

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>umap;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            if(st.size()==0)
                umap.insert({nums2[i],-1});
            else if(st.top()>nums2[i])
                umap.insert({nums2[i],st.top()});
            else if(st.size()>0 and st.top()<=nums2[i]){
                while(st.size()>0 and st.top()<=nums2[i])
                    st.pop();
                if(st.size()==0)
                    umap.insert({nums2[i],-1});
                else 
                    umap.insert({nums2[i],st.top()});
            }
        st.push(nums2[i]);
        }
    vector<int>ans;
    for(auto i: umap)
        cout<<i.first<<" "<<i.second<<endl; 
    
    for(auto i: nums1){
            ans.push_back(umap[i]);
    }
    return ans;
    }
};
