class Solution:
    def updateLength(self, subLength, longest):
        '''this function will return the updated value of longest'''
        if subLength > longest:
            return subLength
        else:
            return longest

    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        # this will store the most recent index of the seen character
        myMap = dict()

        # this will store the current and longest substring length
        longest = 0
        subLength = 0

        # begin starts at index -1
        begin = -1

        # for loop to find the current substring length
        for i, c in enumerate(s):

            # if the character is in the map and it is greater than begin, then get the
            # substring length from begin+1 to i-1 update the begin to the previous
            # character's index then update its index
            if c in myMap and myMap[c] > begin:
                subLength = (i-1) - begin
                begin = myMap[c]
                myMap[c] = i

            # otherwise, add the index for this character then get the substring length,
            # which is from begin+1 to current index i
            else:
                myMap[c] = i
                subLength = i - begin

            # update longest accordingly
            longest = self.updateLength(subLength, longest)

        return longest

                
