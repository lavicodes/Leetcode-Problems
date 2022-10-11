/*
https://leetcode.com/problems/sudoku-solver/
37. Sudoku Solver
Leetcode Hard
*/

class Solution {
    bool isValidSudoku(vector<vector<char>>& board, int i, int j, char val) {
        int row = i - i%3, column = j - j%3;
        for(int x=0; x<9; x++) if(board[x][j] == val) return false;
        for(int y=0; y<9; y++) if(board[i][y] == val) return false;
        for(int x=0; x<3; x++) {
            for(int y=0; y<3; y++) if(board[row+x][column+y] == val) return false;
        }
        return true;
    }
    bool helper(vector<vector<char>>& board, int i, int j) {
        if(i == 9) return 1;
        if(j == 9) return helper(board,i+1,0);
        if(board[i][j] != '.') return helper(board,i,j+1);
        
        for(char num = '1'; num <= '9'; num++) {
            if(isValidSudoku(board,i,j,num)) {
                board[i][j] = num;
                if(helper(board,i,j+1)) return 1;
                board[i][j] = '.';
            }
        }
        return 0;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }
};
