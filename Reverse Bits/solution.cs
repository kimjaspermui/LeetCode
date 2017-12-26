public class Solution {
    public uint reverseBits(uint n) {

        // initialize mask to two ends
        uint mask1 = 1;
        uint mask2 = 0x80000000;

        // initialize shift size of two ends bits to 31
        int shiftCount = 31;

        // iterate exactly 16 times
        for (int i = 0; i < 16; i++) {

            // get both bits using &
            uint bit1 = n & mask1;
            uint bit2 = n & mask2;

            // make the slot 0 using & with all 1s except the slot
            n &= ~mask1;
            n &= ~mask2;

            // place the bits from two ends through shifting
            n |= bit1 << shiftCount;
            n |= bit2 >> shiftCount;

            // decrement shift by 2 for next swap bits
            shiftCount -= 2;

            // update the mask by moving 1 bit
            mask1 = mask1 << 1;
            mask2 = mask2 >> 1;
        }

        return n;
    }
}
