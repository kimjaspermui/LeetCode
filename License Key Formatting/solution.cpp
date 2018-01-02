class Solution {
public:
    string licenseKeyFormatting(string S, int K) {

        // queue to store the characters
        queue<char> myChars;

        // push characters not dash to queue
        for (char c : S) {

            if (c != '-') {

                myChars.push(c);
            }
        }

        // count of first group, and the rest of the groups
        int firstGroup = myChars.size() % K;
        int groupCount = myChars.size() / K;

        // this will build the new liscense plate
        string myBuilder;

        // append the first group
        for (int i = 0; i < firstGroup; i++) {

            myBuilder.append(1, toupper(myChars.front()));
            myChars.pop();
        }

        // append the rest of the groups
        for (int i = 0; i < groupCount; i++) {

            // append a dash if it there is first group
            // or it is not the second group
            if (firstGroup != 0 || i != 0) {

                myBuilder.append(1, '-');
            }

            for (int j = 0; j < K; j++) {

                // append a characters
                myBuilder.append(1, toupper(myChars.front()));
                myChars.pop();
            }
        }

        return myBuilder;
    }
};
