class Solution {
public:
    
    // check the validity of the value
    bool validCheck(vector<bool>& checker, char& c) {

        if (checker[c - '1']) {

            return false;
        }

        else {

            checker[c - '1'] = true;
            return true;
        }
    }
    
    // reset the checker
    void resetChecker(vector<bool>& checker) {
        
        for (int i = 0; i < checker.size(); i++) {
            
            checker[i] = false;
        }
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // sizes
        const int SIZE = 9;
        const int SECTION_SIZE = 3;
        
        vector<bool> checker(SIZE, false);
            
        // check the rows
        for (int i = 0; i < SIZE; i++) {
            
            resetChecker(checker);
            
            for (char c : board[i]) {
                
                if (c != '.' && (!validCheck(checker, c))) {
                    
                    return false;
                }
            }
        }
        
        // check the columns
        for (int i = 0; i < SIZE; i++) {

            resetChecker(checker);
            
            for (int j = 0; j < SIZE; j++) {
                                
                if (board[j][i] != '.' && (!validCheck(checker, board[j][i]))) {
                    
                    return false;
                }
            }
        }
        
        // check the sections
        for (int i = 0; i < SIZE; i+=3) {
                        
            for (int j = 0; j < SIZE; j+=3) {
                
                resetChecker(checker);
                
                for (int k = i; k < i + SECTION_SIZE; k++) {
                    
                    for (int l = j; l < j + SECTION_SIZE; l++) {
                                                
                        if (board[k][l] != '.' && (!validCheck(checker, board[k][l]))) {
                            
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};