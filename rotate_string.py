class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        # str = list(str)
        # goal = list(goal)
        s+=s
        if goal in s and len(s)//2 == len(goal):
            return True
        return False