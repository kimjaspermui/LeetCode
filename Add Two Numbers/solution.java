/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {

        // this will store the current carry
        int carry = 0;

        // create a new dummy head
        ListNode newList = new ListNode(-1);
        ListNode currNode = newList;

        // while loop until we reached the end of both lists
        while (l1 != null || l2 != null) {

            // initialize sum with the current carry
            int sum = carry;

            // if l1 not null, then we add it to sum
            if (l1 != null) {

                sum += l1.val;
                l1 = l1.next;
            }

            // same for l2
            if (l2 != null) {

                sum += l2.val;
                l2 = l2.next;
            }

            // update carry, 1 if sum is more than or equal to 10, 0 otherwise
            carry = (sum >= 10) ? 1 : 0;

            // add the digit of sum to the next of the current node, then update it
            currNode.next = new ListNode(sum % 10);
            currNode = currNode.next;

            // if both are null then check if there is carry, if so, add a 1
            if (l1 == null && l2 == null) {

                if (carry == 1) {

                    currNode.next = new ListNode(1);
                }
            }
        }

        // return the next of the head since it's dummy
        return newList.next;
    }
}
