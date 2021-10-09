class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        dic={}
        for i in range(1,len(nums)+1):
            dic[i]=0
        for n in nums:
            dic[n]+=1
        f1=int(list(dic.values()).index(2))+1
        f2=int(list(dic.values()).index(0))+1
        return[f1,f2]
