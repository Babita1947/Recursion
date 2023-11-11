#include<bits/stdc++.h>
using namespace std;

void printF(int ind,vector<int>&ds,vector<int>&nums,int n,vector<vector<int>>&ans)
    {
    if(ind==n)
    {
        if(ds.size()==0){
          cout<<"{}"<<endl;
        }
        
        ans.push_back(ds);
        return ;
    }
    
    //take or pick the particular index into the subsequence.
    ds.push_back(nums[ind]);
    printF(ind+1,ds,nums,n,ans);
    ds.pop_back();

   //not pick or not take condition,this element is not added to your subsequences.
     printF(ind+1,ds,nums,n,ans);
    }

    int main(){
        vector<int>nums{1,2,3}; 
        int n=nums.size();
        vector<int> ds;
        vector<vector<int>>ans;
        printF(0,ds,nums,n,ans);
        
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
                cout<<ans[i][j]<<" ";
            cout<<"\n";
        }
        return 0;
    }