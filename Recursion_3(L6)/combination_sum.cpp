#include<bits/stdc++.h>

using namespace std;

void FindCombination(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds)
{
    if(ind==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        return;
    }
    //pick up the element
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        FindCombination(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();
    }
    FindCombination(ind+1,target,arr,ans,ds);
}

int main()
{
    vector<int> candidates{2,3,6,7};
    int target=7;
    vector<vector<int>>ans;
    vector<int>ds;
    FindCombination(0,target,candidates,ans,ds);
    cout<<"Required Combinations are : \n";
    for(int i=0;i<ans.size();i++)
    {
       for(int j=0;j<ans[i].size();j++)
          cout<<ans[i][j]<<" ";
       cout<<"\n";
    }
       

    return 0;
}