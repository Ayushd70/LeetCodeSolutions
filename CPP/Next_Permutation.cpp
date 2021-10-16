class Solution {
public:
    void nextPermutation(vector<int>& A) {
         int idx=-1;
    int n=A.size();
    for(int i=n-1;i>0;i--)
   { 
       if(A[i]>A[i-1])
       {
        idx=i;
        break;
       }
   } 
   if(idx==-1)
   {
       reverse(A.begin(),A.end());
   }
   else
   {
       int prev=idx;
       for(int i=idx+1;i<n;i++)
       {
           if(A[i]>A[idx-1] && A[i]<=A[prev])
           {
               prev=i;

           }
       }
       swap(A[idx-1],A[prev]);
       reverse(A.begin()+idx,A.end());
   }
    }
};
