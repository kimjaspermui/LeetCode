class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """

        # 1 way for 0 step, 1 way for 1 step, 2 ways for 2 steps
        mySteps = [1, 1, 2]

        # from 3 steps to n steps
        for i in range(3, n+1):

            # current step equals to sum of previous 2 steps
            # first previous is 1 step away while
            # second previous is 2 steps away from current step
            mySteps.append(mySteps[i-1] + mySteps[i-2])

        # returns the number of ways at n+1 th index
        return mySteps[n]
