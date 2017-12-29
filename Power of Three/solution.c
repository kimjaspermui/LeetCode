bool isPowerOfThree(int n) {

    // 1162261467 is 3^19 largest power of 3 in int
    return (n > 0 && 1162261467 % n == 0);
}
