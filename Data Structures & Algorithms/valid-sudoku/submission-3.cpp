class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
    //     for(int i=0;i<9;i++)
    //     {
    //         unordered_set<char> s;
    //         for( int j=0;j<9;j++)
    //         {
    //             if(board[i][j]!='.')
    //             {
    //                 if(s.contains(board[i][j]))
    //                     return false;
    //                 s.insert(board[i][j]);
    //             }
    //         }
    //     }
    //     for(int i=0;i<9;i++)
    //     {
    //         unordered_set<char> s;
    //         for( int j=0;j<9;j++)
    //         {
    //             if(board[j][i]!='.')
    //             {
    //                 if(s.contains(board[j][i]))
    //                     return false;
    //                 s.insert(board[j][i]);
    //             }
    //         }
    //     }
    //     for(int i=0;i<9;i+=3)
    //         for(int j=0;j<9;j+=3)
    //         {
    //             unordered_set<char> s;
    //             for(int k=i;k<i+3;k++)
    //                 for(int l=j;l<j+3;l++)
    //                 {
    //                     if(board[k][l]!='.')
    //                     {if(s.contains(board[k][l]))
    //                         return false;
    //                     s.insert(board[k][l]);}
    //                 }
    //         }
    // return true;

    bool row[9][9]={};
    bool col[9][9]={};
    bool boxes[9][9]={};

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]=='.')
                continue;
            int num=board[i][j]-'1';
            int box=(i/3)*3+ j/3;

            if(row[i][num] || col[j][num] || boxes[box][num])
                return false;
             row[i][num]=true;
             col[j][num]=true;
             boxes[box][num]=true;
        }
    }
    return true;
    }
};
