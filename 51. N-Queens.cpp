class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
    
    vector<vector<string>> ans;
    vector<string>board(n);
    string s(n, '.');
    for(int i=0;i<n;i++)
    {
        board[i]=s;
    }

    vector<int> leftrow(n,0), lowerdiogonal(2*n-1,0), upperdiogonal(2*n-1);
    solve(0, ans, board, n, leftrow, lowerdiogonal, upperdiogonal);
    return ans;


    }

    void solve( int col, vector<vector<string>> &ans,vector<string>&board, int n,vector<int> &leftrow, vector<int> &lowerdiogonal, vector<int>  &upperdiogonal)
    {   
            if(col==n)
            {
                ans.push_back(board);
                return;
            }

            for(int row =0;row<n;row++)
            {
                if(leftrow[row]==0 && lowerdiogonal[col+row]==0 && upperdiogonal[n-1+col-row]==0)
                {
                    board[row][col]='Q';
                    leftrow[row]=1;
                    lowerdiogonal[row+col]=1;
                    upperdiogonal[n-1+col-row]=1;
                    solve(col+1, ans, board,n, leftrow, lowerdiogonal, upperdiogonal);
                    board[row][col]='.';
                    leftrow[row]=0;
                    lowerdiogonal[row+col]=0;
                    upperdiogonal[n-1+col-row]=0;
                }


                
            }
    }

};
