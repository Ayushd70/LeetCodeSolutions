class Solution {
public:
    bool isUgly(int n) {
        
    int dp;
    int p2 = 0, p3 = 0, p5 = 0,k,l,m;
    int next_ugly;
 
    dp= 1; 
    for (int i=1; i<n; i++) 
    {   k=dp*2;l= dp*3;m= dp*5;
		next_ugly = min(k,l,m); 
		dp= next_ugly; 
		if (next_ugly == dp*2)
			p2 = p2+1; 
		if(next_ugly == dp*3)
			p3 = p3+1;
		if(next_ugly == dp*5)
			p5 = p5+1;
    } 
    return next_ugly; 
        
    }
    int min(int a,int b,int c)
{
	if(a<b && a<c)
		return a;
	else if(b<c)
		return b;
	else
		return c;
}
};
