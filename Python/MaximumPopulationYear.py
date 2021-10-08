class Solution(object):
    def maximumPopulation(self, logs):
        """
        :type logs: List[List[int]]
        :rtype: int
        """
        data = []
        
        for log in logs:
            data.append((log[0],1))
            data.append((log[1],-1))
        
        population = history = year = 0
        
        data.sort()
        
        for i in data:
            population += i[1]
            if population > history:
                history = population
                year = i[0]
        
        return year
