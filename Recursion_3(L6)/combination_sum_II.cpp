#include<bits/stdc++.h>
using namespace std;

void findCombination(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds)
    {
        //base case
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1])
               continue;
            if(arr[i]>target)
               break;
            ds.push_back(arr[i]);
            findCombination(i+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
        }
    }

    int main(){
        vector<int>candidates{10,1,2,7,6,1,5};
        int target=8;
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        findCombination(0,target,candidates,ans,ds);
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    
    }
    