/*

    Problem - Permutation Sequence
    Link - https://leetcode.com/problems/permutation-sequence/
    Difficulty - Hard

*/

class Solution {
public:
    string getPermutation(int n, int k) {
        // We need to move k-1 positions ahead since we are on 1st position
        k--;
        
        // 1st Sequence
        vector<int> v;
        for(int i=1;i<=n;i++) {
            v.push_back(i);
        }
        
        // Factorials
        int fact[n+1];
        fact[0]=1;
        for(int i=1;i<=n;i++) {
            fact[i] = fact[i-1]*i;
        }
        
        // Calculating Sequence
        for(int i=0;i<n;i++) {
            // Number of sequences we go ahead for current index
            int f = fact[n-i-1];
            
            // Going ahead with sequences as per the number of positions we need to go
            for(int j=i+1;j<n;j++) {
                if(f <= k) {
                    k-=f;
                    swap(v[i],v[j]);
                }
                else break;
            }
        }
        
        // Generating string for permutation
        string s;
        for(int i=0;i<n;i++) {
            s.append(to_string(v[i]));
        }
        return s;
    }
};
