class Solution {
public:
    string frequencySort(string s) {
        
        // this is the number of ascii characters
        const int NUM_ALPHABETS = 256;
        
        // this will store the characters counts
        vector<int> myFrequencies(NUM_ALPHABETS, 0);
        
        // this will store all of the characters in this count
        unordered_map<int, vector<char>> myMap;
        
        // this will contain the new string
        string newString;
        
        // for loop to count all characters
        for (int i = 0; i < s.length(); i++) {
            
            // get the character then increment the count
            char c = s[i];
            myFrequencies[(int) c]++;
        }
        
        // for loop to iterate all frequencies
        for (int i = 0; i < myFrequencies.size(); i++) {
            
            // if not 0, add in to the map
            if (int frequency = myFrequencies[i]) {
                
                // if this frequency does not exist, create one
                if (myMap.find(frequency) == myMap.end()) {
                    
                    myMap.insert({frequency, vector<char>()});
                }
                
                // push back this character to this frequency
                myMap.find(frequency)->second.push_back((char) i);
            }
        }
        
        // for loop to start from the length of string to 0 to form the new string
        for (int i = s.length(), z = s.length(); i > 0 && z > 0; i--) {

            // try to find this number of count
            if (myMap.find(i) != myMap.end()) {

                // get the vector of characters
                vector<char>& myVector = myMap.find(i)->second;
                
                // iterate all characters
                for (int j = 0; j < myVector.size(); j++) {
                    
                    // get the character
                    char myChar = myVector[j];
                    
                    // loop i times to append this many of this character
                    for (int k = 0; k < i; k++) {
                        
                        newString.push_back(myChar);
                    }
                }
                
                // decrease by i times however many characters were used
                z -= i * myVector.size();
            }
        }
        
        return newString;
    }
};