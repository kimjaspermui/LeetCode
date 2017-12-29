/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * interface NestedInteger {
 *
 *     // Constructor initializes an empty nested list.
 *     public NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     public NestedInteger(int value);
 *
 *     // @return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool IsInteger();
 *
 *     // @return the single integer that this NestedInteger holds, if it holds a single integer
 *     // Return null if this NestedInteger holds a nested list
 *     int GetInteger();
 *
 *     // Set this NestedInteger to hold a single integer.
 *     public void SetInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     public void Add(NestedInteger ni);
 *
 *     // @return the nested list that this NestedInteger holds, if it holds a nested list
 *     // Return null if this NestedInteger holds a single integer
 *     IList<NestedInteger> GetList();
 * }
 */
public class Solution {

    private int getDepthHelper(IList<NestedInteger> nestedList, int depth) {

        // this will accumulate the sum
        int sum = 0;

        // for loop to iterate all elements in this list
        for (int i = 0; i < nestedList.Count; i++) {

            // if it is integer then just multiply it with the depth
            // then add it to sum
            if (nestedList[i].IsInteger()) {

                sum += depth * nestedList[i].GetInteger();
            }

            // otherwise, recursive call to this list, with incremented depth
            else {

                sum += getDepthHelper(nestedList[i].GetList(), depth+1);
            }
        }

        return sum;
    }

    public int DepthSum(IList<NestedInteger> nestedList) {

        // return the sum start from depth 1
        return getDepthHelper(nestedList, 1);
    }
}
