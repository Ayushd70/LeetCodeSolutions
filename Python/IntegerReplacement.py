class Solution:
	def integerReplacement(self, n: int) -> int:
		count = 0
		while(n!=1):
			if n==3:
				count+=2
				return count
			while(n%2!=0):
				if n%4==3:
					n+=1
				else:
					n-=1
				count+=1
			while(n%2==0):
				n=n/2
				count+=1
		return count
  
