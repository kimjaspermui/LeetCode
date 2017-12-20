class Solution {
    func isValid(_ s: String) -> Bool {

        // this will store the current open parenthesis
        var myStack: [Character] = []

        // for loop to check all characters in s
        for c in s {

            // switch statement for different cases
            switch c {

                // just append the open parenthesis to stack
                case "(", "[", "{":
                    myStack.append(c)

                // close parenthesis must have corresponding open parenthesis
                case ")", "]", "}":
                    var top = myStack.popLast()
                    if (c == ")" && top != "(") || (c == "]" && top != "[")
                        || (c == "}" && top != "{") {

                        return false
                    }

                default:
                    continue
            }
        }

        // return true if stack is empty
        return myStack.isEmpty
    }
}
