#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void recurPermute(int index,vector<int>&nums,vector<vector<int>>&ans)
    {
        //base case
        if(index==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            recurPermute(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }

};

int main()
{
    Solution s;
    vector<int> nums{1,2,3};
    vector<vector<int>> ans;
    s.recurPermute(0,nums,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<nums.size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}