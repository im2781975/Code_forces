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
//https://codeforces.com/problemset/problem/1542/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        int arr[2 * n];
        for(int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < 2 * n; i++)
        {
            if(arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even == odd)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
// https://codeforces.com/problemset/problem/1807/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "+\n";
        }
        else
        {
            cout << "-\n";
        }
    }

    return 0;
}
