class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> myPascal;
        
        if (numRows == 0) {
            
            return myPascal;
        }
        
        if (numRows >= 1) {
            
            myPascal.push_back({1});
        }
        
        if (numRows >= 2) {
            
            myPascal.push_back({1,1});
        }
        
        for (int i = 2; i < numRows; i++) {
            
            vector<int> tempVector;
            tempVector.push_back(1);
            for (int j = 1; j < myPascal[i-1].size(); j++) {
                
                tempVector.push_back(myPascal[i-1][j] + myPascal[i-1][j-1]);
            }
            tempVector.push_back(1);
            
            myPascal.push_back(tempVector);
        }
        
        return myPascal;
    }
};