class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                int k = board[i][j];
                for(int l = 0;l<9;l++){
                    if(board[i][l]==k && l !=j) return false;
                }
                for(int p = i+1;p<9;p++){
                    if(board[p][j]==k && p !=i) return false;
                }
                for(int u = 3*(i/3); u < 3*(i/3)+3 ; u++){
                    for(int h= 3*(j/3);h<3*(j/3)+3; h++){
                        if(board[u][h]==k && u!=i && h!=j){
                            return false;
                        }
                    }
                }
                }
            }
        }
        return true;
    }
};
