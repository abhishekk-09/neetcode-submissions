class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++)
        {
            unordered_set<char> s;
            for( int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(s.contains(board[i][j]))
                        return false;
                    s.insert(board[i][j]);
                }
            }
        }
        for(int i=0;i<9;i++)
        {
            unordered_set<char> s;
            for( int j=0;j<9;j++)
            {
                if(board[j][i]!='.')
                {
                    if(s.contains(board[j][i]))
                        return false;
                    s.insert(board[j][i]);
                }
            }
        }
        for(int i=0;i<9;i+=3)
            for(int j=0;j<9;j+=3)
            {
                unordered_set<char> s;
                for(int k=i;k<i+3;k++)
                    for(int l=j;l<j+3;l++)
                    {
                        if(board[k][l]!='.')
                        {if(s.contains(board[k][l]))
                            return false;
                        s.insert(board[k][l]);}
                    }
            }
    return true;

    }
};
