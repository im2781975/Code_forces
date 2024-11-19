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
using namespace std;
int longestSubseq(vector <int> vec){
    vector <int> ans;
    for(int i = 0; i < vec.size(); i++){
        auto it = upper_bound(ans.begin(), ans.end(), vec[i]);
        if(it == ans.end())
            ans.push_back(vec[i]);
        else
            *it = vec[i];
    }
    return ans.size();
}
using namespace std;
int getmid(int l, int r){
    return l + (r - l)/2;
}
int Util(const vector <int> &arr, int s, int e, vector <int> &st, int cur){
    if(s == e){
        st[cur] = arr[s];
        return st[cur];
    }
    int mid = getmid(s, e);
    st[cur] = max(Util(arr, s, mid, st, 2 * cur + 1), Util(arr, mid + 1, e, st, 2 *cur + 2));
    return st[cur];
}
vector <int> constructSt(const vector <int> &arr){
    int n = arr.size();
    int x = (int)(ceil(log2(n)));
    int maxSize = 2 * (int)pow(2, x) - 1;
    vector <int> st(maxSize, INT_MIN);
    Util(arr, 0, n - 1, st, 0);
    return st;
}
int MaxUtil(const vector <int> &st, int s, int e, int l, int r, int node){
    if(l <= s && r >= e)
        return st[node];
    if(s > r || e < l)
        return INT_MIN;
    int mid = getmid(s, e);
    return max(MaxUtil(st, s, mid, l, r, 2 * node + 1), MaxUtil(st, mid + 1, e, l, r, 2 * node + 2 ));
}
int getMax(vector <int> st, int n, int l, int r){
    if(l < 0 || r >= n || l > r){
        return INT_MIN;
    }
    return MaxUtil(st, 0, n - 1, l, r, 0);
}
void update(vector <int> &arr, vector <int> &st, int s, int e, int idx, int val, int node){
    if(idx < s || idx > e)
        return;
    if(s == e){
        arr[idx] = val;
        st[node] = val;
    }
    else{
        int mid = getmid(s, e);
        if(idx <= mid)
            update(arr, st, s, mid, idx, val, 2 * node + 1);
        else
            update(arr, st, mid + 1, e, idx, val, 2 * node + 2);
        st[node] = max(st[2 * node + 1], st[2 * node + 2]);
    }
}
int main(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    vector <int> st = constructSt(vec);
    while(true){
        int choice; cin >> choice;
        if(choice == 1){
            int l, r; cin >> l >> r;
            cout << "Maximum val between " << l << " & " << r << " is" << getMax(st, n, l, r);
        }
        else if(choice == 2){
            int idx, val; cin >> idx >> val;
            update(vec, st, 0, n - 1, idx, val, 0);
        }
        else if(choice == 3)
            break;
        else
            cerr << "Invalid input";
    }
}
using namespace std;
bool IsKthBit(int n, int k){
    if(n & (1 << k))
        return true;
    return false;
}
//print prime factors and their powers using Sieve Of Eratosthenes
using namespace std;
void sieve(int n, int arr[]){
    vector <bool> prime(n + 1, false);
    for(int i = 2; i <= n; i += 2)
        arr[i] = 2;
    for(int i = 3; i <= n; i+= 2){
        if(!prime[i]){
            arr[i] = i;
            for(int j = i; j * i <= n; j += 2){
                if(!prime[i * j]){
                    prime[i * j] = true;
                    arr[i * j] = i;
                }
            }
        }
    }
}
map <int, int> generatePrime(int n){
    //arr store smallest prime factors & factor store prime factors;
    map <int, int> factor;
    int arr[n + 1] = {0};
    sieve(n, arr);
    int cur = arr[n];
    int power = 1;
    while(n > 1){
        n /= arr[n];
        if(cur == arr[n])
            power++;
        else{
            factor[cur] = power;
            cur = arr[n];
            power = 1;
        }
    }
    return factor;
}
void print(map <int, int> &factor){
    for(const auto & [fact, power] : factor)
        cout << fact << " " << power << "\n";
}
int main(){
    int n = 100;
    map <int, int> factors = generatePrime(n);
    print(factors);
}
using namespace std;
//Returns count of subarrays of arr with XOR
int SubarrXor(int arr[], int n, int m){
    int ans = 0;
    // Map to store frequency of prefix XOR values
    // Create a prefix xor-sum array such that xorArr[i] has value equal to XOR
    // of all elements in arr[] vector<ll>xorArr(n);
    unordered_map <int, int> ump;
    // Initialize cumulative XOR
    int cx = 0;
    for(int i = 0; i < n; i++){
        cx ^= arr[i];
        if(cx == m)
            ans++;
        // Find XOR of current prefix with m
        int tmp = cx ^ m;
        // Add the frequency of the required XOR value
        if(ump.find(tmp)!= ump.end())
        // Increment the count of current XOR in the map
            ump[cx]++;
    }
    return ans;
}
//count all subarrays having XOR of elements as given value m with
// Returns count of subarrays of arr with XOR value equals to m
long long subarrayXor(int arr[], int n, int m)
{
	int ans = 0; 

	// Create a prefix xor-sum array such that xorArr[i] has value equal to XOR of all elements in arr[]
	// vector<ll>xorArr(n);
	// Create map that stores number of prefix array elements corresponding to a XOR value
	unordered_map<int, int> mp;
	// Initialize first element of prefix array [xorArr[0] = arr[0]]
	ll cx = arr[0];
	ll px = cx;
	// Computing the prefix array.
	// for (ll i = 1; i < n; i++)
	// 	xorArr[i] = xorArr[i - 1] ^ arr[i];
	// Calculate the answer
	for (ll i = 0; i < n; i++){
		px = cx;
		if (i != 0)
			cx = px ^ arr[i];
		// Find XOR of current prefix with m.
		// int tmp = m ^ xorArr[i];
		int tmp = m ^ cx;
		// If above XOR exists in map, then there is another previous prefix with same XOR,
		//there is a subarray ending at i with XOR equal to m.
		ans = ans + ((long long)mp[tmp]);
		// If this subarray has XOR equal to m itself.
		if (cx == m)
			ans++;
		// Add the XOR of this subarray to the map
		mp[cx]++;
	}
	// Return total count of subarrays having XOR of elements as given value m
	return ans;
}
using namespace std;
const int MAXN = 1e3;
int Factor[MAXN];
// Calculating SPF (Smallest Prime Factor) for every number till MAXN.
void sieve(){
    Factor[1] = 1;
    for(int i = 2; i < MAXM; i++)
        Factor[i] = i;
    for(int i = 4; i < MAXN; i+= 2)
        Factor[i] = 2;
    for(int i = 3; i * i < MAXN; i++){
        if(Factor[i] == i){
            for(int j = i * i; j < MAXN; j+= i){
                if(Factor[j] == j)
                    Factor[j] = i;
            }
        }
    }
}
vector <int> Factorization(int x){
    vector <int> res;
    while(x != 1){
        res.push_back(Factor[x]);
        x /= Factor[x];
    }
    return res;
}
int main(){
    sieve();
    int num; cin >> num;
    if(num < 1 || num >= MAXN) 
        return 1;
    vector <int> fac = Factorization(num);
    for(int i = 0; i < fac.size(); i++)
        cout << fac[i] << " ";
}
using namespace std;
int SumOfDigit(int num){
    return num == 0 ? 0 : num % 10 + SumOfDigit(num / 10);
}
int sumI(int num){
    int sum = 0;
    for(int i = 4; i < num; i+= 3){
        sum += ++i;
        if(i < num)
            sum += i;
    }
    return sum;
}
int sumO(int num){
    int sum = 0;
    for(int i = 2; i < num; i += 2){
        sum += ++i;
        if(i < num)
            sum += i;
    }
    return sum;
}
int cntDiv(int n){
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(n / i == i)
                cnt++;
            else
                cnt += 2;
        }
    }
    return cnt;
}
vector <int> CountFreq(string str, string txt){
    int m = str.size(), n = txt.size();
    int res = 0;
    vector <int> vec;
    for(int i = 0; i <= n - m; i++){
        int j;
        for(j = 0; j < m; j++){
            if(txt[i + j] != str[j])
                break;
        }
        if(j == m)
            vec.push_back(i);
    }
    return vec;
}
int main(){
    string txt = "ABABDABACDABABCABAB";
    string str = "ABABCABAB";
    vector <int> res = CountFreq(str, txt);
    for(auto idx : res)
        cout << idx << " ";
    cout << "\n";
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
