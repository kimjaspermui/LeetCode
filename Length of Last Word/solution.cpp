LeetCode
Problems
Mock 
Contest
Articles
Discuss
•
  Store 
 Premium
New Playground
azureric7
Length of Last Word

Submission Details
59 / 59 test cases passed.
Status: Accepted
Runtime: 3 ms
Submitted: 0 minutes ago
Accepted Solutions Runtime Distribution

05010015020025030001020304050607080
cpp
You are here! 
Your runtime beats 32.82 % of cpp submissions.
Runtime (ms)Distribution (%)
Invite friends to challenge Length of Last Word !

38
Submitted Code: 0 minutes ago

Language: cpp  Edit Code  


1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        // this will keep track of the current and previous word count
        int count = 0;
        int previousCount = 0;
        
        // for loop to iterate the entire string
        for (int i = 0; i < s.length(); i++) {
            // case for space
            if (s[i] == ' ') {
                // if count is not 0, update the previous
                if (count != 0) {
                    previousCount = count;
                    count = 0;
                }
            }
            
            // case for other character
            else {
                
                count++;
            }
        }
        
        // either return count when it's not 0 or previous count
        return count ? count : previousCount;
    }
};
Back to problem
Copyright © 2017 LeetCode Contact Us  |  Frequently Asked Questions  |  Terms of Service 