class Solution {
public:
    vector<int> grayCode(int n) {
        
        // this will be for special case n = 0
        vector<int> zeroVector = {0};
        
        // this will store the current sequence of gray code initialized to n = 1
        vector<int> myVector = {0, 1};
        
        for (int i = 2; i <= n; i++) {
            
            vector<int> tempVector;
            
            // in order iteration, directly push since 0 is already there
            for (int j = 0; j < myVector.size(); j++) {
                
                tempVector.push_back(myVector[j]);
            }
            
            // reverse order iteration, prepend 1
            for (int j = myVector.size() - 1; j >= 0; j--) {
                
                tempVector.push_back(myVector[j] | (1 << (i - 1)));
            }
            
            // copy over the temporary vector
            myVector = tempVector;
        }
        

        return n == 0 ? zeroVector : myVector;
    }
};