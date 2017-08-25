class Solution {
public:
    bool isValid(string s) {
        
        // this will stack up the open parenthesis
        stack<char> myStack;

        // for loop to iterate through all of the parenthesis
        for (int i = 0; i < s.length(); i++) {
            
            // switch statement to check parenthesis validity
            switch (s[i]) {
                    
                case '(':
                case '[':
                case '{':
                    myStack.push(s[i]);
                    break;
                
                case ')':
                    if (myStack.empty() || myStack.top() != '(') {
                        
                        return false;
                    }
                    myStack.pop();
                    break;
                    
                case ']':
                    if (myStack.empty() || myStack.top() != '[') {
                        
                        return false;
                    }
                    myStack.pop();
                    break;
                    
                case '}':
                    if (myStack.empty() || myStack.top() != '{') {
                        
                        return false;
                    }
                    myStack.pop();
                    break;
            }
        }
        
        // return whether or not the stack is empty
        return myStack.empty();
    }
};