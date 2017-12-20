/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public var val: Int
 *     public var next: ListNode?
 *     public init(_ val: Int) {
 *         self.val = val
 *         self.next = nil
 *     }
 * }
 */
class Solution {
    func mergeTwoLists(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {

        // dummy head and current pointer
        var newList: ListNode! = ListNode(-1)
        var currList: ListNode! = newList

        // temporary pointers for l1 and l2
        var tempL1: ListNode! = l1
        var tempL2: ListNode! = l2

        // while either is not nil, keep looping
        while tempL1 != nil || tempL2 != nil {

            // tempL1 is nil, then the rest is tempL2
            if tempL1 == nil {

                currList.next = tempL2
                break
            }

            // tempL2 is nil, then the rest is tempL1
            if tempL2 == nil {

                currList.next = tempL1
                break
            }

            // if tempL1 has a smaller value then set the next pointer
            // to tempL1, then update correspondingly
            if tempL1.val <= tempL2.val {

                currList.next = tempL1
                tempL1 = tempL1.next
            }

            // otherwise, do it for tempL2
            else {

                currList.next = tempL2
                tempL2 = tempL2.next
            }

            // update current pointer to next
            currList = currList.next
        }

        // since it's dummy head, get the next pointer
        return newList.next
    }
}
