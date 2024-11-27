using namespace std;
void main(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int mn = 1e9;
    for(int i = 0; i <= n - k; i++)
        mn = min(mn, arr[i + k - 1]- arr[i])
    cout << mn;
}
using namespace std;
void main(){
    int n, res = 0; cin >> n;
    for(int i = 0; i <= n; i++){
        int x; cin >> x;
        res += x * pow(2, i);
    }
    int tmp = pow(2, n);
    if(res % tmp != 0)
        cout << -1;
    else
        cout << res / tmp;
}
using namespace std;
void main(){
    int n; cin >> n;
    char x, y;
    int a1 = a2 = b1 = b2 = c1 = c2 = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x = 'G') a1++;
        if(x == 'B') b1++;
        if(x == 'K') c1++;
    }
    for(int i = 0; i < n; i++){
        cin >> y;
        if(y == 'G') a2++;
        if(y == 'B') b2++;
        if(y == 'K') c2++;
    }
    int ans = min(a1, c2) + min(c1, b2) + min(b1, a2);
    cout << ans;
}
using namespace std;
void main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % n == 0)
            cout << "1";
        else
            cout << "0";
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int k = i; k <= j; k++)
                sum += arr[k];
            cout << "sum from idx " << i << " to " << j << " is " << sum << "\n";
        }
    }
}
using namespace std;
void main(){
    int n, m; cin >> n >> m;
    vector <int> vec(n + 1);
    for(int i = 1; i <= n; i++)
        vec[i] = i;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        swap(vec[a], vec[b])
    }
    int q; cin >> q;
    while(q--){
        int t; cin >> t;
        cout << vec[t] << " ";
    }
}
using namespace std;
// mex tahun baru : troc#18 c -> greedy
void main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    cout << arr[0] << " ";
    
    if(n > 1){
        for(int i = 2; i < n; i++)
            cout << arr[i] << " ";
        cout << arr[1];
    }
}
#include<bits/stdc++.h>
// segitiga tahun baru: troc#18 D -> geometry
using namespace std;
void main(){
    int n; cin >> n;
    if(n == 2 || n == 3 || n == 5)
        cout << "4";
    else
        cout << "3";
}
// Pelajaran pangan : troc#16 B -> greedy
using namespace std;
void main(){
    int n, m; cin >> n >> m;
    int arr[n + 1];
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    int res = arr[n] - arr[1];
    for(int i = 1; i < n; i++)
        res = min (res, arr[i] + m - arr[i + 1]);
    cout << res;
}
// Pertahanan wifi : Troc 11 B -> Greedy
using namespace std;
void main(){
    int n, m; cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int res = arr[m - 1] - arr[0];
    for(int i = m - 1; i < n; i++)
        res = min(res, arr[i] - arr[i - m + 1]);
    cout << res;
}


// Membangun menara :  gemastik 2016 -> greedy
using namespace std;
void main(){
    int n; cin >> n;
    int arr[3];
    for(int i = 0; i < 3; i++){
        int q; cin >> q;
        int mx = 0, mn = 0;
        for(int j = 0; j < 3; j++){
            int x, y, z; cin >> x >> y >> z;
            mx += max(x, max(y, z));
            mn += min(x, min(y, z));
        }
        cout << mx << " " << mn;
    }
}
//Membeli mainan : Troc#3
using namespace std;
void main(){
    int x; cin >> x;
    int arr[3];
    for(int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);
    int tmp = x / (arr[0] + arr[1] + arr[2]);
    int res = 3 * tmp;
    int remain = x - tmp * (arr[0] + arr[1] + arr[2]);
    for(int i = 0; i < 3; i++){
        if(rem >= arr[i]){
            rem -= arr[i];
            res++;
        }
    }
    cout << res;
}
// Menghtiung bola
using namespace std;
void main(){
    int n; cin >> n;
    int tmp = 1;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x == tmp){
            cout << "Benar" << fflush;
            tmp++;
        }
        else{
            cout << "Salah" << fflush;
            tmp = 1;
        }
    }
}
// Pola III : perulangan lanjut
using namespace std;
void main(){
    int n, x = 0; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << x % 10 << " ";
            x++;
        }
        cout << "\n";
    }
}
// Bilangan pecahan : mikroskil cp 2014
using namespace std;
void Factorization(){
    int a, b; cin >> a >> b;
    if(__gcd(a, b) > 1)
        cout << a / __gcd(a, b) << " " << b / __gcd(a, b);
    else
        cout << "No";
}
using namespace std;
int cntEven(int l, int r){
    int cnt = (r - l) / 2;
    if(l % 2 != 0 || r % 2 != 0)
        cnt++;
    return cnt;
}
int main(){
    int l, r, k; cin >> l >> r >> k;
    if(l == r){
        if(l == 1)
            cout << "No";
        else
            cout << "Yes";
        return 0;
    }
    int res = cntEven(l, r);
    (res > k) ? cout << "No" : cout << "Yes";
}
using namespace std;
void main(){
    int n, k; cin >> n >> k;
    int arr[n], tmp[n];
    vector <pair <int, int> >vec;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        cin >> tmp[i];
    for(int i = 0; i < n; i++)
        vec.push_back(make_pair(arr[i], tmp[i]));
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++){
        if(vec[i].first <= k)
            k += vec[i].second;
        else
            break;
    }
    cout << k;
}
using namespace std;
void main(){
    int n, m; cin >> n >> m;
    int arr[n], seq[m], cnt = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < m; i++)
        cin >> seq[i];
    sort(arr, arr + n);
    sort(seq, seq + n);
    for(int i = 0, j = 0; i < n && j < m;){
        if(arr[i] == seq[j]){
            i++; j++; cnt++;
        }
        else if(arr[i] < seq[j])
            i++;
        else
            j++;
    }
    (cnt == n / 2) ? cout << "Yes" : cout << "No";
}
using namespace std;
void main(){
    int n; cin >> n;
    vector <int> vec;
    for(int i = 1; i <= n; i++)
        vec.push_back(i);
    if(n % 2){
        for(int i = 1; i <= n/2; i++)
            cout << i << " ";
        cout << n << " ";
        for(int i = n - 1; i < n / 2; i++)
            cout << i << " ";
        cout << n << " ";
    }
    else if(n != 2){
        cout << n / 2 << " ";
        for(int i = 1; i < n / 2; i++)
            cout << i << " ";
        for(int i = n; i < n / 2; i++){
            if(i != n / 2)
                cout << i << " ";
        }
    }
    else 
        cout << "No";
}
using namespace std;
void main(){
    vector <int> tmp;
    for(int i = 0; i < 17; i++){
        for(int j = i + 1; j < 18; j++){
            for(int k = j + 1; j < 19; j++){
                for(int l = k + 1; l < 20; l++){
                    int val = (1LL << i) + (1LL << j) + (1LL << k) + (1LL << l);
                    tmp.push_back(val);
                    if(tmp.size() == 100)
                        break;
                }
                if(tmp.size() == 100)
                    break;
            }
            if(tmp.size() == 100)
                break;
        }
        if(tmp.size() == 100)
            break;
    }
    for(int i = 0; i < tmp.size(); i++)
        cout << i << " ";
}
using namespace std;
void main(){
    int n; cin >> n;
    if(n == 1)
        cout << "6";
    else{
        int x = 3;
        for(int i = 0; i < n; i++){
            cout << x << " ";
            x += 2;
        }
    }
}
using namespace std;
int numOfArray(vector <int> &vec, int lower, int upper){
    int mini = 0, maxi = 0, sum = 0;
    for(int i = 0; i < vec.size(); i++){
        sum += vec[i];
        mini = min(mini, sum);
        maxi = max(maxi, sum);
    }
    /*int cnt = 0;
    for(int i = lower; i <= upper; i++){
        if(i + mini < lower || i + maxi > upper)
            continue;
        else
            cnt++;
    }
    return 1LL * cnt;*/
    int startMin = lower - mini;
    int startMax = upper - maxi;
    if(startMax < lower || startMin > upper)
        return 0;
    return (int)(min(upper, startMax) - max(lower, startMin) + 1);
}
int main(){
    vector <int> vec = {1, -3, 4};
    cout << numOfArray(vec, 1, 6);
}
using namespace std;
void minCost(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    int sum = 0;
    sort(vec.rbegin(), vec.rend());
    for(int i = 0; i < vec.size(); i++)
        sum += vec[i];
    for(int i = 2; i < vec.size(); i += 3)
        sum -= vec[i];
    cout << sum
}
using namespace std;
struct TrieNode {
    unordered_map<char, TrieNode*> m;
    char c;
    bool isWord;
    TrieNode() : c(0), isWord(false) {}
    TrieNode(char ch) : c(ch), isWord(false) {}
};
class Trie {
    TrieNode* root;
    public:
    Trie() {
        root = new TrieNode();
    }
    ~Trie() {
        deleteTrie(root);
    }
    void insert(const string& word) {
        TrieNode* p = root;
        for (char c : word) {
            if (p->m.find(c) == p->m.end()) {
                p->m[c] = new TrieNode(c);
            }
            p = p->m[c];
        }
        p->isWord = true;
    }
    bool search(const string& word) const {
        TrieNode* p = root;
        for (char c : word) {
            if (p->m.find(c) == p->m.end()) return false;
            p = p->m[c];
        }
        return p->isWord;
    }
    bool startsWith(const string& prefix) const {
        TrieNode* p = root;
        for (char c : prefix) {
            if (p->m.find(c) == p->m.end()) return false;
            p = p->m[c];
        }
        return true;
    }
    private:
    void deleteTrie(TrieNode* node) {
        for (auto& pair : node->m)
            deleteTrie(pair.second);
        delete node;
    }
};
using namespace std;
// Function to flip all bits of the number x.
int flip_bits(int x) {
    int flipped = 0, bit_position = 0;
    // Flipping all bits of the number.
    while (x) {
        if (x % 2 == 0) 
            flipped += (1LL << bit_position
        x /= 2;  
        // Shift x to the right to check the next bit.
        bit_position++;
    }
    return flipped;
}
int main() {
    int n; cin >> n;
    int total_sum = 0;
    while (n > 0) {
        int flipped_value = flip_bits(n); 
        int adjusted_value = n;
        if ((adjusted_value & (adjusted_value + 1)) == 0) {
                adjusted_value--;
            }
        int partial_sum = ((adjusted_value * (adjusted_value + 1)) / 2) - ((flipped_value * (flipped_value - 1)) / 2);
        total_sum += (partial_sum * 2);
        n = flipped_value - 1;
    }
    cout << total_sum << "\n";  //
    }
}
using namespace std;
int calculate(int mid, string str){
    int add = 0;
    for(int i = mid; i >= 0; i--){
        int x = (int (str[i])) - int('0') + add) % 10;
        if(x == 0)
            continue;
        add += 10 - x;
    }
    return add;
}
int main(){
    int n, k; cin >> n >> k;
    string str; cin >> str;
    int l = 0, r = n - 1, res = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(calculate(mid, str) > k)
            r = mid - 1;
        else{
            res++;
            l = mid + 1;
        }
    }
    cout << res;
}
using namespace std;
void main(){
    int n, k; cin >> n >> k;
    if(n > 1 && k == 1)
        cout << -1;
    else if(n == 1 && k == 1)
        cout << 1;
    else{
        for(int i = 1; i < k; i++)
            cout << i << " ";
        for(int i = n; i >= k; i--)
            cout << i << " ";
        cout << "\n";
    }
}
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
using namespace std;
void computePrefixSuffixGCD(int prefix[], int arr[], int suffix[], int n) {
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = gcd(prefix[i - 1], arr[i]);
    }
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = gcd(suffix[i + 1], arr[i]);
    }
}
using namespace std;
void computePrefixGCD(int arr[], int p[], int n) {
    p[0] = arr[0];
    for (int i = 1; i < n; i++)
        p[i] = gcd(p[i - 1], arr[i]);
}
void computeSuffixGCD(int arr[], int s[], int n) {
    s[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        s[i] = gcd(s[i + 1], arr[i]);
}
// Function to calculate the result based on prefix and suffix GCD
int Pratik(int l, int r, int p[], int s[], int n) {
    if (l == 0)
        return s[r + 1];
    if (r == n - 1)
        return p[l - 1];
    return gcd(p[l - 1], s[r + 1]);
}
int main() {
    int n, q; cin >> n >> q;
    int arr[n], p[n], s[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    computePrefixGCD(arr, p, n);
    computeSuffixGCD(arr, s, n);
    while (q--) {
        int l, r; cin >> l >> r;
        cout << "Result: " << Pratik(l, r, p, s, n) << endl;
    }
    return 0;
}
using namespace std;
void frameWork(){
    int row, col; cin >> row >> col;
    int start = 0;
    for(int i = 0, a = col + 1; i < n; i++, a++){
        start = i + 1;
        cout << start << " ";
        for(int j = 1; j < col; j++){
            cout << start + a << " ";
            start += a;
        }
    }
    cout << "\n";
}
void frameWork(){
    int row, col; cin >> row >> col;
    for(int i = 0; i < col; i++)
        cout << i + 1 << " ";
    int face = 2 + n;
    for(int i = 1; i < row; i++){
        int x = face;
        cout << x << " ";
        for(int j = 1; j < col; j++){
            cout << x + i + 1;
            x += i + 1;
        }
    }
    face += row + 1;
    cout << "\n";
}
using namespace std;
int lcm(int a, int b){
    return (a * (b / __gcd(a, b)));
}
bool IsPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
    if(a > b) return gcd(a - b, b);
    else return gcd(a, b - a);
}
bool IsPerfect(int x){
    if(x >= 0){
        int n = sqrt(x);
        return (n * n == x);
    }
    return false;
}
using namespace std;
int leftRotate(int arr[], int n){
    int tmp = arr[0];
    for(int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = tmp;
}
int main(){
    int n, pos; cin >> n >> pos;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    d %= n;
    for(int i = 0; i < pos; i++)
        leftRotate(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
string intToString(int n){
    char ch[100];
    sprintf(ch, "%lld", ch);
    string str = ch;
    return str;
}
int stringToInt(string str){
    char ch[100];
    int res;
    strcpy(ch, str.c_str());
    sscanf(ch, "%lld", &res);
    return res;
}
string ToBinary(int n){
    int arr[100], i = 0;
    while(n > 0){
        arr[i] = n % 2;
        n /= 2;
        i++;
    }
    string res = " ";
    for(int j = i - 1; j >= 0; j--)
        str += to_string(arr[i]);
    return str;
}
void revstr(string &str){
    int len = str.size();
    for(int i = 0; i < len / 2; i++)
        swap(str[i], str[n - i - 1]);
}
