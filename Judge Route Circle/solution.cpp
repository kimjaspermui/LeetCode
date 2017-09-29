class Solution {
public:
    bool judgeCircle(string moves) {
        
        // this wiill keep track of current coordinate
        pair<int, int> myPoint = {0, 0};
        
        // for loop to iterate all of the moves
        for (char c : moves) {
            
            switch(c) {
                    
                case 'U':
                    myPoint.second += 1;
                    break;
                
                case 'R':
                    myPoint.first += 1;
                    break;
                    
                case 'D':
                    myPoint.second -= 1;
                    break;
                    
                case 'L':
                    myPoint.first -= 1;
                    break;
            }
        }
        
        // return true if at the origin
        return myPoint.first == 0 && myPoint.second == 0;
    }
};