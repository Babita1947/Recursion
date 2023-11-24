//51. N-Queens
#include<bits/stdc++.h>
using namespace std;

//Bruteforce Solution

// class Solution {
// public:
//     bool isSafe1(int row,int col,vector<string> board,int n)
//     {
//         //check upper diagonal
//         int duprow=row;
//         int dupcol=col;

//         while(row>=0 && col>=0){
//             if(board[row][col]=='Q')
//                 return false;
//             row--;
//             col--;
//         }

//         //check left   
//         col=dupcol;
//         row=duprow;
//         while(col>=0){
//             if(board[row][col]=='Q')
//               return false;
//             col--;
//         }
        
//         //check lower diagonal
//         row=duprow;
//         col=dupcol;
//         while(row<n && col>=0){
//             if(board[row][col]=='Q')
//                return false;
//             row++;
//             col--;
//         }
//         return true;
//     }
//     void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n){
//         if(col==n){
//             ans.push_back(board);
//             return ;
//         }
//         for(int row=0;row<n;row++)
//         {
//            if(isSafe1(row,col,board,n)){
//                board[row][col]='Q';
//                solve(col+1,board,ans,n);
//                board[row][col]='.';
//            }
//         }
//     }
    
// };
class Solution {
    public:
        void solve(int col,vector<string> &board,vector<vector<string>> &ans,
               vector<int> &leftRow,
               vector<int> &upperDiagonal,
               vector<int> &lowerDiagonal,int n)
    {
          if(col==n){
              ans.push_back(board);
              return;
          }

          for(int row=0;row<n;row++){
              if(leftRow[row] == 0 && lowerDiagonal[row+col] == 0 
                 && upperDiagonal[n-1 + col - row] == 0)
                 {
                    board[row][col]='Q';
                    leftRow[row]=1;
                    lowerDiagonal[row+col]=1;
                    upperDiagonal[n-1+col-row]=1;
                    solve(col+1,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
                    board[row][col]='.';
                    leftRow[row]=0;
                    lowerDiagonal[row+col]=0;
                    upperDiagonal[n-1+col-row]=0;
                }
            }
    }  

};

int main()
{
    Solution s1;
    vector<vector<string>> ans;
    int n=4;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
    {
        board[i]=s;
    }  
    vector<int> leftRow(n,0), upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
    s1.solve(0,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
    //Print 
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<"  ";
        }
    cout<<"\n";
    }
    return 0;
}

