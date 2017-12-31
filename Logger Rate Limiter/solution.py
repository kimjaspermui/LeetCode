class Logger:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.timedMap = dict()

    def shouldPrintMessage(self, timestamp, message):
        """
        Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity.
        :type timestamp: int
        :type message: str
        :rtype: bool
        """

        # if message is already in the map then check validity
        if message in self.timedMap:

            # get the previous timestamp of this message and its difference
            previousTime = self.timedMap[message]
            diff = timestamp - previousTime

            # if diff is less than 10 then can't print
            if diff < 10:
                return False

        # update the time stamp since it is valid
        self.timedMap[message] = timestamp
        return True

# Your Logger object will be instantiated and called as such:
# obj = Logger()
# param_1 = obj.shouldPrintMessage(timestamp,message)
