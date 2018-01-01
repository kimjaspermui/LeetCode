import re

class Solution(object):
    def validWordAbbreviation(self, word, abbr):
        """
        :type word: str
        :type abbr: str
        :rtype: bool
        """

        # replace numbers with .{num}, so it can be match using regular
        # expression
        return bool(re.match(re.sub('([123456789]\\d*)', '.{\\1}', abbr) + '$', word))
