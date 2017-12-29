public class Solution {
    public bool CanWinNim(int n) {

        // lose for every number divides by 4
        return n % 4 != 0;
    }
}
