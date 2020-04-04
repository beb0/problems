# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# problem link: https://leetcode.com/problems/first-bad-version/

def isBadVersion(version):
    pass

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """          
        start = 0 
        end = n
        mid = int(end/2)
        badversion = None
             
        while True:
            if isBadVersion(mid) == True:
                badversion = mid
                if (start == mid) or (start == end):
                    return badversion
                end = mid - 1
                mid = int(start + (end - start)/2)
                
                
            elif isBadVersion(mid) == False:
                if start == end:
                    return badversion
                start = mid + 1
                mid = int(start + (end - start)/2)
           
