using namespace std;
void Morse(){
    string str, vec;
    cin >> str;
    int len = str.size();
    for(int i = 0; i < len; i++){
        if(str[i] == '.')
            vec.push_back('0');
        else if(str[i] == '-'){
            if(i + 1 < len && str[i + 1] == '.'){
                vec.push_back('1');
                i++;
            }
            else if(i + 1 < len && str[i + 1] == '-'){
                vec.push_back('2');
                i++;
            }
        }
    }
    cout << vec;
}
using namespace std;
bool UniqueDigit(int year){
    int digits[10] = {0};
    while(year > 0){
        int dig = year % 10;
        if(digits[dig] > 0)
            return false;
        digits[dig]++;
        year /= 10;
    }
    return true;
}
int main(){
    int y; cin >> y;
    int n = y + 1;
    while(true){
        if(UniqueDigit(n)){
            cout << n;
            break;
        }
        n++;
    }
}
using namespace std;
void CountChar(){
    string str; cin >> str;
    int upper = 0, lower = 0, num = 0, special = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if(str[i] >= '0' && str[i] <= '9')
            num++;
        else
            special++;
    }
    if(upper > lower)
 	transform(str.begin(), str.end(), str.begin(), ::toupper);
   else if(lower > upper)
 	transform(str.begin(), str.end(), str.begin(), ::tolower);
   else if(upper == lower)
 	transform(str.begin(), str.end(), str.begin(), ::tolower);
   cout << str;
   cout << "\nUpper case letters: " << upper << "\nLower case letters : " << lower  << "\nNumber : " << num << "\nSpecial characters : " << special;
}
using namespace std;
void LuckyDigit(){
    int n, digit, cnt = 0;
    cin >> n;
    while(n){
        digit = n % 10; n /= 10;
        if(digit == 4 || digit == 7)
            cnt++;
    }
    (cnt == 4 || cnt == 7) ? cout << "Yes" : cout << "No";
}
using namespace std;
int main(){
    int n, m, idx; cin >> n >> m;
    int arr[n], tmp[m];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int ForwardSteps, ForwardCnt = 0, BackwardCnt = 0;
    for(int i = 0; i < m; i++){
        cin >> tmp[i];
        idx = -1;
        for(int j = 0; j < n; j++){
            if(arr[j] = tmp[i]){
                idx = j;
                break;
            }
        }
        if(idx != -1){
            ForwardSteps = idx + 1;
            ForwardCnt += ForwardSteps;
            ForwardSteps = n - idx;
            BackwardCnt += ForwardSteps;
        }
    }
    cout << ForwardCnt << " " << BackwardCnt;
}
using namespace std;
long BinPow(int a, int b, int m){
    a %= m;
    if(b == 0)
        return 1;
    long long res = 1;
    while(b > 0){
        if(b & 1)
            res = res * a % m;
        a = a * a % m;
        b >> = 1;
    }
    return res;
}
long BinPow(int a, int b){
    long long res = 1;
    while(b > 0){
        if(b & 1)
            res *= a;
        a *= a;
        b >> = 1;
    }
    return res;
}
long long nCr(int n, int p, int r){
    if(n < r)
        return 0;
    if(r == 0)
        return 1;
    int fact[n + 1];
    fact[0] = 1;
    for(int i = 1; i <= n; i++)
        fact[i] = (fact[i - 1] * i) % p;
    return (fact[n] * BinPow(fact[r], p - 2, p) % p * BinPow(fact[n - r], p - 2, p) % p) % p;
}
using namespace std;
bool prime[100100];
void isprime(){
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int p = 2; p * p <= 100100; p++){
        if(prime[p]){
            for(int i = p * p; i <= 100100; i+= p)
                prime[i] = false;
        }
    }
}
using namespace std;
void PrimeFactor(int n, vector <int> &vec){
    while(n % 2 == 0){
        vec.push_back(2);
        n /= 2;
    }
    for(int i = 3; i <= sqrt(n); i+= 2){
        while(n % i == 0){
            vec.push_back(i);
            n /= i;
        }
    }
    if(n > 2)
        vec.push_back(n);
}
using namespace std;
int smallestDiv(int n){
    if(n % 2 == 0)
        return 2;
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0)
            return i;
    }
    return n;
}
using namespace std;
vector <pair <int, int> findSubarr(int arr[], int n){
    unordered_map <int, vector <int> > mp;
    vector <pair <int, int> >vec;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == 0)
            vec.push_back(make_pair(0, i));
        if(mp.find(sum) != mp.end()){
            vector <int> vc = mp[sum];
            for(auto it = vc.begin(); it != vc.end(); ++it)
                vec.push_back(make_pair(*it + 1, i));
        }
        mp[sum].push_back(i);
    }
    return vec;
}
int cntDisjoint(const vector <pair <int, int> > &vec){
    int cnt = 1;
    int prev = -1;
    for(const auto &it : vec){
        if(it.first > prev){
            cnt++;
            prev = it.second;
        }
    }
    return cnt;
}
// vector< pair<ll, ll> > findSubArrays(ll arr[], ll n)
// {
//     // create an empty map
//     unordered_map<ll, vector<ll> > map;

//     // create an empty vector of pairs to store
//     // subarray starting and ending index
//     vector <pair<ll, ll>> out;

//     // Maintains sum of elements so far
//     ll sum = 0;

//     for (ll i = 0; i < n; i++)
//     {
//         // add current element to sum
//         sum += arr[i];

//         // if sum is 0, we found a subarray starting
//         // from index 0 and ending at index i
//         if (sum == 0)
//             out.push_back(make_pair(0, i));

//         // If sum already exists in the map there exists
//         // at-least one subarray ending at index i with
//         // 0 sum
//         if (map.find(sum) != map.end())
//         {
//             // map[sum] stores starting index of all subarrays
//             vector<ll> vc = map[sum];
//             for (auto it = vc.begin(); it != vc.end(); it++)
//                 out.push_back(make_pair(*it + 1, i));
//         }

//         // Important - no else
//         map[sum].push_back(i);
//     }

//     // return output vector
//     return out;
// }

// // Utility function to print all subarrays with sum 0
// // ll print(vector<pair<ll, ll>> out)
// // {ll dp=1; ll pr=out.begin()->second;
// //     for (auto it = out.begin()+1; it != out.end(); it++)
// //         if(it->second>pr){dp++; pr=it->second;}
// //         return dp;
// // }
// #define MAXN   (ll)1e7+1

// // stores smallest prime factor for every number
ll spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
	spf[1] = 1;
	for (ll i = 2; i < MAXN; i++)

		// marking smallest prime factor for every
		// number to be itself.
		spf[i] = i;

	// separately marking spf for every even
	// number as 2
	for (ll i = 4; i < MAXN; i += 2)
		spf[i] = 2;

	for (ll i = 3; i * i < MAXN; i++)
	{
		// checking if i is prime
		if (spf[i] == i)
		{
			// marking SPF for all numbers divisible by i
			for (ll j = i * i; j < MAXN; j += i)

				// marking spf[j] if it is not
				// previously marked
				if (spf[j] == j)
					spf[j] = i;
		}
	}
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<ll> getFactorization(ll x)
{
	vector<ll> ret;
	while (x != 1)
	{
		ret.push_back(spf[x]);
		x = x / spf[x];
	}
	return ret;
}

// C++ Program to count all subarrays having
// XOR of elements as given value m with
// O(n) time complexity.

// Returns count of subarrays of arr with XOR
// value equals to m
long long subarrayXor(ll arr[], ll n, ll m)
{
	long long ans = 0; // Initialize answer to be returned

	// Create a prefix xor-sum array such that
	// xorArr[i] has value equal to XOR
	// of all elements in arr[0 ..... i]
	// vector<ll>xorArr(n);

	// Create map that stores number of prefix array
	// elements corresponding to a XOR value
	unordered_map<ll, ll> mp;

	// Initialize first element of prefix array
	// xorArr[0] = arr[0];
	ll cx = arr[0];
	ll px = cx;

	// Computing the prefix array.
	// for (ll i = 1; i < n; i++)
	// 	xorArr[i] = xorArr[i - 1] ^ arr[i];

	// Calculate the answer
	for (ll i = 0; i < n; i++)
	{
		px = cx;
		if (i != 0)
			cx = px ^ arr[i];
		// Find XOR of current prefix with m.
		// ll tmp = m ^ xorArr[i];
		ll tmp = m ^ cx;

		// If above XOR exists in map, then there
		// is another previous prefix with same
		// XOR, i.e., there is a subarray ending
		// at i with XOR equal to m.
		ans = ans + ((long long)mp[tmp]);

		// If this subarray has XOR equal to m itself.
		if (cx == m)
			ans++;

		// Add the XOR of this subarray to the map
		mp[cx]++;
	}

	// Return total count of subarrays having XOR of
	// elements as given value m
	return ans;
}

// Driver program to test above function

// C++ Program to print prime factors and their
// powers using Sieve Of Eratosthenes

// Using SieveOfEratosthenes to find smallest prime
// factor of all the numbers.
// For example, if N is 10,
// s[2] = s[4] = s[6] = s[10] = 2
// s[3] = s[9] = 3
// s[5] = 5
// s[7] = 7
void sieveOfEratosthenes(ll N, ll s[])
{
	// Create a boolean array "prime[0..n]" and
	// initialize all entries in it as false.
	vector<bool> prime(N + 1, false);

	// Initializing smallest factor equal to 2
	// for all the even numbers
	for (ll i = 2; i <= N; i += 2)
		s[i] = 2;

	// For odd numbers less than equal to n
	for (ll i = 3; i <= N; i += 2)
	{
		if (prime[i] == false)
		{
			// s(i) for a prime is the number itself
			s[i] = i;

			// For all multiples of current prime number
			for (ll j = i; j * i <= N; j += 2)
			{
				if (prime[i * j] == false)
				{
					prime[i * j] = true;

					// i is the smallest prime factor for
					// number "i*j".
					s[i * j] = i;
				}
			}
		}
	}
}

// Function to generate prime factors and its power
map<ll, ll> generatePrimeFactors(ll N)
{
	map<ll, ll> mp;
	// s[i] is going to store smallest prime factor
	// of i.
	ll s[N + 1];

	// Filling values in s[] using sieve
	sieveOfEratosthenes(N, s);

	// printf("Factor Power\n");

	ll curr = s[N]; // Current prime factor of N
	ll dp = 1;		// Power of current prime factor

	// Printing prime factors and their powers
	while (N > 1)
	{
		N /= s[N];

		// N is now N/s[N]. If new N als has smallest
		// prime factor as curr, increment power
		if (curr == s[N])
		{
			dp++;
			continue;
		}

		// printf("%d\t%d\n", curr, dp);
		mp[curr] = dp;
		// Update current prime factor as s[N] and
		// initializing count as 1.
		curr = s[N];
		dp = 1;
	}
	return mp;
}

bool isKthBitSet(int n, int k)
{
	if (n & (1 << k))
		return true;
	else
		return false;
}

ll getMid(ll s, ll e)
{
	return s + (e - s) / 2;
}

/*  A recursive function to get the sum of
	values in given range of the array.
	The following are parameters for this
	function.

	st       -> Pointer to segment tree
	node     -> Index of current node in
				the segment tree .
	ss & se  -> Starting and ending indexes
				of the segment represented
				by current node, i.e., st[node]
	l & r    -> Starting and ending indexes
				of range query */
ll MaxUtil(ll *st, ll ss, ll se, ll l,
		   ll r, ll node)
{
	// If segment of this node is completely
	// part of given range, then return
	// the max of segment
	if (l <= ss && r >= se)
		return st[node];

	// If segment of this node does not
	// belong to given range
	if (se < l || ss > r)
		return -1;

	// If segment of this node is partially
	// the part of given range
	ll mid = getMid(ss, se);

	return max(MaxUtil(st, ss, mid, l, r,
					   2 * node + 1),
			   MaxUtil(st, mid + 1, se, l,
					   r, 2 * node + 2));
}

/* A recursive function to update the nodes
   which have the given index in their range.
   The following are parameters st, ss and
   se are same as defined
   above index -> index of the element
   to be updated.*/
void updateValue(ll arr[], ll *st, ll ss, ll se,
				 ll index, ll value, ll node)
{
	if (index < ss || index > se)
	{
		cout << "Invalid Input" << endl;
		return;
	}

	if (ss == se)
	{
		// update value in array and in segment tree
		arr[index] = value;
		st[node] = value;
	}
	else
	{
		ll mid = getMid(ss, se);

		if (index >= ss && index <= mid)
			updateValue(arr, st,
						ss, mid, index,
						value, 2 * node + 1);
		else
			updateValue(arr,
						st, mid + 1, se,
						index,
						value, 2 * node + 2);

		st[node] = max(st[2 * node + 1],
					   st[2 * node + 2]);
	}
	return;
}

// Return max of elements in range from
// index l (query start) to r (query end).
ll getMax(ll *st, ll n, ll l, ll r)
{
	// Check for erroneous input values
	if (l < 0 || r > n - 1 || l > r)
	{
		printf("Invalid Input");
		return -1;
	}

	return MaxUtil(st, 0, n - 1, l, r, 0);
}

// A recursive function that constructs Segment
// Tree for array[ss..se]. si is index of
// current node in segment tree st
ll constructSTUtil(ll arr[], ll ss, ll se,
				   ll *st, ll si)
{
	// If there is one element in array, store
	// it in current node of
	// segment tree and return
	if (ss == se)
	{
		st[si] = arr[ss];
		return arr[ss];
	}

	// If there are more than one elements, then
	// recur for left and right subtrees and
	// store the max of values in this node
	ll mid = getMid(ss, se);

	st[si] = max(constructSTUtil(arr, ss, mid, st,
								 si * 2 + 1),
				 constructSTUtil(arr, mid + 1, se,
								 st, si * 2 + 2));

	return st[si];
}

/* Function to construct segment tree
   from given array.
   This function allocates memory for
   segment tree.*/
ll *constructST(ll arr[], ll n)
{
	// Height of segment tree
	ll x = (ll)(ceil(log2(n)));

	// Maximum size of segment tree
	ll max_size = 2 * (ll)pow(2, x) - 1;

	// Allocate memory
	ll *st = new ll[max_size];

	// Fill the allocated memory st
	constructSTUtil(arr, 0, n - 1, st, 0);

	// Return the constructed segment tree
	return st;
}
ll longest_increasing_subsequence(vector<ll> &arr)
{
	vector<ll> ans;
	ll n = arr.size();
	for (ll i = 0; i < n; i++)
	{
		auto it = upper_bound(ans.begin(), ans.end(), arr[i]);
		if (it == ans.end())
		{
			ans.push_back(arr[i]);
		}
		else
		{
			*it = arr[i];
		}
	}
	return ans.size();
}

#include <bits/stdc++.h>

#define speed_of_light               ios_base::sync_with_stdio(false); cin.tie(NULL);

#define pr pair<long long, long long>
#define fr first
#define sc second
#define ll long long int
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define repf(i, a, b) for (ll i = a; i <= b; i++)
#define repr(i, a, b) for (ll i = a; i >= b; i--)
#define YES                \
  {                        \
    cout << "YES" << endl; \
  }
#define Yes                \
  {                        \
    cout << "Yes" << endl; \
  }
#define NO                \
  {                       \
    cout << "NO" << endl; \
  }
#define No                \
  {                       \
    cout << "No" << endl; \
  }
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
  return a / gcd(a, b) * b;
}
bool check(ll array[], ll n)
{
  bool flag = 0;

  for (int i = 0; i < n - 1; i++)
  {
    if (array[i] != array[i + 1])
      flag = 1;
  }

  return flag;
}
ll sumDigits(ll no)
{
  return no == 0 ? 0 : no % 10 + sumDigits(no / 10);
}
/* more to be updated */
/* more to be updated */
using namespace std;
ll sumofeven(ll n)
{
  ll sum = 0;
  if (n % 2 == 0)
  {
    for (ll i = 0; i <= n; i += 2)
      sum += i;
  }
  else
  {
    for (ll i = 0; i < n; i += 2)
      sum += i;
  }
  return sum;
}
ll sumofodd(ll n)
{
  ll sum = 0;
  if (n % 2 == 0)
    for (ll i = 1; i < n; i += 2)
      sum += i;
  else
    for (ll i = 1; i <= n; i += 2)
      sum += i;
  return sum;
}

ll sumi(ll n)
{
  ll sum = 0;
  for (int i = 4; i < n; i += 3)
  {
    sum += i++;
    if (i < n)
      sum += i;
  }
  return sum;
}
ll sumo(ll n)

{
  ll sum = 0;
  for (int i = 2; i < n; i += 3)
  {
    sum += i++;
    if (i < n)
      sum += i;
  }
  return sum;
}
int ispalindrome(string s)
{
  ll i = 0;
  ll n = s.length();
  while (i <= n)
  {
    if (s[i++] != s[--n])
      return 1;
  }
  return 0;
}
bool is_prime(ll n)
{
  for (ll i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
bool isVowel(char a)
{
  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' ||a=='Y' ||a=='y')
  return 0;
  return 1;
}
vector<int> countFreq(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
   vector<int> v;
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        /* For current index i, check for
           pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
  
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M) 
        {
          v.push_back(j-4);
        }
    }
    return v;
}
ll countDivisors(ll n)
{
    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}
void solve() 
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
  ll count=0;
  rep(i,1,n)
  {
    if(s[i]==s[i-1])
    {count++;}
  }cout<<count<<endl;

}


int main()
{
  speed_of_light
  // ll t;
  // cin>>t;
  // while(t--)
  // {
  //  solve();

  //  }
     solve();
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
