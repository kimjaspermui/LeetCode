class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        
        // this will contain the license in reverse
        vector<char> myVector;
        
        // this will count the current characters count before dash
        int count = 0;
        
        // erase the dashes at the beginning
        while (S[0] == '-') {
            
            S.erase(S.begin());
        }
        
        // for loop to iterate all characters
        for (int i = S.length() - 1; i >= 0; i--) {
            
            // get the character
            char myChar = S[i];
            
            // if dash, ignore
            if (myChar == '-') {
                
                continue;
            }
            
            // if lower case, convert to upper case
            else if ('a' <= myChar && myChar <= 'z') {
                
                myChar = myChar - ('a' - 'A');
            }
            
            // append the character
            myVector.push_back(myChar);
            
            // increment count
            count++;
            
            // if matches K then add a dash if not at the first group
            if (count == K) {
                
                if (i != 0) {
                    
                    myVector.push_back('-');
                }
                
                count = 0;
            }
        }
        
        // this will contain the new license plate to be returned
        char myLicense[myVector.size() + 1];
        
        // fill the char array
        for (int i = myVector.size() - 1, j = 0; i >= 0; i--, j++) {
            
            myLicense[j] = myVector[i];
        }
        myLicense[myVector.size()] = '\0';
        
        return myLicense;
    }
};