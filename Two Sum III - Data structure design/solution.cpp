class TwoSum {
public:

    vector<int> myNums;
    unordered_map<int, int> myMap;

    /** Initialize your data structure here. */
    TwoSum() {

        // do nothing since it has already been initialized
    }

    /** Add the number to an internal data structure.. */
    void add(int number) {

        // delete the element if it is in the hash table
        if (myMap.find(number) != myMap.end()) {

            myMap.erase(myMap.find(number));
        }

        // insert the member to the map, with the largest index
        myMap.insert({number, myNums.size()});

        // push it to the list
        myNums.push_back(number);
    }

    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {

        // for loop to iterate all elements
        for (int i = 0; i < myNums.size(); i++) {

            // get the current value and the corresponding target
            int currValue = myNums[i];
            int target = value - currValue;

            // if the target is in the map, then return true
            if (myMap.find(target) != myMap.end()) {

                // get the target's index
                int targetIndex = myMap.find(target)->second;

                // it must be greater than current index
                if (targetIndex > i) {

                    return true;
                }
            }
        }

        // return false at this point since a pair has not been found
        return false;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum obj = new TwoSum();
 * obj.add(number);
 * bool param_2 = obj.find(value);
 */
