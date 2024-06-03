class Solution(object):
    def hammingWeight(self, n):
        # // Hamming weight is the the number of character in the string except zero
        """
        :type n: int
        :rtype: int
        """
        n = bin(n)
        n =str(n)
        count = 0
        for i in n:
            if(i=='1'):
                count+=1
        
        return count

        