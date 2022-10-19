#include<iostream>
#include<cmath>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int curr_length=0,max_length;
    max_length=0;
    int i=0;
    while(1)
    {
        if (arr[i]==' '|| arr[i]=='\0')
        {
            if (curr_length>max_length)
            {
                max_length=curr_length;
            }
            curr_length=0;
        }
        else
        curr_length++;
        if (arr[i]=='\0')
        {
            break;
        }
        

       i++ ;
    }
    cout<<max_length;
return 0;
}
