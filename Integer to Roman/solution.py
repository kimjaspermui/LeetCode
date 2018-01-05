class Solution:
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """

        # pair value-roman numeral pairs
        values = [(1000, 'M'), (900, 'CM'), (500, 'D'), (400, 'CD'), (100, 'C'), (90, 'XC'),
                  (50, 'L'),(40, 'XL'), (10, 'X'), (9, 'IX'), (5, 'V'), (4, 'IV'), (1, 'I')]

        # this will build the roman numeral
        roman = ""

        # loop through all values
        for v, s in values:

            # loop until this value is greater than num
            # update num and roman
            while v <= num:
                num -= v
                roman += s

        return roman
