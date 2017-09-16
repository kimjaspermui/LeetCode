class RandomizedSet {
private:
    default_random_engine generator;
    unordered_map<int, int> myMap;
    vector<int> elements;
    
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        
        // case when val is not in map, insert then return true
        if (myMap.find(val) == myMap.end()) {
            
            myMap.insert({val, elements.size()});
            elements.push_back(val);
            return true;
        }
        
        // otherwise, return false
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        
        // case when val is in the map, remove the return true
        if (myMap.find(val) != myMap.end()) {
            
            // move last element to val in vector erase and renew the index then
            // remove val from vector and map
            int lastElement = elements.back();
            int lastIndex = myMap.find(val)->second;
            elements[lastIndex] = lastElement;
            elements.pop_back();
            myMap.erase(lastElement);
            myMap.insert({lastElement, lastIndex});
            myMap.erase(val);
            return true;
        }
        
        // otherwise, return false
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        
        return elements[uniform_int_distribution<int>{0, elements.size() - 1}(generator)];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */