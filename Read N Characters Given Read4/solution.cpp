// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
    int read(char *buf, int n) {

        // initialized the count to 0
        int count = 0;

        // keep looping while it's not maximum
        while (count < n) {

            // read to buffer last index and update the count
            int tempCount = read4(buf + count);
            count += tempCount;

            // if tempCount is 0 then that means finish reading, break out
            if (tempCount == 0) {

                break;
            }
        }

        // get the min of count or the max characters read
        return min(count, n);
    }
};
