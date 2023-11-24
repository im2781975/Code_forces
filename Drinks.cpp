//https://codeforces.com/contest/200/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double avg,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    avg=(double)sum/(double)n;
    cout<<avg;
}
