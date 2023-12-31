// 131. Palindrome Partitioning 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void func(int index,string s,vector<string> &path,vector<vector<string>> &res)
    {
        if(index==s.size()){
            res.push_back(path);
            return ;
        }
        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                func(i+1,s,path,res);
                path.pop_back();
            }
        }
    }

    bool isPalindrome(string s,int start,int end){
        while(start<=end)
        {
            if(s[start++] != s[end--])
               return false;
        }
        return true;
    }
};
int main()
{
    Solution s1;
    string s = "aab";
    vector<vector<string>> partition;
    vector<vector<string>> res;
    vector<string> path;
    s1.func(0,s,path,res);

    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}