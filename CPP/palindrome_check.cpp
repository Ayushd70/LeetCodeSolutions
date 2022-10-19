#include<iostream>
#include<cmath>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    char arr[n+1];
    cin>>arr;
    bool pal_check=1;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]!=arr[n-1-i])     //imp
        {
            pal_check=0;
        }
        
    }
    if (pal_check == true)
    {
        cout<<"Given word is a palindrome";
    }
    else
    cout<<"Given word is not a palindrome";
return 0;
}
