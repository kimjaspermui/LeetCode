class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        
        for (int i = 0; i < min(s.size(), t.size()); i++) {
            
            if (s[i] != t[i]) {
                
                if (s.size() == t.size()) {
                    
                    return s.substr(i+1, string::npos) == t.substr(i+1, string::npos);
                }
                
                else if (s.size() < t.size()) {
                    
                    return s.substr(i, string::npos) == t.substr(i+1, string::npos);
                }
                
                else {
                    
                    return s.substr(i+1, string::npos) == t.substr(i, string::npos);
                }
            }
        }

        return abs(int(s.size()) - int(t.size())) == 1;
    }
};