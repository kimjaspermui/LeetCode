class Solution {
public:
    int compress(vector<char>& chars) {

        // read and store indices with the c
        int readIndex = 0;
        int storeIndex = 0;

        // keep looping until finish reading
        while (readIndex < chars.size()) {

            // set up the count and character
            int tempCount = 0;
            int currChar = chars[readIndex];

            // count the occurance of current character
            while (readIndex < chars.size() && chars[readIndex] == currChar) {

                readIndex++;
                tempCount++;
            }

            // store the character
            chars[storeIndex++] = currChar;

            // store the number if not 1
            if (tempCount != 1) {

                string myNum = to_string(tempCount);

                for (char d : myNum) {

                    chars[storeIndex++] = d;
                }
            }
        }

        return storeIndex;
    }
};
