class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        unordered_set<string> myMap;
        vector<char> myChar{'A', 'C', 'G', 'T'};
        queue<string> myQueue;
        unordered_set<string> visited;
        int level = 0;

        for (string valid : bank) {
            
            myMap.insert(valid);
        }

        myQueue.push(start);
        visited.insert(start);

        while (!myQueue.empty()) {
            
            int previousSize = myQueue.size();
            while (previousSize-- > 0) {

                string myGene = myQueue.front();
                myQueue.pop();

                if (myGene == end) {

                    return level;
                }

                for (int i = 0; i < myGene.size(); i++) {

                    int tempChar = myGene[i];

                    for (int j = 0; j < myChar.size(); j++) {

                        myGene[i] = myChar[j];
                        string tempString = myGene;

                        if (visited.find(tempString) == visited.end() && myMap.find(tempString) != myMap.end()) {

                            visited.insert(tempString);
                            myQueue.push(tempString);
                        }
                    }

                    myGene[i] = tempChar;
                }
            }
            level++;
        }
        
        return -1;
    }
};