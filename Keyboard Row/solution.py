# characters on each row
first = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}
second = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}
third = {'z', 'x', 'c', 'v', 'b', 'n', 'm'}

class Solution:
    def checkRow(self, c):
        '''this function will determine the row of c'''

        # check the the row of c
        if c in first:
            return 1
        elif c in second:
            return 2
        else:
            return 3

    def canType(self, word):
        '''this function will check if this word can be typed from a row'''

        # true for less than length 2 word
        if len(word) < 2:
            return True

        # get the row of the first character
        row = self.checkRow(word[0].lower())

        # check the row of each character, make sure they are in row
        for c in word:

            # c must be in the set of the row, otherwise it's false
            if row == 1 and c.lower() not in first:
                return False
            elif row == 2 and c.lower() not in second:
                return False
            elif row == 3 and c.lower() not in third:
                return False

        return True

    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """

        # this will store the words that can be typed in one row
        output = []

        # check all words
        for w in words:

            # if w can be typed, put it to list
            if self.canType(w):
                output.append(w)

        return output
