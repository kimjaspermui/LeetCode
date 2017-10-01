class Solution {
public:
    int kEmptySlots(vector<int>& flowers, int k) {

        // reverse role
        vector<int> myVector(flowers.size(), 0);

        // for loop to iterate all flowers blooming day to convert to
        // days that flower blooms
        for (int i = 0; i < flowers.size(); i++) {

            myVector[flowers[i] - 1] = i + 1;
        }

        // initialize two ends with k slots in between
        int low = 0;
        int high = low + k + 1;

        // this will store the minimum day that has k empty slots in between
        int minimum = INT_MAX;

        // try checking the interval
        for (int i = 0; i < myVector.size(); i++) {

            // if there is flower blooms earlier than the ends, then update
            if (myVector[i] < myVector[low] || myVector[i] <= myVector[high]) {

                // if equal to high index, then update the earliest day
                if (i == high) {

                    minimum = min(minimum, max(myVector[low], myVector[high]));
                }

                // update indices
                low = i;
                high = low + k + 1;
            }
        }

        return minimum == INT_MAX ? -1 : minimum;
    }
};