#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <string.h>
#include <vector>
#include <iterator>

using namespace std;

/* CHIIRU NOT OP 
LOVE IS A LOSING GAME!!!
AND I LOST CAUSE I LOVE SOMEONE
*/

#define ll            long long int
#define all(vec)      vec.begin(),vec.end()
#define rep(i,a,b)    for(i=a;i<=b;i++)
#define repr(i,a,b)   for(i=a;i>=b;i--)
#define pb            push_back
#define pll           pair<ll,ll>
#define vpll          vector<pair<ll,ll>>
#define ull           unsigned long long int
#define vll           vector<ll> 
#define vvll          vector<vector<ll>>

int main()
{
    int t=1;
// 	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<ll>vec(n);
	    for(ll i=0;i<n;i++)
	        cin >> vec[i];
	        
	    sort(all(vec));
	    reverse(all(vec));
	    ll val=vec[k-1];
	   ll i=0;
	   ll cnt=0;
	   if(val==0)
	   {
	       ll cap=0;
	       for(ll i=0;i<n;i++)
	       {
	           if(vec[i]>0)
	           cap++;
	       }
	       cout << cap << endl;
	   }
	   else{
	   while(vec[i]>=val &&  i<n){
	       i++;
	       cnt++;
	   }
	    cout << cnt << endl;
	   }
	    
	} 
    return 0;
}











































































// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
 
// #define pll pair<ll,ll>
// #define vpll vector<pair<ll,ll>>
// #define ull unsigned long long int
// #define vll vector<ll>
// #define vvll vector<vector<ll>>
// #define rep(i,a,b) for(i=a;i<=b;i++)
// #define repr(i,a,b) for(i=a;i>=b;i--)
// #define all(v) v.begin() , v.end()
// #define rall(v) v.rbegin(),v.rend()
// #define ff first
// #define ss second
// #define pb push_back
// typedef unsigned long long int ulli;
// template<typename T> istream& operator>>(istream& in, vector<T>& a) {for (auto &x : a) in >> x; return in;};
// template<typename T> ostream& operator<<(ostream& out, vector<T>& a) {for (auto &x : a) out << x << ' '; return out;};
 
// template<typename T1, typename T2> ostream& operator<<(ostream& out, const pair<T1, T2>& x) {return out << x.ff << ' ' << x.ss;}
// template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& x) {return in >> x.ff >> x.ss;}
// ll sqrtf (ll x) {
//     ll ans = 0;
//     for (ll k = 1LL << 30; k != 0; k /= 2) {
//         if ((ans + k) * (ans + k) <= x) {
//             ans += k;
//         }
//     }
//     return ans;
// }
// ll powermod(ll a, ll b, ll m)
// {
//     if (b == 0) return 1;
//     ull k = powermod(a, b / 2, m);
//     k = k * k;
//     k %= m;
//     if (b & 1) k = (k * a) % m;
//     return k;
// }
// // nCr with modulus
// long long int mod = 1000000007;
// // ll factorial(ll n, ll r){
// //     if(r==0||r==n) return 1;
 
// //     // dp[n][r]=
// //     return (factorial (n-1,r,dp)%mod + factorial (n-1,r-1,dp)%mod)%mod;
 
// // }
// ll kadane( vll &arr, ll n) {
 
//     ll max_end = 0;
//     ll mx = 0;
 
//     for (ll i = 0; i < n; i++) {
//         max_end += arr[i];
//         if (mx < max_end) {
//             mx = max_end;
//         }
//         if (max_end < 0) {
//             max_end = 0;
//         }
//     }
//     return mx;
// }
// // Prime test for large numbers
 
// bool isPrime(ull n, int iter = 5)
// {
//     if (n < 4) return n == 2 || n == 3;
//     if (n % 2 == 0 || n % 3 == 0) return false;
//     for (int i = 0; i < iter; i++)
//     {
//         ull a = 2 + rand() % (n - 3);
//         if (powermod(a, n - 1, n) != 1) return false;
//     }
//     return true;
// }
 
 
// vector<ll> sieve(ll n)
// {
 
//     vector<bool> prime(n + 1, true);
 
//     prime[0] = false;
//     prime[1] = false;
//     // ll m = sqrt(n);
 
//     for (ll p = 2; p <= sqrt(n); p++)
//     {
 
//         //
//         if (prime[p])
//         {
 
//             for (ll i = p * 2; i <= n; i += p) {
//                 prime[i] = false;
 
//             }
//         }
//     }
 
//     vector<ll> ans;
//     for (ll i = 0; i < n; i++)
//         if (prime[i])
//             ans.push_back(i);
//     return ans;
// }
// ll findLowerBound(vector<pair<ll, ll> >& arr,
//                   pair<ll, ll>& p1)
// {
//     // Given iterator points to the
//     // lower_bound() of given pair
//     auto low = upper_bound(arr.begin(), arr.end(), p1);
 
//     return low - arr.begin();
// }
// ll maxvec(vll &v) {
//     ll mx  = LLONG_MIN;
//     ll i;
//     rep(i, 0, v.size() - 1) mx = max(v[i], mx);
//     return mx;
// }
// ll minvec(vll &v) {
//     ll mn  = LLONG_MAX;
//     ll i;
//     rep(i, 0, v.size() - 1) mn = min(v[i], mn);
//     return mn;
// }
// ll sumvec(vll &v) {
//     ll sum = 0;
//     ll i;
//     rep(i, 0, v.size() - 1) sum += v[i];
//     return sum;
// }
// ll ceil(ll i, ll j) {
//     if (i % j == 0) return i / j;
//     return (i / j) + 1;
// }
// bool allequal(vll &v) {
//     ll mx = LLONG_MIN;
//     ll mn = LLONG_MAX;
//     for (ll i = 0; i < v.size(); i++) {
//         mx = max(mx, v[i]);
//         mn = min(mn, v[i]);
//     }
//     return mx == mn;
// }
// ll min(ll a, ll b, ll c) {
//     if (a <= b && a <= c) return a;
//     if (b <= c && b <= a) return b;
//     return c;
// }
 
// typedef pair<ll, ll> pi;
// vector <ll> dijkstra(ll V, vector<vector<pair<ll, ll>>> adj, ll s, vll &par)
// {
//     priority_queue<pi, vector<pi>, greater<pi> > pq;
//     pq.push({0, s});
//     vector<ll>dist(V, LLONG_MAX);
//     // vll par(V,-1);
//     dist[s] = 0;
//     while (!pq.empty()) {
//         ll dis = pq.top().first;
//         ll ind = pq.top().second;
//         pq.pop();
//         for (auto it : adj[ind]) {
//             if (dist[it.ff] > dis + it.ss) {
//                 par[it.ff] = ind ;
//                 dist[it.ff] = dis + it.ss;
//                 pq.push({dist[it.ff], it.ff});
//             }
//         }
//     }
//     return dist;
// }
// bool val(ll i, ll j, ll n, ll m) {
//     if (i < 0 || j < 0 || i >= n || j >= m) return false;
//     return true;
// }
 
 
 
 
// ll help(vll &v, ll cnt) {
//     ll sum = 0;
//     sort(all(v));
//     reverse(all(v));
//     for (ll i = 0; i < cnt; i++) {
//         sum += v[i];
//     }
//     return sum;
// }
// bool check(ll x, ll n, ll k) {
 
//     ll a = k;
//     ll sum = x;
//     while (x / a > 0) {
//         sum += x / a;
//         a *= k;
//     }
//     if (sum >= n) return true;
//     return false;
// }
// void mark(ll i, ll j, ll cnt, vector<vector<ll>>&vis ) {
 
// }
// ll helper(ll i, ll j, vector<vector<char>>&v, vector<vector<ll>>&vis) {
//     ll cnt = 0;
//     for (; cnt < v.size() - i; cnt++) {
//         for (ll k = j - cnt; k <= j + cnt; k++) {
//             if (k >= v[0].size() || k < 0 || v[i + cnt][k] != '*') return cnt;
//         }
 
//     }
//     return cnt ;
 
// }
// ll scndmin(vll &tmp) {
//     ll ind = -1, mn = LLONG_MAX;
//     for (ll i = 0; i < tmp.size(); i++) {
//         if (tmp[i] < mn) {
//             ind = i;
//             mn = tmp[i];
//         }
//     }
//     ind = -1, mn = LLONG_MAX;
//     for (ll i = 0; i < tmp.size(); i++) {
//         if (i == ind) continue;
//         if (tmp[i] < mn) {
//             ind = i;
//             mn = tmp[i];
//         }
//     }
//     return mn;
// }
// bool check(ll k, string &s, ll x) {
//     map<char, ll>m;
//     ll n = s.length();
//     for (ll i = 0; i < k; i++) m[s[i]]++;
//     if (m.size() >= x) return true;
//     for (ll i = k; i < n; i++) {
//         m[s[i - k]]--;
//         if (m[s[i - k]] == 0) m.erase(s[i - k]);
//         m[s[i]]++;
//         if (m.size() >= x) return true;
//     }
//     return false;
 
// }

// void yahapekrege() 
// {
//     return 0;
// }
// int32_t main() {
  
// 	}
//     return 0;
// }

