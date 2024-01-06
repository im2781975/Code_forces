#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <set>
#include <deque>
#include <map>
#include <stack>
#include <cstring>
using namespace std;
typedef long long ll;
#define Trav(a, x) for (auto &a : x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define int ll
#define size_t int
#define endl '\n'
#define uni(a) a.resize(distance(a.begin(),unique(a.begin(),a.end())));


const int mod=1e9+7;



// ll gcd(ll a,ll b){if(b==0) return a; return gcd(b,a%b);}



int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}



int binarySearch(vector<int>& v, int l, int r, int x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (x == v[m])
            return m;
        else if (x < v[m])
            r = m - 1;
        else
            l = m + 1;
        /* code */
    }
    return 0;
}

int binarySearch6(vector<int> arr, int l, int r, int x)
{
    // left
    int result = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] == x)
        {
            result = m;
            r = m - 1;
        }
        else if (x < arr[m])
        {
            result = m;
            r = m - 1;
        }
        else
        {
            result = m + 1;
            l = m + 1;
        }
        /* code */
    }
    return result + 1;
}

int binarySearch4(vector<int> arr, int l, int r, int x)
{
    int result = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] == x)
        {
            result = m;
            l = m + 1;
            return result + 1;
        }
        else if (arr[m] < x)
        {
            l = m + 1;
            result = m;
        }
        else
        {
            r = m - 1;
            result = m - 1;
        }
    }
    return result + 1;
}


// vector<int>::iterator ip;
  
//     // Using std::unique
//     ip = unique(v.begin(), v.end());
//     // Now v becomes {1 3 10 1 3 7 8 * * * * *}
//     // * means undefined
  
//     // Resizing the vector so as to remove the undefined terms
//     v.resize(distance(v.begin(), ip));

int olusola(int n,int x, int y){
vector<int> v(4);

v[0] = x;
v[1] = y;
v[2] = n+1-x;
v[3] = n+1-y;

sort(v.begin(),v.end());

return v[0];

}





void solve_tc()
{

// int n, x1, y1, x2, y2;
// cin>>n>>x1>>y1>>x2>>y2;

int n,k; cin>>n>>k;
vector<int> v(n);
for(int i=0; i<n; i++) {
    cin>>v[i];
}

sort(v.rbegin(),v.rend());


int me = v[k-1];
int cnt = 0;
for (int i = 0; i < n; i++)
{
    if(v[i] == 0){
        continue;
    }
    if(v[i] >= me){
        cnt++;
    }
    /* code */
}

cout<<cnt<<endl;


// vector<int> a1 = a;
// sort(a.begin(),a.end());
// sort(b.begin(),b.end());

// for (int i = 0; i < n; i++)
// {
//     int index = binarySearch(a, 0, n-1, a1[i]);
//     cout<<b[index]<<" ";
//     /* code */
// }
// cout<<endl;








// for(int i=0; i<n; i++){

// }

// for(auto i : st){
//     cout<<i<<" ";
// }
// if(st.size() == 1){
//     cout<<"YES"<<endl;
// }
// else {
//     cout<<"NO"<<endl;
// }

// cout<<(st.size() == 3 ? "YES" : "NO")<<endl;





    


















// sort(v.begin(), v.end());

// int first = v[0]*v[1];
// int second = v[n-2]*v[n-1];

// cout<<max(first, second)<<endl;






// for (int i = 0; i<n; i++){
    
//     int cnt = 0;
//     for (int j = i; j < n; j++)
//     {
//         if(b[i]<a[j]){
//             cnt++;
//         }
//         else {
//             break;
//         }

//         /* code */
//     }
//     ans = ans % 1000000007;
//     cnt = cnt % 1000000007;

//     ans = ans*cnt;
    
// }









// cout<<ans<<endl;












// int cnt = 0;
// int i, j;
// for (i = 0; i < n;){

//     for (j = i+1; j < n; j++){

//         if(v[j]>= v[i]){
//             cnt++;
//             if(j == n-1){
//                 cnt--;
//             }
//         }
//         else {
//             i = j;
//             if(cnt > 0){
//                 cnt--;
//             }
//             break;
//         }
    

//     }
//     i = j;
// }
// i = 0, j = i+1;

// for ( i = 0; i < n;)
// {
//     if(v[i] >)
//     /* code */
// }














// cout<<n-cnt<<endl;





















// while(k>0){
// if(a[i]+a[i-1] < a[j]){
//     i+=2;
//     k--;
// }
// else if(a[i]+a[i-1] > a[j]){
//     j--;
//     k--;
// }
// else if(a[i]+a[i-1] == a[j] && k>=2){
//     i+=2;
//     j--;
//     k-=2;
// }
// else {
//     j--;
//     k--;
// }

// }
// i--;
// int sum = 0;
// for (int k = i; k <= j; k++)

// {
//     sum += a[k];
//     /* code */
// }





// cout<<sum<<endl;


// int cnt = 0;
// int n; cin>>n;
// vector<int> v(n);
// for (int i = 0; i < n; i++){
//     cin>>v[i];  
// }

// // cout<<"ME"<<endl;
// int i =0, j = n-1;
// vector<int> v1;

// int diff = 0, diff1 = 1;
// while(i <= j){
//     if(v[i] !=v[j]){
//         diff = abs(v[i] - v[j]);
//         diff1 = min(v[i], v[j]);
//         break;
//     }
//     i++; j--;
// }
// if(diff == 0){
//     cout<<0<<endl;
//         return;
// }


// vector<int> v2(n);
// vector<int> v3(n);
// for (int i = 0; i < n; i++)
// {
//     v2[i] = v[i] % diff;
//     if(diff1 != 0) {

//     v3[i] = v[i] % diff1;
//     }
//     else {
//         v3[i] = 0;
//     }
//     /* code */
// }
//  i =0, j = n-1;

// bool og1 = false, og2 = false;
// while(i<=j){
//     if(v2[i] != v2[j]){
//         og1 = true;
       
//     }
//     if(v3[i]!= v3[j]){
//         og2 = true;
//     }
//     i++; j--;
// }

// if(og1 && og2){
//     cout<<1<<endl; 
//     return;
// }
// else if(og1){
//     cout<<diff1<<endl;
// }
// else if(og2){
//     cout<<diff<<endl;
// }





// while(i <= j){
//     if((v1[i] % diff) != )
// }







// sort(v1.begin(), v1.end());

// if(v1[0] == v1[v1.size()-1]) {
//     cout<<v1[0]<<endl;
//     return;
// }
// else {
//     cout<<1<<endl;
//     return;
// }



}





int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt = 1;
    // cin >> tt;
    while (tt--)
    {

        solve_tc();
        /* code */
    }
    return 0;
}










// for(int i = 1; i<n; i++){
//     if(s[i] == 'B'  &&  s[i-1] == 'B'){
//         cout<<"NO"<<endl;
//         return;
//     }


// }
// for(int i = 2; i<n; i++){
//     if(s[i] == 'F'  &&  s[i-1] == 'F' && s[i-2] == 'F'){
//         cout<<"NO"<<endl;
//         return;
//     }


// }
// cout<<"YES"<<endl;




// int n, m;
// cin>>n>>m;
// vector<int> v(m);
// for (int i = 0; i < m; i++)
// {
//     // if(i>3){
//     // swap(v[i], v[i-1]);
// // fuck me herelsdfjdalfajfadls;fjdasfldasfjadsfjdslkfjadsfvoqewjfoewifdjadsn;lkfndsdlaksdjf
//     // }
//     cin>>v[i];
//     /* code */
// }
// // cout<<"ME"<<endl;
// //   deque<int> deque1 {1, 2, 3, 4, 5};

// deque<int> dq;
// // string s; cin>>s;
// // s

// map<int, int> mp;
// int cnt = 1;
// for (int i = 1; i <= n; i++)
// {
//     dq.push_back(i);
//     /* code */
// }

// for(int i = 0; i<v.size(); i++){
//     bool og1 = false;

//   deque<int>::iterator it;
//   it = find(dq.begin(), dq.end(), 
//              v[i]);
// // deque<int>::iterator itr;
// //   itr = find(dq.begin(), dq.end(), v[i]);
// //   if(itr != dq.end())
// //   {
// //     cout << "Found";
// //   }
// //   else
// //   {
// //     cout << "Not Found";
// //   }

//   if(it != dq.end())
//   {
//     // cout<<"MElskjfdslfdsjflsdf";
//     //  it = dq.begin() + *it;
//     // cout<<"Lolo";
//     cout<<"i am it"<<*it<<endl;
//     // distance(v.begin(), itr);

//     dq.erase(distance);
//     dq.push_front(v[i]);
//     continue;
//   }
//   else
//   {
//         dq.push_front(v[i]);
//          int temp = dq.back();
    
//     mp[temp] = cnt;
//     dq.pop_back();
    
//     cnt++;

//   }
    // int pos = binarySearch(dq, 0, dq.size(), v[i]);
    // cout<<"pos is "<<pos<<endl;

// if(pos == -1){

//     dq.push_front(v[i]);
// }
// else {
//     deque<int>::iterator it;
 
//     it = dq.begin()+pos;
//     dq.erase(it);
//     dq.push_front(v[i]);
//     // dq.erase()
// }
    // int temp = dq.back();
    // if(mp.find(temp) != mp.end()){
    //     continue;
    // }
    // mp[temp] = cnt;
    // dq.pop_back();
    
    // cnt++;






// }

// // Took me 20 mins
// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int tt = 1;
//     // cin >> tt;
//     while (tt--)
//     {

//         solve_tc();
//         /* code */
//     }
//     return 0;
// }



// lessons

// int k = a/b;
// isdigit(k) - is(a%b == 0)

// ctrl + c - terminate terminal
// duplicate option + down


//Recurring error/bugs
// if(tot = 0) error
// while(n--){} still uses n in for(int i = 0; i<n; i++)
// zsh: command not found: 10 - can be input cin>> is not enough

// zsh: floating point exception --- if(tempK%(b-a) == 0) (b-a) can be zero


// solving steps
// get an equation 
// a owns k, 
// question is, does there exist a k(for a) which satisfies the equation(= 0) and the (compulsory) limits on k(p, m => v[0], v[1])

// pending
// review slixi implementation




// P +    M -

// x(+k1, -k2)     y(+(p-k1), -(m-k2))  === 0

// x(k1-k2) + y(p-k1) - y(m-k2)  == 0

// k = k1-k2

// x(k) + y(-k) + y(p-m);

// x(k) -y(k) + y(p-m) = 0
// k(y-x) = y(p-m)

// k = y(p-m)/(y-x)

// 0<=k1<=p
// 0<=k2<=m

// -m<=k<=p


// #include <iostream>
// #include <math.h>
// #include <bits/stdc++.h>
// #include <cmath>
// #include <iomanip>
// #include <bitset>
// #include <vector>
// #include <cstdio>
// #include <algorithm>
// #include <stack>
// using namespace std;
// typedef long long ll;
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define int ll
// #define size_t int
// #define endl '\n'
// #define f0r(i, a) for (int i = 0; i < (a); i++)
// #define far(i, a, b) for (int i = (a); i < (b); i++)

// int binarySearch(vector<int> v, int l, int r, int x)
// {
//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (x == v[m])
//             return m;
//         else if (x < v[m])
//             r = m - 1;
//         else
//             l = m + 1;
//         /* code */
//     }
//     return 0;
// }

// int binarySearch6(vector<int> arr, int l, int r, int x)
// {
//     // left
//     int result = -1;
//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (arr[m] == x)
//         {
//             result = m;
//             r = m - 1;
//         }
//         else if (x < arr[m])
//         {
//             result = m;
//             r = m - 1;
//         }
//         else
//         {
//             result = m + 1;
//             l = m + 1;
//         }
//         /* code */
//     }
//     return result + 1;
// }

// int binarySearch4(vector<int> arr, int l, int r, int x)
// {
//     int result = -1;
//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (arr[m] == x)
//         {
//             result = m;
//             l = m + 1;
//         }
//         else if (arr[m] < x)
//         {
//             l = m + 1;
//             result = m;
//         }
//         else
//         {
//             r = m - 1;
//             result = m - 1;
//         }
//     }
//     return result + 1;
// }
// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }

// int fact(int n)
// {
//     int b = 1;
//     while (n > 0)
//     {
//         b *= n;
//         n -= 1;
//         if (b >= 998244353)
//             b %= 998244353;
//     }

//     return b;
// }
// // int cnt = 0;
// void solve_me()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     int n1 = ceil(double(n) / 2);

//     int a = n1;
//     for (int i = 0; i < n; i += 2)
//     {
//         v[i] = a;
//         a--;
//     }
//     int b = n;
//     for (int i = 1; i < n; i += 2)
//     {
//         v[i] = b;
//         b--;
//     }

//     f0r(i, n)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     return;
// }

// void solve()
// {
// int n;
// cin>>n;
// vector<int> v(n);
// vector<int> v1(n);
// for(int i = 0; i<n; i++){
//     cin>>v[i];
// }
// int ans = 0;
// for(int i = 0; i<n; i++){
//     cin>>v1[i];
// }
// int i = n-1, j = n-1;
// while(i>=0){
//     int temp = v1[j];
// if(temp != v[i]){
//     i--;
// }
// else if(temp == v1[j]){
//     ans++;
//     j--;
//     i--;
// }
// }
// cout<<n-ans<<endl;

// }

// /// maintains the order, use two pointer. uproot the rest method

// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     // freopen("two2.in", "r", stdin);
//     // // ouput was standard, and alimagde not aligmade
//     // // always read the problem, really bad
//     // freopen("aligmade.out", "w", stdout);

//     int tt = 1;
//     cin >> tt;
//     // int cnt = 0;
//     while (tt--)
//     {
//         // cnt++;
//         solve();
//     }

//     return 0;
// }



// #include <iostream>
// #include <math.h>
// // #include <bits/stdc++.h>
// #include <cmath>
// #include <iomanip>
// #include <bitset>
// #include <vector>
// #include <cstdio>
// #include <algorithm>
// #include <set>
// #include <stack>
// #include <cstring>
// using namespace std;
// typedef long long ll;
// #define Trav(a, x) for (auto &a : x)
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define int ll
// #define size_t int
// #define endl '\n'



// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }


// void solve_tc()
// {
// int n, k;
// cin>>n>>k;
// vector<int> v1(n);
// vector<vector<int>> v;
// int ans = 0;
// for (int i = 0; i < n; i++)
// {
//     cin>>v1[i];
//     /* code */
// }

// // v.push_back(v1);
// vector<vector<int>> v3(k+1, vector<int>(2));

// int k1 = k;
// int cnt1 = 1;
// v3[0][0] = 1;
// v3[0][1] = v1[0];

// while(k1--){
//     cin>>v3[cnt1][0]>>v3[cnt1][1];
//     cnt1++;
// }
// // works fine till here


// // int ans = 0;
// int k2 = k+1;
// int cnt = 0;

// while(cnt < (k)){
//     // cnt < 2 error erielfsjfdlkfjdslfjdsfldsjf as;dfjkads fl;dsfads here
// // prep v1
// v1[(v3[cnt][0])-1] = v3[cnt][1];

// // create new v2 from v1 + (1,2,3,4)

// int cnt2 = cnt+1;
// // int k
// vector<int> v2 = v1;
// while(cnt2<(k+1)){


// // vector<int> v2 = v1; omo this was the final errorosslfjflsdfjasdl;fjasdlf;jflasdjfasd flasfj sdlfj sds thank God I figured it out, this was supposed to be outside


// v2[(v3[cnt2][0])-1] = v3[cnt2][1];

// // v1 v2 gotten

// set<int> op;

//         for(int me : v1) {
//       op.insert(me);
//    }
//         for(int me : v2) {
//       op.insert(me);
//    }
//    ans += op.size();

// cnt2++;
// }

// cnt++;
// // cnt1++;
// // cnt++ verreserlrejrejsdf very very very very veryveery  verg very very very big mistake

// }
// cout<<ans<<endl;

// }


// // Took me 20 mins
// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int tt = 1;
//     cin >> tt;
//     while (tt--)
//     {

//         solve_tc();
//         /* code */
//     }
//     return 0;
// }



// lessons

// int k = a/b;
// isdigit(k) - is(a%b == 0)

// ctrl + c - terminate terminal
// duplicate option + down


//Recurring error/bugs
// if(tot = 0) error
// while(n--){} still uses n in for(int i = 0; i<n; i++)
// zsh: command not found: 10 - can be input cin>> is not enough

// zsh: floating point exception --- if(tempK%(b-a) == 0) (b-a) can be zero


// solving steps
// get an equation 
// a owns k, 
// question is, does there exist a k(for a) which satisfies the equation(= 0) and the (compulsory) limits on k(p, m => v[0], v[1])

// pending
// review slixi implementation




// P +    M -

// x(+k1, -k2)     y(+(p-k1), -(m-k2))  === 0

// x(k1-k2) + y(p-k1) - y(m-k2)  == 0

// k = k1-k2

// x(k) + y(-k) + y(p-m);

// x(k) -y(k) + y(p-m) = 0
// k(y-x) = y(p-m)

// k = y(p-m)/(y-x)

// 0<=k1<=p
// 0<=k2<=m

// -m<=k<=p


// #include <iostream>
// #include <math.h>
// #include <bits/stdc++.h>
// #include <cmath>
// #include <iomanip>
// #include <bitset>
// #include <vector>
// #include <cstdio>
// #include <algorithm>
// #include <stack>
// using namespace std;
// typedef long long ll;
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define int ll
// #define size_t int
// #define endl '\n'
// #define f0r(i, a) for (int i = 0; i < (a); i++)
// #define far(i, a, b) for (int i = (a); i < (b); i++)

// int binarySearch(vector<int> v, int l, int r, int x)
// {
//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (x == v[m])
//             return m;
//         else if (x < v[m])
//             r = m - 1;
//         else
//             l = m + 1;
//         /* code */
//     }
//     return 0;
// }

// int binarySearch6(vector<int> arr, int l, int r, int x)
// {
//     // left
//     int result = -1;
//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (arr[m] == x)
//         {
//             result = m;
//             r = m - 1;
//         }
//         else if (x < arr[m])
//         {
//             result = m;
//             r = m - 1;
//         }
//         else
//         {
//             result = m + 1;
//             l = m + 1;
//         }
//         /* code */
//     }
//     return result + 1;
// }

// int binarySearch4(vector<int> arr, int l, int r, int x)
// {
//     int result = -1;
//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (arr[m] == x)
//         {
//             result = m;
//             l = m + 1;
//         }
//         else if (arr[m] < x)
//         {
//             l = m + 1;
//             result = m;
//         }
//         else
//         {
//             r = m - 1;
//             result = m - 1;
//         }
//     }
//     return result + 1;
// }
// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }

// int fact(int n)
// {
//     int b = 1;
//     while (n > 0)
//     {
//         b *= n;
//         n -= 1;
//         if (b >= 998244353)
//             b %= 998244353;
//     }

//     return b;
// }
// // int cnt = 0;
// void solve_me()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     int n1 = ceil(double(n) / 2);

//     int a = n1;
//     for (int i = 0; i < n; i += 2)
//     {
//         v[i] = a;
//         a--;
//     }
//     int b = n;
//     for (int i = 1; i < n; i += 2)
//     {
//         v[i] = b;
//         b--;
//     }

//     f0r(i, n)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     return;
// }

// void solve()
// {
// int n;
// cin>>n;
// vector<int> v(n);
// vector<int> v1(n);
// for(int i = 0; i<n; i++){
//     cin>>v[i];
// }
// int ans = 0;
// for(int i = 0; i<n; i++){
//     cin>>v1[i];
// }
// int i = n-1, j = n-1;
// while(i>=0){
//     int temp = v1[j];
// if(temp != v[i]){
//     i--;
// }
// else if(temp == v1[j]){
//     ans++;
//     j--;
//     i--;
// }
// }
// cout<<n-ans<<endl;

// }

// /// maintains the order, use two pointer. uproot the rest method

// 

// int pos, value;
// vector<int> vTemp(2);
// vTemp[0] = v1[pos-1]; vTemp[1] = value;
// v3.push_back(vTemp);

// cin>>pos>>value;
// vector<int> v2 = v1;



// v2[(v3[cnt][0])-1] = v3[cnt][1];
// v2[pos-1] = value;

// v1, v2;

 

// for (int i = 0; i < k; i++)
// {

//         for (int j = i+1; j < k+1; j++)
//     {

//     set<int> op;

//         for(int me : v1) {
//       op.insert(me);
//    }
//         for(int me : v2) {
//       op.insert(me);
//    }
//    ans += op.size();



    // }
    
// }


// v.push_back(v1);






// #include <cstdint>
// //#pragma comment(linker, ”/STACK:36777216“)
// //#pragma GCC optimize("O3,unroll-loops")
// //#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
// //#pragma GCC target("popcnt")
// // #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// const ll INF=1e18;
// const ll MOD=998244353;
// const ll alt=1e10;
// const ll inf=1e9+7;
// const ll inff=999999999989;//Precalc is not a bad idea
// #define int ll
// #define pb push_back
// #define pf push_front
// #define mp make_pair
// #define mt make_tuple
// #define fi first
// #define se second
// #define pi pair<int,int>
// #define ti tuple<int,int,int>
// #define mod(a) (a+inf)%inf
// //#define mod(a) (a+MOD)%MOD
// //#define mod(a) (a+inff)%inff
// //#define dist(a,b) distance(a,b)
// #define all(a) a.begin(),a.end()
// #define rall(a) a.rbegin(),a.rend()
// #define sz(a) a.size()
// /* run this program using the console pauser or add your own getch, system("pause") or input loop*/

// int32_t main(){
// //	freopen("input.txt", "r", stdin);
// //	freopen("output.txt", "w", stdout);
// 	std::ios_base::sync_with_stdio(false);
// 	cin.tie(0)->sync_with_stdio(0);
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		vector<int> a(n);
// 		vector<int> c(n,0);
// 		vector<int> b(n+m+1,0);
//             cout<<endl;
// 		for(int i=0;i<n;i++) cin>>a[i];
//          for (int i = 0; i < a.size(); i++)
//             {
//                 cout<<a[i]<<" ";
//                 /* code */
//             }
//             cout<<endl;
//                                     // cout<<endl;

//             for (int i = 0; i < b.size();  i++)
//             {
//                 cout<<b[i]<<" ";
//                 /* code */
//             }
//                         cout<<endl;
//                                                 // cout<<endl;


//             for (int i = 0; i < c.size(); i++)
//             {
//                 cout<<c[i]<<" ";
//                 /* code */
//             }
//                         cout<<endl;
//                         cout<<endl;

// 		for(int i=1;i<=m;i++){
// 			int x,y;
// 			cin>>x>>y;
// 			x--;
// 			b[a[x]]+=i-c[x];
// 			c[x]=i;
// 			a[x]=y;
//             for (int i = 0; i < a.size(); i++)
//             {
//                 cout<<a[i]<<" ";
//                 /* code */
//             }
//             cout<<endl;
//                                     // cout<<endl;

//             for (int i = 0; i < b.size();  i++)
//             {
//                 cout<<b[i]<<" ";
//                 /* code */
//             }
//                         cout<<endl;
//                                                 // cout<<endl;


//             for (int i = 0; i < c.size(); i++)
//             {
//                 cout<<c[i]<<" ";
//                 /* code */
//             }
//                         cout<<endl;
//                                                 cout<<endl;


            
// 		}
//         cout<<endl;
//         cout<<endl;
// 		m++;
// 		for(int i=0;i<n;i++) b[a[i]]+=m-c[i];

//         for (int i = 0; i < b.size();  i++)
//             {
//                 cout<<b[i]<<" ";
//                 /* code */
//             }

//                     cout<<endl;
//                     cout<<endl;

// 		int ans=0;
// 		for(int i=0;i<sz(b);i++){
// 			ans+=((b[i]*(m-b[i]))+((b[i]*(b[i]-1))/2));
//             cout<<ans<<" ";
// 		}
//         cout<<endl;
//         cout<<endl;
// 		cout<<ans<<endl;
//         cout<<endl;
//         cout<<endl;
//         cout<<endl;
//         cout<<endl;
// 	}
// 	return 0;
// }
//Icebear16
//vector<vector<int> > pos(200001,vector<int> (2));







// while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		vector<int> a(n);
// 		vector<int> c(n,0);
// 		vector<int> b(n+m+1,0);
// 		for(int i=0;i<n;i++) cin>>a[i];
// 		for(int i=1;i<=m;i++){
// 			int x,y;
// 			cin>>x>>y;
// 			x--;
// 			b[a[x]]+=i-c[x];
// 			c[x]=i;
// 			a[x]=y;
// 		}
// 		m++;
// 		for(int i=0;i<n;i++) b[a[i]]+=m-c[i];
// 		int ans=0;
// 		for(int i=0;i<sz(b);i++){
// 			ans+=((b[i]*(m-b[i]))+((b[i]*(b[i]-1))/2));
// 		}
// 		cout<<ans<<endl;
// 	}


//     1 1 1 1 1 1 1 1 1 1  see a
//     5 5 5 5 5
