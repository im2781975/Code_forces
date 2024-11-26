using namespace std;
def sieve(n):
    prime = [True for _ in range(n + 1)]
    p = 2
    while p * p <= n:
        if prime[p]:
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
    primes = []
    for p in range(2, n + 1):
        if prime[p]:
            primes.append(p)
    return primes
primes = sieve(10**5)
	a = [1, 2, 3, 4, 5]
using namespace std;
def bl(arr, value):
    try:
        return arr.index(value)
    except ValueError:
        return -1
for _ in range(int(input())):
    n = int(input())
    t = bl(a, n - 1)
    if t >= len(a) or a[t] > n - 1:
        t -= 1

    deg = a[t]

    if n % 2:
        print((deg * (n - 1) + 2) // 2)
    else:
        print((deg * n) // 2)

using namespace std;
void main(){
    int n; cin >> n;
    int res;
    if(n > 3){
        if(n % 2 == 0)
            res = n + n / 2;
        else
            res = n + (n - 1) / 2;
        cout << res;
    }
    else
        cout << "-3";
}
using namespace std;
void main(){
    int n; cin >> n;
    int cur = 2;
    for(int i = 0; i < n; i++){
        cout << cur << " ";
        if(i % 2 == 0)
            cur++;
        else
            cur += 3;
    }
}
using namespace std;
vector <int> LongestNonDecSubseq(vector <int> &vec){
    //store the end elements of NonDecSubseq
    vector <int> tor;
    for(int i = 0; i < vec.size(); i++){
        if(tor.empty() || tor.back() <= vec[i])
            tor.push_back(vec[i]);
        else{
            int ub = upper_bound(tor.begin(), tor.end(), vec[i]) - tor.begin();
            tor[ub] = vec[i];
        }
    }
    return tor.size();
}
using namespace std;
int longestNonDecSubseq(vector <int> &vec){
    multiset <int> mset;
    multiset <int> ::iterator it;
    int n = vec.size();
    for(int i = 0; i < n; i++){
        mset.insert(vec[i]);
        it = mset.upper_bound(vec[i]);
        if(it != mset.end())
            mset.erase(it);
    }
    return mset.size();
}
int main(){
    int n, m; cin >> n >> m;
    vector <int> vec(n), tor(m);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < m; i++)
        cin >> tor[i];
    cout << longestNonDecSubseq(vec) + longestNonDecSubseq(tor);
}
using namespace std;
void main(){
    int n, cin >> n;
    string str, ing; cin >> str >> ing;
    vector<int> vec(n + 1, 0), tor(n + 1, 0);
    int dp[n + 1][n + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++)
            dp[i][j] = 1e18;
    }
    dp[n][n] = 0;
    for(int i = n - 1; i >= 0; i--){
        vec[i] = vec[i + 1] + (str[i] == '0');
        tor[i] = tor[i + 1] + (ing[i] == '0');
    }
    for(int i = n - 1; i >= 0; i--){
        dp[n][i] = dp[n][i + 1];
        if(ing[i] == '1')
            dp[n][i] += vec[n] + tor[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
                dp[i][j] = dp[i + 1][j];
                if (str[i] == '1')
                    dp[i][j] = min(dp[i][j], dp[i + 1][j + 1] + vec[i] + tor[j]);
        }
    }
    cout << dp[0][0];
}
using namespace std;
void main(){
    int n; cin >> n;
    vector <float> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    sort(vec.rbegin(), vec.rend());
    int sum = 0;
    for(int i = 1; i < n; i++)
        sum += vec[i];
    float res = sum / (n - 1);
    res += vec[0];
    cout << res;
/*
	for _ in range(int(input())):
    n = int(input())
    a = sorted(list(map(int, input().split())), reverse = True)
    m1 = a[0]
    m2 = (sum(a) - m1) / (n - 1) 
    print(m1 + m2)
    */
}
using namespace std;
void printChar(){
    int n; cin >> n;
    int base = 97;
    for(int i = 0; i < n; i++){
        if(base > 122)
            base = 97;
        cout << char(base) << " ";
        base++;
    }
}
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #VA_ARGS << "):", dbg_out(VA_ARGS)
#else
#define dbg(...)
#endif
#define ar array
#define ll…
#define all(cont) cont.begin(), cont.end()
#define ll long long
[9:59 pm, 23/01/2022] Pratik Suryawanshi: # Div 2 C (AC solution)
#include<bits/stdc++.h>
using namespace std;
#define xx long long
#define foi(xxxxx) for(xx yyyyy=0;yyyyy<xxxxx;yyyyy++)
typedef vector<xx>          vll;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    xx xxxxxxxxx; cin >> xxxxxxxxx;
    while (xxxxxxxxx--)
    {
        int yy;
        cin >> yy;
        int  yyy = 2;
        int   yyyy = 3;
        for (int yyyyy = 0; yyyyy < yy; yyyyy++) {
            cout << yyy << " ";
            if (yyyyy & 1) {
                yyy += 3;
            }
            else {
                yyy++;
            }
        }
        cout << endl;
    }
    return 0;
}
[10:24 pm, 23/01/2022] Pratik Suryawanshi: #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int gg;
  cin>>gg;
  while(gg--){
      int a,jjj;
      cin>>a;
      if(a>3){
        if(a%2==0){
          jjj=a+a/2;
          cout<<jjj<<endl;
        }
        else{
          jjj=a+(a-1)/2;
          cout<<jjj<<endl;
         }
      }
      else{
          cout<<"3"<<endl;
      }
  }
  return 0;
}
[10:29 pm, 23/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
#include<string>
#include <sstream>
using namespace std;
#include<bitset>
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define fox(i, a,b) for(i=a;i<=b;i++)
#define reps(i, a,b) for(int i=a;i<=b;i++)
#define repe(i, a,b) for(int i=a;i>=b;i--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n…
[10:29 pm, 23/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;
 
//* BOOST BEG //
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt")
// BOOST END 
 
#define gc getchar_unlocked
#define ll long long int
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define fox(i, a,b) for(i=a;i<=b;i++)
#define reps(i, a,b) for(int i=a;i<=b;i++)
#define repe(i, a,b) for(int i=a;i>=b;i--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define…
[10:38 pm, 23/01/2022] Pratik Suryawanshi: from bisect import bisect_left as bl
a = []
 
 
def sieve(n):
 
    prime = [True for i in range(n + 1)]
    p = 2
    while p * p <= n:
        if prime[p]:
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
 
    for p in range(2, n + 1):
        if prime[p]:
            a.append(p)
 
 
sieve(10**5)
 
for _ in range(int(input())):
    n = int(input())
 
    t = bl(a, n - 1)
 
    if t >= len(a) or a[t] > n - 1:
        t -= 1
 
    deg = a[t]
 
    if n % 2:
        print((deg * (n - 1) + 2) // 2)
    else:
 
        print((deg * n) // 2)
[8:39 pm, 29/01/2022] Pratik Suryawanshi: LL n,k;
        cin >> n >> k;
        if(n>1 && k==1)
        {
            cout << -1 << "\n";
        }
        else if( n== 1  && k==1)
        {
            cout << 1 << "\n";
        }
        else
        {
            
            for(int i=1;i<=k-1;i++)
            {
                cout << i << " ";
            }
            for(int i=n;i>=k;i--)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
[9:05 pm, 29/01/2022] Pratik Suryawanshi: ll cal(ll m, string s)
{
    ll add = 0;
    for(int i=m;i>=0;i--)
    {
        ll v = (int(s[i])-int('0')+add)%10;
        if(v==0)
            continue;
        add+=10-v;
    }
    return add;
}
 
int main()
{
    fast
        tc
    {
        ll n,k;
        cin >> n >> k;
        string str;
        cin >> str;
        ll l=0,r=n-1,ans=0;
        while(l<=r)
        {
            ll m=(l+r)/2;
            if(cal(m,str)>k)
                r=m-1;
            else
            {
                ans = m+1;
                l=m+1;
            }
        }
        cout<<ans<<endl;
    }
}
[10:08 pm, 29/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll flip(ll n){
    ll no = 0,cnt = 0;
    while(n){
        if(n%2 == 0) no += (1LL<<cnt);
        n /= 2,cnt++;
        if(n <= 0) break;
    }
    return no;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt=1; cin>>tt;
    while (tt--){
        ll n; cin>>n;
        ll ans = 0;
        while(n > 0)
        {
            ll a = flip(n);
            ll b = n;
            if((b&(b+1)) == 0) b--;
            ll val = ((b * (b+1)) / 2) - ((a * (a-1)) / 2);
            ans += (val*2);
            n = a-1;
        }
        cout<<ans<<"\n";
    }
}
*/
#include<bits/stdc++.h>
#include <cassert>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

// ------------------------------- Micros ------------------------------------------------

#define google(tc) cout<<"Case #"<<tc++<<": ";
#define FILE freopen("input.txt","r",stdin); freopen("output.txt","w", stdout);
#define GetSetBolt ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
#define ll long long int  
#define LD long double

#ifndef LOCAL
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#endif



#define max3(a,b,c) max(a,max(b,c)) 
#define min3(a,b,c) min(a,min(b,c)) 
#define FF first 
#define SS second 
#define PB push_back 
#define PF push_front 
#define PPB pop_back  
#define PPF pop_front  
#define Endl endl

#define in(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define in2(arr,n,m) for(int i=0;i<n;i++){ for(int j=0;j<m;j++) cin>>arr[i][j];}
#define dis(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
#define dis2(arr,n,m) for(int ii=0;ii<n;ii++){for(int j=0;j<m;j++)cout<<arr[ii][j]<<" ";cout<<endl;} 
#define tc int t=0;cin>>t; while(t--) 

#define For(n) for(ll i=0;i<n;i++)
#define For0(x,z) for(ll x=0;x<z;x++)
#define Forx(x,z) for(x;x<z;x++)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

#define toLower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define toUpperr(s) transform(s.begin(),s.end(),s.begin(),::toupper)

#define sortAD(arr,n) sort(arr,arr+n, greater<int>());
#define sortVD(v) sort(v.begin(), v.end(), greater<int>());
#define sortA(arr) sort(arr,arr+n);
#define sortV(v) sort(v.begin(),v.end());

#define mem0(X) memset((X), 0, sizeof((X)))
#define memx(X,x)  memset((X), x, sizeof((X)))
#define setbits(X)  __builtin_popcountll(X)
#define precise(X)  cout<<fixed << setprecision(X);
#define valid(x,y,row,col) (((x) >= 0 and (x) < row) and ((y) >= 0 and (y) < col))
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define timer(d) for(long blockTime=NULL;(blockTime==NULL?(blockTime=clock())!=NULL:false); debug("%s:%.4fs",d,(double)(clock()-blockTime)/CLOCKS_PER_SEC))
#define rsz resize
#define bk back()
#define ld long double

// #ifndef ONLINE_JUDGE
//     cerr<<"\ntime taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<"\n";
// #endif
typedef pair<int, int> PII; 
typedef pair<ll, ll> PLL;
typedef pair<double,double> PDD;
typedef pair<string, string> PSS; 
typedef pair<string, ll> PSL; 
typedef long double lld;

typedef vector<int> VI;  
typedef vector<ll> VL;  
typedef vector<double> VD;
typedef vector<string> VS; 
typedef vector<VI> VVI;  
typedef vector<VL> VVL; 
typedef vector<VS> VVS; 
typedef vector<PII> VPII; 
typedef vector<PLL> VPLL; 
typedef vector<PSS> VPSS; 
typedef vector<PSL> VPSL; 

typedef map<int,int> MII; 
typedef map<ll,ll> MLL;   
typedef map<char,ll> MCL;  
typedef map<char,int> MCI; 
typedef map<char,ll> MCL;   
typedef map<string,string> MSS;  
typedef map<string,int> MSI;  
typedef map<string,ll> MSL; 

typedef unordered_map<int,int> UMII; 
typedef unordered_map<ll,ll> UMLL;   
typedef unordered_map<char,ll> UMCL;  
typedef unordered_map<char,int> UMCI; 
typedef unordered_map<char,ll> UMCL;   
typedef unordered_map<string,string> UMSS;  
typedef unordered_map<string,int> UMSI;  
typedef unordered_map<string,ll> UMSL; 
typedef unsigned long long ull;

const int inf = (int)1e9 + 5;
const ll infl = (ll)1e18 + 5;
const ld PI = acos((ld)-1);
const int MOD = 1e9 + 7;
const int N = 2e5 + 10;
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};   // for every grid problem


//--------------------------------- Trace Functions --------------------------------------

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// ----------------------------- Functions -----------------------------------------------

ll lcm(ll a, ll b) 
{ return (a * (b / __gcd(a, b))); }

string intToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}
 
ll stringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

string to_binary(ll n)
{
    int bin[100];
     int i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    string s="";
    for(int j=i-1;j>=0;j--)
        s+=to_string(bin[j]);
    return s;
}
int linear_search(int arr[],int n, int x)
{
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
}
void leftrotatebyone(int arr[], int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    arr[i]=arr[i+1];
    
    arr[n-1]=temp;
}
void leftrotate(int arr[], int d, int n)
{
    for(int i=0;i<d;i++)
    leftrotatebyone(arr,n);
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

ll gcd(ll a, ll b)
{
        if(a == 0)
            return b;
            
        if(b == 0)
            return a;
            
        if(a == b)
            return a;
            
        if(a>b)
            return gcd(a-b,b);
            
        else
        return gcd(a,b-a);
}

void reverrsestring(string& s)
{
        int n=s.size();
        For(n/2)
        {
                swap(s[i],s[n-i-1]);
        }
}
ll fpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%MOD;
        a = (a * a)%MOD;
        b >>= 1;
    }
    return res%MOD;
}
int gcdExtended(int a, int b, int* x, int* y)
{
    if (a == 0){
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return gcd;
}
void swap(ll &x,ll &y){
	ll temp = y;
	y = x;
	x = temp;
}
int factorirl(int n)
{
        int fact=1;
        for(int i=1;i<=n;i++)
        {
                fact*=i;
        }
        return fact;
}

bool isPerfectSquare(ll x)
{
	if (x >= 0)
	{
		ll sr = sqrt(x);
		return (sr * sr == x);
	}
	return false;
}
void printvec(VL vec, int i)
{
	for (int j = i; j < vec.size(); j++)
	{
		cout << vec[j] << " ";
	}
	cout << endl;
}
void frrrrramework(ll n, ll m)
{
        ll ss;
        for(int i=0,a=m+1;i<n;i++,a++)
        {
                ss=i+1;
                cout << ss << " ";
                for(int j=1;j<m;j++)
                {
                        cout << ss+a << " ";
                        ss+=a;
                }
                cout << "\n";
        }
}
void framework(ll n, ll m)
{
        For(m)
        {
                cout << i+1 << " ";
                cout << "\n";
        }
        int face=2+n;
        for(int i=1;i<n;i++)
        {
                int mm=face;
                cout << mm << " ";
        
        for(int j=1;j<m;j++)
        {
                cout << mm+i+1 << " ";
                mm+=i+1;
        }
        face+=n+1;
        cout << "\n";
        }
}
void ravan(int p[],int arr[],int s[],int n)
{
        p[0]=arr[0];
        for(int i=1;i<n;i++)
        {
                p[i] = gcd(p[i-1],arr[i]);
        }
        s[n-1]=arr[n-1];
        for( int i=n-2;i>=0;i--)
        {
                s[i]= gcd(s[i+1],arr[i]);
        }
}
int Pratik(int l, int r, int p[],int s[],int n)
{
        if(l==0)
        return s[r+1];
        
        if(r==n-1)
          return p[l-1];
          
        return  gcd(p[l-1],s[r+1]);
}

//////////////////////////////// Actual code start here /////////////////////////////////////

   
int main()
{
         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #endif
            
            
    
}
// Bilangan pecahan : mikroskil cp 2014
 
/*int main()
{
    int a,b;
    cin >> a >> b;
    if(__gcd(a,b)>1)
    {
    cout << a/__gcd(a,b) << " " << b/__gcd(a,b);
    } else{cout << "Tidak";}
}*/
 
// Pola III : perulangan lanjut
 
/*int main()
{
    int n,x;
    x = 0;
    cin >> n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cout << x%10;
                x++;
            }
            cout << endl;
        }
}*/
 
// Menghtiung bola
 
/*int main()
{
    int q;
    cin >> q;
    int tmp=1;
    for(int i=0; i<q; i++)
    {
        int angka;
        cin >> angka;
        if(angka==tmp)
        {
            cout << "BENAR" << endl << flush;
            tmp++;
        } else
        {
            cout << "SALAH" << endl << flush;
            tmp = 1;
        }
    }
}*/
 
// Membeli mainan : Troc#3
 
/*int main()
{
    int x;
    cin >> x;
    int a[3];
    for(int i=0; i<3; i++)
    {
        cin >> a[i];
    }
 
    sort(a,a+3);
 
    int tmp = x/(a[0]+a[1]+a[2]);
 
    int ans = 3*tmp;
 
    int sisa = x-(tmp*a[0]+tmp*a[1]+tmp*a[2]);
 
    if(sisa-a[0] >= 0)
    {
        sisa -= a[0];
        ans++;
    }
    if(sisa-a[1] >= 0)
    {
        sisa -= a[1];
        ans++;
    }
    if(sisa-a[2] >= 0)
    {
        sisa -= a[2];
        ans++;
    }
 
    cout << ans;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int x[n+1];
    for(int i=1; i<=n; i++)
    {
        x[i] = i;
    }
 
    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin >> a >> b;
        swap(x[a],x[b]);
    }
 
    int q; cin >> q;
    for(int i=1; i<=q; i++)
    {
        int t;
        cin >> t;
        cout << x[t] << endl;
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    a[n];
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a[i];
        if(a[i]%n==0)
        {
            cout << 1;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if
        }
    }
 
}*/
 
//  Membangun menara :  gemastik 2016 -> greedy
 
/*int main()
{
    int n;
    cin >> n;
    int b[3];
    for(int i=0; i<n; i++)
    {
        int q;
        cin >> q;
        int mx=0,mn=0;
        for(int j=0; j<q; j++)
        {
            int x,y,z;
            cin >> x >> y >> z;
            mx += max(x,max(y,z));
            mn += min(x,min(y,z));
        }
        cout << mn << " " << mx << endl;
    }
}*/
 
// mex tahun baru : troc#18 c -> greedy
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    if(n==1)
    {
        cout << a[0];
    } else{
        sort(a,a+n);
        cout << a[0] << " ";
        for(int i=2; i<n; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[1];
    }
 
}*/
 
// segitiga tahun baru: troc#18 D -> geometry
 
/*int main()
{
    int n;
    cin >> n;
    if(n==2 || n==3 || n==5)
    {
        cout << 4;
    } else {cout << 3;}
}*/
 
// Pelajaran pangan : troc#16 B -> greedy
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
 
    int hasil = a[n] - a[1];
 
    for(int i=1; i<n; i++)
    {
        hasil = min(hasil,a[i]+m-a[i+1]);
    }
 
    cout << hasil;
}*/
 
// Pertahanan wifi : Troc 11 B -> Greedy
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    sort(a,a+n);
    int ans = a[m-1] - a[0];
 
    for(int i=m-1; i<n; i++)
    {
        ans = min(ans, a[i] - a[i-m+1]);
    }
 
    cout << ans;
}*/
 
 
/*int main()
{
    ll n,tmp1=0;
    cin >> n;
    for(int i=0; i<=n; i++)
    {
        ll a;
        cin >> a;
        tmp1 += a*pow(2,i);
    }
 
 
    ll tmp2 = pow(2,n);
    if(tmp1%tmp2 != 0)
    {
        cout << -1;
    } else
    {
        cout << tmp1/tmp2;
    }
}*/
 
/*int main()
{
    int n,ans;
    cin >> n;
    int g1=0,g2=0,b1=0,b2=0,k1=0,k2=0;
    char x,y;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x=='G')
        {
            g1++;
        }
        if(x=='B')
        {
            b1++;
        }
        if(x=='K')
        {
            k1++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin >> y;
        if(y=='G')
        {
            g2++;
        }
        if(y=='B')
        {
            b2++;
        }
        if(y=='K')
        {
            k2++;
        }
    }
 
    ans = min(g1,k2) + min(k1,b2) + min(b1,g2);
    cout << ans;
} */
 
 
 
/*int main()
{
    int n,k,ans;
    cin >> n >> k;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    sort(a,a+n);
 
    ll mn = 1e9;
 
    for(int i=0; i<=n-k; i++)
    {
        mn = min(mn, a[i+k-1] - a[i]);
        ans = mn;
    }
 
    cout << ans;
}*/
 
// Mengangkut bebek : OSP 2022
 
/*int main()
{
    ll k,n;
    cin >> k;
    ll a[k],b[k];
    pair <ll, ll> p[k];
    for(int i=0; i<k; i++)
    {
        cin >> p[i].second;
    }
    for(int i=0; i<k; i++)
    {
        cin >> p[i].first;
    }
    sort(p,p+k+1);
 
    cin >> n;
    ll c[n];
 
    for(int i=0; i<n; i++)
    {
        cin >> c[i];
    }
    sort(c,c+n,greater<ll>());
    ll ans=0;
    int j=0;
 
    for(int i=0; i<n; i++)
    {
        ans += p[j].first * c[i];
        p[j].second--;
        if(p[j].second == 0)
        {
            j++;
        }
    }
 
    cout << ans;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int tmp=0,cnt=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(tmp!=x)
        {
        while(cnt <= n && a[cnt] != x)
        {
            cnt++;
        }
        tmp = x;
        }
    }
 
    if(cnt <= n)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
}*/
 
/*int a,mn=1e4,mx=0;
 
int main()
{
    while(cin >> a)
    {
        if(a==0)
        {
            cout << mn << " " << mx << endl;
            mn = 1e4;
            mx = 0;
        } else
        {
            mx = max(mx,a);
            mn = min(mn,a);
        }
    }
    cout << mn << " " << mx;
 
}*/
 
/*int main()
{
    string s;
 
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
       // cin >> s[i];
        if(s[i] - 2 < 65 && s[i] != ' ')
        {
            s[i] = s[i] + 24;
            cout << s[i];
        }
        else if(s[i] != ' ')
        {
            s[i] -= 2;
            cout << s[i];
        }
        else{cout << s[i];}
    }
}*/
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin  >> a[i];
    }
 
    sort(a,a+n);
}*/
 
/*ll n,m,a[265000];
 
ll binser(ll m, ll r)
{
    ll l=0;
    ll ans=0;
    ll mid,jml;
    while(l<=r)
    {
    mid = (l+r)/2;
    jml = 0;
    for(int i=0; i<n; i++)
    {
        jml += mid/a[i];
    }
    if(jml<m)
    {
        l = mid+1;
    } else
    {
        ans = mid;
        r = mid-1;
    }
    }
    return ans;
}
 
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << binser(m+1, a[0]*m) - binser(m,a[0]*m);
}*/
 
/*int main()
{
    ll n;
    cin >> n;
    ll a[n];
    cin >> a[0];
    for(int i=1; i<n; i++)
    {
        cin >> a[i];
        a[i] += a[i-1];
    }
 
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int x;
        cin >> x;
        int ans = lower_bound(a,a+n,x)-a;
        cout << ans+1 << endl;
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n],b[n],mx=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
        mx = max(mx,a[i]*b[i]);
    }
 
    cout << mx;
}*/
 
/*ll n,m;
 
int main()
{
    cin >> n >> m;
    if(m==1)
    {
        cout << n-1;
    }
    else if(n==1)
    {
        cout << m-1;
    }
    else{
        cout << (m-1)*n;
    }
}*/
 
/*int main()
{
    ll t,a,b;
 
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        cout << a+b-1 << endl;
    }
}*/
 
/*string code;
ll n,b1=0,b2=0,b3=0;
char a;
 
int main()
{
    cin >> code >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a=='1')
        {
            b1 += 1;
        }
        if(a=='2')
        {
            b2 += b1;
        }
        if(a=='3')
        {
            b3 += b2;
        }
    }
    cout << b3 << endl;
}*/
 
/*int main()
{
    cout << "0" << " " << "9223372036854775808" << endl;
    cout << "9223372036854775808" << " " << "9223372036854775808" << endl;
}*/
 
/*int main()
{
    ll n,ans=0; cin >> n;
 
    for(int i=0; i<n; i++)
    {
        ll x; cin >> x;
        ans += x;
    }
    cout << ans/2;
}*/
 
/*ll k,n,v[502],w[502],dp[502][2001],arr[502];
 
void solve(ll i, ll k)
{
    for(int c = 0; c<= k; c++)
    {
        dp[0][c] = 0;
    }
    for(int i=1; i <= n; i++)
    {
        for(int c=0; c<=k; c++)
        {
            if(c >= w[i])
            {
                dp[i][c] =  max(dp[i-1][c], dp[i-1][c-w[i]]+v[i]);
            } else
            {
                dp[i][c] = dp[i-1][c];
            }
        }
    }
}
 
int main()
{
    cin >> k >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> w[i] >> v[i];
    }
 
    solve(n,k);
 
    ll l=n,r=k,x=0;
    while(l>0 && r>0)
    {
        while(dp[l][r] == dp[l][r-1])
        {
            r--;
        }
        while(dp[l][r] == dp[l-1][r])
        {
            l--;
        }
        arr[x] = l;
        x++;
        r -= w[l]; l--;
    }
    sort(arr,arr+x);
 
    for(int i=0; i<x; i++)
    {
        cout << arr[i] << endl;
    }
}*/
 
/*int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    while(n>0)
    {
            cout << "Anak ayam turunlah " << n << endl;
            if(n-1!=0)
            {
            cout << "Mati satu tinggallah " << n-1 << endl;
            } else{cout << "Mati satu tinggallah induknya" << endl;}
        n--;
    }
}*/
 
/*ll mod = 1e9+7;
 
ll t,n,k,a,b;
 
ll tambah(ll x, ll y)
{
    return ((x%mod) + (y%mod)) % mod;
}
 
ll kurang(ll x, ll y)
{
    return ((x%mod) - (y%mod)) % mod;
}
 
ll kali(ll x, ll y)
{
    return ((x%mod) * (y%mod)) % mod;
}
 
ll pang(ll x, ll y)
{
    if(y==0){return 1;}
        int ans = pang(x,y/2);
        ans = kali(ans,ans);
        if(y%2 == 1)
        {
            ans = kali(ans,x);
        }
    return ans;
}
 
ll bagi(ll x, ll y)
{
    return kali(x,pang(y,mod-2));
}
 
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        a = kali(n, kurang(pang(n,k),1));
        b = kurang(n,1);
        cout << bagi(a,b) << endl;
    }
    return 0;
}*/
 
/*ll pang(ll x, ll y)
{
    if(y==0)
    {
        return 1;
    }
    else{
        return x * pang(x, y-1);
    }
}
 
int main()
{
    int x,y;
    cin >> x >> y;
    cout << pang(x,y);
}*/
 
/*ll tmp[1001];
ll dp(ll x)
{
    if(x==1 || x==2)
    {
        return 1;
    }
    if(x==3)
    {
        return 2;
    }
    if(tmp[x] != 0)
    {
        return tmp[x];
    }
    tmp[x] = (dp(x-1) + dp(x-3)) % 1000000;
    return tmp[x];
}
 
int main()
{
    int n;
    cin >> n;
    cout << dp(n);
}*/
 
/*int x,a,b;
char y;
 
int main()
{
    for(int i=0; i<6; i++)
    {
        cin >> x >> y;
        if(y=='A')
        {
            a++;
        } else{b++;}
    }
    if(b>=3)
    {
        cout << 100;
    } else if(b==2)
    {
        cout << 70;
    } else{cout << 40;}
}*/
 
/*int main()
{
    string v;
    cin >> v;
 
    bool flag = false;
 
    if(v[0] != v[1])
    {
        if(v[0] != v[2])
        {
            cout << 1;
        }
        else{cout << 2;}
    }
 
    for(int i=2; i<v.length(); i++)
    {
        if(v[i] != v[i-1])
        {
            if(v[i] != v[i-2])
            {
                cout << i+1;
            }
        }
    }
 
}*/
 
/*int main()
{
    int n, tmp[100][100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp[0][i];
    }
 
    for(int j=1; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            tmp[j][i] = tmp[j-1][i+1] - tmp[j-1][i];
        }
    }
 
    for(int i=0; i<n; i++)
    {
        if(i<n)
        {
            cout << tmp[i][0] << " ";
        }
    }
 
}*/
 
/*int main()
{
    int a,b;
    cin >> a >> b;
    int x;
    cin >> x;
    vector <int> v;
    for(int i=0; i<a; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    for(int i=0; i<b; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
 
    sort(v.begin(), v.end());
 
    cout << v[x-1];
}*/
 
/*int main()
{
    string s;
    cin >> s;
    int tmp = ceil(sqrt(s.length()));
    for(int i=s.length(); i<tmp*tmp; i++)
    {
        s += ".";
    }
 
    for(int i=0; i<tmp; i++)
    {
        if(i%2==0)
        {
            for(int j=i*tmp; j<(i+1)*tmp; j++)
            {
                cout << s[j];
            }
        }
        else
        {
            for(int j = (i+1)*tmp-1; j>i*tmp-1; j--)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}*/
 
/*ll newnum(ll x)
{
    if(x%4==0) {return x;}
    if(x%4==1) {return 1;}
    if(x%4==2) {return x+1;}
    return 0;
}
 
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x >> y;
        ll a = newnum(x-1); ll b = newnum(y);
        cout << (a^b) << endl;
    }
}*/
 
/*int main()
{
    ll n; cin >> n;
    vector<pair <ll, ll>> p(n);
    for(int i=0; i<n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.rbegin(), p.rend());
    ll mx = p[0].second;
    ll ans = 1;
    for(int i=1; i<n; i++)
    {
        if(p[i].second > mx)
        {
            mx = p[i].second;
            ans++;
        }
    }
    cout << ans;
}*/
 
// wildcard
 
/*int main()
{
    string s,a,b,t,c,d;
    int n,btg;
    cin >> s >> n;
    string tmp[n];
    btg = s.find("*");
    a = s.substr(0,btg);
    b = s.substr(btg+1);
    int pjg = b.length();
    for(int i=0; i<n; i++)
    {
        cin >> t;
        if(s.length()-1 > t.length())
        {
            continue;
        }
        c = t.substr(0,btg);
        d = t.substr(t.length()-pjg,pjg);
        if(a==c && b==d)
        {
            tmp[i] = t;
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout << tmp[i] << endl;
    }
}*/
 
/*int main()
{
    string s;
    getline(cin,s);
    if(s.find("ideafuse") != -1)
    {
        cout << s.find("ideafuse") + 1;
    } else{cout << -1;}
}*/
 
/*int main()
{
    double n;
    cin >> n;
    double ans = (n-1)/2 * n/2;
    cout << fixed << setprecision(2) << ans;
}*/
 
/*int main()
{
    double n,k;
    cin >> n >> k;
    for(int i=0; i<k; i++)
    {
        int x;
        cin >> x;
    }
 
    cout << fixed << setprecision(5) << (1/n)*(n-k-1)/(n-1);
}*/
 
/*int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=1; i<=n; i++)
    {
        cin >> s[i];
    }
 
}*/
 
// Pola string
 
/*int main()
{
    string s;
    cin >> s;
    int tmp = ceil(sqrt(s.length()));
    for(int i=s.length(); i<tmp*tmp; i++)
    {
        s += ".";
    }
 
    for(int i=0; i<tmp; i++)
    {
        if(i%2==0)
        {
            for(int j = i*tmp; j<(i+1)*tmp; j++)
            {
                cout << s[j];
            }
        }
        else
        {
            for(int j = (i+1)*tmp-1; j>(i*tmp)-1; j--)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}*/
 
// Angka 1
 
/*int main()
{
    int n;
    cin >> n;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans+=i;
        cout << ans << endl;
    }
}*/
 
// koin asing
/*int main()
{
    string s;
    cin >> s;
 
    if(s[0] != s[1])
    {
        if(s[0] != s[2])
        {
            cout << 1;
        } else{cout << 2;}
    }
 
    for(int i=2; i<s.length(); i++)
    {
        if(s[i] != s[i-1])
        {
            if(s[i] != s[i-2])
            {
                cout << i+1;
            }
        }
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
 
    if(n%2==1)
    {
        for(int i=1; i<=n/2; i++)
        {
            swap(s[i],s[n-i]);
        }
    } else
    {
        for(int i=1; i<n/2; i++)
        {
            swap(s[i],s[n-i]);
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout << s[i] << endl;
    }
 
}*/
 
/*int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
 
    for(int i=0; i<n/2; i++)
    {
        cout << s[i] << endl << s[n-1-i] << endl;
    }
    if(n%2!=0)
    {
        cout << s[n/2];
    }
}*/
 
/*int main()
{
    ll n,k,ans=1,a=0,mx=0,x;
    cin >> n >> k;
    while(n--)
    {
        a++;
        cin >> x;
        mx = max(mx,x);
        if(a==k)
        {
            ans += mx+1;
            a = 0;
            mx = 0;
        }
    }
 
    if(a>0)
    {
        ans+=mx+1;
    }
 
    cout << ans;
 
}*/
 
/*int main()
{
	string k; //ma*
	ll n,x,y,c; // unsigned mulai dari 0 - 65535
	vector<string>vn; //mula, makan, minum, main, hama
	bool depan;
 
	cin >> k >> n; //k=ma*    n=5
	vn.resize(n);
 
	for(x=0; x<n; x++) {  cin >> vn[x]; }
	for(x=0; x<=0; x++)     { 	if(k[x]=='*') 	{ depan=1; } else { depan=0; }  }
 
 
	if(depan==0) //contoh ma*
	{
		for(x=0; x<vn.size(); x++)
		{
			c=0;
			for(y=0; y<k.length()-1; y++)
			{   if(k[y]==vn[x][y]) {  c++;   }  else { break; }	}
 
			if(c==k.length()-1) {  cout << vn[x]<< endl; }
		}
	}
	else if(depan==1) //contoh *ma
	{
		reverse(k.begin(),k.end()); //putar string k
		for(x=0; x<vn.size(); x++)
		{
			c=0;
			reverse(vn[x].begin(),vn[x].end()); //putar string dalam vektor vn
 
			for(y=0; y<k.length(); y++)
			{   if(k[y]==vn[x][y]) {  c++; } else { break; }     }
 
			if(c==k.length()-1)
			{
			      reverse(vn[x].begin(),vn[x].end());
			      cout << vn[x]<< endl;
			}
                              }
              }
	else
	{
   	          for(x=0; x<vn.size(); x++)  { cout << vn[x]<< endl;  }
              }
}*/
 
/*int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll diskon,pajak,tmp;
    diskon = n*a/100;
    tmp = n-diskon;
    pajak = tmp*b/100;
    cout << tmp+pajak;
}*/
 
/*int main()
{
    string s = "halo dunia";
    string x;
    getline(cin,x);
    short i=10,ans=0;
    while(i--)
    {
        if(x[i] == s[i] || x[i] + 32 == s[i])
        {
            ans++;
        }
    }
    cout << ans;
}*/
 
/*int main()
{
    string s;
    getline(cin,s);
    ll ans=1;
    ll n = s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'e')
        {
            if(s[i+1] == 'u')
            {
                ans = (3*ans)%1000000007;
            } else{ans = (2*ans)%1000000007;}
        }
    }
    cout << ans;
}*/
 
/*void solve()
{
    string s;
    cin >> s;
    if(s=="PAS")
    {
         cout <<"var data:array[1..10000] of longint;" << endl;
         cout <<"   n,i,j,temp:longint;" << endl;
         cout <<"begin" <<endl;
         cout <<"  readln(n);"<< endl;
         cout <<"  for i:=1 to n do readln(data[i]);" << endl;
         cout <<"  for i:=1 to n-1 do" << endl;
         cout <<"     for j:=i+1 to n do"<< endl;
         cout <<"       if (data[i]>data[j]) then" << endl;
         cout <<"       begin" << endl;
         cout <<"         temp:=data[i];" << endl;
         cout <<"         data[i]:=data[j];" << endl;
         cout <<"         data[j]:=temp;"<< endl;
         cout <<"       end;" << endl;
         cout <<"  for i:=1 to n do writeln(data[i]);" << endl;
         cout <<"end." << endl;
    }
    else
    {
        cout <<"int data[10001];" << endl;
        cout <<"int n,i,j,temp;" << endl;
        cout <<"int main(){" << endl;
        cout <<"  scanf(\"%d\",&n);" << endl;
        cout <<"  for (i=1;i<=n;i++) scanf(\"%d\",data[i]);" << endl;
        cout <<"  for (i=1;i<=n-1;i++)" << endl;
        cout <<"    for (j=i+1;j<=n;j++)" << endl;
        cout <<"      if (data[i]>data[j]){" << endl;
        cout <<"        temp=data[i];" << endl;
        cout <<"        data[i]=data[j];" << endl;
        cout <<"        data[j]=temp;" << endl;
        cout <<"      }" << endl;
        cout <<"  for (i=1;i<=n;i++) printf(\"%d\\n\",data[i]);" << endl;
        cout <<"  return 0;" << endl;
        cout <<"}" << endl;
    }
}
 
int main()
{
    solve();
    return 0;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    if(n>=1000) {cout << 1000 << " " << n/1000 << endl; n%=1000;}
    if(n>=500) {cout << 500 << " " << n/500 << endl; n%=500;}
    if(n>=200) {cout << 200 << " " << n/200 << endl; n%=200;}
    if(n>=100) {cout << 100 << " " << n/100 << endl; n%=100;}
    if(n>=50) {cout << 50 << " " << n/50 << endl; n%=50;}
    if(n>=20) {cout << 20 << " " << n/20 << endl; n%=20;}
    if(n>=10) {cout << 10 << " " << n/10 << endl; n%=10;}
    if(n>=5) {cout << 5 << " " << n/5 << endl; n%=5;}
    if(n>=2) {cout << 2 << " " << n/2 << endl; n%=2;}
    if(n>=1) {cout << 1 << " " << n/1 << endl;}
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    int a,b; cin >> a >> b;
    int x1=(n/a)*(m/b);
    int x2=(n/b)*(m/a);
    cout << max(x1,x2);
}*/
 
/*int main()
{
    int x;
    cin >> x;
    for(int i=1; i<=x; i++)
    {
        if(i%3==0||i%5==0||i%7==0)
        {
            if(i%3==0)
            {
                cout << "Comp";
            }
            if(i%5==0)
            {
                cout << "Fest";
            }
            if(i%7==0)
            {
                cout << "Seven";
            }
            cout << " ";
        } else{cout << i << " ";}
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    vector <int> v;
    for(int i=0; i<n*2; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    int ans=0,tmp=n*2-1;
    for(int i=tmp; i>=n; i--)
    {
        ans+=v[i];
    }
    cout << ans;
}*/
 
/*int main()
{
    string s,t;
    cin >> s >> t;
    cout << s+t;
}*/
 
/*int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        for(intj=0; j<4; j++)
        {
            cin >> a[j];
        }
    }
}*/
 
/*int main()
{
    string x,y;
    cin >> x >> y;
    int n = x.find(y);
    if(n!=-1)
    {
        cout << "TIDAK";
    } else{cout << "YA" << endl << x+"bukansaitammar";}
}*/
 
/*int a,b,m,arr[2006],ans;
 
int main()
{
    cin >> a >> b >> m;
    for(int i=0; i<m*m; i++)
    {
        if(arr[a] == 0)
        {
            arr[a]++;
            ans++;
        }
        int tmp = (a+b)%m;
        a = b;
        b = tmp;
    }
    cout << ans << endl;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n+1];
    vector <int> v;
    for(int i=0; i<=n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            v.pb(a[i]);
        } else{
            if(a[i] != a[i-1])
            {
                v.pb(a[i]);
            }
        }
    }
 
    if(v.size()<n)
    {
        cout << 0;
    }
    else if(v.size()==n)
    {
        cout << 1;
    }
    else{cout << n+1;}
}*/
 
/*int main()
{
    int t,m,n;
    cin >>t;
    int id[t], x[n],s1[t][n],s2[t][n],s3[t][n];
    for(int i=0; i<t; i++)
    {
        cin >> n >> m;
        cin >> id[i];
        for(int j=0; j<n; j++)
        {
            cin >> x[j] >> s1[i][j] >> s2[i][j] >> s3[i][j];
        }
    }
 
    for(int i=0; i<t; i++)
    {
        int rang = n;
        for(int j=0; j<n; j++)
        {
            if(id[i] == x[j])
            {
                for(int k=0 && k!=j; k<n; k++)
                {
                    if(s3[i][j] > s3[i][k])
                    {
                        rang--;
                    }
                    else if(s3[i][j] == s3[i][k])
                    {
                        if(s2[i][j] > s2[i][k])
                        {
                            rang--;
                        }
                        else if (s2[i][j] == s2[i][k])
                            {
                                if(s1[i][j] > s1[i][k])
                                {
                                    rang--;
                                }
                            }
                        }
                }
            }
        }
        if(rang <= m)
        {
            cout << "YA";
        } else{cout << "TIDAK";}
    }
}*/
 
/*int main()
{
    string b1,b2,a1,a2;
    vector <short> a,b,c;
    short i,y,p1,p2,mx;
    short tmp;
 
    cin >> b1 >> b2;
    p1 = b1.length();
    p2 = b2.length();
    mx = max(p1,p2);
    a.resize(100000);
    b.resize(100000);
    c.resize(mx+1);
 
    for(i=0; i<p1; i++)
    {
        a1 = b1[i];
        a[p1-1-i] = stoi(a1);
    }
 
    for(int i=0; i<p2; i++)
    {
        a2 = b2[i];
        b[p2-1-i] = stoi(a2);
    }
    tmp = 0;
    for(i=0; i<=c.size(); i++)
    {
        c[i] = a[i] + b[i] + tmp;
        tmp = c[i]/10;
        c[i] = c[i]%10;
    }
    for(i=c.size()-1; i>=0; i--)
    {
        if(c[i]>0)
        {
            break;
        }
    }
 
    for(y=i; y>=0; y--)
    {
        cout << c[y];
    }
}*/
 
/*int n,d;
ll ans,a;
 
int main()
{
    cin >> n >> d >> a;
    ll cur = a; ans=1;
    for(int i=1; i<n; i++)
    {
        cin >> a;
        if(a-cur >= d)
        {
            ans++;
        }
        cur = a;
    }
    cout << ans;
}*/
 
// Dominasi sistem bintang
 
/*int main()
{
    int n,ans=0;
    cin >> n;
    pair <int, int> p[n];
    for(int i=0; i<n; i++)
    {
        cin >> p[i].first;
    }
    for(int i=0; i<n; i++)
    {
        cin >> p[i].second;
    }
    sort(p,p+n);
 
    int cur = n-2;
    for(int i=n-1; i>=0; i--)
    {
        if(i == cur) {cur--;}
        while(p[i].first == p[cur].first)
        {
            if(p[i].second > p[cur].second)
            {
                p[cur].first--;
            } else{p[i].first--;}
        }
    }
 
    for(int i=0; i<n; i++)
    {
        if(p[i].first !=0)
        {
            ans+=p[i].second;
        }
    }
    cout << ans;
}*/
 
/*ll ans=0,n;
ll p[100001];
vector<ll>tmp[100001];
 
int main()
{
    cin >> n;
    for(int i=0; i<n; i++) { cin >> p[i];}
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        tmp[p[i]].pb(x);
    }
 
    priority_queue <ll> pq;
    for(int i=100000; i>=1; i--)
    {
        for(ll j:tmp[i])
        {
            pq.push(j);
        }
        if(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
    }
 
    cout << ans;
}*/
 
// Bukit atau lembah
 
/*int main()
{
    ll x;
    cin >> x;
    ll bukit = x;
    ll lembah = x;
    ll prev = x;
    ll diff = 0;
    ll cur;
    while(cin >> x)
    {
        cur =  x;
        if(cur>prev)
        {
            bukit = cur;
           diff = max(diff, bukit-lembah);
        }
        else if(cur<prev)
        {
            lembah = cur;
            diff = max(diff, abs(lembah-bukit));
        }
        prev = cur;
    }
    cout << diff << endl;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n][10001];
    for(int i=0; i<n; i++)
    {
        cin >> a[0][i];
    }
 
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[i][j] = a[i-1][j+1] - a[i-1][j];
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout << a[i][0] << " ";
    }
}*/
 
 
/*int main()
{
    int n;
    cin >> n;
    vector <int> v;
 
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
 
    for(int i=0; i<n/2; i++)
    {
        cout << v[i] << endl << v[n-1-i] << endl;
    }
    if(n%2!=0)
    {
        cout << v[n/2];
    }
}*/
 
/*int main()
{
    ll n,m;
    cin >> n >> m;
    ll mn,mx;
    mx = (n-m)/4;
    if(n>5*m || m>n)
    {
        cout << -1 << " " << -1;
    }
    else{
    if(n <= 4*m)
    {
        mn = 0;
    } else
    {
        mn = n-(4*m);
    }
    cout << mn << " " << mx;
    }
}*/
 
/*ll eu(ll a, ll b)
{
    if(b==0){return a;}
    else{return eu(b,a%b);}
}
 
int main()
{
    ll fpb,kpk; cin >> fpb >> kpk;
    if(kpk%fpb!=0)
    {
        cout << -1 << " " << -1;
        return 0;
    }
    ll x,y;
    ll tmp = kpk/fpb;
    for(int i=1; i<=sqrt(tmp); i++)
    {
        if(eu(i,tmp/i)==1 && tmp%i==0  )
        {
            x = i;
            y = tmp/i;
        }
    }
 
    cout << x*fpb << " " << y*fpb;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    string s; int tmp=1;
 
    n = n/2+1;
    s+="G";
    while(tmp++ < n)
    {
        s+="LG";
    }
 
    cout << s.size() << endl << s;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
}*/
 
/*int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll fpb = __gcd(a,b);
    ll kpk = a*b/fpb;
    cout << kpk/a+kpk/b;
}*/
 
/*ll f(ll x)
{
    if(x<=1)
    {
        return 1;
    } else{return f(x/2)*2+x;};
}
 
int main()
{
    cout << f(1048576);
}*/
/*int n,m,ans;
 
int main()
{
    cin >> n >> m;
    vector <int> v(100005, 0);
    vector <pair <int,int>> p;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        v[a]++;
    }
 
    for(int i=0; i<m; i++)
    {
        int l,r;
        cin >> l >> r;
        p.pb(make_pair(r,l));
    }
 
    sort(p.begin(),p.end());
 
    for(int i=0; i<m; i++)
    {
        int l = p[i].second;
        int r = p[i].first;
        for(int j=l; j<=r; j++)
        {
            if(v[j] > 0)
            {
                v[j]--;
                ans++;
                goto lewat;
            }
        }
        lewat:;
    }
    cout << ans;
}*/
 
// osp 2021 (Lampu hias warna-warni)
 
/*int main()
{
    int n; cin >> n;
    string x = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    vector <int> v(26, 0);
    string s; cin >> s;
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(s[i] == x[j])
            {
                v[j]++;
                break;
            }
        }
    }
 
    sort(v.begin(), v.end());
 
    int a = v[25], b = v[24], c = v[23];
 
    if(c==0)
    {
        cout << -1 << endl;
        return 0;
    }
 
    int hasil = 3*c;
    if(a>c)
    {
        hasil++;
    }
    if(b>c)
    {
        hasil++;
    }
    cout << hasil;
 
}*/
 
// OSP 2022 (mengangkut bebek)
 
/*int main()
{
    ll k; cin >> k;
    pair <ll,ll> p[k];
 
    ll t[k],c[k];
    for(ll i=0; i<k; i++)
    {
        cin >> p[i].second;
    }
    for(ll i=0; i<k; i++)
    {
        cin >> p[i].first;
    }
 
    ll n; cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    sort(p,p+k);
    sort(a,a+n);
 
    ll z = n-1;
    ll ans = 0;
    ll i = 0;
 
    while(z>=0)
    {
        if(p[i].second > 0)
        {
            ans += p[i].first*a[z];
            z--;
            p[i].second--;
        }
        else{i++;}
    }
    cout << ans;
}*/
 
// OSP 2021 (buah)
 
/*int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll tmp = a*b/__gcd(a,b);
    ll ans = tmp/a + tmp/b;
    cout << ans;
}*/
 
// OSP 2021 (kartu)
/*int main()
{
    ll a,b; cin >> a >> b;
    ll mx = max(a,b);
    ll mn = min(a,b);
 
    while(mx%mn!=0)
    {
        ll tmp = mx-mn;
        mx = max(tmp,mn);
        mn = min(tmp,mn);
    }
 
    cout << mn;
}*/
 
// OSP 2022 (lampu hias)
 
/*int main()
{
    ll a,b,c; cin >> a >> b >> c;
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        if(x%a==0 && x%b==0 && x%c==0)
        {
            cout << "YA" << endl;
        } else{cout << "TIDAK" << endl;}
    }
}*/
 
// OSP 2020 (lari jauh)
 
/*int main()
{
    int n,k; cin >> n >> k;
    int a[n];
    cin >> a[0];
    for(int i=1; i<n; i++)
    {
        int x;
        cin >> x;
        a[i] = a[i-1]+x;
    }
 
    for(int i=0; i<k; i++)
    {
        int y;
        cin >> y;
        cout << upper_bound(a,a+n,y) - a << endl;
    }
 
}*/
 
/*int main()
{
    ll n,p,q; cin >> n >> p >> q;
    pair <int, int> a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
 
    sort(a+1,a+n+1);
 
    priority_queue<pair<int,int>>pq;
    vector <int> ans(n+1);
 
    for(int i=1,j=1; i<=n; i++)
    {
        while(a[j].first - a[i].first <= p && j<=n)
        {
            j++;
        }
        j--;
 
        pq.push({j-i+1,j});
        while(pq.top().second < i)
        {
            pq.pop();
        }
        ans[a[i].second] = pq.top().first;
    }
 
    for(int i=0; i<q; i++)
    {
        int x; cin >> x;
        cout << ans[x] << endl;
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    multiset <int> paket;
    while(n--)
    {
        int x;
        cin >> x;
        if(paket.lower_bound(x) != paket.end())
        {
            paket.erase(paket.lower_bound(x));
        }
        paket.insert(x);
    }
    cout << paket.size();
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    if(n%m==0)
    {
        cout << "YA";
    } else{cout << "TIDAK";}
}*/
 
/*int main()
{
    int n; cin >> n;
    if(n%4==0)
    {
        cout << "YA";
    }
    else if(n%2==0)
    {
        cout << "TIDAK";
    }
    else
    {
        if((n-1)%4==0)
        {
            cout << "TIDAK";
        }
        else{cout << "YA";}
    }
}*/
 
/*int main()
{
    int n,q; cin >> n >> q;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr,arr+n);
 
    for(int i=0; i<q; i++)
    {
        ll x; cin >> x;
        bool flag = 0;
 
        int l=0,r=n-1;
 
        while(l<r)
        {
            ll sum = arr[l] + arr[r];
            if(sum==x)
            {
                flag = 1;
                break;
            }
            else if(sum<x)
            {
                l++;
            } else
            {
                r--;
            }
        }
        if(flag)
        {
            cout << "YA" << endl;;
        } else
        {
            cout << "TIDAK" << endl;
        }
    }
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(j%2==0)
            {
                cout << "W";
            } else
            {
                cout << "B";
            }
        }
        cout << endl;
    }
}*/
 
/*int main()
{
    short n,m,x,y;
    cin >> n >> m >> x >> y;
    int cnt1=n-x;
    int cnt2=(m-y)*2;
    int hasil = cnt1+cnt2;
    if(hasil>25)
    {
        cout << "LOLOS";
    }
    else
    {
        cout << "TIDAK LOLOS";
    }
}*/
 
/*int main()
{
    ll m,a,b;
    cin >> m >> a >> b;
    if(a+b == 2*m)
    {
        if(a%2==1 && b%2==1)
        {
            cout << 1 << " ";
        } else
        {
            cout << 0 << " ";
        }
        cout << min(a,b);
    }
    else
    {
        cout << 0 << " " << min(a,b);
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    cout << (n%10==0?"Rep":"Neb");
}*/
 
/*int main()
{
    int n; cin >> n;
    ll cnt=1;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        cnt = cnt * x a% 998244353;
    }
    cout << cnt << endl;
}*/
 
/*int main()
{
    string s; cin >> s;
    short jml=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'O')
        {
            jml++;
        }
        if(jml>1)
        {
            break;
        }
    }
 
    if(jml == 1)
    {
        cout << "Ya";
    } else
    {
        cout << "Tidak";
    }
}*/
 
/*int main()
{
    int n,x,y; cin >> n >> x >> y;
    int a,b,c,d;
    int s = abs(x);
    int r = abs(y);
    int t = s+r;
    if(t>n)
    {
        cout << -1;
        return 0;
    }
 
    if((n-t)%2==0)
    {
        if(x>=0)
        {
            b=s+(n-t)/2;
            d=(n-t)/2;
            if(y>=0)
            {
                a=r;
                c=0;
            }
            else
            {
                a=0;
                c=r;
            }
        }
        else
        {
            b=(n-t)/2;
            d=s+(n-t)/2;
            if(y>=0)
            {
                a=r;
                c=0;
            }
            else
            {
                a=0;
                c=r;
            }
        }
    }
    else
    {
        cout << -1;
        return 0;
    }
 
    cout << a << " " << b << " " << c << " " << d;
}*/
 
/*int main()
{
    int n; cin >> n;
    double r,v; cin >> r >> v;
    int w[n];
 
    for(int i=0; i<n; i++)
    {
        cin >> w[i];
        if(w[i]==v)
        {
            cout << -1 << endl;
            return 0;
        }
    }
 
    double res=0;
 
    for(int i=0; i<n; i++)
    {
        res = max(res, r/abs(w[i]-v));
    }
 
    cout << setprecision(9) << res << endl;
}*/
 
/*int main()
{
    ll n; cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    ll id=0;
 
    while(id < n && a[id]==1)
    {
        id++;
    }
 
    id%=n;
    ll i=id,res=0,cnt=0;
 
    do
    {
        if(a[i] == 1)
        {
            cnt++; res+=cnt;
        }
        else
        {
            cnt=0;
        }
        i = (i+1)%n;;
    } while(i!=id);
 
    cout << res << endl;
} */
 
/*int main()
{
    ll n,m; cin >> n >> m;
    ll x=1,w=0;
    for(ll i=0; i<n; i++)
    {
        ll l,r;
        cin >> l >> r;
 
        if(x < l)
        {
            w += abs(x-l);
            x = l;
        }
        else if(x > r)
        {
            w += abs(x-r);
            x = r;
        }
    }
    cout << w << endl;
}*/
 
/*int main()
{
    ll n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int a,b; cin >> a >> b;
        cout << 2*min(a,b) << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    int odd=0,even=0;
 
    for(int i=0; i<n; i++)
    {
        ll x,y;
        cin >> x >> y;
        if((x+y)%2==0)
        {
            even++;
        } else
        {
            odd++;
        }
    }
 
    if(even==0|| odd==0)
    {
        cout << "NO" << endl;
    } else
    {
        cout << "YES" << endl;
    }
}*/
 
/*int main()
{
    int n,m,res=0;
    cin >> n >> m;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        a[i] = 0;
    }
 
    for(int i=0; i<m; i++)
    {
        int x; cin >> x;
        a[x] = (a[x]+1)%4;
    }
 
    for(int i=1; i<=n; i++)
    {
        if(a[i] == 2 || a[i] == 3)
        {
            res++;
        }
    }
    cout << res << endl;
}*/
 
/*int main()
{
    ll n; cin >> n;
    ll cnt=0;
    ll tmp=2;
 
    while(tmp<=n)
    {
        tmp*=2;
    }
 
    cout << tmp-n;
}*/
 
/*int main()
{
    ll x,y; cin >> x >> y;
    ll mn = min(x,y);
    ll mx = max(x,y);
    cout << (mn-1)*mx;
}*/
 
/*int main()
{
    ll a,b; cin >> a >> b;
    ll arr[a][b];
    ll x,y=0,z=0;
    for(ll i=0; i<a; i++)
    {
        for(ll j=0; j<b; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == -1)
            {
                x=(i+j)%2;
            }
            else if((i+j)%2 == 0)
            {
                y+=arr[i][j];
            }
            else
            {
                z+=arr[i][j];
            }
        }
    }
 
    if(x==0)
    {
        if(y>z)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl << z-y;
        }
    }
    else
    {
        if(y<z)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl << y-z;
        }
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    ll s1=0,s2=0;
 
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin >> x;
        if(n>2)
        {
            s1+=(x*pow(-1,i%2));
            s2+=(x*pow(-1,(i+1)%2));
        }
        else
        {
            s2+=(x*pow(-1,(i+1)%2));
            s1 = INT_MIN;
        }
    }
 
    cout << max(s1,s2);
}*/
 
/*int main()
{
    ll n; cin >> n;
    if(n>=100)
    {
        cout << 9;
    }
    else if(n >= 19 && n <= 99)
    {
        string s = to_string(n);
        if(s[1] == '9')
        {
            cout << n/10;
        }
        else
        {
            cout << n/10-1;
        }
    }
    else
    {
        cout << 0;
    }
}*/
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin >> x >> y;
    }
 
    int ans=n+(n-3)-m;
 
    cout << ans;
}*/
 
/*int main()
{
    ll n,m,mod=998244353,ans=1; cin >> n >> m;
 
    for(int i=1; i<=n*m-1;i++)
    {
        ans*=2;
        ans%=mod;
    }
 
    cout << ans;
}*/
 
/*int main()
{
    int n; cin >> n;
    int arr[n];
    bool eq=0,ni=0,nd=0;
 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] < arr[i-1] && i != 0)
        {
            ni = 1;
        } else if(arr[i] > arr[i-1] && i!=0)
        {
            nd = 1;
        }
        else
        {
            eq = 1;
        }
    }
 
    if(ni && nd)
    {
        cout << "NONE";
    }
    else if(eq)
    {
        if(ni)
        {
            cout << "NONINCREASING";
        }
        else if(nd)
        {
            cout << "NONDECREASING";
        }
        else
        {
            cout << "EQUAL";
        }
    }
    else if(nd)
    {
        cout << "NONDECREASING";
    }
    else if(ni)
    {
        cout << "NONINCREASING";
    }
    else
    {
        cout << "NONE";
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    for(int i=n; i>0; i--)
    {
        int tmp=0;
        for(int j=n; j>0; j--)
        {
            for(int k=n; k>0; k--)
            {
                if(k*k + j*j == i*i)
                {
                    tmp++;
                }
            }
        }
        if(tmp == 2)
        {
            cout << i;
            return 0;
        }
    }
 
    cout << -1;
}*/
 
/*int main()
{
    int a,b,c; cin >> a >> b >> c;
    int mx = max(a,max(b,c));
    for(int i=mx; i<=100; i++)
    {
        if(i%a!=0 && i%b!=0 && i%c!=0)
        {
            cout << i << endl;
            break;
        }
    }
}*/
 
/*int main()
{
    double n; cin >> n;
    cout << fixed << setprecision(1) << (n+1)/2;
}*/
 
/*int main()
{
    int n,m,r; cin >> n >> m >> r;
    int mn=min(n,m);
    cout << (mn-1)/(2*r+1)+1;
}*/
 
/*int main()
{
    int p,q,r,s,t; cin >> p >> q >> r >> s >> t;
    int x = sqrt(p*q*r*s*t);
    cout << x/(q*s) << " " << x/(r*t) << " " << x/(p*s) << " " << x/(q*t) << " " << x/(p*r);
}*/
 
/*int main()
{
    string s; cin >> s;
    int b=0,o=0,n=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'b')
        {
            b++;
        }
        else if(s[i] == 'o')
        {
            o++;
        }
        else if(s[i] == 'n')
        {
            n++;
        }
    }
 
    if(b<2||o<2||n<2)
    {
        cout << 0;
    }
    else
    {
        cout << min(b,min(o,n))-1;
    }
}*/
 
/*int main()
{
    string s,t; cin >> s >> t;
    bool flag = true;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 97)
        {
            s[i] -= 32;
        }
        if(t[i] >= 97)
        {
            t[i] -= 32;
        }
        if(s[i] != t[i])
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout << "20/20";
    } else
    {
        cout << "x_x";
    }
}*/
 
/*int main()
{
    ll a[3]; cin >> a[0] >> a[1] >> a[2];
 
    sort(a,a+3);
        if(a[0] == a[2]-1 && a[1] == a[2]-1 && a[0]+a[1] > a[2])
        {
            cout << "Ya";
        }
        else
        {
            cout << "Tidak";
        }
}*/
 
/*int main()
{
    int n; cin >> n;
    int a,b;
    if(n==1)
    {
        a = 0;
    }
    else if(n%2==0)
    {
        a = n/2;
    }
    else if(n%3==0)
    {
        a = n/3;
    }
    else if(n%5==0)
    {
        a = n/5;
    }
    else if(n%7==0)
    {
        a = n/7;
    }
    else
    {
        a = 1;
    }
 
    cout << a << " " << n-a;
}*/
 
/*int main()
{
    cout << "CHEKHOVSGUN";
}*/
 
/*int main()
{
    int a; cin >> a;
    for(int i=0; i<a*a; i++)
    {
        for(int j=0; j<a*a; j++)
        {
            int b; cin >> b;
        }
    }
 
    cout << (a*a)*(a*a+1)/2 << endl;
}*/
 
/*int main()
{
    ll a,b,c; cin >> a >> b >> c;
    ll d,e,f; cin >> d >> e >> f;
 
    bool c1=(a+d)%2;
    bool c2=(b+e)%2;
    bool c3=(c+f)%2;
 
    if(c1 && c2 && c3)
    {
        cout << 0;
    }
    else if(!c1 && !c2 && !c3)
    {
        cout << 0;
    } else
    {
        cout << 1;
    }
}*/
 
// 8 OSN 2007 Sesi 2 (pecahan biasa ke campuran)
/*int main()
{
    string s; cin >> s;
    int f = s.find('/');
    int t1 = stoi(s);
    s.erase(0,f+1);
    int t2 = stoi(s);
    int fpb = __gcd(t1,t2);
    t1 = t1/fpb;
    t2 = t2/fpb;
    if(t1/t2 <=0)
    {
        cout << t1 << "/" << t2;
    }
    else
    {
        cout << t1/t2 << " " << t1-(t1/t2)*t2 << "/" << t2;
    }
}*/
 
// kartu 2
/*int main()
{
    int n; cin >> n;
    int k; cin >> k;
    int ans=1,a[k];
 
    for(int i=0; i<k; i++)
    {
        string s; cin >> s;
        a[i] = stoi(s);
    }
 
    for(int i=1; i<k; i++)
    {
        if(a[i] < a[i-1])
        {
            ans++;
            break;
        }
        ans++;
    }
    cout << ans;
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i%2==0 && j%2==0)
            {
                cout << "#";
            }
            else if(i%2==1 && j%2==1)
            {
                cout << "*";
            }
            else
            {
                cout << "$";
            }
        }
        cout << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    int maju,mundur,kanan,kiri;
    maju = mundur = kanan = kiri = 0;
    int mx1,mx2,p=0,l=0,mn1,mn2;
    mx1 = mx2 = INT_MIN;
    mn1 = mn2 = INT_MAX;
    for(int i=0; i<n; i++)
    {
        string s; cin >> s;
        int x; cin >> x;
        if(s=="maju")
        {
            p+=x;
            mx1 = max(mx1,p);
            mn1 = min(mn1,p);
        }
        if(s=="mundur")
        {
            p-=x;
            mx1 = max(mx1,p);
            mn1 = min(mn1,p);
        }
        if(s=="kanan")
        {
            l+=x;
            mx2 = max(mx2,l);
            mn2 = min(mn2,l);
        }
        if(s=="kiri")
        {
            l-=x;
            mx2 = max(mx2,l);
            mn2 = min(mn2,l);
        }
    }
 
    p=0;
    l=0;
    if(mx1>0)
    {
        p+=mx1;
    }
    if(mn1<0)
    {
        p+=abs(mn1);
    }
    if(mx2>0)
    {
        l+=mx2;
    }
    if(mn2<0)
    {
        l+=abs(mn2);
    }
 
 
    if(p>l)
    {
        cout << p << " " << l;
    }
    else
    {
        cout << l << " " << p;
    }
}*/
 
/*int main()
{
    int w,h; cin >> w >> h;
    int n; cin >> n;
    int arr[h+1][w+1];
    memset(arr,0,sizeof(arr));
    for(int i=0; i<n; i++)
    {
        int a,b,c,d,k; cin >> a >> b >> c >> d >> k;
        for(int x=b; x<=d; x++)
        {
            for(int y=a; y<=c; y++)
            {
                arr[x][y] = k;
            }
        }
    }
 
    for(int x=1; x<=h; x++)
    {
        for(int y=1; y<=w; y++)
        {
            cout << arr[x][y];
        }
        cout << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,m,k,v; cin >> n >> m >> k >> v;
        int h[n],ans=0;
        for(int i=0; i<n; i++)
        {
            cin >> h[i];
            if(v!=h[i] && abs(v-h[i])%k == 0 && abs(v-h[i])/k < m)
            {
                ans++;
            }
        }
        cout << ans << endl;
 
    }
}*/
 
/*int main()
{
    ll n,ans=0; cin >> n;
    ll a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        ans+=n*a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
        ans+=n*b[i];
    }
 
    cout << ans << endl;
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    if(n%4==0 && m%4==0)
    {
        cout << "Yes" << endl;
    } else
    {
        cout << "No" << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    set<int>s;
    for(int i=0; i<n; i++)
    {
        int a; cin >> a;
        s.insert(a);
    }
    if(s.size()==1)
    {
        cout << 1;
    }
    else if(s.size() == n)
    {
        cout << n;
    } else{cout << n-1;}
}*/
 
/*int main()
{
    start;
    cin.tie(0);cout.tie(0);
 
    string s; int x; cin >> s >> x;
    int n,k,q; cin >> n >> k >> q;
    vector <int> v;
    if(k==2)
    {
        string resp;
        for(int i=1; i<=n; i++)
        {
            cout << 2 << " " << i << " " << n+1 << endl;
            cin >> resp;
            if(resp=="bisajadi"){v.push_back(i);}
        }
        cout << v.size() << " ";
        for(int i: v){cout << i << " ";};
        cout << endl;
        cin >> resp;
        if(resp=="ya"){return 0;}
    }
    if(q>=n+1)
    {
        string resp;
        for(int i=1; i<=n; i++)
        {
            cout << 1 << " " << i << endl;
            cin >> resp;
            if(resp=="ya"){cout << 1 << " " << i << endl; return 0;}
            else if(resp=="bisajadi"){v.push_back(i);}
        }
        cout << v.size() << " ";
        for(int i: v) {cout << i << " ";}
        cout << endl;
        cin >> resp;
        if(resp=="ya"){return 0;}
    }
 
    int l=1,r=n,ans=-1;
    string resp;
    while(l<=r)
    {
        int m = (l+r)/2;
        cout << 1 << " " << m << endl;
        cin >> resp;
        if(resp=="bisajadi")
        {
            ans = m;
            l = m+1;
        }
        else if(resp=="tidak")
        {
            r = m-1;
        }
        else
        {
            return 0;
        }
    }
    cout << ans << " ";
    for(int i=1; i<=ans; i++){cout << i << " ";}
    cout << endl;
    cin >> resp;
    if(resp == "ya"){return 0;}
 
    return 0;
}*/
 
/*int main()
{
    ll n,q; cin >> n >> q;
    ll awal=0,akhir=0;
    while(q--)
    {
        ll x,y,z; cin >> x >> y >> z;
        if(x==1)
        {
            if(y==n)
            {
                awal+=z;
                akhir+=z;
            }
            else
            {
                awal+=z;
            }
        }
        else if(x==2)
        {
            if(y==n)
            {
                awal-=z;
                akhir-=z;
            }
            else
            {
                akhir-=z;
            }
        }
    }
 
    cout << max(abs(awal),abs(akhir)) << endl;
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    bool flag=0;
 
    for(int i=0; i<n; i++)
    {
        for(int i=0; i<m; i++)
        {
            int x; cin >> x;
            if(x==1)
            {
                flag = 1;
            }
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    pair <int,int> p[n];
    for(int i=0; i<n; i++)
    {
        int x,y; cin >> x >> y;
        p[i] = {x+y,x};
    }
 
    sort(p,p+n);
 
    int cnt=0;
    int startTime=0;
    for(int i=0; i<n; i++)
    {
        if(p[i].second >= startTime)
        {
            cnt++;
            startTime = p[i].first;
        }
    }
    cout << cnt << endl;
}*/
 
/*int main()
{
    int n; cin >> n;
    string s1,s2; cin >> s1 >> s2;
    int cnt=0;
    bool flag=0;
    for(int i=0; i<n; i++)
    {
        if(s1[i] > s2[i])
        {
            if(flag == 0)
            {
                cnt++;
                flag = 1;
            }
 
        }
        else if(s1[i] < s2[i])
        {
            flag = 0;
        }
    }
    cout << cnt << endl;
}*/
 
/*int main()
{
    string sub; cin >> sub;
    int z; cin >> z;
    int n; cin >> n;
    int idx[1001];
    int ans[n+1];
    pair <int,int> p[n+1];
    for(int i=1; i<=n; i++)
    {
        int t,a,b; cin >> t >> a >> b;
        idx[t] = i;
        p[i] = {t,a+1};
    }
    sort(p,p+n+1);
    for(int i=1; i<=n; i++)
    {
        ans[i] = p[i].fi;
        int j = i;
        while(p[i].se != j)
        {
            swap(ans[j], ans[j-1]);
            j--;
        }
    }
 
    for(int i=1; i<=n; i++)
    {
        cout << idx[ans[i]] << " ";
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++){cin >> v[i];}
 
    int acc=(accumulate(v.begin(),v.end(),0)+1)/2;
    int cur=0,x;
    for(int i=n-1; i>=0; i--)
    {
        cur+=v[i];
        if(cur>acc)
        {
            x = v[i];
            break;
        }
    }
    cout << (x<acc ? "YES" : "NO") << endl;
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        char c; cin >> c;
        if(c=='c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='r'||c=='s')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    bool flag=0;
    int x=0,y=0;
    while(t--)
    {
        int n; cin >> n;
        for(int i=0; i<n; i++)
        {
            char c; cin >> c;
            if(c=='U')
            {
                y++;
            }
            if(c=='D')
            {
                y--;
            }
            if(c=='R')
            {
                x++;
            }
            if(c=='L')
            {
                x--;
            }
            if(x==1 && y==1)
            {
                flag = 1;
            }
        }
            if(flag)
            {
            cout << "YES" << endl;
            }
            else
            {
            cout << "NO" << endl;
            }
            x=0;
            y=0;
            flag = 0;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int i=0,z=n-1,cnt=0;
        int p1=s[i];
        int p2=s[z];
        bool flag = 0;
        while(p1!=p2)
        {
            i++;
            z--;
            p1=s[i];
            p2=s[z];
            cnt+=2;
            if(cnt>=n)
            {
                flag = 1;
            }
        }
        if(flag)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n-cnt << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        ll sum=0,cnt=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            if(v[i] < 0)
            {
                v[i] = -v[i];
                cnt++;
            }
            sum+=v[i];
        }
 
        sort(v.begin(),v.end());
        if(cnt%2==1)
        {
            sum -= 2*v[0];
        }
 
        cout << sum << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a,b,c; cin >> a >> b >> c;
        if(a+b==c)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int m=0,b=0;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            if(x%2==0)
            {
                m+=x;
            }
            else
            {
                b+=x;
            }
        }
        if(m>b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if(s.length()==1)
        {
            cout << "YES" << endl;
            continue;
        }
        bool flag = 1;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(s[i] == s[j])
                {
                    if((i+j)%2==1)
                    {
                        flag = 0;
                    }
                }
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n,q; cin >> n >> q;
        ll arr[n+1];
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<q; i++)
        {
            ll x,y,k; cin >> x >> y >> k;
            ll sum=0;
            for(int i=1; i<=n; i++)
            {
                if(i>=x && i<=y)
                {
                    sum+=k;
                }
                else
                {
                    sum+=arr[i];
                }
            }
            if(sum%2==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        int a,b; cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    ll prev=0,ans=0;
 
    for(int i=0; i<v.size(); i++)
    {
        prev = v[i].second;
        int j=i+1;
        while(v[j].first <= prev)
        {
            j++;
        }
        i=j-1;
        ans++;
    }
    cout << ans << endl;
}*/
 
/*int main()
{
    int n; cin >> n;
    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        ll a,b; cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
 
    ll prev=0,mx=INT_MIN,ans=0;
    for(int i=0; i<n; i++)
    {
        prev = v[i].second;
        ll tmp=0;
        ll j=i;
        while(v[j].first<=prev && j<n)
        {
            j++;
            tmp++;
        }
        if(tmp>mx)
        {
            ans = v[i].first;
            mx = tmp;
        }
        i=j-1;
    }
    cout << ans << endl;
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int ans=0;
        string c = {"codeforces"};
        for(int i=0; i<10; i++)
            {
                if(s[i]!=c[i])
                {
                    ans++;
                }
            }
            cout << ans << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <int> v(n);
        int mx=0,tmp=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                tmp++;
                mx = max(mx,tmp);
            }
            else
            {
                tmp=0;
            }
        }
        cout << mx << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll mn1=2e10+10,mn2=2e10+10,mn3=2e10+10;
        for(int i=0; i<n; i++)
        {
            ll a; cin >> a;
            string b; cin >> b;
            if(b=="11")
            {
                mn3 = min(mn3,a);
            }
            else if(b=="01")
            {
                mn1 = min(mn1,a);
            }
            else if(b=="10")
            {
                mn2 = min(mn2,a);
            }
        }
        ll ans = min(mn3,mn2+mn1);
        if(ans >=2e10+10)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n][n];
        int mx=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i=n; i>=1; i--)
        {
            for(int j=1; j<=i-1; j++)
            {
                a[i-1][j] = max(a[i-1][j]+a[i][j],a[i-1][j]+a[i][j+1]);
            }
        }
        cout << a[1][1] << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        int neg=0,ans=1;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            ans*=a[i];
            if(a[i] < 0)
            {
                neg++;
            }
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(abs(a[i])>abs(a[j]))
                {
                    swap(a[i],a[j]);
                }
            }
        }
        if(n==5)
        {
            cout << ans << endl;
        }
        else
        {
            if(neg%2==0)
            {
                ans = 1;
                for(int i=n-1; i>=n-5; n--)
                {
                    ans*=a[i];
                }
            }
            else
            {
                ans = 1;
 
            }
        }
    }
}*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;



void cin_massive(int s[],int a)
{
    for(int h = 0;h < a;++h)
        cin >> s[h];
}
void cout_massive(int y[],int u,string d)
{
    for(int h = 0;h < u;++h)
    {
        cout << y[h];
        if(h < u - 1)
            cout << d;
    }
}
void cin_massive_string(string s[],int a)
{
    for(int h = 0;h < a;++h)
        cin >> s[h];
}
void cout_massive_string(string y[],int u,string d)
{
    for(int h = 0;h < u;++h)
    {
        {
        cout << y[h];
        if(h > u - 1)
            cout << d;
        }
    }
}
void byn_is_massive(int h[],int f,int j)
{
    for(int hg = 0;hg < f;++hg)
        h[hg] = h[hg] + j;
}

/*
int main() if(ace % sda != 0)
    qef = qef + 1;
 if(er % sda != 0)
   kol = kol + 1;
{
 int ace;
 int er = 0;
 int sda = 5;
 int qty = 0;
 cin >> ace;
 for (;er + sda <= ace;)
 {
er = er + sda;
qty = qty + 1;
 }
 if(er != ace)
 qty = qty + 1;
cout << qty;
 }
 */
/*
int main()
{
    int a;
    cin >> a;
    cout << (a+4)/5;
}
*/
/*
int main()
{
int ace;
int er;
int sda
int as = 0;
cin >> ace >> er >> sda;
as = as + ace*er*sda;
if(ace == 1)
as = as + sda;
else if(er == 1)
as = as + max(ace,(er,sda));
else if(sda == 1)
as = as + ace;
else if(ace == 1 && er == 1)
as = as + 2;
if(ace == 1 && er == 1 && sda == 1)
as = 3;
if (ace == 1 && sda == 1)
as = ace + er + sda;
cout << as;
return 0;
}
*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int as = 0;
  int sos = 1;
  cin >> ace >> er >> sda;
  for(;sos < sda + 1;)
  {
as = as + sos;
sos = sos + 1;
  }
 as = as*ace;
 as = as - er;
 if (as < 0)
 cout << 0;
 else
 cout << as;
 return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int big;
    cin >> ace >> er;
    big = ace;
    int sda = 0;
    int sd = 0;
    int ert = 0;
    if(ace < er)
        cout << ace;
    else if(ace == er)
        cout << ace + 1;
    else if(ace > er)
    {
        for(;ace > er;)
        {
            if(ace <= er && ace %er != 0)
                sda = sda + 2;
            if(ert == 0 || ace <= er && ace %er != 0)
                sda = sda + ace;
            if(ace > er)
                sda = sda + ace/er;
         if(ace %2 == 1)
            ace = ace + 1;
            ace = ace/er;
        ert = 1;
        }
        cout << sda;
    }
return 0;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda = 0;
cin >> ace >> er;
if(ace < er)
cout << ace;
if(ace == er)
cout << ace + 1;
if(ace > er)
{
sda = ace/er;
ace = ace + ace/er;
ace = ace + sda/er;
cout << ace;
}
return 0;
}
*/
/*
int main()
{
 string s;
 int ace;
    cin >> s;
 if (s[0] > 90)
 s[0] = s [0] - 32;
 cout << s;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
 int wef;
 int kol;
 int weft;
 int sdak;
 cin >> ace;
 weft = ace;
 er = ace % 10;
 ace = ace/10;
 sda = ace % 10;
 ace = ace/10;
 wef = ace % 10;
 ace = ace/10;
 kol = ace;
for(;;)
{
 weft = weft + 1;
 sdak = weft;
 er = sdak % 10;
 sdak = sdak/10;
 sda = sdak % 10;
 sdak = sdak/10;
 wef = sdak % 10;
 sdak = sdak/10;
 kol = sdak;
 if(er != sda && er != wef && er != kol && sda != wef && sda != kol && wef != kol)
 {
  break;
 }
}
cout << weft;
return 0;
}
*/
/*
int main()
{
 string s;
 int ace;
    cin >> s;
ace = s.size();
if(s == "wjmzbmr")
cout << "CHAT WITH HER!";
else if(ace % 2 == 1)
cout << "IGNORE HIM!";
else
cout << "CHAT WITH HER!";
}
*/
/*
int main()
{
 int ace;
 int sda;
 int er;
 int wef;
 cin >> ace >> sda >> er >> wef;
 if(ace != sda && ace != er && ace != wef && sda != er && sda != wef && er != wef)
 cout << 0;
 if(ace == sda && ace != er && ace != wef && er != wef || ace == er && ace != sda && ace != wef && sda != wef || ace == wef && ace != sda && ace != er && er != sda || sda == er && sda != wef && sda != ace && wef != ace || sda == wef && sda != er && sda != ace && er != ace || er == wef && er != sda && er != ace && sda != ace)
 cout << 1;
else if(ace == sda && ace == er && ace != wef || ace == sda && ace == wef && ace != er || ace == er && ace == wef && ace != sda || sda == er && sda == wef && sda != ace)
 cout << 2;
else if(ace == sda && er == wef && ace != er || ace == er && sda == wef && ace != sda || ace == wef && sda == er && ace != sda)
cout << 2;
else if(ace == sda && ace == er && ace == wef)
 cout << 3;
 return 0;
}
*/
/*
int main()
{
  int ace;
  int sda = 0;
  int ghoiu = 0;
  string s [300];
  string ss;
  cin >> ace;
  int ty = ace - 1;
  for(;ty > -1;)
  {
   cin >> s[ty];
   ty = ty - 1;
  }
  for(;ace > 0;)
  {
    if(s[ghoiu] == "X++" || s[ghoiu] == "++X")
    sda = sda + 1;
    else if(s[ghoiu] == "X--" || s[ghoiu] == "--X")
    sda = sda - 1;
    ace = ace - 1;
    ghoiu = ghoiu + 1;
  }
  cout << sda;
  return 0;
}
*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int wef;
  int kol;
  int qef;
    cin >> ace >> er >> sda;
 wef = ace*er;
 kol = sda*sda;
 qef = wef/kol;
 if(wef%kol != 0)
 cout << qef + 1;
 else if(wef%kol == 0)
 cout << qef;
 return 0;
}
*/
/*
int main()
{
 int ace [100];
 int sda = 0;
 int k;
 int swe = 0;
 int h;
 cin >> h >> k >> ace [100];
 int d = k;
 if(h == 0 || k == 0);
 cout << 0;
 for(;;)
 {
 if(ace[sda] <= 0);
 {
  cout << 0;
  break;
 }
 if(swe == 0);
 d = d - 1;
 if(ace[d] != ace[d+1]);
 {
 cout << k;
 break;
 }
 k = k + 1;
 swe = 1;
 sda = sda + 1;
 }







*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int qer;
  int kol;
  int wef = 0;
    cin >> ace >> er >> sda >> qer >> kol;
   for(;kol > 0;)
  {
  if(kol % qer == 0 || kol % sda == 0 || kol % er == 0 || kol % ace == 0)
  wef = wef + 1;
  kol = kol - 1;
  }
    cout << wef;
    return 0;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
 int64_t qef = 0;
 int kol = 0;
 cin >> ace >> er >> sda;
 qef = ace/sda;
 kol = er/sda;
  if(ace % sda != 0)
    qef = qef + 1;
 if(er % sda != 0)
   kol = kol + 1;
 qef = qef*kol;
 cout << qef;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
    cin >> ace >> er >> sda;
 er = er + sda;
 for(;er <= 0 || er > ace;)
 {
if(er <= 0)
 er = er + ace;
if(er > ace)
 er = er - ace;
 }
cout << er;
return 0;
}
*/
/*
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    reverse(s1.begin(),s1.end());
 if(s1 == s2)
    cout << "YES";
else if(s1 != s2)
    cout << "NO";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    if(ace > er)
    {
        ace = ace - er;
        ace = ace/2;
        cout << er << " " << ace;
    }
    else if(ace < er)
    {
        er = er - ace;
        er = er/2;
        cout << ace << " " << er;
    }
    else if(ace == er)
    cout << er << " " << 0;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    int qef = 0;
    string s;
    cin >> ace >> s;
    for(;ace > 0;)
    {
         if(s[qef] == 'A')
         er = er + 1;
         if(s[qef] == 'D')
         sda = sda + 1;
         qef = qef + 1;
         ace = ace - 1;
    }
    if(sda > er)
    cout << "Danik";
    if(er > sda)
    cout << "Anton";
    if(er == sda)
    cout << "Friendship";
    return 0;
}
*/










/*
int main() if(ace % sda != 0)
    qef = qef + 1;
 if(er % sda != 0)
   kol = kol + 1;
{
 int ace;
 int er = 0;
 int sda = 5;
 int qty = 0;
 cin >> ace;
 for (;er + sda <= ace;)
 {
er = er + sda;
qty = qty + 1;
 }
 if(er != ace)
 qty = qty + 1;
cout << qty;
 }
 */
/*
int main()
{
    int a;
    cin >> a;
    cout << (a+4)/5;
}
*/
/*
int main()
{
int ace;
int er;
int sda
int as = 0;
cin >> ace >> er >> sda;
as = as + ace*er*sda;
if(ace == 1)
as = as + sda;
else if(er == 1)
as = as + max(ace,(er,sda));
else if(sda == 1)
as = as + ace;
else if(ace == 1 && er == 1)
as = as + 2;
if(ace == 1 && er == 1 && sda == 1)
as = 3;
if (ace == 1 && sda == 1)
as = ace + er + sda;
cout << as;
return 0;
}
*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int as = 0;
  int sos = 1;
  cin >> ace >> er >> sda;
  for(;sos < sda + 1;)
  {
as = as + sos;
sos = sos + 1;
  }
 as = as*ace;
 as = as - er;
 if (as < 0)
 cout << 0;
 else
 cout << as;
 return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int big;
    cin >> ace >> er;
    big = ace;
    int sda = 0;
    int sd = 0;
    int ert = 0;
    if(ace < er)
        cout << ace;
    else if(ace == er)
        cout << ace + 1;
    else if(ace > er)
    {
        for(;ace > er;)
        {
            if(ace <= er && ace %er != 0)
                sda = sda + 2;
            if(ert == 0 || ace <= er && ace %er != 0)
                sda = sda + ace;
            if(ace > er)
                sda = sda + ace/er;
         if(ace %2 == 1)
            ace = ace + 1;
            ace = ace/er;
        ert = 1;
        }
        cout << sda;
    }
return 0;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda = 0;
cin >> ace >> er;
if(ace < er)
cout << ace;
if(ace == er)
cout << ace + 1;
if(ace > er)
{
sda = ace/er;
ace = ace + ace/er;
ace = ace + sda/er;
cout << ace;
}
return 0;
}
*/
/*
int main()
{
 string s;
 int ace;
    cin >> s;
 if (s[0] > 90)
 s[0] = s [0] - 32;
 cout << s;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
 int wef;
 int kol;
 int weft;
 int sdak;
 cin >> ace;
 weft = ace;
 er = ace % 10;
 ace = ace/10;
 sda = ace % 10;
 ace = ace/10;
 wef = ace % 10;
 ace = ace/10;
 kol = ace;
for(;;)
{
 weft = weft + 1;
 sdak = weft;
 er = sdak % 10;
 sdak = sdak/10;
 sda = sdak % 10;
 sdak = sdak/10;
 wef = sdak % 10;
 sdak = sdak/10;
 kol = sdak;
 if(er != sda && er != wef && er != kol && sda != wef && sda != kol && wef != kol)
 {
  break;
 }
}
cout << weft;
return 0;
}
*/
/*
int main()
{
 string s;
 int ace;
    cin >> s;
ace = s.size();
if(s == "wjmzbmr")
cout << "CHAT WITH HER!";
else if(ace % 2 == 1)
cout << "IGNORE HIM!";
else
cout << "CHAT WITH HER!";
}
*/
/*
int main()
{
 int ace;
 int sda;
 int er;
 int wef;
 cin >> ace >> sda >> er >> wef;
 if(ace != sda && ace != er && ace != wef && sda != er && sda != wef && er != wef)
 cout << 0;
 if(ace == sda && ace != er && ace != wef && er != wef || ace == er && ace != sda && ace != wef && sda != wef || ace == wef && ace != sda && ace != er && er != sda || sda == er && sda != wef && sda != ace && wef != ace || sda == wef && sda != er && sda != ace && er != ace || er == wef && er != sda && er != ace && sda != ace)
 cout << 1;
else if(ace == sda && ace == er && ace != wef || ace == sda && ace == wef && ace != er || ace == er && ace == wef && ace != sda || sda == er && sda == wef && sda != ace)
 cout << 2;
else if(ace == sda && er == wef && ace != er || ace == er && sda == wef && ace != sda || ace == wef && sda == er && ace != sda)
cout << 2;
else if(ace == sda && ace == er && ace == wef)
 cout << 3;
 return 0;
}
*/
/*
int main()
{
  int ace;
  int sda = 0;
  int ghoiu = 0;
  string s [300];
  string ss;
  cin >> ace;
  int ty = ace - 1;
  for(;ty > -1;)
  {
   cin >> s[ty];
   ty = ty - 1;
  }
  for(;ace > 0;)
  {
    if(s[ghoiu] == "X++" || s[ghoiu] == "++X")
    sda = sda + 1;
    else if(s[ghoiu] == "X--" || s[ghoiu] == "--X")
    sda = sda - 1;
    ace = ace - 1;
    ghoiu = ghoiu + 1;
  }
  cout << sda;
  return 0;
}
*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int wef;
  int kol;
  int qef;
    cin >> ace >> er >> sda;
 wef = ace*er;
 kol = sda*sda;
 qef = wef/kol;
 if(wef%kol != 0)
 cout << qef + 1;
 else if(wef%kol == 0)
 cout << qef;
 return 0;
}
*/
/*
int main()
{
 int ace [100];
 int sda = 0;
 int k;
 int swe = 0;
 int h;
 cin >> h >> k >> ace [100];
 int d = k;
 if(h == 0 || k == 0);
 cout << 0;
 for(;;)
 {
 if(ace[sda] <= 0);
 {
  cout << 0;
  break;
 }
 if(swe == 0);
 d = d - 1;
 if(ace[d] != ace[d+1]);
 {
 cout << k;
 break;
 }
 k = k + 1;
 swe = 1;
 sda = sda + 1;
 }







*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int qer;
  int kol;
  int wef = 0;
    cin >> ace >> er >> sda >> qer >> kol;
   for(;kol > 0;)
  {
  if(kol % qer == 0 || kol % sda == 0 || kol % er == 0 || kol % ace == 0)
  wef = wef + 1;
  kol = kol - 1;
  }
    cout << wef;
    return 0;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
 int64_t qef = 0;
 int kol = 0;
 cin >> ace >> er >> sda;
 qef = ace/sda;
 kol = er/sda;
  if(ace % sda != 0)
    qef = qef + 1;
 if(er % sda != 0)
   kol = kol + 1;
 qef = qef*kol;
 cout << qef;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
    cin >> ace >> er >> sda;
 er = er + sda;
 for(;er <= 0 || er > ace;)
 {
if(er <= 0)
 er = er + ace;
if(er > ace)
 er = er - ace;
 }
cout << er;
return 0;
}
*/
/*
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    reverse(s1.begin(),s1.end());
 if(s1 == s2)
    cout << "YES";
else if(s1 != s2)
    cout << "NO";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    if(ace > er)
    {
        ace = ace - er;
        ace = ace/2;
        cout << er << " " << ace;
    }
    else if(ace < er)
    {
        er = er - ace;
        er = er/2;
        cout << ace << " " << er;
    }
    else if(ace == er)
    cout << er << " " << 0;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    int qef = 0;
    string s;
    cin >> ace >> s;
    for(;ace > 0;)
    {
         if(s[qef] == 'A')
         er = er + 1;
         if(s[qef] == 'D')
         sda = sda + 1;
         qef = qef + 1;
         ace = ace - 1;
    }
    if(sda > er)
    cout << "Danik";
    if(er > sda)
    cout << "Anton";
    if(er == sda)
    cout << "Friendship";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int fff = 0;
    int sda = 0;
    string s[200000];
    cin >> ace;
    int r = ace;
    for(;r > 0;)
     {
         cin >> s[fff];
        fff = fff + 1;
        r = r - 1;
     }
    for(;ace > 0;)
    {
        if(s[er][0] == 'T')
        sda = sda + 4;
       else if(s[er][0] == 'C')
        sda = sda + 6;
       else if(s[er][0] == 'O')
        sda = sda + 8;
       else if(s[er][0] == 'D')
        sda = sda + 12;
       else if(s[er][0] == 'I')
        sda = sda + 20;
        er = er + 1;
        ace = ace - 1;
    }
    cout << sda;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int a[10];
    int s = 5;
    int qef = 0;
    int kol;
    int wef = 0;
    cin >> ace >> kol;
    int d = ace;
     int er = ace;
    int sda = ace;
    wef = wef + kol;
    a[0] = 5;
    a[1] = 10;
    a[2] = 15;
    a[3] = 20;
    a[4] = 25;
    a[5] = 30;
    a[6] = 35;
    a[7] = 40;
    a[8] = 45;
    a[9] = 50;
    if(wef > 240)
    cout << 0;
    else if(wef <= 240)
    for(;ace > 0;)
    {
    wef = wef + s;
    s = s + 5;
    ace = ace - 1;
    }
    if(wef <= 240)
    cout << er;
    if(wef > 240)
    {
      for(;;)
      {
          qef = qef + 1;
          wef = wef - a[d - 1];
          if(wef <= 240)
          {
             sda = sda - qef;
             qef = qef - 1;
             break;
          }
          d = d - 1;
      }
      cout << sda;
      return 0;
    }
}
*/
/*
int main()
{
    int ace = 0;
    int sd;
    int ds = 0;
    int l = 0;
    int d = 0;
    int f = 0;
    int b = 0;
    string s;
    int er = 0;
    cin >> s;
    int sda = s.size();
    for(;sda > 0;)
    {
        if(s[ds] > 90)
            ace = ace + 1;
        else if(s[ds] <= 90)
            er = er + 1;
        ds = ds + 1;
        sda = sda - 1;
    }
    if(ace >= er)
        for(;d < s.size();)
        {
           if(s[l] <= 90)
            s[l] = s[l] + 32;
            d = d + 1;
            l = l + 1;
        }
        if(ace < er)
            for(;b < s.size();)
            {
              if(s[f] > 90)
                s[f] = s[f] - 32;
                f = f + 1;
                b = b + 1;
            }
            cout << s;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    int qef = 1;
    int kol = 0;
    cin >> ace >> er >> sda;
    for(;qef <= sda;)
    {
        if(qef % ace == 0 && qef % er == 0)
            kol = kol + 1;
            qef = qef + 1;
    }
    cout << kol;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    if(er - ace != 1 && er - ace != 0 && ace - er != 1 && ace - er != 0)
        cout << "NO";
    else if(er - ace == 1 || ace - er == 1)
        cout << "YES";
        else if(ace == 0 && er == 0)
         cout << "NO";
    else if(ace == er)
        cout << "YES";
    else
        cout << "NO";
        return 0;
}
*/
/*
int main()
{
   int64_t ace;
   cin >> ace;
   if(ace == 0)
    cout << 1;
   else if(ace % 4 == 0)
    cout << 6;
   else if((ace - 1) % 4 == 0)
    cout << 8;
   else if((ace - 2) % 4 == 0)
    cout << 4;
   else if((ace - 3) % 4 == 0)
    cout << 2;
    else
     cout << "NO";
     return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    int qef;
    int kol;
    int wef;
    int der;
    cin >> ace >> er >> sda >> qef;
    kol = min(ace,min(sda,qef));
    ace = ace - min(ace,min(sda,qef));
    wef = min(ace,er);
    kol = kol*256;
    wef = wef*32;
    der = kol + wef;
    cout << der;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda = 0;
    cin >> ace >> er;
    for(;ace <= er;)
    {
        ace = ace*3;
        er = er*2;
        sda = sda + 1;
    }
    cout << sda;
    return 0;
}
*/
/*
int main()
{
    int64_t ace = 2;
    int er;
    int64_t sda = 0;
    int qef = 0;
    cin >> er;
    for(;qef < er;)
    {
        sda = sda + ace;
        ace = ace*2;
        qef = qef + 1;
    }
    cout << sda;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int64_t er = 0;
    cin >> ace;
    for(;ace > 0;)
    {
        if(ace == 1000000000)
            er = er + 10;
       else if(ace >= 100000000)
            er = er + 9;
       else if(ace >= 10000000)
            er = er + 8;
       else if(ace >= 1000000)
            er = er + 7;
       else if(ace >= 100000)
            er = er + 6;
       else if(ace >= 10000)
            er = er + 5;
       else if(ace >=1000)
            er = er + 4;
       else if(ace >= 100)
            er = er + 3;
       else if(ace >= 10)
            er = er + 2;
       else if(ace < 10)
            er = er + 1;
            ace = ace - 1;
    }
    cout << er;
    return 0;
}
*/
/*
int main()
{

    int er;
    int wer = 0;
    int sd = 0;
    int qwe = 0;
    int wet = 0;
    int wef = 0;
    int e = 0;
    int d = 0;
    cin >> er;
    int i = er;
    int ee = er;
    int iop = er;
    int ace[er];
    int sda[i - 1];
    int qef[ee - 2];
    int ftg = er;
    for(;er > 0;)
    {
        cin >> ace[d];
        d = d + 1;
        er = er - 1;
    }
    for(;i - 1 > 0;)
    {
       cin >> sda[sd];
       sd = sd + 1;
       i = i - 1;
    }
    for(;ee - 2 > 0;)
    {
        cin >> qef[wer];
        ee = ee - 1;
        wer = wer + 1;
    }
    for(;ftg > 0;)
    {
        qwe = qwe + ace[e] + ace [e + 1];
        cout << qwe;
        ftg = ftg - 1;
        if(ftg == 0)
         break;
         if(iop > e)
        wet = wet + sda[e] + sda [e + 1];
         if(iop == e)
              wet = wet + sda[e];
        ftg = ftg - 1;
        if(ftg == 0)
          break;
        if(iop > e)
        wef = wef + qef[e] + qef [e + 1];
        if(iop == e)
         wef = wef + qef[e];
        e = e + 2;
    }
    qwe = qwe - wet;
    wet = wet - wef;
    cout << qwe <<'\n'; wet;
    return 0;
}
*/
/*
int main()
{
    int er = 8;
    string s;
    cin >> s;
    if(s[0] == 'a' || s[0] == 'h')
        er = er - 3;
    if(s[1] == '1' && er == 8 || s[1] == '8' && er == 8)
        cout << 5;
    else if(s[1] == '1' && er == 5 || s[1] == '8' && er == 5)
        cout << 3;
        else
    cout << er;

}
*/
/*
int main()
{
    int ace;
    int we = 0;
    cin >> ace;
    int sda = ace;
    int er[ace];
    for(;sda > 0;)
    {
        cin >> er[we];
        we = we + 1;
        sda = sda - 1;
    }
      if(ace >= 1 && er[ace - 1] == 15)
        cout << "DOWN";
      else if(ace >= 1 && er[ace - 1] == 0)
        cout << "UP";
    else if(ace == 1)
        cout << -1;
    else if(ace > 1 && er[ace - 2] - er[ace - 1] == -1)
        cout << "UP";
    else if(ace > 1 && er[ace - 2] - er[ace - 1] == 1)
        cout << "DOWN";
        return 0;
}
*/
/*
int main()
{
    string s;
    char r = '.';
    cin >> s;
    int er = 0;
    int ace = s.size();
    for(;ace > 0;--ace)
    {
        if(s[er] == 69 || s[er] == 65 || s[er] == 63 || s[er] == 117 || s[er] == 85 || s[er] == 89 || s[er] == 79 || s[er] == 121 || s[er] == 111 || s[er] == 97 || s[er] == 101 || s[er] == 105);
            s[er] = '.';

    }

}
*/
/*
int main()
{
    int64_t ace;
    cin >> ace;
    if(ace % 2 == 0)
        cout << ace/2;
    else
        cout << (ace + 1)/2 - ace - 1;
    return 0;
}
*/
/*
int main()
{
   int er;
   int ace;
   int fg = 0;
   int d = 0;
   int f = 0;
    cin >> er >> ace;
    int de = er;
    int sda[er];
    for(;er > 0;--er)
    {
        cin >> sda[d];
        d = d + 1;
    }
    for(;de > 0;)
    {
        sda[f] = sda[f] + ace;
        if(sda[f] <= 5)
            fg = fg + 1;
        f = f + 1;
        de = de - 1;
    }
    fg = fg/3;
    cout << fg;
    return 0;
}
*/
/*
int main()
{
    int ace = 0;
    int sda = 0;
    int d = 5;
    int e = 5;
    int er[5][5];
    for(int w = 0;w < 5;++w)
    {
        for(int we = 0;we < 5;++we)
        {
            cin >> er[w][we];
        }
    }
    if(er[0][0] == 1||er[0][4] == 1||er[4][0] == 1||er[4][4] == 1)
        cout << 4;
    if(er[0][1] == 1||er[1][0] == 1||er[3][0] == 1||er[0][3] == 1||er[4][1] == 1||er[1][4] == 1||er[4][3] == 1||er[3][4] == 1)
        cout << 3;
    if(er[0][2] == 1||er[2][0] == 1||er[1][1] == 1||er[3][3] == 1||er[4][2] == 1||er[2][4] == 1||er[1][3] == 1||er[3][1] == 1)
        cout << 2;
    if(er[2][1] == 1||er[1][2] == 1||er[3][2] == 1||er[2][3] == 1)
        cout << 1;
    if(er[2][2] == 1)
        cout << 0;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int ert = 0;
    int w = 0;
    int frr = 0;
    int er;
    int sda = 0;
    int f = 0;
    cin >> ace >> er;
    int qef[ace];
    for(int s = ace;s > 0;--s)
    {
        cin >> qef[sda];
        sda = sda + 1;
    }
    for(int e = ace - 1;e > 0;--e)
    {
        qef[0] = qef[0] + qef[f + 1];
        f = f + 1;
    }
    frr = frr + qef[0];
    if(qef[0] == 0)
    {
        cout << 0;
        return 0;
    }
    if(qef[0] > 0)
        for(;qef[0] > 0;)
    {
        qef[0] = qef[0] - er;
        ert = ert + 1;
    }
    if(frr < 0)
    {
         for(;frr < 0;)
        {
            frr = frr + er;
        w = w + 1;
        }
        cout << w;
        return 0;
    }
   cout << ert;
   return 0;
}
*/
/*
int main()
{
    int ace;
    int f = 0;
    int we = 0;
    int d = 0;
    int b = 0;
    cin >> ace;
    int sda = ace*2;
    int er[ace*2];
    ace = ace*2;
    for(;ace > 0;--ace)
    {
        cin >> er[f];
        f = f + 1;
    }
    for(;we < sda;)
    {
        if(er[we] > er[we + 1])
            d = d + 1;
        if(er[we] < er[we + 1])
            b = b + 1;
        we = we + 2;
    }
    if(d > b)
        cout << "Mishka";
    if(d < b)
        cout << "Chris";
    if(d == b)
        cout << "Friendship is magic!^^";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    cin >> ace >> er >> sda;
    er = er/2;
    sda = sda/4;
    er = min(ace,min(er,sda));
    er = er*7;
    cout << er;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    ace = ace/er;
    ace = ace + 1;
    er = er*ace;
    cout << er;
    return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int er = 0;
    cin >> ace;
    int d = ace;
    ace = 0;
    for(;er < d;--d)
    {
        ace = ace + d*6;
    }
    cout << ace + 1;
    return 0;
}
*/
/*
int main()
{
    int ace = 0;
    int er = 0;
    string s;
    string we;
    string e;
    cin >> s;
    int y = s.size();
    if(s.size() % 2 == 0)
    {
         cout << "NIE";
         return 0;
    }
    if(s.size() == 1)
    {
        cout << "TAK";
        return 0;
    }
    else
    {
        ace = ace + s.size();
        ace = (ace - 1)/2;
        we = s.substr(0,ace);
        e = s.substr(ace + 1,s.size());
        reverse(we.begin(),we.end());
        int a = we.size();
        for(;a > 0;)
        {
            if(we[er] == 'b')
                we[er] = 'd';
            else if(we[er] == 'B')
                we[er] = 'd';
            else if(we[er] == 'd')
                we[er] = 'b';
            else if(we[er] == 'D')
                we[er] = 'b';
                er += 1;
                a = a - 1;
        }
        if(we == e)
            cout << "TAK";
        else
            cout << "NIE";
        return 0;
    }
}
*/
/*
int main()
{
    int ace;
    int f = 0;
    cin >> ace;
    string s[ace];
    for(;ace > 0;--ace)
    {
        cin >> s[f];
        if(s[f].size() <= 10)
            cout << s[f] << '\n';
        else
            cout << s[f][0] << s[f].size() - 2 << s[f][s[f].size() - 1] << '\n';
            f = f + 1;
    }
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int d = ace;
    int s = 0;
    int dd = d;
    int er = ace;
    for(;er-1 > 0;--er)
    {
        ace = ace*dd;
        s = 1;
    }
    cout << ace;
}
*/
/*
int main()
{
    int ace;
    int er;
    int e = 1;
    cin >> ace >> er;
    for(;e <= 9;++e)
    {
        if((ace*e - er) % 10 == 0|| ace*e % 10 == 0)
        {
            cout << e;
            return 0;
        }
    }
    cout << 10;
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er = ace;
    cout << ace/2 << '\n';
    if(er % 2 == 0)
    {
       er = er/2;
       for(;er > 0;--er)
           cout << 2 << ' ';
    }
    else
    {
        er = er/2 - 1;
        for(;er > 0;--er)
            cout << 2 << ' ';
        cout << 3;
    }
    return 0;
}
*/
/*
void f(int arr[], int sz)
{
    int ee = 0;
    int rr = 1;
    int ree = 0;
    for(int i = 0;i < sz - 1;++i)
    {
        if(arr[ee] > arr[rr])
        {
            ree = arr[ee];
            arr[ee] = arr[rr];
            arr[rr] = ree;
        }
        ee = ee + 1;
        rr = rr + 1;
    }
}
int main()
{
    int ace;
    int r = 0;
    cin >> ace;
    int ew = ace;
    int e = 0;
    int er[ace];
    for(int w = ace;w > 0;--w)
    {
        cin >> er[e];
        e = e + 1;
    }
    f(er,ace);
    for(;ew > 0;--ew)
    {
        cout << er[r] << ' ';
        r = r + 1;
    }
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    for(int d = 0;d < ace;++d)
        cin >> er[d];


}
*/
/*
int main()
{
    int ace;
    string s;
    cin >> s;
    ace = s.size()/2;
    int er = 0;
    int sda = 0;
    string s1;
    string s2;
    if(s.size() % 2 == 0)
        s1 = s.substr(0,ace);
    else if(s.size() % 2 == 1)
        s1 = s.substr(0,ace);
    if(s.size() % 2 == 0)
        s2 = s.substr(ace,ace);
    else if(s.size() % 2 == 1)
        s2 = s.substr(ace + 1,ace);
        reverse(s1.begin(),s1.end());
        for(int d = 0;d < s1.size();++d)
        {
            if(s1[d] != s2[d])
                er = er + 1;
        }
        if(s.size() % 2 == 1 && er == 1 || s.size() % 2 == 1 && er == 0 || s.size() % 2 == 0 && er == 1)
            cout << "YES";
        else
            cout << "NO";
        return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    int sda = ace;
    if(er > ace)
        cout << ace;
    if(er == ace)
        cout << ace + 1;
    if(er < ace)
        for(;;)
        {
            ace = ace + sda/er;
            sda = sda/er;
            if(sda < er)
                {
                    cout << ace;
                    return 0;
                }
        }

}
*/
/*
int main()
{
    int ace;
    string s;
    cin >> ace >> s;
    string s1[ace];
    for(int d = 0;d < ace;++d)
    {
        cin >> s1[d];
    }
    if(ace % 2 == 0)
        cout << "home";
    else
        cout << "contest";
    return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t sda;
    cin >> ace >> er >> sda;
    if(er < ace && sda < ace)
        cout << -1;
    else
        cout << er/ace + sda/ace;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int der = 0;
    cin >> ace;
    int er[ace];
    int d = ace;
    for(int e = 0;e < ace; ++e)
        cin >> er[e];
    for(int f = 0;f < ace/2;++f)
    {
        if(f % 2 == 0)
            {
                der = er[f];
                er[f] = er[d - 1];
                er[d - 1] = der;
            }
            d = d - 1;
    }
    for(int s = 0;s < ace;++s)
    {
        cout << er[s] << ' ';
    }
    return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t sda;
    int64_t d = 0;
    int64_t as = 0;
    int64_t qef = 0;
    cin >> ace >> er >> sda;
    qef = max(ace,max(er,sda));
    as = qef;
    d = qef;
    qef = qef - ace;
    if(qef > 0)
        qef = qef - 1;
    as = as - er;
    if(as > 0)
        as = as - 1;
    d = d - sda;
    if(d > 0)
        d = d - 1;
    qef = qef + as + d;
    cout << qef;
}
*/
/*
int main()
{
    int ace;
    int er = 1;
    cin >> ace;
    for(;ace > 0;)
    {
        ace = ace - er;
        er = er + 1;
    }
    if(ace < 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    ace = ace/2*3;
    cout << ace;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    ace = ace - 10;
    if(ace > 0 && ace < 10 || ace == 11)
        cout << 4;
    else if(ace == 10)
        cout << 15;
    else
        cout << 0;

}
*/
/*
int main()
{
    int a;
    cin >> a;
    int b[a];
    int dd = 0;
    for(int s = 0;s < a;++s)
        cin >> b[s];
        int sd = 0;
    for(int y = 0;y < a;++y)
        sd = sd + b[y];
    if(sd % 2 == 0)
        for(int df = 0;df < a;++df)
     {
         if(b[df] % 2 == 0)
            dd = dd + 1;
     }
    if(sd % 2 == 1)
        for(int we = 0;we < a;++we)
    {
        if(b[we] % 2 == 1)
            dd = dd + 1;
    }
    cout << dd;
    return 0;
}
*/
/*
int main()
{
    int a;
    int b = 0;
    cin >> a;
    int c[a];
    for(int y = 0;y < a;++y)
        cin >> c[y];
        if(a == 1)
        {
           cout << 1;
           return 0;
        }
    int d = c[0];
    int e = c[1];
    int er = 0;
    int ed = 0;
    er = min(d,e);
    ed = max(d,e);
    for(int r = 2;r < a;++r)
    {
        if(er > c[r])
        {
            swap(er,e);
            er = c[r];
        }
        else if(ed > c[r])
            ed = c[r];
    }
    if(er == ed)
        {
            cout << "Still Rozdil";
            return 0;
        }
    else
        for(;;++b)
        {
            if(c[b] == er)
            {
                cout << b + 1;
                return 0;
            }
        }
}
*/
/*
int main()
{
    int a;
    int c = 0;
    int d = 0;
    int e = 0;
    cin >> a;
    int b[a];
    for(int y = 0;y < a;++y)
        cin >> b[y];
    for(int u = 1;u < a + 1;++u)
    {
        if(u % 3 == 1)
            c += b[u - 1];
        else if(u % 3 == 2)
            d += b[u - 1];
        else if(u % 3 == 0)
            e += b[u - 1];
    }
    if(c > d && c > e)
        cout << "chest";
    else if(d > c && d > e)
        cout << "biceps";
    else
        cout << "back";
    return 0;
}
*/
/*
int main()
{
    int64_t a;
    int64_t b;
    int64_t c;
    int64_t d = 0;
    cin >> a >> b >> c;
    if(a >= c || b >= c)
    {
        cout << 0;
        return 0;
    }
    else if(b <= 0)
    {
        cout << -1;
        return 0;
    }
    else
    {

        a = c - a;
        d = a % b;
        if(d != 0)
            d += 1;
        d = d - a % b;
        d += a/b;
        cout << d;
        return 0;
    }
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda = 0;
    int wef = 0;
    int64_t kol = 0;
    int64_t qev = 0;
    cin >> ace >> er;
int64_t b = 0;
int we = 0;
    int64_t as[ace];
    for(;wef < ace;++wef)
    {
        cin >> as[wef];
    }
    if(er == 0)
    {
        cout << 0;
        return 0;
    }

    for(;ace > 0;--ace)
    {
         qev = qev + 1;
        if(b + as[sda] > 8)
            {
              we = as[sda] - 8;
               kol = kol + 8;
            }
        else if(b + as[sda] < 8)
        {
              kol = kol + b + as[sda];
              b = 0;
        }
            b = b + we;
        if(kol >= er)
        {
            cout << qev;
            return 0;
        }
        ++sda;
        we = 0;
    }
    cout << -1;
    return 0;


}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int b[ace];

    for(int a = 0;a < ace;++a)
        cin >> b[a];
        int ss = b[0];
    for(int s = 1;s < ace;++s)
    {
       ss = max(ss,b[s]);
    }
    ss = ss - 25;
    if(ss > 0)
        cout << ss;
    else
        cout << 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    int dd;
    int kol;
    cin >> ace >> er >> sda >> dd >> kol;
    int sd = ace;
     ace = ace*er + dd*2;
     sda = sda*sd + kol*2;
     if(ace < sda)
        cout << "First";
     if(ace > sda)
        cout << "Second";
     if(ace == sda)
        cout << "Friendship";
     return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    cin >> ace >> er;
    ace = ace/er;
    if(ace % 2 == 1)
        cout << "yes";
    else
        cout << "no";
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    for(int d = 0;d < ace;++d)
        cin >> er[d];
        int f = er[0];
        int s = 0;
    for(int e = 1;e < ace;++e)
        f = max(f,er[e]);
    for(int we = 0;we < ace;++we)
    {
        s = s + f - er[we];
    }
    cout << s;
    return 0;
}
*/
/*
int main()
{
    int B = 0;
    int u = 0;
    int l = 0;
    int b = 0;
    int a = 0;
    int s = 0;
    int r = 0;
    int ace;
    string s1;
    cin >> s1;
    for(int d = 0;d < s1.size();++d)
    {
        if(s1[d] == 66)
            ++B;
        if(s1[d] == 117)
            ++u;
        if(s1[d] == 108)
            ++l;
        if(s1[d] == 98)
            ++b;
        if(s1[d] == 97)
            ++a;
        if(s1[d] == 115)
            ++s;
        if(s1[d] == 114)
            ++r;
    }
    a = a/2;
    u = u/2;
    ace = min(B,min(u,min(l,min(b,min(a,min(s,r))))));
    cout << ace;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    int sda[ace];
    int rr = 0;
    for(int d = 0;d < ace;++d)
        cin >> sda[d];
    for(int r = 1;r < ace;++r)
    {
        rr = rr + 1;
        if(sda[r] - sda[r - 1] > er)
            rr = 0;
    }
    rr = rr + 1;
    cout << rr;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    cin >> ace;
    int f[ace];
    for(int s = 0;s < ace;++s)
        cin >> f[s];
    er = f[0] - f[1];
    for(int ss = 2;ss < ace;++ss)
    {
        if(f[ss - 1] - f[ss] != er && f[ss - 1] - f[ss] != f[ss - 1]*2)
        {
            cout << f[ace - 1];
            return 0;
        }
    }
    if(f[ace - 1] < 0 || er < 0)
    {
        cout << f[ace - 1] - er;
        return 0;
    }
    cout << f[ace - 1] + er;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    cin >> ace;
    int t[ace];
    for(int e = 0;e < ace;++e)
        cin >> t[e];
    if(ace == 1)
    {
        if(t[0] == 1)
            cout << "YES";
        else
            cout << "NO";
        return 0;
    }
    for(int s = 0;s < ace;++s)
    {
        if(t[s] == 0)
            er = er + 1;
        else if(t[s] == 1)
            sda = sda + 1;
    }
    if(er > 1 || er < 1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int qwe = 0;
    cin >> ace;
    int er[ace];
    for(int sda = 0;sda < ace;++sda)
        cin >> er[sda];
    for(int a = 0;a < ace;++a)
        if(er[a]%2 == 1)
            qwe = qwe + 1;
    if(qwe == 1)
    {
        int d = 0;
        for(;d < ace;++d)
        {
             if(er[d]% 2 == 1)
            {
                cout << d + 1;
                return 0;
            }
        }
    }
    if(qwe > 1)
    {
         for(int y = 0;y < ace;++y)
         {
             if(er[y]%2 == 0)
            {
                cout << y + 1;
                return 0;
            }
         }
    }
}
*/
/*
int main()
{
    int ace;
    int b = 0;
    int c = 0;
    int d = 0;
    int i = 0;
    int y = 0;
    cin >> ace;
    int er[ace];
    for(int sda = 0;sda < ace;++sda)
        cin >> er[sda];
    int a = 0;
    for(;a < ace;++a)
        if(er[a] == 1)
            b = b + 1;
        if(er[a] == 2)
            c = c + 1;
        if(er[a] == 3)
            d = d + 1;
    cout << b;
    cout << c;
    cout << d;
    if(b > c && b > d)
        y = 1;
    if(c > b && c > d)
        y = 2;
    if(c == b && c > d)
        y = 1;
    if(d > c && d > b || d == c && d > b || d > c && d == b || d == c && d == b)
        y = 3;
    for(int s = 0;s < ace;++s)
        if(er[s] != d)
            i = i + 1;
    cout << i;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    int sda[ace];
    int qwe[ace];
    int d = 0;
    int e = 0;
    int f = 0;
    for(int aa = 0;aa < ace;++aa)
    {
        cin >> er[aa];
        cin >> sda[aa];
        cin >> qwe[aa];
    }
    for(int vf = 0;vf < ace;++vf)
        d = d + er[vf];
    for(int v = 0;v < ace;++v)
        e = e + er[v];
    for(int vfa = 0;vfa < ace;++vfa)
        f = f + er[vfa];
if(d == 0 && e == 0 && f == 0)
    cout << "YES";
else
    cout << "NO";
return 0;
}
*/
/*
int main()
{
    int64_t ace;
    cin >> ace;
    int r = 0;
    int w = 1;
    for(int a = 0;a < ace;++a)
        w = w*2;
    for(int y = 1;y < w + 1;++y)
        r = r + y;
    cout << r%1000000007;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    for(int a = 0;a < ace;++a)
    {
        cin >> er[a];
        er[a] = er[a]*4 + 1;
    }
    for(int r = 0;r < ace;++r)
        cout << er[r] << ' ';

}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    cin >> ace;
    int e[ace];
    for(int ee = 0;ee < ace;++ee)
    {
        cin >> e[ee];
        er = er + e[ee];
    }
    er = er/2 + er%2;
    for(int s = 0;;++s)
    {
        sda = sda + e[s];
        if(sda >= er)
        {
            cout << s + 1;
            break;
        }
    }
}
*/
/*
int main()
{
    int ace;
    int er;
    int d = 0;
    cin >> ace >> er;
    int sda[ace];
    for(int s = 0;s < ace;++s)
        cin >> sda[s];
    for(int e = 0;e < ace;++e)
    {
        if(er%sda[e] == 0)
            if(sda[e] > d)
                d = sda[e];
    }
    cout << er/d;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t rr = 1;
    cin >> ace >> er;
    for(int r = 0;r < ace;++r)
    {
        rr = rr*2;
        cout << rr;
    }
    cout << rr;
}
*/
/*
int main()
{
    int ace = 2;
    int er = 4;
    for(int a = 0;a < 2018;++a)
    {
        cout << ace << ' ';
        ace = ace + er;
        er = er + 2;
    }
}
*/
/*
int main()
{
	int a;
	int as = 0;
	cin >> a;
    int er[100];
	int r[a];
	for(int y = 0;y < a;++y)
    	cin >> r[y];
	for(int rr = 0;rr < 100;++rr)
    	er[rr] = 0;
	for(int yy = 0;yy < a;++yy)
    {
    	for(int aa = 0;aa < 100;++aa)
        {
        	if(r[yy] == aa + 1)
            		er[aa] = 1;
        }
    }
	for(int ww = 0;ww < 100;++ww)
    	as = as + er[ww];
    cout << as;
}
*/
/*
struct People
{
public:
    string name;
    string family;

    void inputMoney()
    {
        cin >> money;
    }

    void outpuMoney() const
    {
        cout << money;
    }

    void transferMyMoney(People& to, int m)
    {
        if(m < money)
        {
            money -= m;
            to.money += m;
        }
    }

private:
    int money;
};


void sortPeopleData(People pp[])
{
    // ������� i � j �������

    int i = 0, j = 1;


    People tmp = pp[i];
    pp[i] = pp[j];
    pp[j] = tmp;



}



void inputPeople(People& pp)
{
    cin >> pp.name >> pp.family;
    pp.inputMoney();
}

void outputPeople(const People& pp)
{
    cout << "\n" << pp.name << " " << pp.family << " ";
    pp.outpuMoney();
}

void f(int& a)
{
    a = 3;
}

int main()
{
    People pp[100];


    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        inputPeople(pp[i]);
    }

    //sortPeopleData(pp);


    pp[1].transferMyMoney(pp[0], 1);


    for (int i = 0; i < n; ++i)
    {
        outputPeople(pp[i]);
    }


    return 0;
}
*/
/*
int main()
{
    int a;
    int yyy = 0;
    int yr = 0;
    cin >> a;
    int b[a];

    for(int y = 0;y < a;++y)
        cin >> b[y];

    sort(b,b + a);

    int aa = 0;

    if(a%3 == 1)
    {
        aa = aa + b[0];
        yr = 1;
    }
    if(a%3 == 2)
    {
        aa = aa + b[0];
        aa = aa + b[1];
        yr = 2;
    }

    for(int u = 0;u < a/3;++u)
    {
        aa = aa + b[yr + 1 + yyy];
        aa = aa + b[yr + 2 + yyy];
        yyy = yyy + 3;
    }
    cout << aa;
}
*/
/*
int main()
{
    string s;
    getline(cin,s);
    cout << s[0];
    for(int r = 0;r < s.size();++r)
    {
        if(s[r] == ' ')
            cout << s[r + 1];
    }
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace/3 + ace%3*2];
    int a = 0;
    for(int sw = 0;sw < ace/3;++sw)
    {
        er[a] = 3;
        a = a + 1;
    }
    for(int se = 0;se < ace%3;++se)
    {
        er[a] = 3;
        a = a + 1;
        er[a] = -2;
        a = a + 1;
    }
    cout << a << "\n";
    for(int sd = 0;sd < a;++sd)
        cout << er[sd] << ' ';
}
*/
/*
struct otmetki
{
public:
    string name;
    string family;
    int otmetkit[5];
    double cpbal(int otm(5))
    {
        cpp = 0;
        cpp = otm(0) + otm(1) + otm(2) + otm(3) + otm(4);
        cpp = cpp/5;
        return cpp;
    }
}
int main()
{
    int g;
    cout << "input number people";
    cin >> g;
    otmetki rr[g];
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t rr = 2;
    cin >> ace >> er;
    for(int r = 0;r < ace - 1;++r)
    {
        rr = rr*2;
        if(rr > 100000000)
        {
            cout << er;
            return 0;
        }
    }
    cout << er%rr;
}
*/
/*
int main()
{
    int64_t ace;
    int er = 0;
    cin >> ace;
    for(int y = 1;y < ace;++y)
    {
        if(y%2 == 0 && y%3 == 0 && y%4 == 0 && y%5 == 0 && y%6 == 0 && y%7 == 0 && y%8 == 0 && y%9 == 0 && y%10 == 0)
            er = er + 1;
    }
    cout << er;
}
*/
/*
int main()
{
    int a = 0;
    int b;
    int y = 0;
    cin >> a >> b;
    int f[a];
    cin_massive(f,a);
    for(int hg = 0;hg < a;++hg)
    {
        if(f[hg] > b)
            y = y + 1;
        y = y + 1;
    }
    cout << y;
}
*/
/*
int main()
{
    string s;
    cin >> s;
    int y = 1;
    for(int h = 1;h < s.size();++h)
    {
        if(s[h] == s[h - 1])
            y = y + 1;
        else
            y = 1;
        if(y == 7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
*/
int main()
{
    int a = 0;
    string s;
    cin >> s;
    int h[s.size()/2 + 1];
    for(int hg = 0;hg < s.size();hg += 2)
    {
        h[a] = s[hg];
        a = a + 1;
    }
    byn_is_massive(h,s.size()/2 + 1,-48);
    sort(h,h + s.size()/2 + 1);
    cout_massive(h,s.size()/2 + 1,"+");
    return 0;
}
//https://codeforces.com/problemset/problem/195/A
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     char arr[100];
//     char app[100];
//     cin >> arr;
//     int t = 0, m = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         t++;
//     }

//     cout << t << endl;
//     for (int i = 0; i < t; i++)
//     {
//         if (arr[i] == arr[t - 1 - i])
//         {
//             m++;
//             continue;
//         }
//     }

//     cout << m << endl;
//     if (t == m)
//     {
//         cout << "its a palindrone number ";
//     }
//     else
//     {
//         cout << "its a not a palindrone number";
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);
//     int t = 0, m = 0, q;
//     int p = str.size();
//     cout << p << endl;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             t = m;
//             m = 0;
//         }
//         if (str[i] != ' ')
//         {
//             m++;
//             q = max(m, t);
//         }
//     }

//     cout << q;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int search(int *a, int p);
// int m = 0;

// int main(int argc, char const *argv[])
// {
//     int a[5] = {4, 3, 3, 3, 8};
//     int p;
//     cin >> p;
//     for (int i = 0; i < 5; i++)
//     {

//         if (p == a[i])
//         {
//             cout<<i<<endl;
//             search(a, p);
//             break;
//         }
//     }

//     return 0;
// }
// int search(int *a, int p)
// {
//     if (a[5 - m] == p)
//     {
//         cout << (5 - m);
//         return 0;
//     }
// m++;
// return (search(a, p));
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     string str[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> str[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i].size() <= 10)
//         {
//             cout << str[i] << endl;
//         }
//         if (str[i].size() > 10)
//         {
//             int p = str[i].size() - 2;

//             str[i].erase(1, p);
//             string d = to_string(p);
//             str[i].insert(1, d);

//             cout << str[i] << endl;
//         }
//     }
//     return 0;
// }
// nclude<bits/stdc++.h>
// ing namespace std;
// t main(int argc, char const *argv[])
// {
// string str;
// cin>>str;
// str.erase(1,4);
// cout<<str;
// return 0;
// }
//
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int a[n][3];
//     int r = 0, m = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             r = a[i][j] + r;
//             if (r >= 2)
//             {
//                 m++;
//                 r = 0;
//                 break;
//             }
//         }
//         r = 0;
//     }
//     cout << m;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     int p = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] >= i)
//         {
//             p++;
//         }
//     }
//     cout << p
//  return 0;
//  }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int r = 0;
//     int n;
//     cin >> n;
//     string str[n];
//     for (int i = 0; i < n; i++)
//     {

//         cin >> str[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == "++X")
//         {
//             ++r;
//         }
//         if (str[i] == "X++")
//         {
//             r++;
//         }
//         if (str[i] == "--X")
//         {

//             --r;
//         }
//         if (str[i] == "X--")
//         {
//             r--;
//         }
//     }

//     cout << r;
//     return 0;
// }

//  #include <bits/stdc++.h>
//  using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a[5][5];
//     int p, q;
//     int r = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (1 == a[i][j])
//             {
//                 p = i;

//                 q = j;

//                 break;
//             }
//         }
//     }
//     while (p != 2)
//     {

//         if (p > 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p - 1][q];
//             a[p - 1][q] = t;
//             p = p - 1;
//             ++r;
//         }
//         if (p < 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p + 1][q];
//             a[p + 1][q] = t;
//             p = p + 1;
//             ++r;
//         }
//     }
//     while (q != 2)
//     {
//         if (q > 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p][q - 1];
//             a[p][q - 1] = t;
//             q = q - 1;
//             ++r;
//         }
//         if (q < 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p][q + 1];
//             a[p][q + 1] = t;
//             q = q + 1;
//             ++r;
//         }
//     }

//     cout << r;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     int p = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] >= i)
//         {
//             p++;
//         }
//     }
//     cout << p;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     long long n, m, a;
//     cin >> n >> m >> a;
//     long long p = 0, q = 0;
//     for (long i = 1; i <= n; i = i + a)
//     {
//         p++;
//     }
//     for (long j = 1; j <= m; j = j + a)
//     {
//         q++;
//     }
//     cout<<p*q;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int m, n;
//     cin >> m >> n;
//     long long p = m * n;
//     int r = 2;
//     long long g = p / r;

//     cout << g;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str1, str2;
//     getline(cin, str1);
//     getline(cin, str2);
//     int i = 0, u = 0;
//     int p = 0, q = 0;
//     for (; i < str1.size(); i++)
//     {
//         if (str1[i] == str2[i] || str1[i] == str2[i] + 32 || str2[i] == str1[i] + 32)
//         {
//             u++;
//             continue;
//         }

//         if (str1[i] > str2[i])
//         {
//             p = p + str1[i];
//             q = q + str2[i];
//         }
//         if (str1[i] < str2[i])
//         {
//             p = p + str1[i];
//             q = q + str2[i];
//         }
//     }
//     if (u == str1.size())
//     {
//         cout << 0;
//     }
//     if (p > q)
//     {
//         cout << 1;
//     }
//     if (q > p)
//     {
//         cout << -1;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);
//     int p = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         for (int i = 0; i < str.size(); i++)
//         {

//             if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'y')
//             {
//                 if (str[i] >= 65 && str[i] <= 91)
//                 {
//                     str[i] = str[i] + 32;
//                 }
//             }
//             if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'y')
//             {
//                 str.erase(i, 1);
//             }
//         }
//     }

//     for (int i = 0; i < str.size(); i = i + 2)
//     {
//         str.insert(i, ".");
//     }

//     for (int i = 0; i < str.size(); i++)
//     {
//         cout << str[i];
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);

//     for (int i = 0; i < str.size(); i = i + 1)
//     {
//         for (int j = 0; j < str.size() - 1; j = j + 2)
//         {
//             if (str[j] > str[j + 2])
//             {
//                 char c;
//                 c = str[j];
//                 str[j] = str[j + 2];
//                 str[j + 2] = c;
//             }
//         }
//     }
//     cout << str << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);
//     if (str[0] >= 97 && str[0] <= 123)
//     {
//         str[0] = str[0] - 32;
//     }
//     cout<<str;
//     return 0;
// }
// Input
// zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
// Participant's output
// CHAT WITH HER!
// Jury's answer
// IGNORE HIM!
// Checker comment
// wrong answer 1st lines differ - expected: 'IGNORE HIM!', found: 'CHAT WITH HER!'
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     string str1;

//     getline(cin, str);

//     for (int r = 0; r < 4; r++)
//     {
//         for (int i = 0; i < str.size(); i++)
//         {
//             for (int j = i + 1; j < str.size(); j++)
//             {
//                 if (str[i] == str[j])
//                 {
//                     str.erase(j, 1);
//                 }
//             }
//         }
//     }

//     int p = str.size();

//     if (p % 2 == 1)
//     {
//         cout << "IGNORE HIM!";
//     }
//     else
//     {
//         cout << "CHAT WITH HER!";
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, z;
//     cin >> n;
//     int a[n], b[100001], d[100001];
//     long long r = 0, t = 0;
//     int taxi = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] % 2 == 1)
//         {
//             b[r] = a[j];
//             r++;
//         }

//         if (a[j] % 2 == 0)
//         {
//             if (a[j] % 4 == 0)
//             {
//                 taxi++;
//             }
//             if (a[j] % 4 != 0)
//             {
//                 d[t] = a[j];
//                 t++;
//             }
//         }
//     }

//     // for (int i = 0; i < r; i++)
//     // {
//     //     cout << b[i] << endl;
//     // }
//     // for (int i = 0; i < t; i++)
//     // {
//     //     cout << d[i] << endl;
//     // }

//     // cout << taxi << endl;
//     //  for (int i = 0; i < r; i++)
//     //  {
//     //  cout << b[i] << end

//     long long m = 0, u = 0, y = 0;
//     for (int i = 0; i < r; i++)
//     {
//         m = m + b[i];
//     }
//     for (int i = 0; i < t; i++)
//     {
//         u = u + d[i];
//     }
//     for (int i = 0; i < r; i++)
//     {
//         if (b[i] == 3)
//         {
//             y++;
//         }
//     }
//     if (y == r)
//     {
//         cout << r;
//         goto z;
//     }

//     r = m / 4;

//     taxi = taxi + r;

//     r = m % 4;

//     t = u / 4;

//     taxi = taxi + t;

//     t = u % 4;

//     if ((t + r) <= 4 && (t + r) > 0)
//     {
//         taxi = taxi + 1;
//     }
//     if (t == r && (t + r) == 4 && m == 6 && u == 2)
//     {
//         taxi = taxi + 1;
//     }

//     if ((t + r) > 4)
//     {
//         taxi = taxi + 2;
//     }

//     cout << taxi;
// z:
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    char c[20];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == c[i + 1])
        {
            t++;
        }
    }
    cout << t;

    return 0;
}

//DECIMAL DATA
// const long double eps = 1e-9;
// bool equalTo(double a, double b)
// {
//     if (fabs(a - b) <= eps)
//         return true;
//     else
//         return false;
// }
// bool notEqual(double a, double b)
// {
//     if (fabs(a - b) > eps)
//         return true;
//     else
//         return false;
// }
// bool lessThan(double a, double b)
// {
//     if (a + eps < b)
//         return true;
//     else
//         return false;
// }
// bool lessThanEqual(double a, double b)
// {
//     if (a < b + eps)
//         return true;
//     else
//         return false;
// }
// bool greaterThan(double a, double b)
// {
//     if (a > b + eps)
//         return true;
//     else
//         return false;
// }
// bool greaterThanEqual(double a, double b)
// {
//     if (a + eps > b)
//         return true;
//     else
//         return false;
// }

//Funtions
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}
bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool isPowerTwo(ll x)
{
    return (x && !(x & (x - 1)));
};
bool isSubstring(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
        return true;
    return false;
}

ll mod = 1;

ll fast_pow(ll a, ll p)
{
    ll res = 1;
    while (p)
    {
        if (p % 2 == 0)
        {
            a = a * 1ll * a;
            p /= 2;
        }
        else
        {
            res = res * 1ll * a;
            p--;
        }
    }
    return res;
}

ll fact(ll n)
{
    ll res = 1;
    for (ll i = 1; i <= n; i++)
    {
        res = res * 1ll * i % mod;
    }
    return res;
}

ll nCr(ll n, ll k)
{
    return fact(n) * 1ll * fast_pow(fact(k), mod - 2) % mod * 1ll * fast_pow(fact(n - k), mod - 2) % mod;
}

ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void extendgcd(ll a, ll b, ll *v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
} //pass an arry of size1 3
ll mminv(ll a, ll b)
{
    ll arr[3];
    extendgcd(a, b, arr);
    return arr[0];
} //for non prime b
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
bool revsort(ll a, ll b) { return a > b; }
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact)
{
    ll val1 = fact[n];
    ll val2 = ifact[n - r];
    ll val3 = ifact[r];
    return (((val1 * val2) % m) * val3) % m;
}
void google(int t) { cout << "Case #" << t << ": "; }
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} //only for prime m

bool inBetween(int l, int val, int r)
{
    if (l <= val && val <= r)
        return true;
    return false;
}

// sort(s.begin(), s.end());
//distance(s.begin(), unique(s.begin(), s.end()))
//s.resize(distance(s.begin(),  unique(s.begin(), s.end())))
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// int getRand(int l, int r)
// {
//     uniform_int_distribution<int> uid(l, r);
//     return uid(rng);
// }
//Template Completed

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void check(bool b, string y = "YES", string n = "NO")
{
    // b ? cout << "YES\n" : cout << "NO\n";
    b ? cout << y << "\n" : cout << n << "\n";
}

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second < b.second)
        return true;
    if (a.second > b.second)
        return false;
    else
        return a.first < b.first;
}

void sol6()
{
    ll n;
    // cin >> n;
    // string s[n];
    vector<string> s(n);
    for (ll x = 0; x < n; x++)
    {
        cin >> s[x];
    }
}

void sol5()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    char ch = s[0];
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == ch)
            ans++;
        else
            ch = s[i];
    }
    p1(ans);
}

void sol4()
{
    ll n, k;
    cin >> n;
    vector<ll> arr(n), brr(n);
    for (ll x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
}

void sol3()
{
    ll n;
    cin >> n;
    vector<ll> arr(n), brr(n);
    pair<ll, ll> p[n];
    for (ll x = 0; x < n; x++)
    {
        cin >> arr[x];
        p[x] = {arr[x], x};
    }
}

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define pll pair<ll, ll>
#define pyramid priority_queue <ll, vector<ll>, greater<ll> >
#define ulta_pyramid priority_queue <ll>

#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sort_and_unique(a) sort(all(a));(a).resize(unique(all(a))-(a).begin())
#define outrange(x,min,max) ((x)<(min) || (x)>(max))
 
string DecimalToBinary(ll num);
 
void SieveOfEratosthenes(ll n,set<ll>&v);
 
ll power(ll x, ll y, ll p);
 
unsigned long long modInverse(unsigned long long n, int p);
 
unsigned long long nCrModPFermat(unsigned long long n,int r, int p);
 
long long lcm(ll a, ll b);
 
// returns -1 if s1 is not a substring of s2
int isSubstring(string s1, string s2);
 
const ll N=1e9+7;

struct prob{
    int s, t, d;
};

struct pro
{
    // set<pair<ll, ll>, prob> s;
    // set heap, with maxlen -> y-x at top
    bool operator()(const pair<ll, ll> &a, const pair<ll, ll> &b) const
    {
        ll d_a = a.second - a.first - 1;
        ll d_b = b.second - b.first - 1;
        if (d_a == d_b)
        {
            return a.first < b.first;
        }
        return d_a > d_b;
    }
};

int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    char start = s[0];
    for(int i = 0; i < n-1; i++){
        char next = s[i+1];
        if(start == next){
            cnt++;
            // i++;
        }
        else{
            start = next;
        }
    }
    cout << cnt << endl;
    return 0;
}

bool cmp(prob a, prob b){
    return ((a.t)*(b.d) < (b.t)*(a.d));
}

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    // cin>>t;
    t = 1;
    while(t--){
        solve();
    }
    cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms"<<endl;

    return 0;
}

ll power(ll x, ll y, ll p)// binaryExponentiation
{
    ll res = 1;
 
    while (y > 0) {
 
        if (y % 2 == 1)
            res = ((res%p) * (x%p))%p;
 
        y = y >> 1;
 
        x = ((x%p) * (x%p))%p;
    }
    return res % p;
}
unsigned long long modInverse(unsigned long long n,int p)
{
    return power(n, p - 2, p);
}
 
unsigned long long nCrModPFermat(unsigned long long n,int r, int p)
{
    if (n < r)
        return 0;
 
    if (r == 0)
        return 1;
 
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

void SieveOfEratosthenes(ll n,set<ll>&v)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p){
                prime[i] = false;
            }
        }
    }
 
    for (ll p = 2; p <= n; p++){
        if (prime[p]){
            v.insert(p);
        }
    }
        
}
 
string DecimalToBinary(ll num)
{
    string str;
    if(num==0)
        return 0;
    while(num)
    {
        if(num & 1)
            str+='1';
        else
            str+='0';
          num>>=1;
    }   
    string s = str;
    reverse(all(s));
    return s;
}
 
int isSubstring1(char* s1, char* s2)
{
    int M = strlen(s1);
    int N = strlen(s2);
 
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

// function to get the index of s2 in s1
int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

long long lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
////////
ll lucky(ll n,ll f,ll s,ll ans){
    if(n<=ans){
        if(f==s){
            return ans;
        }
    }
    if(ans>1e9){
        return 4444477777;
    }
    ll f1 = lucky(n,f+1,s,ans*10+4);
    ll f2 = lucky(n,f,s+1,ans*10+7);
    return min(f1,f2);
}

void right_max(vi&v,int n,int st = 0){
    if(st==n-1){
        return;
    }
    right_max(v,n,st+1);
    v[st] = max(v[st],v[st+1]);
}

//void right_max(vi&v,int n){
//    if(n==0){
//        return ;
//    }
//
//    v[n-1] = max(v[n],v[n-1]);
//    right_max(v,n-1);
//}
// int suffix(vi&v,int n,int N){
//     if(N==0){
//         return 0;
//     }
//     return v[n-1]+ suffix(v,n-1,N-1);
// }
// int prefix(vi&v,int n,int N){
// if(N==0){
//     return 0;
// }
// return v[N-1]+ prefix(v,n,N-1);
// }

// bool is_palindrome(vi&v,int n,int st = 0){
//     if(st==n){
//         return true;
//     }
//   if(v[st]!=v[n]){
//       return false;
//   }
//   if(st<n+1){
//       return is_palindrome(v,n-1,st+1);
//   }
// }
// bool is_pre(string s,string p,int st = 0){
//     if(st == p.size())return true;
//     if(s[st]!=p[st])return false;
//     if(p.size()==0)return true;
//     return is_pre(s,p,st+1);
// }
// bool is_prime(int n,int st = 2){
//     if(n<=2){
//         return true;
//     }
//     if(st>sqrt(n)){
//         return true;
//     }
//     if(n%st == 0)return false;
//     return is_prime(n,st+1);
// }

// int count_prime(int st,int ed){
//     if(st>ed){
//         return 0;
//     }
//     if(is_prime(st)){
//         return 1 + count_prime(st+1,ed);
//     }
//     return count_prime(st+1,ed);
// }

// int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS) {
//     // base case: if robot reaches last row or column, return the value at that cell
//     if (row == ROWS - 1 && col == COLS - 1) {
//         return grid[row][col];
//     }

//     // check if robot can move right
//     int right_sum = -1;
//     if (col < COLS - 1) {
//         right_sum = grid[row][col] + path_sum(grid, row, col + 1, ROWS, COLS);
//     }

//     // check if robot can move bottom
//     int bottom_sum = -1;
//     if (row < ROWS - 1) {
//         bottom_sum = grid[row][col] + path_sum(grid, row + 1, col, ROWS, COLS);
//     }

//     // check if robot can move diagonal
//     int diagonal_sum = -1;
//     if (row < ROWS - 1 && col < COLS - 1) {
//         diagonal_sum = grid[row][col] + path_sum(grid, row + 1, col + 1, ROWS, COLS);
//     }

//     // choose the maximum direction
//     int max_sum = max(right_sum, max(bottom_sum, diagonal_sum));

//     return max_sum;
// }
#include <list>
// bool is_prime(int n) {
//     if (n <= 1) return false;
//     int sqrtn = sqrt(n);
//     for (int i = 2; i <= sqrtn; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
bool pal(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int p(int n) {
    int cnt = 0;
    if (n <= 1) {
        return false;
    }
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cnt++;
            if (cnt>3) return 0;
        }
    }
    return cnt;
}
vector<int> sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}
struct Employee {
    string name;
    int salary;
};

bool compare(Employee e1, Employee e2) {
    if (e1.salary != e2.salary) {
        return e1.salary > e2.salary;
    } else {
        return e1.name < e2.name;
    }
}
//const int MAXN = 1e5+5;
//int freq[MAXN] = {0};


//bool isProperlyNested(string s) {
//    stack<char> st;
//    for (char c : s) {
//        if (c == '(' || c == '[' || c == '{') {
//            st.push(c);
//        } else {
//            if (st.empty()) {
//                return false;
//            }
//            char top = st.top();
//            st.pop();
//            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
//                return false;
//            }
//        }
//    }
//    return st.empty();
//}


//int v[N], cnt[N], n;


#define MAX_N 100001

using namespace std;

//int a[MAX_N];

#define ll long long
#define endl '\n'
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
using namespace std;

//
//int count_zeroes(const vector<int>& v) {
//    int count = 0;
//    for(int i = 0; i < v.size(); i++) {
//        if(v[i] == 0) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int count_ones(const vector<int>& v) {
//    int count = 0;
//    for(int i = 0; i < v.size(); i++) {
//        if(v[i] == 1) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int solve(const vector<int>& v) {
//    int num_zeroes = count_zeroes(v);
//    int num_ones = count_ones(v);
//
//    if(num_zeroes <= (v.size() + 1) / 2) {
//        return 0;
//    } else if(num_zeroes + num_ones == v.size() && num_ones > 0) {
//        return 2;
//    } else {
//        return 1;
//    }
//}
bool is_palindrome(const string& s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}
struct Test {
    int x,y;
    string num;
};


//const int MAXN = 105;

bool has_four(long long x) {
    while (x > 0) {
        if (x % 10 == 4) {
            return true;
        }
        x /= 10;
    }
    return false;
}

long long count_living(int n) {
    long long count = 1;
    for (int i = 0; i < n; i++) {
        count *= 9;
    }
    return count;
}

long long nth_living(long long k) {
    int n = 1;
    while (true) {
        long long count = count_living(n);
        if (k <= count) {
            break;
        }
        k -= count;
        n++;
    }
    long long x = pow(10, n-1);
    while (k > 1) {
        x++;
        if (!has_four(x)) {
            k--;
        }
    }
    return x;
}


int main() {
int n;cin>>n;
vc v(n);
loop(n){
    cin>>v[i];
}
int cnt = 0 ;
loop(n-1){
    if(v[i]==v[i+1])cnt++;
}
cout<<cnt;

    return 0;
n//////
int main() {
    fastIO();
    fileIO();

//long long int n; cin>>n;
//long long int f=n-1;
//cout<<(f*(f+1)/2)+1<<endl;

//long n; cin>>n;
//int cnt=1;
//long long int a=0,b=0,c=0,d=0;
////vector<pair<ll,char>>res;
//vl arr;
//    loop(n){
//        long tmp; cin>>tmp;
//        switch (cnt) {
//            case 1:
//                a+=tmp;
//                cnt++;
//                break;
//            case 2:
//                b+=tmp;
//                cnt++;
//                break;
//            case 3:
//                c+=tmp;
//                cnt++;
//                break;
//            case 4:
//                d+=tmp;
//                cnt=1;
//                break;
//        }
//    }
//    arr.push_back(a);
//    arr.push_back(b);
//    arr.push_back(c);
//    arr.push_back(d);
//    sort(all(arr));
//    ll check=arr.back();
//        if(a==check)cout<<"A"<<endl;
//        else if(b==check)cout<<"B"<<endl;
//        else if(c==check)cout<<"C"<<endl;
//        else cout<<"D"<<endl;

//int test; cin>>test;
//loop(test){
//    int n; cin>>n;
//    set<int>st;
//    while(n--){
//        int tmp; cin>>tmp;
//        st.insert(tmp);
//    }
//    cout<<*st.begin()<<endl;
//}

//    int test;
//    cin >> test;
//    while (test--) {
//        int n, p, q;
//        cin >> n >> p >> q;
//        vl arr(n);
//        int cnt=0;
//        int cnt2=0;
//        loop(n) {
//            cin >> arr[i];
//            if(arr[i]<0){
//                cnt++;
//            }
//            else{
//                cnt2++;
//            }
//        }
//        vl negative(cnt);
//        vl positive(cnt2);
//        ll sumb=0,suma=0;
//        if(cnt==0){
//            sort(all_r(arr));
//            if(p>0){
//                loop(p){
//                    suma+=arr[i];
//                }
//            }
//            cout<<suma<<endl;
//        }
//        else{
//            sort(all(arr));
//            if(q>0){
//                if(cnt<q){
//                    loop(cnt){
//                        sumb+=arr[i];
//                    }
//                }
//                else{
//                    loop(q){
//                        sumb+=arr[i];
//                    }
//                }
//
//            }
//            sort(all_r(arr));
//            if(p>0){
//                if(cnt2<p){
//                    loop(cnt2){
//                        suma+=arr[i];
//                    }
//                }
//                else{
//                    loop(p){
//                        suma+=arr[i];
//                    }
//                }
//
//            }
//            cout<<suma-sumb<<endl;
//        }
//
//    }

//int m,n; cin>>m>>n;
//    vector<vector<int>>v(n, vector<int>(m,-10));
//    int cnt=0;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cin>>v[i][j];
//            if(v[i][j]==0)cnt++;
//        }
//    }
//    if(cnt==0){
//        cout<<"WIN"<<endl;
//        escanor;
//    }
//    int c=0;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if((i>0&&j>0)&&(v[i][j]==1)){
//                if(v[i][j-1]==0)c++;
//                if(v[i][j+1]==0)c++;
//                if(v[i-1][j]==0)c++;
//                if(v[i+1][j]==0)c++;
//                if(v[i+1][j+1]==0)c++;
//                if(v[i-1][j-1]==0)c++;
//                if(v[i-1][j+1]==0)c++;
//                if(v[i+1][j-1]==0)c++;
//                if(c>=cnt){
//                    cout<<"WIN"<<endl;
//                    escanor;
//                }
//                else{
//                    c=0;
//                }
//            }
//        }
//    }
//    cout<<"LOSE"<<endl;

//int n; cin>>n;
//
//    loop(n){
//
//    }

//int test; cin>>test;
//while(test--){
//    int n; cin>>n;
//    vi arr(n);
//    loop(n){
//        cin>>arr[i];
//    }
//    //1 3 4 5 6
//    sort(all(arr));
//    int sum=0;
//    //if(n%2==0){
//        int check=n/2;
//        int ii=n-1;
//        int jj=0;
//        loop(check){
//            //cout<<arr[ii]<<" "<<arr[jj]<<endl;
//            sum+=arr[ii]-arr[jj];
//            ii--;
//            jj++;
//        }
//        cout<<sum<<endl;
//    //}
////    else{
////        //1 3 4 5 6
////        int tmp=arr[(n/2)+1];
////
////    }
//}
//int test; cin>>test;
//while(test--){
//    int n; cin>>n;
//    vl arr(n);
//    int c=0;
//    ll sum=0;
//    stack<ll>st;
//    ll tmp=0;
//    bool t= true;
//    loop(n){
//        cin>>arr[i];
//        if(arr[i]<0){
//            if(t){
//                c++;
//                t= false;
//            }
//            else{
//                //t= false;
//            }
//        }
//        else if(arr[i]>0){
//            t= true;
//        }
//        if(arr[i]<0){
//            sum+=arr[i]*-1;
//        }
//        else{
//            sum+=arr[i];
//        }
//    }
//    cout<<sum<<" "<<c<<endl;
//}
//int test; cin>>test;
//while(test--){
//    long long int n; cin>>n;
//    long long int sum=n;
//    while(n!=0){
//        sum+=n/2;
//        n=n/2;
//    }
//    cout<<sum<<endl;
//}

//int n,h; cin>>n>>h;
//int sum=0;
//    loop(n){
//        int tmp; cin>>tmp;
//        if(tmp>h)sum+=2;
//        else sum+=1;
//    }
//    cout<<sum<<endl;

//int n;cin>>n;
//string s; cin>>s;
//int a=0,d=0;
//    loop(s.size()){
//        if(s[i]=='A')a++;
//        else if(s[i]=='D')d++;
//    }
//    if(a>d)
//        cout<<"Anton"<<endl;
//    else if(d>a)
//        cout<<"Danik"<<endl;
//    else
//        cout<<"Friendship"<<endl;

//int a,b; cin>>a>>b;
//int c=0;
//while(a<=b){
//    a=a*3;
//    b=b*2;
//    c++;
//}
//cout<<c<<endl;

//int problems; cin>>problems;
//int cnt=0;
//  while(problems--){
//      int a,b,c; cin>>a>>b>>c;
//      if(a+b+c>=2)cnt++;
//  }
//  cout<<cnt<<endl;

//int ii=0,jj=0;
//    for (int i = 0; i < 5; ++i) {
//        for (int j = 0; j < 5; ++j) {
//            int tmp; cin>>tmp;
//            if(tmp==1){
//                ii=i;
//                jj=j;
//                break;
//            }
//        }
//    }
//    cout<<abs(2-ii)+abs(2-jj)<<endl;

//int n;cin>>n;
//vi arr(n);
//    loop(n){
//        cin>>arr[i];
//    }
//    sort(all(arr));
//    loop(n){
//        cout<<arr[i]<<" ";
//    }
//string s; cin>>s;
//string s2; cin>>s2;
//    loop(s.size()){
//        s[i]= ::tolower(s[i]);
//        s2[i]= ::tolower(s2[i]);
//        if((int)s[i]<(int)s2[i]){
//            cout<<-1<<endl;
//            escanor;
//        }
//        else if((int)s2[i]<(int)s[i]){
//            cout<<1<<endl;
//            escanor;
//        }
//    }
//    cout<<0<<endl;

//string s; cin>>s;
//string s2; cin>>s2;
//loop(s.size()){
//    s[i]= ::tolower(s[i]);
//    s2[i]= ::tolower(s2[i]);
//}
//if(s>s2)cout<<1<<endl;
//else if(s2>s)cout<<-1<<endl;
//else cout<<0<<endl;


//string s; cin>>s;
//set<char>st;
//    loop(s.size()){
//        st.insert(s[i]);
//    }
//    if(st.size()%2!=0){
//        cout<<"IGNORE HIM!"<<endl;
//    }
//    else{
//        cout<<"CHAT WITH HER!"<<endl;
//    }

//string s; cin>>s;
//string lower="";
//string upper="";
//int low=0,upp=0;
//loop(s.size()){
//    if((int)s[i]>=97&&(int)s[i]<=122){
//        low++;
//    }
//    else{
//        upp++;
//    }
//    lower+= ::tolower(s[i]);
//    upper+= ::toupper(s[i]);
//}
//if(low>=upp)cout<<lower<<endl;
//else if(upp>low)cout<<upper<<endl;

//int n; cin>>n;
//stack<int>st;
//int cnt=0;
//    loop(n){
//        int tmp; cin>>tmp;
//        if(st.empty()||st.top()==tmp){
//            st.push(tmp);
//        }
//        else{
//            while(!st.empty()){
//                st.pop();
//            }
//            cnt++;
//            st.push(tmp);
//        }
//    }
//    if(!st.empty())cnt++;
//    cout<<cnt<<endl;

//int n; cin>>n;
//deque<int>dq;
//    loop(n){
//        int tmp; cin>>tmp;
//        dq.push_back(tmp);
//    }
//    int a=0,b=0;
//    loop(n){
//        int tmp;
//        if(dq.front()>dq.back()){
//        tmp=dq.front();
//        dq.pop_front();
//        }
//        else { tmp = dq.back();
//            dq.pop_back();
//        }
//        if(i%2==0){
//            a+=tmp;
//        }
//        else{
//            b+=tmp;
//        }
//    }
//cout<<a<<" "<<b<<endl;

int n,cnt=0; cin>>n;
string s; cin>>s;
    loop(s.size()){
        if(i==0)continue;
        else{
            if(s[i]==s[i-1])cnt++;
        }
    }
    cout<<cnt<<endl;
}
 

#include<bits/stdc++.h>
#define abdo ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define tc ll t ; cin>>t; while(t--)
#define pb push_back
#define pob pop_back
#define loopj(j,a,b) for(ll j = a ; j < b-1 ; j++)
#define loopi(i,a,b) for (ll i = a; i < b; i++)
#define vl vector<ll>
#define vi vector<int>
#define lb lower_bound
#define ub upper_bound
#define sumv(v) accumalate(v.begin(),v.end(),0)
#define mii map<int,int>
#define umii unordered_map<int,int>
#define order(v) sort(v.begin(),v.end())
#define ed '\n'
#define el "\n"
#define all(v) v.begin(),v.end()
#define YES cout<<"YES"<<ed;
#define NO cout<<"NO"<<ed;
#define Yes cout<<"Yes"<<ed;
#define No cout<<"No"<<ed;
#define yEs cout<<"yEs"<<ed;
#define yeS cout<<"yeS"<<ed;
#define nO cout<<"nO"<<ed;
#define yes cout<<"yes"<<ed;
#define no cout<<"no"<<ed;
#define ans1 ll ans = 0;
#define cnt1 ll cnt = 0;
#define sum(a , b) (a + b)
#define product(a , b) (a * b)
#define squarear(a) (a * a)
#define rectanglear(a , b) (a * b)
#define squarepre(a) (a * 4)
#define rectanglpr(a , b) ((a + b)*2)
typedef unsigned long long ull;
typedef long double lld;
using namespace std;
const int N = 1e7;
ll frq[N];
vector<bool> seive(1e6 + 1, true);
const int maxn = 1e5;
bool isprime[maxn];
const int mod = 998244353;
ll fact[N];
//*-----------------------------------------------------------------------------------------------------------------------------------------*
void code()
{
    abdo;
}

int primeFactors(int n)
{
    int c=0;
    while (n % 2 == 0)
    {
        c++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            c++;
            n = n/i;
        }
    }
    if (n > 2)
    {
        c++;
    }
    return c;
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
 
    }
    return gcd(b, a % b);
}
void extendgcd(ll a, ll b, ll*v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return ;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;//pass an arry of size1 3
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
bool isPalindrome(string s)
 
{
 
    int n=s.length();
 
    for(int i=0; i<n/2; i++)
 
    {
 
        if(s[i] != s[n-i-1])
 
            return false;
 
    }
 
    return true;
 
}
void palindrome(int n)
{
    int rev=0,val;
    val = n;
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if(val==rev)
        cout<<val<<" is a palindrome"<<endl;
    else
        cout<<val<<" is not a palindrome"<<endl;
}
 
bool plin(int index)
{
    ll arr[N];
    int n;
    if(index == n)
    {
        return 1;
    }
    return (arr[index] == arr[n - index -1]) && plin(index + 1);
 
}
 
bool isPrime()
{
    int n;
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
bool isEven()
{
    int n;
    return (n % 2 == 0);
}
void check_X0r(ll a, ll b)
{
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
}
int findSumstr(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());
}
void sieve()
{
    for(int i=2; i<maxn; i++) isprime[i]=1;
    for(int i=2; i*i<maxn; i++) if(isprime[i])
        {
            for(int j=i*i; j<maxn; j+=i) isprime[j]=0;
        }
}
ll exp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a);
        a=(a*a);
        b>>=1;
    }
    return res;
}
ll modexp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}
ll sqt(ll x)
{
    ll start =1;
    ll end = x;
    while (end>start)
    {
        end = start+(end-start)/2;
        start = x/end;
    }
    return end;
}
ll inv(ll a)
{
    return modexp(a, mod-2);
}
ll C(ll n, ll r)
{
    ll nume = fact[n];
    ll deno = (inv(fact[n-r]) * inv(fact[r])) % mod;
    return (nume * deno) % mod;
}
 // int arr[N],ans[50];
void solve( ll n , string st )
{

}
void testCases()
{
    //tc
    //solve();
}
void quary(ll q , ll ans, ll iseven , ll isodd)
{
         while(q--){
        int num , evenorodd;
        cin >>num >> evenorodd;
        if(num == 0)
        {
          ans+=evenorodd * iseven;
          if(evenorodd % 2 != 0)
            {
                isodd+=iseven;
                iseven=0;
            }
        }
        if(num==1)
        {
          ans += evenorodd * isodd;
          if(evenorodd % 2 != 0){
            iseven += isodd;
            isodd=0;
              
          } 
}
cout<<ans<<endl;
}
}

int main()
{
  //code();
 
  // tc
    {
   int n;
   cin>>n;
  string st ;
  cin>>st;
  ll cnt =0;
  for(ll i = 0 ; i < st.size() ; i++)
  {
    if(st[i] == st[i+1] )
    {
        cnt++;
    }
  }
  cout<<cnt;
}
}
#include<bits/stdc++.h>
#define ll                  long long
#define ld                  long double
#define f(i,n)              for(ll i=0;i<(n);i++)
#define f1(i,n)             for(ll i=1;i<=n;i++)
#define el  	            "\n"
#define sq(a)               (a)*(a)
#define pb                  push_back
#define asort(a,n)            sort(a,a+n)
#define dsort(a,n)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define YES                 cout << "YES\n";
#define Yes                 cout << "Yes"<<el;
#define yes                 cout << "yes"<<el;
#define NO                  cout << "NO\n";
#define No                  cout << "No"<<el;
#define no                  cout << "no"<<el;
#define covid19             ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const double pi=acos(-1);
using namespace std;

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
bool primeFactors(int n, int l, int r, bool notFound)
{
    for (int i = l; i <= r; i++)
    {
        if (i == 1)
            i++;
        if (n % i == 0)
        {
            cout << i << " ";
            notFound = false;
        }
        while (n % i == 0)
        {
            n = n / i;
        }
    }
    return notFound;
}
bool IsInBinarySequence(ll number) {
    ll numbertocheck = 1;
    do {
        if (number == numbertocheck) return true;
        numbertocheck *= 2;
    } while (numbertocheck <= number);
    return false;
}
ll nextPowerOf2(ll n)
{
    if (n && !(n & (n - 1)))
        return n;
    ll cnt = 0;
    while (n != 0)
    {
        n >>= 1;
        cnt++;
    }
    ll x = 1;
    x = x << cnt;
    return x;
}
ll highestPowerof2(ll n)
{
    ll res = 0;
    for (ll i = n; i >= 1; i--)
    {
        // If i is a power of 2
        if ((i & (i - 1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}
void first50fib1_1_2()
{
    ll arr[] = { 1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155, 165580141 ,267914296 ,433494437 ,701408733 ,1134903170 ,1836311903 ,2971215073 ,4807526976 ,7778742049,12586269025,20365011074 };
}
void first50fib0_0_1()
{
    ll arr[51]={0, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368,75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049};
}
ll fib(ll n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
ll binets_formula(ll n) {
    double sqrt5 = sqrt(5);

    int F_n = (pow((1 + sqrt5), n) - pow((1 - sqrt5), n)) / (pow(2, n) * sqrt5);

    return F_n;
}

void firstLuckyto1e9()
{
    vector<ll>v = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447
            , 7474, 7477, 7744, 7747, 7774, 7777, 44444, 44447, 44474, 44477, 44744, 44747, 44774, 44777, 47444, 47447, 47474, 47477
            , 47744, 47747, 47774, 47777, 74444, 74447, 74474, 74477, 74744, 74747, 74774, 74777, 77444, 77447, 77474, 77477, 77744,
                    77747, 77774, 77777, 444444, 444447, 444474, 444477, 444744, 444747, 444774, 444777, 447444, 447447, 447474, 447477, 447744, 447747, 447774, 447777, 474444, 474447, 474474, 474477, 474744, 474747, 474774, 474777, 477444, 477447, 477474, 477477, 477744, 477747, 477774, 477777, 744444, 744447, 744474, 744477, 744744, 744747, 744774, 744777, 747444, 747447, 747474, 747477, 747744, 747747, 747774, 747777, 774444, 774447, 774474, 774477, 774744, 774747, 774774, 774777, 777444, 777447, 777474, 777477, 777744, 777747, 777774, 777777, 4444444, 4444447, 4444474, 4444477, 4444744, 4444747, 4444774, 4444777, 4447444, 4447447, 4447474, 4447477, 4447744, 4447747, 4447774, 4447777, 4474444, 4474447, 4474474, 4474477, 4474744, 4474747, 4474774, 4474777, 4477444, 4477447, 4477474, 4477477, 4477744, 4477747, 4477774, 4477777, 4744444, 4744447,
                    4744474, 4744477, 4744744, 4744747, 4744774, 4744777, 4747444, 4747447, 4747474, 4747477, 4747744, 4747747, 4747774, 4747777, 4774444, 4774447, 4774474, 4774477, 4774744, 4774747, 4774774, 4774777, 4777444, 4777447, 4777474, 4777477, 4777744, 4777747, 4777774, 4777777, 7444444, 7444447, 7444474, 7444477, 7444744, 7444747, 7444774, 7444777, 7447444, 7447447,
                    7447474, 7447477, 7447744, 7447747, 7447774, 7447777, 7474444, 7474447, 7474474, 7474477, 7474744, 7474747, 7474774, 7474777, 7477444, 7477447, 7477474, 7477477, 7477744, 7477747, 7477774, 7477777, 7744444, 7744447, 7744474, 7744477, 7744744, 7744747, 7744774, 7744777, 7747444, 7747447, 7747474, 7747477, 7747744, 7747747, 7747774, 7747777, 7774444, 7774447,
                    7774474, 7774477, 7774744, 7774747, 7774774, 7774777, 7777444, 7777447, 7777474, 7777477, 7777744, 7777747, 7777774, 7777777, 44444444, 44444447, 44444474, 44444477, 44444744, 44444747, 44444774, 44444777, 44447444, 44447447, 44447474, 44447477, 44447744, 44447747, 44447774, 44447777, 44474444, 44474447, 44474474, 44474477, 44474744, 44474747, 44474774, 44474777, 44477444, 44477447, 44477474, 44477477, 44477744, 44477747, 44477774, 44477777, 44744444, 44744447, 44744474, 44744477, 44744744, 44744747, 44744774, 44744777, 44747444, 44747447, 44747474, 44747477, 44747744, 44747747, 44747774, 44747777, 44774444, 44774447, 44774474, 44774477, 44774744, 44774747, 44774774, 44774777, 44777444, 44777447, 44777474, 44777477, 44777744, 44777747, 44777774, 44777777, 47444444, 47444447, 47444474, 47444477, 47444744, 47444747, 47444774, 47444777, 47447444, 47447447, 47447474, 47447477, 47447744, 47447747, 47447774, 47447777, 47474444, 47474447, 47474474, 47474477, 47474744, 47474747, 47474774, 47474777, 47477444, 47477447, 47477474, 47477477, 47477744, 47477747, 47477774, 47477777, 47744444, 47744447, 47744474, 47744477, 47744744, 47744747, 47744774, 47744777, 47747444, 47747447, 47747474, 47747477, 47747744, 47747747, 47747774, 47747777, 47774444, 47774447, 47774474, 47774477, 47774744, 47774747, 47774774, 47774777, 47777444, 47777447, 47777474, 47777477, 47777744, 47777747, 47777774, 47777777, 74444444, 74444447, 74444474, 74444477, 74444744, 74444747, 74444774, 74444777, 74447444, 74447447, 74447474, 74447477, 74447744, 74447747, 74447774, 74447777, 74474444, 74474447, 74474474, 74474477, 74474744, 74474747, 74474774, 74474777, 74477444, 74477447, 74477474, 74477477, 74477744, 74477747, 74477774, 74477777, 74744444, 74744447, 74744474, 74744477, 74744744, 74744747, 74744774, 74744777, 74747444, 74747447, 74747474, 74747477, 74747744, 74747747, 74747774, 74747777, 74774444, 74774447, 74774474, 74774477, 74774744, 74774747, 74774774, 74774777, 74777444, 74777447, 74777474, 74777477, 74777744, 74777747, 74777774, 74777777, 77444444, 77444447, 77444474, 77444477, 77444744, 77444747, 77444774, 77444777, 77447444, 77447447, 77447474, 77447477, 77447744, 77447747, 77447774, 77447777, 77474444, 77474447, 77474474, 77474477, 77474744, 77474747, 77474774, 77474777, 77477444, 77477447, 77477474, 77477477, 77477744, 77477747, 77477774, 77477777, 77744444, 77744447, 77744474, 77744477, 77744744, 77744747, 77744774, 77744777, 77747444, 77747447, 77747474, 77747477, 77747744, 77747747, 77747774, 77747777, 77774444, 77774447, 77774474, 77774477, 77774744, 77774747, 77774774, 77774777, 77777444, 77777447, 77777474, 77777477, 77777744, 77777747, 77777774, 77777777, 444444444, 444444447, 444444474, 444444477, 444444744, 444444747, 444444774, 444444777, 444447444, 444447447, 444447474, 444447477, 444447744, 444447747, 444447774, 444447777, 444474444, 444474447, 444474474, 444474477, 444474744, 444474747, 444474774, 444474777, 444477444, 444477447, 444477474, 444477477, 444477744, 444477747, 444477774, 444477777, 444744444, 444744447, 444744474, 444744477, 444744744, 444744747, 444744774, 444744777, 444747444, 444747447, 444747474, 444747477, 444747744, 444747747, 444747774, 444747777, 444774444, 444774447, 444774474, 444774477, 444774744, 444774747, 444774774, 444774777, 444777444, 444777447, 444777474, 444777477, 444777744, 444777747, 444777774, 444777777, 447444444, 447444447, 447444474, 447444477, 447444744, 447444747, 447444774, 447444777, 447447444, 447447447, 447447474, 447447477, 447447744, 447447747, 447447774, 447447777, 447474444, 447474447, 447474474, 447474477, 447474744, 447474747, 447474774, 447474777, 447477444, 447477447, 447477474, 447477477, 447477744, 447477747,447477774, 447477777, 447744444, 447744447, 447744474, 447744477, 447744744, 447744747, 447744774, 447744777, 447747444,447747447, 447747474, 447747477, 447747744, 447747747, 447747774, 447747777, 447774444, 447774447, 447774474, 447774477
            , 447774744, 447774747, 447774774, 447774777, 447777444, 447777447, 447777474, 447777477, 447777744, 447777747, 447777774, 447777777, 474444444, 474444447, 474444474, 474444477, 474444744, 474444747, 474444774, 474444777, 474447444, 474447447, 474447474, 474447477, 474447744, 474447747, 474447774, 474447777, 474474444, 474474447, 474474474, 474474477, 474474744, 474474747, 474474774, 474474777, 474477444, 474477447, 474477474, 474477477, 474477744, 474477747, 474477774, 474477777, 474744444, 474744447, 474744474, 474744477, 474744744, 474744747, 474744774, 474744777, 474747444, 474747447, 474747474, 474747477, 474747744, 474747747, 474747774, 474747777, 474774444, 474774447, 474774474, 474774477, 474774744, 474774747, 474774774, 474774777, 474777444, 474777447, 474777474, 474777477, 474777744, 474777747, 474777774, 474777777, 477444444, 477444447, 477444474, 477444477, 477444744, 477444747, 477444774, 477444777, 477447444, 477447447, 477447474, 477447477, 477447744, 477447747, 477447774, 477447777, 477474444, 477474447, 477474474, 477474477, 477474744, 477474747,477474774, 477474777, 477477444, 477477447, 477477474, 477477477, 477477744, 477477747, 477477774, 477477777, 477744444,477744447, 477744474, 477744477, 477744744, 477744747, 477744774, 477744777, 477747444, 477747447, 477747474, 477747477
            , 477747744, 477747747, 477747774, 477747777, 477774444, 477774447, 477774474, 477774477, 477774744, 477774747, 477774774, 477774777, 477777444, 477777447, 477777474, 477777477, 477777744, 477777747, 477777774, 477777777, 744444444, 744444447, 744444474, 744444477, 744444744, 744444747, 744444774, 744444777, 744447444, 744447447, 744447474, 744447477, 744447744, 744447747, 744447774, 744447777, 744474444, 744474447, 744474474, 744474477, 744474744, 744474747, 744474774, 744474777, 744477444, 744477447, 744477474, 744477477, 744477744, 744477747, 744477774, 744477777, 744744444, 744744447, 744744474, 744744477, 744744744, 744744747, 744744774, 744744777, 744747444, 744747447, 744747474, 744747477, 744747744, 744747747, 744747774, 744747777, 744774444, 744774447, 744774474, 744774477, 744774744, 744774747, 744774774, 744774777, 744777444, 744777447, 744777474, 744777477, 744777744, 744777747, 744777774, 744777777, 747444444, 747444447, 747444474, 747444477, 747444744, 747444747, 747444774, 747444777, 747447444, 747447447, 747447474, 747447477, 747447744, 747447747,747447774, 747447777, 747474444, 747474447, 747474474, 747474477, 747474744, 747474747, 747474774, 747474777, 747477444,747477447, 747477474, 747477477, 747477744, 747477747, 747477774, 747477777, 747744444, 747744447, 747744474, 747744477
            , 747744744, 747744747, 747744774, 747744777, 747747444, 747747447, 747747474, 747747477, 747747744, 747747747, 747747774, 747747777, 747774444, 747774447, 747774474, 747774477, 747774744, 747774747, 747774774, 747774777, 747777444, 747777447, 747777474, 747777477, 747777744, 747777747, 747777774, 747777777, 774444444, 774444447, 774444474, 774444477, 774444744, 774444747, 774444774, 774444777, 774447444, 774447447, 774447474, 774447477, 774447744, 774447747, 774447774, 774447777, 774474444, 774474447, 774474474, 774474477, 774474744, 774474747, 774474774, 774474777, 774477444, 774477447, 774477474, 774477477, 774477744, 774477747, 774477774, 774477777, 774744444, 774744447, 774744474, 774744477, 774744744, 774744747, 774744774, 774744777, 774747444, 774747447, 774747474, 774747477, 774747744, 774747747, 774747774, 774747777, 774774444, 774774447, 774774474, 774774477, 774774744, 774774747, 774774774, 774774777, 774777444, 774777447, 774777474, 774777477, 774777744, 774777747, 774777774, 774777777, 777444444, 777444447, 777444474, 777444477, 777444744, 777444747,
                    777444774, 777444777, 777447444, 777447447, 777447474, 777447477, 777447744, 777447747, 777447774, 777447777, 777474444,
                    777474447, 777474474, 777474477, 777474744, 777474747, 777474774, 777474777, 777477444, 777477447, 777477474, 777477477
            , 777477744, 777477747, 777477774, 777477777, 777744444, 777744447, 777744474, 777744477, 777744744, 777744747, 777744774, 777744777, 777747444, 777747447, 777747474, 777747477, 777747744, 777747747, 777747774, 777747777, 777774444, 777774447, 777774474, 777774477, 777774744, 777774747, 777774774, 777774777, 777777444, 777777447, 777777474, 777777477, 777777744, 777777747, 777777774, 777777777, 4444444444 };

}
void  luckyGenerator() {
    vector<ll> lucky;
    lucky.pb(0);
    int idx = 0;
    while (lucky.back() < 1e10) {
        lucky.push_back(((lucky[idx] * 10) + 4));
        lucky.push_back((lucky[idx] * 10) + 7);
        idx++;
    }
}
int binarySearch(int a[], int first, int last, int search_num)
{
    int middle;
    if (last >= first)
    {
        middle = (first + last) / 2;
        //Checking if the element is present at middle loc
        if (a[middle] == search_num)
        {
            return middle + 1;
        }

            //Checking if the search element is present in greater half
        else if (a[middle] < search_num)
        {
            return binarySearch(a, middle + 1, last, search_num);
        }

            //Checking if the search element is present in lower half
        else
        {
            return binarySearch(a, first, middle - 1, search_num);
        }

    }
    return -1;
}
void factorize(long long n) {
    int count = 0;
    while (!(n % 2)) {
        n /= 2;
        count++;
    }
    if (count)
        cout << 2 << "^" << count << endl;
    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count)
            cout << i << "^" << count << endl;
    }
    if (n > 2)
        cout << n << "^" << 1 << endl;
}
void primeFactors(ll num) {
    ll fac = 2;
    while (num > 1) {
        if (num % fac == 0) {
            cout << fac << " ";
            num /= fac;
            ll pow = 1;
            while (num % fac == 0) {
                num /= fac;
                pow++;
            }
            cout << pow << el;
        }
        else {
            fac++;
        }
    }
}
bool onePrimeFactor(ll num)
{
    ll fac = 2;
    int cnt = 0;
    while (num > 1)
    {
        if (num % fac == 0)
        {
            cnt++;
            while (num % fac == 0)
                num /= fac;
        }
        else
        {
            fac++;
        }
        if (cnt >= 2)
        {
            return false;
        }
    }
    return true;
}
bool isPerfect(ll d)
{
    double temp = d;
    d = sqrt(d);
    temp = sqrt(temp);
    if (temp == d)
        return true;
    return false;
}
void sort(string s[], int n)//sort string according to length
{
    for (int i = 1; i < n; i++)
    {
        string temp = s[i];
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = temp;
    }
}
bool IsPowerOfTwo(ll x)
{
    return (x & (x - 1)) == 0;
}
int binarySearchCount(ll arr[], int n, ll key)
{
    int left = 0, right = n;

    int mid;
    while (left < right) {
        mid = (right + left) >> 1;

        if (arr[mid] == key) {
            while (mid + 1 < n && arr[mid + 1] == key)
                mid++;
            break;
        }

        else if (arr[mid] > key)
            right = mid;

        else
            left = mid + 1;
    }

    while (mid > -1 && arr[mid] > key)
        mid--;

    return mid + 1;
}
const ll mod = 1e9 + 7;
bool is(int x, int y) {
    set<int> s;
    if (x < 10000) {
        s.insert(0);
    }
    if (y < 10000) {
        s.insert(0);
    }
    while (x > 0)
    {
        int d = x % 10;
        s.insert(d);
        x /= 10;
    }
    while (y > 0)
    {
        int d = y % 10;
        s.insert(d);
        y /= 10;
    }
    return s.size() == 10;
}
int countOnesInBin(ll n) {
    int cnt = 0;
    while (n) {
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}
string convertToBinary(ll x) {
    string s;
    while (x > 0) {
        if (x % 2)
            s += '1';
        else
            s += '0';
        x /= 2;
    }
    return s;
}

int main() {
#ifndef ONLINE_JUDGE
    clock_t start = clock();
#endif

    covid19
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt=0;
    f(i,s.length()) {
        if (s[i] == s[i + 1])
            cnt++;
    }
    cout << cnt;

    #ifndef ONLINE_JUDGE
    clock_t end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken: " << time_taken;
    cout << " sec \n";
#endif
}
#include <iostream>
using namespace std;
struct edge{
	int x,y;
}edges[110];
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>edges[i].x>>edges[i].y;

	int ans=0;
	for(int i=0;i<n;i++)
	{
		int max_y=0,max_x=0;
		for(int j=0;j<n;j++)
		{
			if(edges[i].x==edges[j].x) max_y=max(max_y,edges[j].y);
			if(edges[i].y==edges[j].y) max_x=max(max_x,edges[j].x);
		}
		ans=max(ans,(max_x-edges[i].x)*(max_y-edges[i].y));
	}
	 cout<<ans;
	return 0;
}






#include <iostream>
#include <stdio.h>
using namespace std;
int score[10001],ax=0,in=110,sum=0;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>score[i];
		ax=max(ax,score[i]);
		in=min(in,score[i]);
		sum+=score[i];
	}
	double ans=sum/(1.0*n);
	cout<<ax<<endl<<in<<endl;
	printf("%.2lf",ans);
	return 0;
}








403


#include <iostream>
using namespace std;


int main()
{
	itt n;
	cin>>n;
	while(n)
	{
		cout<<n<<' ';
		n/=2;
	}
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&(s[i+1]>'1'&&s[i+1]<='9'))
		{
			int n=s[i+1]-'0';
			for(int j=0;j<n;j++) cout<<s[i];
			i++;
		}
		else if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))) cout<<s[i];
	}
	return 0;
}




class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[0]<target)
            {
            	if(nums[0]<target&&target<nums[mid])
				r=mid-1;
				else l=mid+1;
            }
            else
            {
            	if(nums[mid]>target&&taregt<=nums[n-1])
            		l=mid+1;
            	else r=mid-1;
            }
        }
        return -1;
    }
};



#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
int reverse(int x)
{
	int ans=0;
	while(x)
	{
		ans=ans*10+x%10;
		x/=10;
	}
	return ans;
}

bool check(int x)
{
	if(x<=n) return false;
	int d=x%100;
	x/=100;
	int m=x%100;
	return m>0&&m<13&&d<=month[m];
}

int main()
{

	cin>>n;
	for(int i=n/10000;i<=9999;i++)
	{
		int x=i*10000+reverse(i);
		if(check(x))
		{
			cout<<x<<endl;
			break;
		}
	}
	for(int i=n/1000000;i<=9999;i++)
	{
		int x=i*1000000+i*10000+reverse(i)*100+reverse(i);
		if(check(x))
		{
			cout<<x<<endl;
			break;
		}
	}
	return 0;
}
*
#include <bits/stdc++.h>
using namespace std;

int n;
int m[4]={0};
int a,b,g;
// 123 213 231 132
int p[4]={0,1,2,3};
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>g;
		swap(p[a],p[b]);
		m[p[g]]++;
	}
	int max_n=0;
	int max_index=0;
	for(int i=1;i<4;i++)
	{
		if(m[i]>max_n)
		{
			max_n=m[i];
			max_index=i;
		}
	}
	cout<<max_index<<endl;
	return 0;
}






#include <string.h>
#include <stdio.h>
int main()
{
    char s[110];
    gets(s);
    int ans=0;
    for(int i=0;i<strlen(s);i++)
    {
        if((int)s[i]>=48 && (int)s[i]<=57) ans++;
    }
    printf("%d",ans);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

map<int,int> m;
int a[500001],n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	if(m.count(0)) puts("NO");
	else if(m.size()==2)
	{
		int cnt=0;
		for(auto i:m)
		{
			a[++cnt]=i.first;
		}
		if(a[1]+a[2]==0) puts("NO");
		else puts("YES");
	}
	else puts("YES");
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<string,vector<int>> p;
int n,k;
ll ans;
string s;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		auto &v=p[s];
		ans+=v.end()-lower_bound(v.begin(),v.end(),i-k-1);
		v.push_back(i);
	}
	cout<<ans<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

string s;
int x=0,y=0;
unordered_set<string> h;
string m[8]={"ULD","URD","LDR","LUR","DLU","DRU","RUL","RDL"};
int main()
{
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if((s[i]=='L'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='L'))
        {
            puts("NO");
            return 0;
        }
        if((s[i]=='U'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='U'))
        {
            puts("NO");
            return 0;
        }
        if(s[i]=='U') y++;
        else if(s[i]=='R') x++;
        else if(s[i]=='D') y--;
        else x--;
    }
    for(int i=0;i<len-2;i++)
    {
        string ans="";
        ans=s[i]+s[i+1]+s[i+2];
        h.insert(ans);
    }
    for(int i=0;i<8;i++)
    {
        if(h.count(m[i]))
        {
            puts("NO");
            return 0;
        }
    }
    if(x==0&&y==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}


// # ����DP  ����������

#include <bits/stdc++.h>
using namespace std;
const int N = 510,INF=1e9;

int f[N][N];
int a[N][N];
int n;

int main()
{
    cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
	    	cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
	    	f[i][j]=-INF;
	f[1][1]=a[1][1];
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			f[i][j]=max(f[i-1][j-1]+a[i][j],f[i-1][j]+a[i][j]);
		}
	}
	int ans=-INF;
	for(int i=1;i<=n;i++) ans=max(ans,f[n][i]);
	cout<<ans<<endl;
    return 0;
}



���ű�ʮһ��

#include <bits/stdc++.h>
using namespace std;

const int N = 510,INF=1e9;

int f[N][N];
int m[N][N];

int n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cin>>f[i][j];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			//f[i][j]=max(f[i-1][j-1],f[i-1][j])+a[i][j];
		    if(f[i-1][j-1]>f[i-1][j])
		    {
		    	f[i][j]+=f[i-1][j-1];
		    	m[i][j]=m[i-1][j-1]+1;
		    }
		    else
		    {
		    	f[i][j]+=f[i-1][j];
		    	m[i][j]=m[i-1][j]-1;
		    }
		}
	}
	int ans=-INF;
	for(int i=1;i<=n;i++)
	{
		if(abs(m[n][i])<=1&&f[n][i]>ans) ans=f[n][i];
	}
	cout<<ans<<endl;
}


*/
******************************************


#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int a[N],b[N];
int n,m;

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	int l=0,r=0,ans=0;
	while(l<n&&r<m)
	{
		if(a[l]==b[r])
		{
			l++;
			r++;
			ans++;
		}
		else if(a[l]>b[r])
		{
			r++;
			b[r]+=b[r-1];
		}
		else
		{
			l++;
			a[l]+=a[l-1];
		}
	}
	cout<<ans<<endl;
	return 0;
}



#include <bits/stdc++.h>
using namespace std;
int t;
int n;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int ans=0;
		int i=0;
		while(i<s.size()-1)
		{
			if(s[i]=='0')
			{
				if(s[i+1]=='0') ans+=2;
				else if(s[i+1]=='1'&&s[i+2]=='0') ans+=1;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}



#include <bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans=0;

int q(int x,int y)
{
	int n=0;
	memset(b,0,sizeof b);

	for(int i=x;i<=y;i++)
	{
		b[a[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(b[i]==1) n++;
	}
	return n;
}


int main()
{
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			ans+=q(i,j);
		}
	}
	cout<<ans<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;

int a[10];


int main()
{
	for(int i=0;i<10;i++) a[i]=2021;
	int k;
	int ans=-1;
	for(int i=1;i<=100000;i++)
	{
		int x=i;
		while(x)
		{
			int k=x%10;
			a[k]--;
			x/=10;
			if(a[k]==-1)
			{
				ans=i;
				break;
			}
		}
		if(ans!=-1)
		{
			break;
		}
	}
	cout<<ans-1<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;
const int N = 0x3f3f3f3f;
typedef long long ll;
ll mp[2031][2031];


int main()
{
	int i,j,k;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			mp[i][j]=mp[j][i]=N;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			if(abs(i-j)<=21)
				mp[i][j]=mp[j][i]=(i*j)/(__gcd(i,j));
	for(k=1;k<=2021;k++)
	{
		for(i=1;i<=2021;i++)
		{
			for(j=1;j<=2021;j++)
			{
				if(mp[i][j]>mp[i][k]+mp[k][j]) mp[i][j]=mp[j][i]=mp[i][k]+mp[k][j];
			}
		}
	}
	cout<<mp[1][2021]<<endl;
	return 0;
}

*




#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s,sf;
		cin>>s;
		sf=s.substr(0,6);
		string home;
		int t=(s[0]-'0')*10+(s[1]-'0');
		if(t==33) home="zhejiang,";
		else if(t==11) home="beijing,";
		else if(t==71) home="Taiwan,";
		else if(t==81) home="Hong Kong,";
		else if(t==82) home="Macao,";
		else if(t==54) home="Tibet,";
		else if(t==21) home="Liaoning,";
		else if(t==31) home="shanghai,";

		cout<<"He/She is from "<<home;
		cout<<"and his/her birthday is on "
		<<s[10]<<s[11]<<","<<s[12]<<s[13]<<","<<s[6]<<s[7]<<s[8]<<s[9]
		<<" based on the table."<<endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,t;
    string home,a;
    cin>>n;
    for(int k = 0 ; k < n ; k++)
    {
        cin>>a;
        t = (a[0]-'0')*10+a[1]-'0';
        switch(t)
        {
            case 11:home = "Beijing";break;
            case 31:home = "Shanghai";break;
            case 21:home = "Liaoning";break;
            case 33:home = "Zhejiang";break;
            case 54:home = "Tibet";break;
            case 71:home = "Taiwan";break;
            case 81:home = "Hong Kong";break;
            case 82:home = "Macao";break;
            default :break;
        }
        cout<<"He/She is from "<<home<<",and his/her birthday is on "
        <<a[10]<<a[11]<<","<<a[12]<<a[13]<<","<<a[6]<<a[7]<<a[8]<<a[9]
        <<" based on the table."<<endl;
    }
    return 0;
}








``````````````````````
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int x=n;
		if(n==1) cout<<1<<endl;
		else if(n==2) cout<<4<<endl;
		else{
		while(n--)
		{
			if(n==2)
			{
				x*=2;
				break;
			}
			else
			{
				x=(x+1)*2+1;
			}
		}
		cout<<x<<endl;
	}
	}
	return 0;
}```````````````




20312088





#include <iostream>
using namespace std;
const int N = 1010;

int t,n;
int w[N],v[N];
int f[N][N];
int main()
{
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=t;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	}
	cout<<f[n][t];
	return 0;
}
*
#include <iostream>
using namespace std;
const int N = 20010;
int m,n;
int f[N];
int main()
{
	//���������m   ��Ʒ����Ϊn
	cin>>m>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=m;j>=x;j--)
		{
		    f[j]=max(f[j-x]+x,f[j]);
		}
	}
	cout<<m-f[m];
	return 0;
}*

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{

		char s[10000];
		gets(s);
		int ans=0;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]<0) ans++;
		}
		cout<<ans/2<<endl;
	}
	return 0;
}


#include <iostream>
#include <string>
using namespace std;

int n;
int solve(string s)
{
	int n=s.size();
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1]) return 0;
	}
	return 1;
}
int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(solve(s)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
*
#include <iostream>
#include <stdio.h>
using namespace std;
#define lcm(a,b) a/gcd(a,b)*b
int n;
long gcd(long m,long n)
{
	while(n)
	{
		long temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}

int main()
{
	int a[100001];
	while(scanf("%d",&n)!=EOF)
	{
		int a,x;
		cin>>a;
		while(--n)
		{
			cin>>x;
			a=lcm(a,x);
		}
		cout<<a<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		int a=0,e=0,i=0,o=0,u=0;
		char s[101];
		gets(s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]=='a'||s[j]=='A') a++;
			if(s[j]=='e'||s[j]=='E') e++;
			if(s[j]=='i'||s[j]=='I') i++;
			if(s[j]=='o'||s[j]=='O') o++;
			if(s[j]=='u'||s[j]=='U') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(n) cout<<endl;

	}

	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char s[105];

int main()
{
	while(gets(s))
	{
		int len=strlen(s);
		s[0]-='a'-'A';
		for(int i=1;i<len;i++)
		{
			if(s[i]==' ') s[i+1]-='a'-'A';
		}
		cout<<s<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char s[10011];
	while(scanf("%s",&s)!=EOF)
	{
		int maxchar=s[0];
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>maxchar) maxchar=s[i];
		}
		for(int i=0;i<strlen(s);i++)
		{
			cout<<s[i];
			if(s[i]==maxchar)
			{
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	return 0;
}



#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;
char s[100001];

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		int c=0;
		int l=strlen(s);
		if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_')
		{
			for(int i=1;i<l;i++)
			{
				if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9'))
				c++;
				else
				{
					cout<<"no"<<endl;
					break;
				}
				if(c+1==l)
				{
					cout<<"yes"<<endl;
				}
			}
		}
		else cout<<"no"<<endl;
	}
	return 0;
}

#include <iostream>
#include <stdio.h>
#include <stdio.h>
using namespace std;

int n;

int main()
{
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int a[10001];
		int mp,mn=1000000;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]
			if(a[i]<mn)
			{
				mn=a[i];
				mp=i;
			}
		}
		if(mp!=0){
			a[mp]=a[0];
			a[0]=mp;
		}
		cout<<a[0];
		for(int i=1;i<n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
}





#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==0&&m==0) break;
		int a[1000][1000];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int ans=a[0][0],x=0,y=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(abs(a[i][j])>abs(ans))
				{
					ans=a[i][j];
					x=i+1;
					y=j+1;
				}
			}
		}
		cout<<x<<" "<<y<<" "<<ans<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
const int N = 1e5+10;

struct edge{
	int ts,id;
	bool operator < (const edge x) const {
		return ts<x.ts;
	}
}edges[N];

int n,m,ti;
map<int,int> m;
int main()
{
	cin>>n>>m>>ti;

	for(int i=0;i<m;i++)
		cin>>edges[i].ts>>edges[i].id;
	sort(edges,edges+m);



	return 0;
}
*

*
#################   a^b


################   64λ�����˷�

*

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n,m,a[100001];
	while(cin>>n>>m,(n||m))
	{
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=m;
		sort(a,a+n+1);
		cout<<a[0];
		for(int i=1;i<=n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;
const int N = 100001;
int a[N];
int n;
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	while(cin>>n,n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min_index=0,num=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<num)
			{
				num=a[i];
				min_index=i;
			}
		}
		swap(a[min_index],a[0]);
		cout<<a[0];
		for(int i=1;i<n;i++) cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<int> res;
int main()
{
	while(cin>>n>>m)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=i*2;
			if(i%m==0)
			{
				res.push_back(sum/m);
				sum=0;
			}
		}
		if(n%m!=0) res.push_back(sum/(n%m));
		cout<<res[0];
		for(int i=1;i<res.size();i++)
		{
			cout<<" "<<res[i];
		}
		cout<<endl;
		res.clear();
	}
	return 0;
}
*

#include <iostream>
using namespace std;

int n;
int a[33][33];

void fun()
{
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	for(int i=3;i<=30;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
}

int main()
{
	fun();
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i][1];
			for(int j=2;j<=i;j++)
			{
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}

*

*

#include <iostream>

using namespace std;

int t;
char op;
int y;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>op>>y;
		if(op>='a'&&op<='z') cout<<-(op-'a'+1)+y<<endl;
		else cout<<op-'A'+y+1<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char a[40000],b[40000];
void pop(char *s)
{
	int i,len=strlen(s)-1;
	for(i=len;i>=0;i--)
	{
		if(s[i]=='0') len--;
		else break;
	}
	if(s[i]=='.') len--;
	s[len+1]='\0';
}

int main()
{
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='.') pop(a);
		}
		for(int i=0;i<strlen(b);i++)
		{
			if(b[i]=='.') pop(b);
		}
		if(strcmp(a,b))
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;

string s,w;

int main()
{
	while(getline(cin,s),s!="#")
	{
		set<string> ans;
		istringstream str(s);
		while(str>>w)
		{
			ans.insert(w);
		}
		cout<<ans.size()<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <string>
using namespace std;

int n,x;
//int a[11];

int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans;
		ans=s.substr(6,5);
		ans="6"+ans;
		cout<<ans<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;

struct Stu{
	char name[1000];
	int sn;
	int st;
}stu[1000];

int n,m;
int cmp(Stu x,Stu y)
{
	if(x.sn==y.sn)
	{
		return x.st<y.st;
	}
	return x.sn>y.sn;
}
int main()
{
	cin>>n>>m;
	int p=0;
	while(cin>>stu[p].name)
	{
		for(int i=0;i<n;i++)
		{
			char ch;
			int k,l;
			cin>>k;
			if(k<=0) continue;
			stu[p].sn++;
			stu[p].st+=k;
			if(getchar()=='(')
			{
				cin>>l;
				cin>>ch;
				stu[p].st+=l*m;
			}
		}
		p++;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<p;i++)
	{
		cout<<left<<setw(10)<<stu[i].name<<" "<<right<<setw(2)<<stu[i].sn<<right<<" "<<setw(4)<<stu[i].st<<endl;
	}
	return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char op;
	int n,s=0;
	while(cin>>op,op!='@')
	{
		if(s) cout<<endl;
		s=1;
		cin>>n;
		getchar();

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+n;j++)
			{
				if(j==n-1-i||j==n-1+i) cout<<op;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
//������:http://acm.hdu.edu.cn/showproblem.php?pid=2091
#include <queue>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <assert.h>
using namespace std;
#define N 100005
//�ӵ㣺ע����ĩ��Ҫ�пո� ע�����ͼ�μ任��
char ch;
int main()
{
   bool flag = 0;
    while(scanf("%c",&ch),ch!='@'){  //������ʹ�� scanf("%c",ch) ���� getchar()  ��Ϊ��ȡ�߻س��� ������ scanf("%s",s) ���� cin>>sting ע����ʱ��Ҫ��"@"
      if(flag) printf("\n");
      flag = 1;
      int n;
      scanf("%d",&n);
      getchar();                     //ȡ������n�� ���Ļس�
      for(int i=0;i<n;i++){          //���ǱȽϼ���д��
         for(int j=0;j<i+n;j++){
            if(j==n-1-i || j==n-1+i || i==n-1) printf("%c",ch);
            else printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}

*
#include <iostream>
#include <stdio.h>
using namespace std;

int n,r;
void solve(int n,int r)
{
	int f=1;
	if(n<0)
	{
		f=0;
		n=-n;
	}
	string ans="";
	while(n)
	{
		int a=n%r;
		if(a==10) ans+='A';
		else if(a==11) ans+='B';
		else if(a==12) ans+='C';
		else if(a==13) ans+='D';
		else if(a==14) ans+='E';
		else if(a==15) ans+='F';
		else ans+=a+'0';
		n/=r;
	}
	if(!f) cout<<"-";
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		solve(n,r);
	}
	return 0;
}
*


*





*

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long long a,b;
	while(cin>>hex>>a>>b)
	{
		if(a+b<0)
		{
			cout<<setiosflags(ios::uppercase)<<hex<<"-"<<-(a+b)<<endl;
		}
		else cout<<setiosflags(ios::uppercase)<<hex<<a+b<<endl;
	}
	return 0;
}
*

*
#include <iostream>

using namespace std;

int a,b;
int n[1000001];

int main()
{
	n[0]=1;
	for(int i=1;i<1000002;i++)
	{
		int m=i,f=1;
		while(m)
		{
			if(m%10==4)
			{
				f=0;
				break;
			}
			else if(m%10==2&&m%100/10==6)
			{
				f=0;
				break;
			}
			m/=10;
		}
		if(f) n[i]=n[i-1]+1;
		else n[i]=n[i-1];
	}
	while(cin>>a>>b,(a||b))
	{
		cout<<n[b]-n[a-1]<<endl;
	}
	return 0;
}

*

#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	char s[1000];
	double a,b,ans;
	while(~scanf("%s",s))
	{
		scanf("%lf%lf",&a,&b);
		ans+=a*b;
	}
	printf("%.1lf\n",ans);
	return 0;
}
*



#include <iostream>
typedef long long ll;
using namespace std;
int n,m;
int g[10][10];
int st[10][10];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int ans=100,sum=0;
int total;
void dfs(int x,int y,int total,int s)
{
	if(total==sum/2)
	{
		ans=min(ans,s);
		return ;
	}
	if(total>sum/2) return ;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(st[nx][ny]==0&&nx>=0&&ny>=0&&nx<n&&ny<m)
		{
			st[nx][ny]=1;
			dfs(nx,ny,total+g[nx][ny],s+1);
			st[nx][ny]=0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>g[i][j];
			sum+=g[i][j];
		}
	}
	st[0][0]=1;
	dfs(0,0,g[0][0],1);
	if(ans!=100) cout<<ans<<endl;
	return 0;
}
*
                       codeforces 231 team

*
#include <iostream>
using namespace std;
int a[55];
int n,k,m=0;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	k=a[k];
	for(int i=1;i<=n;i++)
		if(a[i]>=k&&a[i]) m++;
	cout<<m<<endl;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	string s,t;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>s>>t;
		if(s==t)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			bool f=true;
			int lastindex;
			int m=t.size();
			lastindex=s.rfind(t[m-1]);
			s[lastindex]='1';
			if(lastindex==-1)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				int i=m-2;
				while(i>=0)
				{
					int pos=s.rfind(t[i]);
					if(pos==-1)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else if(pos>lastindex)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else
					{
						lastindex=pos;
						s[pos]='1';
					}
					i--;
				}
				if(f) cout<<"YES"<<endl;
			}

		}
	}
	return 0;
}

*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[3];
struct edge
{
	int a,b,c,d;
}edges[5];
int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	return 0;
}
*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[10];

struct PT {
	int x1, y1, x2, y2;
};

int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	PT t[10];
	PT s[10];
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	t[0] = {p[0].x, p[0].y, p[0].x, p[1].y};
	t[1] = {p[0].x, p[1].y, p[1].x, p[1].y};
	t[2] = {p[1].x, p[1].y, p[2].x, p[1].y};
	t[3] = {p[2].x, p[1].y, p[2].x, p[2].y};
	int tt = -1;
	for (int i = 0; i < 4; i++) {
		if (tt == -1)
			s[++tt] = t[i];
		else {
			auto q = s[tt];
			tt--;
			if (q.x1 == t[i].x2 || q.y1 == t[i].y2) {
				s[++tt] = {q.x1, q.y1, t[i].x2, t[i].y2};
			} else {
				s[++tt] = q;
				s[++tt] = t[i];
			}
		}
	}
	cout << tt+1 << endl;
	for (int i = 0; i <= tt; i++)
		cout << s[i].x1 << " " << s[i].y1 << " " << s[i].x2 << " " << s[i].y2 << endl;
	return 0;
}


#include <iostream>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s[1] == '+')
			ans++;
		else
			ans--;
	}
	cout << ans;
	return 0;
}

*

#
*


#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int n, m, x;
int a[110];
int main() {
	while (cin >> n >> m, n + m) {
		unordered_set<int> h;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++) {
			cin >> x;
			h.insert(x);
		}
		sort(a, a + n);
		int num = 0;
		for (int i = 0; i < n; i++) {
			if (!h.count(a[i])) {
				cout << a[i] << " ";
				num++;
			}
		}
		if (!num)
			cout << "NULL";
		cout << endl;
	}
	return 0;
}

*
#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

int n,k,x;
queue<int> q;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) q.push(i);
    while(k--)
    {
        cin>>x;
        int t=x%q.size();
        for(int i=0;i<t;i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}

*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main() {
	char a[110], b[110];
	scanf("%s%s", a, b);
	int n = strlen(a);
	for (int i = 0; i < n; i++) {
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - ('a' - 'A');
		if (b[i] >= 'a' && b[i] <= 'z')
			b[i] = b[i] - ('a' - 'A');
		if (a[i] > b[i]) {
			cout << "1";
			return 0;
		} else if (a[i] < b[i]) {
			cout << "-1";
			return 0;
		}
	}
	cout << "0";
	return 0;
}

*
#include <iostream>
using namespace std;

int main() {
	string s = "475730385258137";
	int k = 13;
	string ans = "";
	while (s.size() > k) {
		int i = 0;
		int n = s.size();
		while (i < n) {
			string str;
			if (i + k <= n)
				str = s.substr(i, k);
			else
				str = s.substr(i, n % k);
			int t;
			t = std::stoi(str);
			int m = 0;
			while (t) {
				m += t % 10;
				t /= 10;
			}
			ans += to_string(m);
			i += k;
			// cout<<i<<endl;
		}
		s = ans;
		ans = "";
	}
}

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	vector<int> ans;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9')
			ans.push_back(s[i] - '0');
	}
	sort(ans.begin(), ans.end());
	cout << ans[0];
	for (int i = 1; i < ans.size(); i++) {
		cout << "+" << ans[i];
	}
	return 0;
}
#include<bits/stdc++.h>
#define abdo ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define tc ll t ; cin>>t; while(t--)
#define pb push_back
#define pob pop_back
#define loopj(j,a,b) for(ll j = a ; j < b-1 ; j++)
#define loopi(i,a,b) for (ll i = a; i < b; i++)
#define vl vector<ll>
#define vi vector<int>
#define lb lower_bound
#define ub upper_bound
#define sumv(v) accumalate(v.begin(),v.end(),0)
#define mii map<int,int>
#define umii unordered_map<int,int>
#define order(v) sort(v.begin(),v.end())
#define ed '\n'
#define el "\n"
#define all(v) v.begin(),v.end()
#define YES cout<<"YES"<<ed;
#define NO cout<<"NO"<<ed;
#define Yes cout<<"Yes"<<ed;
#define No cout<<"No"<<ed;
#define yEs cout<<"yEs"<<ed;
#define yeS cout<<"yeS"<<ed;
#define nO cout<<"nO"<<ed;
#define yes cout<<"yes"<<ed;
#define no cout<<"no"<<ed;
#define ans1 ll ans = 0;
#define cnt1 ll cnt = 0;
#define sum(a , b) (a + b)
#define product(a , b) (a * b)
#define squarear(a) (a * a)
#define rectanglear(a , b) (a * b)
#define squarepre(a) (a * 4)
#define rectanglpr(a , b) ((a + b)*2)
typedef unsigned long long ull;
typedef long double lld;
using namespace std;
const int N = 1e3;
ll frq[N];
vector<bool> seive(1e6 + 1, true);
const int maxn = 1e5;
bool isprime[maxn];
const int mod = 998244353;
ll fact[N];
//*-----------------------------------------------------------------------------------------------------------------------------------------*
void code()
{
    abdo;
}
int primeFactors(int n)
{
    int c=0;
    while (n % 2 == 0)
    {
        c++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            c++;
            n = n/i;
        }
    }
    if (n > 2)
    {
        c++;
    }
    return c;
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
 
    }
    return gcd(b, a % b);
}
void extendgcd(ll a, ll b, ll*v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return ;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;//pass an arry of size1 3
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
bool isPalindrome(string s)
 
{
 
    int n=s.length();
 
    for(int i=0; i<n/2; i++)
 
    {
 
        if(s[i] != s[n-i-1])
 
            return false;
 
    }
 
    return true;
 
}
void palindrome(int n)
{
    int rev=0,val;
    val = n;
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if(val==rev)
        cout<<val<<" is a palindrome"<<endl;
    else
        cout<<val<<" is not a palindrome"<<endl;
}
 
bool plin(int index)
{
    ll arr[N];
    int n;
    if(index == n)
    {
        return 1;
    }
    return (arr[index] == arr[n - index -1]) && plin(index + 1);
 
}
 
bool isPrime()
{
    int n;
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
bool isEven()
{
    int n;
    return (n % 2 == 0);
}
void check_X0r(ll a, ll b)
{
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
}
int findSumstr(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());
}
void sieve()
{
    for(int i=2; i<maxn; i++) isprime[i]=1;
    for(int i=2; i*i<maxn; i++) if(isprime[i])
        {
            for(int j=i*i; j<maxn; j+=i) isprime[j]=0;
        }
}
ll exp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a);
        a=(a*a);
        b>>=1;
    }
    return res;
}
ll modexp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}
ll sqt(ll x)
{
    ll start =1;
    ll end = x;
    while (end>start)
    {
        end = start+(end-start)/2;
        start = x/end;
    }
    return end;
}
ll inv(ll a)
{
    return modexp(a, mod-2);
}
ll C(ll n, ll r)
{
    ll nume = fact[n];
    ll deno = (inv(fact[n-r]) * inv(fact[r])) % mod;
    return (nume * deno) % mod;
}

void solve( int n , string red , vector<string> red_or_blue)
{
    for(ll i = 0 ; i < n ; i++)
    {
        if(red_or_blue[i] == red)
        {
            cout << "R" <<ed;
            return;
        }
    }

    cout<< "B" <<ed;
}
void testCases()
{
    //tc
    //solve();
}
int main()
{
  code();
 
  // tc
    {
       string s, m[N] ;
       cin>>s;
       int cnt=0  , cnt2=0  , cnt3=0   ;
       for(int i = 0 ; i <s.size() ; i++)
       {
        if(s[i] == '1')
        {
            cnt++;
        }
        else if(s[i] == '2')
        {
           cnt2++;
        }
        else if(s[i] == '3')
        {
           cnt3++;
        }

       }
       int i =0;
       while (cnt--)
       {
       m[i]='1';
       m[i+1]='+';
       i+=2;
     }
     while(cnt2--){
     m[i]='2';
       m[i+1]='+';
       i+=2;
     }
     while(cnt3--){
        m[i]='3';
       m[i+1]='+';
       i+=2;
     }
     for(int j = 0 ; j <s.size() ; j++)
       cout<<m[j];
     }


}
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//#include<string>
//using namespace std;
//void Slove(int k,int n,string s)
//{
//
//}
//int main()
//{
//    int t,n,i;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d",&n);
//        cout <<"program sort(input,output);\nvar";
//        string s = "a";
//        for(i = 1; i < n; i++)
//        {
//            s.push_back(',');
//            s.push_back(i + 'a');
//        }
//        cout<<s<<" : integer;\nbegin\n"<<"  readln("<<s<<");";
//        string ch = "a";
//        Slove(1,n,ch);
//        cout << "end."<<endl;
//    }
//    return 0;
//}



//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N = 1000005;
//char Neck[N << 1],temp[N << 1];
//int sum[N << 1],Q[N << 1];
//int vis[2][N];
//void Solve(int m,int n,int k)
//{
//    int i;
//    sum[0] = 0;
//    for(i = 1; i <= m; i++)
//    {
//        sum[i] = sum[i-1] + (Neck[i] == 'C' ? 1 : -1);
//    }
//    int head = 0,tail = 0;
//    for(i = 1; i <= m; i++)
//    {
//        while(head < tail && sum[Q[tail-1]] >= sum[i])
//            tail--;
//        Q[tail++] = i;
//        if(i >= n)
//        {
//            while(i - Q[head] >= n)
//                head++;
//            vis[k][i-n] = (sum[i-n] <= sum[Q[head]]);
//        }
//    }
//}
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,i,len,Len,ncase = 1;
//    scanf("%d",&n);
//    while(n--)
//    {
//        scanf("%s",temp);
//        len = strlen(temp);
//        strcpy(Neck+1,temp);
//        strcat(Neck+1,temp);
//        Len = strlen(Neck+1);
//        memset(vis,0,sizeof(vis));
//        Solve(Len,len,0);
//        reverse(Neck+1,Neck+Len+1);
//        Solve(Len,len,1);
//        int ans = 0;
//        for(i = 1; i <= len; i++)
//        {
//            if(vis[0][i] || vis[1][len-i])
//                ans++;
//        }
//        printf("Case %d: %d\n",ncase++,ans);
//    }
//    return 0;
//}


//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//const int N = 100005;
//const long long inf = 1 << 31;
//int sum[N],a[N];
//int L,R,Max;
//void Solve(int n,int k)
//{
//    for(i = 0; i < )
//}
//int main()
//{
//    int t,n,k;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d%d",&n,&k);
//        sum[0] = 0;
//        for(i = 1; i <= n; i++)
//        {
//            scanf("%d",&a[i]);
//            sum[i] = sum[i-1] + a[i];
//        }
//        for(i = n+1,j = 1; i < n+1+k; i++)
//        {
//            a[i] = a[i-n];
//            sum[i] = sum[i-1] + a[i];
//        }
//        Solve(n,k);
//        printf("%d %d %d\n",Max,L,R);
//    }
//    return 0;
//}



//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<set>
//using namespace std;
//const int N = 1000005;
//set<int> S;
//set<int> ::iterator it;
//int Kill[N];
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,m,i,j,k,l,r,x;
//    while(~scanf("%d%d",&n,&m))
//    {
//        S.clear();
//        for(i = 1; i <= n; i++)
//            S.insert(i);
//        memset(Kill,0,sizeof(Kill));
//        for(i = 0; i < m; i++)
//        {
//            scanf("%d%d%d",&l,&r,&k);
//            it = S.lower_bound(l);
//            while(it != S.end() && *it <= r)
//            {
//                x = *it;
//                it++;
//                if(x != k)
//                {
//                    Kill[x] = k;
//                    S.erase(x);
//                }
//            }
//        }
//        for(i = 1; i <= n; i++)
//            printf("%d ",Kill[i]);
//            puts("");
//    }
//}

//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//char ch[5];
//int main()
//{
//    while(~scanf("%s",ch))
//    {
//        int k = strlen(ch);
//        next_permutation(ch,ch+k);
//        printf("%s\n",ch);
//    }
//    return 0;
//}



//template<class BidirectionalIterator>
//bool next_permutation(
//    BidirectionalIterator first,
//    BidirectionalIterator last
//)
//{
//    if(first == last)
//        return false; //������
//
//    BidirectionalIterator i = first;
//    ++i;
//    if(i == last)
//        return false;  //һ��Ԫ�أ�û����һ��������
//
//    i = last;
//    --i;
//
//    for(;;)
//    {
//        BidirectionalIterator ii = i;
//        --i;
//        if(*i < *ii)
//        {
//            BidirectionalIterator j = lase;
//            while(!(*i < *--j));
//
//            iter_swap(i, j);
//            reverse(ii, last);
//            return true;
//        }
//
//        if(i == first)
//        {
//            reverse(first, last);  //ȫ���򣬼�Ϊ��С�ֵ����У���cba��Ϊabc
//            return false;
//        }
//    }
//
//}





//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//int dp[8][2];
//
//int digit[10];
//
//int dfs(int len , int state, bool fp)
//{
//    if(!len)
//        return 1;
//    if(!fp && dp[len][state] != -1)
//        return dp[len][state];
//    int ret = 0,fpmax = fp ? digit[len] : 9;
//    for(int i = 0; i <= fpmax; i++)
//    {
//        if(i == 4 || state && i == 2)
//            continue;
//        ret += dfs(len-1,i == 6,fp && i == fpmax);
//    }
//    if(!fp)
//    {
//        dp[len][state] = ret;
//    }
//    return ret;
//}
//
//int f(int x)
//{
//    int len = 0;
//    while(x)
//    {
//        digit[++len] = x % 10;
//        x /= 10;
//    }
//    return dfs(len,0,true);
//}
//
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,m;
//    memset(dp,-1,sizeof(dp));
//    while(~scanf("%d%d",&n,&m),n+m)
//    {
//        printf("%d\n",f(m)-f(n-1));
//    }
//}


//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//long long dp[100][2];
//
//int digit[100];
//
//long long dfs(int len, int state , bool fp)
//{
//    if(!len)
//        return 1;
//    if(!fp && dp[len][state] != -1)
//        return dp[len][state];
//    long long ret = 0;
//    int fmax = fp ? digit[len] : 9;
//    for(int i = 0; i <= fmax; i++)
//    {
//        if(i == 9 && state)
//            continue;
//        ret += dfs(len-1, i == 4, fp && i == fmax);
//    }
//    if(!fp)
//    {
//        dp[len][state] = ret;
//    }
//    return ret;
//}
//long long f(long long m)
//{
//    int len = 0;
//    while(m)
//    {
//        digit[++len] = m % 10;
//        m /= 10;
//    }
//    return dfs(len,0,true);
//}
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,i,j,k;
//    long long m;
//    scanf("%d",&n);
//    memset(dp,-1,sizeof(dp));
//    while(n--)
//    {
//        scanf("%I64d",&m);
//       // printf("~  %d\n",f(m));
//        printf("%I64d\n",m+1-f(m));
//    }
//    return 0;
//}

//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//map<string,int> M;
//struct Node
//{
//    string s;
//    int num;
//}p[10000];
//bool cmp(struct Node p1, struct Node p2)
//{
//    if(p1.num != p2.num)
//        return p1.num > p2.num;
//    else
//    {
//         return p1.s > p2.s;
//    }
//}
//int main()
//{
//    freopen("Input.txt","r",stdin);
//    int t,i,j,n;
//    char a;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d",&n);
//        for(i=0; i<10000; i++)
//        {
//            p[i].num=0;
//            p[i].s="";
//        }
//        getchar();
//        int pos = 0;
//        memset(p,0,sizeof(p));
//        for(i = 0; i < n; i++)
//        {
//            string ch="";
//            while(1)
//            {
//                scanf("%c",&a);
//                printf("~%c\n",a);
//                if(a == '\n')
//                    break;
//                if(a >= 'A' && a <= 'Z')
//                    a = a + 32;
//                if(a >= 'a' && a <= 'z')
//                {
//                   // puts("hi");
//                    ch += a;
//                    cout << ch << endl;
//                }
//                if( a == ' ')
//                {
//                    //cout << ch << endl;
//                   // cout << M[ch] << endl;
//                    if(M[ch] != 0)
//                    {
//
//                        p[M[ch]].num++;
//                    }
//                    else
//                    {
//
//                        M[ch] = ++pos;
//                        //printf("~ %d\n",pos);
//                        cout << ch << endl;
//                        cout<<"I'm here"<<" "<<pos<<endl;
//                        p[pos].s=ch;
//                        puts("hi");
//                        p[pos].num++;
//                    }
//                    ch = "";
//                }
//            }
//           // puts("HI");
//        }
//        sort(p,p+n,cmp);
//        for(i = 0; i < n; i++)
//        {
//            cout << p[i].s<<" " << p[i].num<<endl;
//        }
//    }
//}



//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//
//pair<int,int> P[100];
//
//struct Node
//{
//    int val,num,SumTime,SubTime;
//    Node() {}
//    Node(int v, int c, int t, int k) :val(v),num(c),SumTime(t),SubTime(k){}
//    Node Solve(int c, int w)
//    {
//        return Node(val+w, num+1, SumTime + SubTime + c, SubTime + c);
//    }
//    bool better(const Node& Q)
//    {
//        if(val != Q.val)
//            return val > Q.val;
//        else
//        {
//            if(num != Q.num)
//                return num > Q.num;
//            else
//            {
//                if(SumTime != Q.SumTime)
//                    return SumTime < Q.SumTime;
//                else
//                {
//                    return SubTime < Q.SubTime;
//                }
//            }
//        }
//    }
//}dp[1005];
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,m,i,j,V;
//    scanf("%d",&n);
//    while(n--)
//    {
//        memset(dp,0,sizeof(dp));
//        scanf("%d%d",&V,&m);
//        for(i = 0; i < m; i++)
//            scanf("%d",&P[i].first);
//        for(i = 0; i < m; i++)
//            scanf("%d",&P[i].second);
//        sort(P,P+m);
//        for(i = 0; i < m; i++)
//            for(j = V; j >= P[i].first; j--)
//            {
//                Node temp = dp[j - P[i].first].Solve(P[i].first,P[i].second);
//                if(temp.SubTime <= V && temp.better(dp[j]))
//                    dp[j] = temp;
//            }
//        printf("%d %d %d\n",dp[V].val,dp[V].num,dp[V].SumTime);
//    }
//    return 0;
//}


//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int dp[20][20];
//void Solve()
//{
//    int i,j;
//    dp[0][0] = 1;
//    for(i = 1; i <= 10; i++)
//        for(j = 0; j <= 10; j++)
//        {
//            if(i > j)
//                dp[i][j] = dp[i-1][j];
//            else
//                dp[i][j] = dp[i][j-1] + dp[i-1][j];
//        }
//}
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int t,n,m,i,j,V;
//    Solve();
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d%d",&n,&m);
//        printf("%d\n",dp[m][n]);
//    }
//    return 0;
//}


#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 10000;
char a[N];
char num[N];
int main()
{
    int n,m,i,j,ans;
    while(~scanf("%s",a))
    {
        memset(num,0,sizeof(num));
        int len = strlen(a);
        int pos = 0;
        for(i = 0; i < len; i++)
        {
            if(a[i] >= '0' && a[i] <= '3')
            {
                num[pos++] = a[i];
            }
        }
        sort(num,num+pos);
        printf("%c",num[0]);
        for(i = 1; i < pos;i++)
        {
            printf("+%c",num[i]);
        }
        puts("");
    }
    return 0;
}
 
/*
#include<bits/stdc++.h>
using namespace std;
int n,m,w;
bool done[100009];
vector<int>v[100009];
void dfs(int node)
{
    done[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            w++;
            dfs(i);
        }
    }
    cout<<w;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,m,w;
int done[100009];
vector<int>v[100009];
void dfs(int node)
{
    done[node]=w;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin>>q;
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            w++;
             dfs(i);
        }
    }

    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        if(done[a]==done[b])
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,m,sum;
bool done[100009];
vector<int>v[100009];
void dfs(int node)
{
    done[node]=1;
    sum+=v[node].size();
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            dfs(i);
            cout<<sum/2<<endl;
            sum=0;

        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int x,n,m,ww,w;
bool done[100009];
vector<int>v[100009];
void dfs(int node)
{
    if(!done[node])w++;
    done[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m>>x;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            dfs(i);
            if(w>=x)
            {
                ww++;
            }
            w=0;
        }
    }
    cout<<ww;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int sum,n,m,mx,arr[100009];
bool done[100009];
vector<int>v[1000009];
void dfs(int node)
{
    if(!done[node])
    {
        mx=max(arr[node],mx);
    }
    done[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            dfs(i);
            sum+=mx;
            mx=0;
        }
    }
    cout<<sum;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
string s[100009];
int X[]={-1,0,0,1},Y[]={0,-1,1,0};
bool done[1009][1009];
void dfs(int x,int y)
{
    done[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int nx=x+X[i];
        int ny=y+Y[i];
        if(nx>=0&&ny>=0&&nx<n&&ny<m&&s[nx][ny]!='*'&&!done[nx][ny])dfs(nx,ny);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='.'&&!done[i][j])
            {
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
set<pair<int,int> >s;
int n,b,a;
int main()
{
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
      int l,r;
      cin>>l>>r;
      for(int j=l;j<=r;j++)
      {
          int X=(j+(j/b))%a;
          int Y=j%b;
          s.insert({X,Y});
      }
    }
    cout<<s.size();
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int q,n,m,w;
vector<pair<int,pair<int,int> > >v[1009];
bool done[1000];
pair<int,int>pr[1009];
void dfs(int node,int wi)
{
    if(done[node])return;
    done[node]=1;
    w++;
    for(int i=0; i<v[node].size(); i++)
    {
        int u=v[node][i].first;
       // cout<<node<<" "<<u<<" "<<we[node][u]<<endl;
        if(v[pr[node].first][i].second.first>=wi)
        {
            dfs(u,wi);
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        pr[i]= {a,b};
        v[a].push_back({b,{c,i}});
        v[b].push_back({a,{c,i}});
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int t,x;
        cin>>t;
        if(t==1)
        {
            int b,r;
            cin>>b>>r;
            b--;
            for(int j=0;j<v[pr[b].first].size();j++)
            {

                if(v[pr[b].first][j].second.second==b)
                {
                    v[pr[b].first][j].second.first=r;
                }
            }
        }
        else
        {
            int y;
            cin>>x>>y;
            x--;
            dfs(x,y);
            cout<<w<<endl;
            w=0;
            memset(done,0,sizeof(done));
        }
    }
}
*/
/*#include<bits/stdc++.h>
using namespace std;
int n,zz,m;
string s;
vector<int>z;
int main()
{
    cin>>n>>m;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            z.push_back(i);
        }
    }
    int w=0,ww=0;
    for(int i=0;i<m;i++)
    {
        string qu;
        cin>>qu;
        if(qu=="query")
        {
            int l,r;
            cin>>l>>r;
            if(w==0)
            {
                for(int j=0;j<z.size();j++)
                {
                    if((l>z[j]&&r>z[j])||(l<z[j]&&r<z[j]))
                    {
                        zz++;
                    }
                    if(zz==z.size())
                    {
                        ww++;
                        zz=0;
                        cout<<ww<<endl;
                    }
                    else cout<<0<<endl;
                }
            }
            else
            {
                ww=0;
                w=0;
            }
        }
        else
        {
            w++;
            int x;
            cin>>x;
            z[x] = 1;
            s[x-1] = 1 - (s[x-1]-'0');
            z.clear();
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    z.push_back(i);
                }
            }
        }
    }
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int n,m;
string s[1009];
string t[1009];
int main(){
    cin>>n>>m;
    cin>>s[0];
    for(int i=0;i<m;i++){
        cin>>t[i];
        if(i != 0)
            s[i] = s[i-1];
        if(t[i] == "query"){
            int l,r;
            cin>>l>>r;
            l--;r--;
            int ans=0;
            for(int j=i;j>=0;j--){
                if(t[j] == "toggle")continue;
                int num = 0;
                for(int k=l;k<r;k++){
                    num += s[j][k]-'0';
                }
                if(num == r-l)ans++;
            }
            cout<<ans<<endl;
        }
        else{
            int x;
            cin>>x;
            x--;
            s[i][x] = '1'- s[i][x] + '0';
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<1000009;i++)
    {
        for(int i=0;i<3;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a==b&&a==c)
            {
                cout<<'*'<<endl;
                break;
            }
            else if(a==b)
            {
                cout<<'C'<<endl;
                break;
            }
            else if (a==c)
            {
                cout<<'B'<<endl;
                break;
            }
            else cout<<'A'<<endl;;
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
vector<int>v1,v2;
int main()
{
    cin>>n>>a>>x>>b>>y;
        if(x>a)
        {
            for(int j=a;j<=x;j++)
            {
                v1.push_back(j);
            }
        }
        else if(x<a)
        {
            for(int j=a;j<=n;j++)
            {
                v1.push_back(j);
                if(j==n)
                {
                    for(int k=1;k<=x;k++)
                    {
                        v1.push_back(k);
                    }
                }
            }
        }
        if(y<b)
        {
            for(int j=b;j>=y;j--)
            {
                v2.push_back(j);
            }
        }
        else if(b<y)
        {
            for(int j=b;j>0;j--)
            {
                v2.push_back(j);
                if(j==1)
                {
                    for(int k=n;k>=x;k--)
                    {
                        v2.push_back(k);
                    }
                }
            }
        }

    for(int i=0;i<min(v1.size(),v2.size());i++)
    {
    //    cout<<v1[i]<<" "<<v2[i]<<endl;
        if(v1[i]==v2[i])
        {

            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int m,n;
int c[100009],a[100009],b[100009];
int x,y,w;
map<int,int>mp;
vector<pair<int,int> >v;
int main()
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(mp[a[i]]==0)
        {
            w++;
            c[w]=a[i];
        }
        if(mp[b[i]]==0)
        {
            w++;
            c[w]=b[i];
        }
        mp[a[i]]++;
        mp[b[i]]++;
    }
    for(int i=0;i<w;i++)
    {
        v.push_back({mp[c[i]],c[i]});
    }
    sort(v.begin(),v.end());

}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
vector<int>v1,v2;
int main()
{
    cin>>n>>a>>x>>b>>y;
        if(x>a)
        {
            for(int j=a;j<=x;j++)
            {
                v1.push_back(j);
            }
        }
        else if(x<a)
        {
            for(int j=a;j<=n;j++)
            {
                v1.push_back(j);
                if(j==n)
                {
                    for(int k=1;k<=x;k++)
                    {
                        v1.push_back(k);
                    }
                }
            }
        }
        if(y<b)
        {
            for(int j=b;j>=y;j--)
            {
                v2.push_back(j);
            }
        }
        else if(b<y)
        {
            for(int j=b;j>0;j--)
            {
                v2.push_back(j);
                if(j==1)
                {
                    for(int k=n;k>=x;k--)
                    {
                        v2.push_back(k);
                    }
                }
            }
        }

    for(int i=0;i<min(v1.size(),v2.size());i++)
    {
    //    cout<<v1[i]<<" "<<v2[i]<<endl;
        if(v1[i]==v2[i])
        {

            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int i1,k1,i2,k2,w;
int b[8][8]={0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0};
int main()
{
    cin>>i1>>k1>>i2>>k2;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            if(i1==i2||k1==k2)
            {
                cout<<1<<" ";
            }
            else cout<<2<<" ";
        }
        else if(i==1)
        {
            i1--,i2--,k1--,k2--;
            if(b[i1][k1]!=b[i2][k2])
            {
                cout<<0<<" ";
                w++;
            }
            else if(abs(i1-i2)==abs(k2-k1))
            {
                cout<<1<<" ";
                w++;
            }
                if(w==0)
                {
                    cout<<2<<" ";
                }
        }

        else if(i==2)
        {
            if(abs(i1-i2)==abs(k1-k2))
            {
                cout<<abs(i1-i2);
            }
            else if(i1==i2||k1==k2)
            {
                cout<<abs(i1-i2)+abs(k1-k2);
            }
            else
            {
                cout<<max( abs ( i1 - i2 ), abs ( k1 - k2 ) ) ;
            }
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n*2;
    int b=0;
    int sum=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<" ";
        }
        if(i!=0)
            cout<<0<<" ";
        else
            cout<<0;
        for(int j=0; j<b/2; j++)
        {
            cout<<sum<<" ";
            sum++;
        }
        sum--;
        for(int j=0; j<b/2-1; j++)
        {
            sum--;
            cout<<sum<<" ";
        }
        if (i!=0)
            cout<<0;
        cout<<endl;
        if(i==0)
        {
            a-=2;
            b+=2;
            sum=1;
        }
        else
        {
            a-=2;
            b+=2;
            sum=1;
        }
    }
    cout<<0<<" ";
    int w=1;
    for(int i=0; i<n; i++)
    {
        cout<<w<<" ";
        w++;
    }
    b=w*2-3;
    w--;
    for(int i=0; i<n-1; i++)
    {
        w--;
        cout<<w<<" ";
    }
    cout<<0<<endl;
    a=2;
    sum=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<" ";
        }
        if(i!=n-1)
            cout<<0<<" ";
        else
            cout<<0;
        for(int j=0; j<b/2; j++)
        {
            cout<<sum<<" ";
            sum++;
        }
        sum--;
        for(int j=0; j<b/2-1; j++)
        {
            sum--;
            cout<<sum<<" ";
        }
        if (i!=n-1)
            cout<<0;
        cout<<endl;
        if(i<n-1)
        {
            a+=2;
            b-=2;
            sum=1;
        }
        else
        {
            a+=2;
            b--;
            sum=1;
        }
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
vector<char>v;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(s.size()==1)
        {
            cout<<v[i];
            exit(0);
        }
        if(i!=v.size()-1)cout<<v[i]<<'+';
        else cout<<v[i];
    }
}
/*
ID: amirnas1
PROG: cowtour
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <iomanip>
#include <math.h>
#include <bitset>
#include <sstream>
using namespace std;

/*
vector<string> prim;
string s;
vector<int> dp;

int main()
{

	ifstream cin;
	cin.open("prefix.in");
	ofstream cout;
	cout.open("prefix.out");
	
	string p;
	s = "";
	cin>>p;
	while (p!= ".")
	{
		prim.push_back(p);
		cin>>p;
	}
	cin.ignore();
	string l;
	while (getline(cin,l)) s += l;
	dp = vector<int> (s.size()+1, -1);
	for (int i = s.size(); i>= 0; i--)
	{
		if (i == s.size()) dp[i] = i;
		else
		{
		int m = i;
			for (int j = 0; j < prim.size(); j++)
			{
				if (i+prim[j].size() <= s.size()) if (s.substr(i,prim[j].size()) == prim[j]) m = max(m, dp[i+prim[j].size()]);
			}
			dp[i] = m;
		}
	}
	cout<<dp[0]<<endl;
}



long long dp[201][101][2];

long long mod(long long a, long long m)
{
	if (a>=0) return a%m;
	else
	{
		return (a+m)%m;
	}
}
long long solve(int n, int k, int f)
{
	if (n==0 && k==0) return 1;
	if (n == 0) return 1;
	if (k <= 0) return 0;
	if (n == 1) return 1;
	if (dp[n][k][f] != -1) return dp[n][k][f];
	int a = n-1;
	long long s = 0;
	long long r;
	for (int i = 1; i < a; i++)
	{
		r = solve(i,k-1, 0) * solve(a-i, k-1, 0);
		if (f) r -= (solve(i,k-2, 0) * solve(a-i, k-2,0));
		s += r;
		s = mod(s,9901);
	}
	return dp[n][k][f] = s;
}

int main()
{
	
	ifstream cin;
	cin.open("nocows.in");
	ofstream cout;
	cout.open("nocows.out");
	
	int n, k;
	cin>>n>>k;
	for (int i=0; i<201; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			
			dp[i][j][0] = dp[i][j][1] = -1;
		}
	}
	cout<<solve(n,k,1)<<endl;
	//system("pause");
}


int main()
{
	int n, m;
	cin>>n>>m;
	vector<int> f(m);
	for (int i = 0; i < m; i++)
	{
		cin>>f[i];
	}
	sort(f.begin(), f.end());
	int r = 10000;
	for (int i = 0; i+n-1 < m; i++ )
	{
		if (f[i+n-1] - f[i] < r) r = f[i+n-1] - f[i];
	}
	cout<<r<<endl;
}


int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b,a%b);
}

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ab = gcd(a,b);
	int cd = gcd(c,d);
	a /=ab;
	b /= ab;
	c /= cd;
	d /= cd;
	if ((double)a/(double)c < (double)b/(double)d)
	{
		int ra = d*a;
		int rb = b*c;
		int gab = gcd(ra,rb);
		int resa = rb/gab - ra/gab;
		int resb = rb/gab;
		int gres = gcd(resa,resb);

		cout<<resa/gres<<"/"<<resb/gres<<endl;
	}
	else
	{
		int ra = d*a;
		int rb = b*c;
		int gab = gcd(ra,rb);
		int resa = ra/gab - rb/gab;
		int resb = ra/gab;
		int gres = gcd(resa,resb);
		cout<<resa/gres<<"/"<<resb/gres<<endl;
	}
}


long long pow2(long long n, long long mod)
{
	if (n == 0) return 1;
	if (n%2 ==0)
	{
		long long r = pow2(n/2,mod);
		return (r*r)%mod;
	}
	else
	{
		return (2*pow2(n-1,mod))%mod;
	}
}

long long mod(long long a, long long b)
{
	if (a  > 0)
	{
		return a%b;
	}
	else return (a+b)%b;
}

int main()
{
	long long n,m,k;
	cin>>n>>m>>k;
	if (n - (n-m)*k > 0)
	{
		long long r = pow2(((n - (n-m)*k)/k)+1,1000000009) - 2;
		r = (r*k)%1000000009;
		long long r2 = (n-m)*(k-1) + ((n - (n-m)*k)%k);
		cout<<mod((r+r2),1000000009)<<endl;
	}
	else
	{
		cout<<m<<endl;
	}
}


vector<int> st;
vector<int> req;
vector<long long> rem;
vector<long long> num;
vector<long long> res;

void pr(long long a, bool p)
{
	if (a ==1) return;
	if (a%2 == 0)
	{
		if (a != 2 || p) res.push_back(2);
		pr(a/2, true);
		return;
	}
	for (long long i = 3; i*i <= a; i+=2)
	{
		if (a%i==0)
		{
			res.push_back(i);
			pr(a/i,true);
			return;
		}
	}
	if (p)
		res.push_back(a);
}

int dfs(int i, bool add)
{
	if (i >= num.size()) return 0;
	res.clear();
	if (rem[i] == num[i])
		pr(rem[i],false);
	else
		pr(rem[i],true);
	int result = res.size()+1;
	int m;
	if (i == num.size()-1)
		m = 0;
	else if (add)
		m = dfs(i+1,true);
	else
		m = dfs(i+1,true) + 1;
	for (int j = i+1; j < num.size(); j++)
	{
		if (rem[j]%num[i] ==0)
		{
			rem[j] /=num[i];
			m = min(dfs(i+1,add),m);
			rem[j] *= num[i];
		}
	}
	return result+m;
}

int main()
{
	int n;
	cin>>n;
	st = vector<int> (n,0);
	req = vector<int> (n,1);
	rem = vector<long long> (n,1);
	num = vector<long long> (n);
	for (int i =0 ; i < n; i++)
	{
		cin>>num[i];
		rem[i] = num[i];
	}
	sort(num.begin(), num.end());
	sort(rem.begin(), rem.end());
	int result = 0;
	
	result = dfs(0,false);
	cout<<result<<endl;
}


vector<int> d1;
vector<pair<int,int> > d3;
vector<int> d2;
vector<vector<int> > g;
vector<bool> mark;
vector<bool> tk;
int dis1(int i,int p)
{
	tk[i] = true;
	int r = -1000000;
	
	int m1 = 0,m2 = -1000000;
	for (int j=0; j < g[i].size(); j++)
	{
		if (!tk[g[i][j]])
		if (r < dis1(g[i][j],i))
		{
			r = d1[(g[i][j])];
			m1 = g[i][j];
		}
	}
	int v = -1000000;
	for (int j=0; j < g[i].size(); j++)
	{
		if (v < d1[(g[i][j])] && (g[i][j]) != m1 && g[i][j] != p)
		{
			v = d1[(g[i][j])];
			m2 = g[i][j];
		}
	}
	d3[i].first = m1;
	d3[i].second = m2;
	if (r < 0)
	{
		if (mark[i]) return d1[i] = 0;
		else return d1[i] = r;
	}
	return d1[i] = r+1;
}

void dis2(int i,int p)
{
	tk[i] = true;
	if (p == -1)
	{
		if (mark[0])
		{
			d2[0] = 0;
		}
		else
			d2[0] = -10000000;
	}
	else
	{
		int r = d2[p]+1;
		if (d3[p].first == i)
		{
			if (d3[p].second >= 0)
				r = max(d1[d3[p].second]+2,r);
		}
		else
		{
			r = max(d1[d3[p].first]+2,r);
		}
		d2[i] = r;
		if (r < 0)
		{
			if (mark[i])
				d2[i] = 0;
			else
				d2[i] = r;
		}
	}
	for (int j=0; j < g[i].size(); j++)
	{
		if(!tk[g[i][j]])
			dis2(g[i][j],i);
	}
}



int bfs(int i, int d)
{
	int res = 0;
	queue<pair<int,int> > q;
	q.push(make_pair(i,0));
	vector<bool> tk(g.size(),false);
	while (!q.empty())
	{
		pair<int,int> c = q.front();
		q.pop();
		if (tk[c.first])
			continue;
		res++;
		tk[c.first] = true;
		if (c.second < d)
		{
			for (int j=0; j < g[c.first].size(); j++)
			{
				//cout<<t[c.first].second[j]<<"    ";
				q.push(make_pair(g[c.first][j],c.second+1));
			}
		}
	}
	return res;
}


void bTree(int c)
{
	if (tk[c]) return;
	tk[c] = true;
	for (int j = 0; j < g[c].size(); j++)
	{
		if (g[c][j] != t[c].first)
		{
			t[g[c][j]].first = c;
			t[c].second.push_back(g[c][j]);
			bTree(g[c][j]);
		}
	}
}


int main()
{
	int n,m,d;
	cin>>n>>m>>d;
	
	d1 = vector<int> (n,-1000000);
	d2 = vector<int> (n,-1000000);
	d3 = vector<pair<int,int> > (n, make_pair(-1000000,-1000000));
	mark = vector<bool> (n,false);
	tk = vector<bool> (n,false);
	g = vector<vector<int> > (n);
	int a;
	for (int i=0; i < m; i++)
	{
		cin>>a;
		mark[a-1] = true;
	}
	int b;
	for (int i = 0; i < n-1; i++)
	{
		cin>>a>>b;
		g[a-1].push_back(b-1);
		g[b-1].push_back(a-1);
	}
	if (m > 1)
	{
tk = vector<bool> (n,false);
	dis1(0,-1);
tk = vector<bool> (n,false);
	dis2(0,-1);
	}
	int res = 0;
	if (m == 1)
	{
	for (int i=0; i < n; i++)
	{
		if (mark[i])
		{
			res = bfs(i,d);
			break;
		}
	}
	}
	else
	{
	for (int i=0; i < n; i++)
	{
	//	cout<<d1[i]<<" "<<d2[i]<<"          ";
		if (d1[i] <= d && d2[i] <= d) res++;
	}
	}
	cout<<res<<endl;

	//	system("pause");
}


string op;
int n;
ifstream fin;
ofstream fout;
void solve(int i)
{

	if (i == n-1)
	{
//		cout<<op<<endl;
		int r = 0;
		vector<char> s1;
		vector<int> s2;
		int c = 1;
		for (int j =0 ; j < n-1; j++)
		{
			if (op[j] == ' ')
			{
				c *= 10;
				c += j+2;
			}
			else
			{
				s2.push_back(c);
				s1.push_back(op[j]);
				c= j+2;
			}
		}
		s2.push_back(c);
		int a,b;
		r = s2[0];
		for (int j = 0; j < s1.size(); j++)
		{
			if (s1[j] == '+')
			{
				r += s2[j+1];
			}
			else
				r -= s2[j+1];
		}
		if (r == 0)
		{
			fout<<1;
			for (int j = 0; j < n-1; j++)
			{
				fout<<op[j]<<j+2;
			}
			fout<<endl;
		}
	}
	else
	{
		op[i] = ' ';
		solve(i+1);
		op[i] = '+';
		solve(i+1);
		op[i] = '-';
		solve(i+1);
	}
}

int main()
{
	fin.open("zerosum.in");
	fout.open("zerosum.out");
	fin>>n;
	for (int i = 0; i < n-1; i++)
	{
		op += '.';
	}
	solve(0);

}


vector<int> c;
vector<vector<long long> > dp;
long long solve(int n,int i)
{
	if (n < 0) return 0;
	if (n == 0) return 1;
	if (i >= c.size()) return 0;
	if (dp[n][i] != -1) return dp[n][i];
	if (i == c.size()-1)
	{
		if (n%c[i] == 0) return dp[n][i] = 1;
		else return dp[n][i] = 0;
	}
	long long r = 0;
	for (int j = 0; j <= n/c[i]; j++)
	{
		r += solve(n - j*c[i], i+1);
	}
	return dp[n][i] = r;
}

int main()
{
	
	ifstream cin;
	cin.open("money.in");
	ofstream cout;
	cout.open("money.out");
	
	int v,n;
	cin>>v>>n;
	dp = vector<vector<long long> >(n+1,vector<long long>(v,-1));
	c = vector<int>(v);
	for (int i=0; i < v; i++)
	{
		cin>>c[i];
	}
	sort(c.begin(), c.end());
	reverse(c.begin(), c.end());
	long long r = solve(n,0);
	cout<<r<<endl;
	system("pause");
}


int main() {
    long long int N, V, v[26] = { 0 }, dp[10001] = { 0 }, i;
    freopen("money.in", "r", stdin), freopen("money.out", "w", stdout);
    scanf("%lld %lld", &V, &N);
    for (i = 0, dp[0] = 1; i < V; i++)
        scanf("%lld", v + i);
 
    for (int m = 0; m < V; m++)
        for (int n = 0; n <= N; n++)
            dp[n] += (n - v[m] >= 0 ? dp[n - v[m]] : 0);
 
    printf("%lld\n", dp[N]);
    return 0;
}


int g[100][100];

vector<int> res;

void solve(int i)
{
	bool ok = true;
	int s =0;
	vector<bool> tk(100,false);
	tk[i] = true;
	res.clear();
	while (ok)
	{
		ok = false;
		for (int j = 0; j < 100; j++)
		{
			if (tk[j]) continue;
			s = 0;
			s += g[i][j];
			for (int k = 0; k < res.size(); k++)
			{
				s += g[res[k]][j];
			}
			if (s > 50)
			{
				res.push_back(j);
				tk[j] = true;
				ok = true;
			}
		}
	}
}

int main()
{
		ifstream cin;
	cin.open("concom.in");
	ofstream cout;
	cout.open("concom.out");
	int n;
	cin>>n;
	int a,b,c;
	while (n--)
	{
		cin>>a>>b>>c;
		g[a-1][b-1] = c;
	}
	for (int i=0; i < 100; i++)
	{
		solve(i);
		sort(res.begin(),res.end());
		for (int j = 0; j < res.size(); j++)
		{
			cout<<i+1<<" "<<res[j]+1<<endl;
		}
	}
}


char pl[10][10];
int c1x,c1y,d1;
int c2x,c2y,d2;
bool valid(int a, int b)
{
	if (a < 0 || b < 0 || a >=10 || b >= 10) return false;
	if (pl[a][b] != '*') return true;
	return false;
}
void move()
{
	if (d1 == 1)
	{
		if (valid(c1x-1,c1y))
		{
			c1x--;
		}
		else
		{
			d1 = 2;
		}
	}
	else if (d1 == 2)
	{
		if (valid(c1x,c1y+1))
		{
			c1y++;
		}
		else
		{
			d1 = 3;
		}
	}
	else if (d1 == 3)
	{
		if (valid(c1x+1,c1y))
		{
			c1x++;
		}
		else
		{
			d1 = 4;
		}
	}
	else if (d1 == 4)
	{
		if (valid(c1x,c1y-1))
		{
			c1y--;
		}
		else
		{
			d1 = 1;
		}
	}

	if (d2 == 1)
	{
		if (valid(c2x-1,c2y))
		{
			c2x--;
		}
		else
		{
			d2 = 2;
		}
	}
	else if (d2 == 2)
	{
		if (valid(c2x,c2y+1))
		{
			c2y++;
		}
		else
		{
			d2 = 3;
		}
	}
	else if (d2 == 3)
	{
		if (valid(c2x+1,c2y))
		{
			c2x++;
		}
		else
		{
			d2 = 4;
		}
	}
	else if (d2 == 4)
	{
		if (valid(c2x,c2y-1))
		{
			c2y--;
		}
		else
		{
			d2 = 1;
		}
	}
}

int sol()
{
	d1 = d2 = 1;
	int r = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (pl[i][j] == 'F')
			{
				c2x = i;
				c2y = j;
			}
			if (pl[i][j] == 'C')
			{
				c1x = i;
				c1y = j;
			}
		}
	}
	while (!(c1x == c2x && c1y == c2y))
	{
		move();
		r++;
		if (r == 10000) return 0;
	}
	return r;
}

int main()
{
			ifstream cin;
	cin.open("ttwo.in");
	ofstream cout;
	cout.open("ttwo.out");
	for (int i=0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin>>pl[i][j];
		}
	}
	cout<<sol()<<endl;
}


vector<vector<int> > dis[2];
vector<string> mp;
pair<int,int> a[2];

bool valid(int i, int j)
{
	if (i < 0 || j < 0 || i>= mp.size() || j >= mp[0].size()) return false;
	if (mp[i][j] == '|' || mp[i][j] == '-') return false;
	return true;
}

int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};

void bfs(int i)
{
	pair<pair<int,int> , int> st;
	st.second = 1;
	st.first = a[i];

	queue<pair<pair<int,int> , int> > q;
	q.push(st);
	while (!q.empty())
	{
		st = q.front();
		q.pop();
		if (!valid(st.first.first,st.first.second)) continue;
		if (st.second >= dis[i][st.first.first][st.first.second]) continue;
		dis[i][st.first.first][st.first.second] = st.second;
		for (int j = 0; j < 4; j++)
		{
			if (valid(st.first.first+dr[j],st.first.second+dc[j]))
			{
				q.push(make_pair(make_pair(st.first.first+2*dr[j],st.first.second+2*dc[j]),st.second+1));
			}
		}
	}
}

int main()
{
	ifstream cin;
	cin.open("maze1.in");
	ofstream cout;
	cout.open("maze1.out");
	int r,c;
	cin>>r>>c;
	mp = vector<string>(2*c+1);
	dis[0] = vector<vector<int> >(2*c+1,vector<int>(2*r+1,10000000));
	dis[1] = vector<vector<int> >(2*c+1,vector<int>(2*r+1,10000000));
	cin.ignore();
	for (int i = 0; i < 2*c+1; i++)
	{
		getline(cin,mp[i]);
	}
	int d = 0;
	for (int j = 1; j < 2*r+1; j+=2) if (mp[0][j] == ' ')
	{
		a[d].first = 1;
		a[d].second = j;
		d++;
	}

	for (int j = 1; j < 2*r+1; j+=2) if (mp[2*c][j] == ' ')
	{
		a[d].first = 2*c-1;
		a[d].second = j;
		d++;
	}

	for (int j = 1; j < 2*c+1; j+=2) if (mp[j][0] == ' ')
	{
		a[d].first = j;
		a[d].second = 1;
		d++;
	}

	for (int j = 1; j < 2*c+1; j+=2) if (mp[j][2*r] == ' ')
	{
		a[d].first = j;
		a[d].second = 2*r-1;
		d++;
	}
	bfs(0);
	bfs(1);
	int res = 0;
	for (int i = 1; i < 2*c+1; i+=2)
	{
		for (int j = 1; j < 2*r+1; j+=2)
		{
			res = max(res,min(dis[0][i][j],dis[1][i][j]));
		}
	}
	cout<<res<<endl;

}


int main()
{
		ifstream cin;
	cin.open("cowtour.in");
	ofstream cout;
	cout.open("cowtour.out");
	int n;
	cin>>n;
	char a;
	vector<vector<double> >sp(n, vector<double>(n,10000000000));
	vector<pair<double,double> > p(n);
	for (int i = 0; i < n; i++)
	{
		cin>>p[i].first>>p[i].second;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>a;
			if (a == '1')
			{
				sp[i][j] = sqrt((p[i].second-p[j].second)*(p[i].second-p[j].second) + (p[i].first-p[j].first)*(p[i].first-p[j].first));
			}
		}
	}

	for (int k = 0; k < n; k++) for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (i != j) sp[i][j] = min(sp[i][j],sp[i][k]+sp[k][j]);
	double res = 0;
	double r2 = 10000000000;
	for (int i =0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (sp[i][j] < 10000000000) res = max(res,sp[i][j]);
			else
			{
				double di=0,dj=0;
				for (int k = 0; k < n; k++)
				{
					di = (sp[i][k] < 10000000000) ? max(di,sp[i][k]) : di;
					dj = (sp[j][k] < 10000000000) ? max(dj,sp[j][k]) : dj;
				}
				r2 = min(r2,di+dj+sqrt((p[i].second-p[j].second)*(p[i].second-p[j].second) + (p[i].first-p[j].first)*(p[i].first-p[j].first)));
			}
		}
	}
	cout<<fixed<<setprecision(6)<<max(r2,res)<<endl;
}
*/

int main()
{
	int a[3] = {0};
	string s;
	cin>>s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1') a[0]++;
		else if (s[i] == '2') a[1]++;
		else if (s[i] == '3') a[2]++;
	}
	for (int i = 0; i < a[0]; i++)
	{
		cout<<1;
		if (i < a[0]-1) cout<<"+";
	}
	for (int i = 0; i < a[1]; i++)
	{
		if (i == 0 && a[0] > 0) cout<<"+";
		cout<<2;
		if (i < a[1]-1) cout<<"+";
	}
	for (int i = 0; i < a[2]; i++)
	{
		if (i == 0 && a[1]+a[0] > 0) cout<<"+";
		cout<<3;
		if (i < a[2]-1) cout<<"+";
	}
	cout<<endl;
}
