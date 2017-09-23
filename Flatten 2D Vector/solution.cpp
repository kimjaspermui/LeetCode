class Vector2D {
private:
    vector<vector<int>>::iterator myIter;
    vector<vector<int>>::iterator end;
    vector<int>::iterator currentIter;
    vector<int>::iterator currentEnd;

public:
    Vector2D(vector<vector<int>>& vec2d) {
        
        myIter = vec2d.begin();
        end = vec2d.end();
        if (myIter != end) {

            currentIter = myIter->begin();
            currentEnd = myIter->end();
        }
    }

    int next() {
        
        if (hasNext()) {
            
            return *currentIter++;
        }
    }

    bool hasNext() {
        
        if (myIter == end) {
            
            return false;
        }
        
        if (currentIter != currentEnd) {
            
            return true;
        }
        
        else {
            
            while (currentIter == currentEnd) {
                
                myIter++;
                if (myIter == end) {
                    
                    return false;
                }
                
                else {
                    
                    currentIter = myIter->begin();
                    currentEnd = myIter->end();
                }
            }
            
            return true;
        }
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */