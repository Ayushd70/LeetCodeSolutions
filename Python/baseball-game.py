class Solution:
    def calPoints(self, ops: List[str]) -> int:
        points=[]
        total=0
        for op in ops:
            if op == "C":
                points.pop()
            elif op == "D":
                points.append(2*(int(points[-1])))
            elif op == "+":
                points.append((int(points[-1])+int(points[-2])))
            else:
                points.append(int(op))
        for i in points:
            total+=i
        return total
