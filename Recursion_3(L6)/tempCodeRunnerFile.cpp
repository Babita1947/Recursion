public:
    //     vector<vector<string>> solveNQueens(int n){
    //         vector<vector<string>>ans;
    //         vector<string>board(n);
    //         string s(n,'.');
    //         for(int i=0;i<n;i++){
    //             board[i]=s;
    //         }
    //         vector<int> leftRow(n,0), upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
    //         solve(0,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
    //         return ans;
    //     }