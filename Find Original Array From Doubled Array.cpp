//KHUSHBOO DEV

// An integer array original is transformed into a doubled array changed by appending twice the value of every element in original,
// and then randomly shuffling the resulting array. Find the original array.

#include <bits/stdc++.h>

using namespace std;

// function to find the original array.

vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        vector<int>ans;
        if(n%2==1)
            return ans;
      sort(changed.begin(),changed.end());
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
        m[changed[i]]++;

        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(m[changed[i]]!=0)
            {
                if(m[2*changed[i]]!=0)
                {
                    m[changed[i]]--;
                    m[2*changed[i]]--;
                    c+=2;
                }
                 else return {};
            ans.push_back(changed[i]);
            }

        }
        if(c==n)

        return ans;
        return {};
    }

int main()
{
    vector<int>changed={1,3,4,2,6,8}; //given vector of integers

    vector<int>original=findOriginalArray(changed);//function to find the original array.

    for(int i=0;i<original.size();i++)
        cout<<original[i]<<" ";
}
