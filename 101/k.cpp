#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <valarray>
#include <cmath>
#include <numeric>
#define forI(n) for(ll i = 0; i < n; ++i)
#define forJ(n) for(ll j = 0; j < n; ++j)
#define forR(n) for(ll i = n - 1; i >= 0; --i)
#define forRangeI(l, r) for(ll i = l; i <= r; ++i)
#define forRRangeI(l, r) for(ll i = r; i >= l; --i)
#define forRangeJ(l, r) for(ll j = l; i <= r; ++i)
#define forRRangeJ(l, r) for(ll j = r; i >= l; --i)
#define forEach(array) for(auto &item : array)
#define forEach1(array) for(auto &item1 : array)
#define printSpace(a) cout << a << " "
#define printSpace2(a, b) cout << a << " " << b << " "
#define printSpace3(a, b, c) cout << a << " " << b << " " << c << " "
#define printSpace4(a, b, c, d) cout << a << " " << b << " " << c << " " << d <<" "
#define printSpace5(a, b, c, d, e) cout << a << " "<< b << " " << c << " " << d <<" " << e << " "
#define printSpace6(a, b, c, d, e, f) cout << a << " "<< b << " " << c << " " << d <<" "<< e << " " << f << " "
#define printLn(n) cout << n << '\n'
#define printNL() cout <<'\n'
#define print(n) cout << n

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


struct CompressedLetter {
    ll num;
    char letter;
};

ll INF18 = 1e18;
ll INF9 = 1e9;
ll MOD197 = 1e9 + 7;

ll readLL();

int readINT();

short readShort();

bool readBool();

string readStr();

void resolve();

void resolveTest();

bool isPrime(ll n);

vector<bool> detectPrimes(ll n);

ll minPosInArray(const vector<ll> &nums);

ll maxPosInArray(const vector<ll> &nums);

ll minValInArray(const vector<ll> &nums);

ll maxValInArray(const vector<ll> &nums);

vector<ll> calcPrefixSum(const vector<ll> &nums);

vector<ll> calcSuffixSum(const vector<ll> &nums);

vector<ll> getDigits(ll n);

ll calcDigitSum(ll n);

ll sumNumRange(ll start, ll finish);

ll calcNumLength(ll n);

vector<CompressedLetter> processCompressedStr(const string &str);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    resolve();

    return 0;
}

void resolve() {
//    ll testN = readLL();
//    while (testN--) {
//        resolveTest();
//    }
//}
//
//void resolveTest() {
    ll n = readLL();
    ll k = readLL() - 1;
    vector<ll> src(n);
    forEach(src) {
        item = readLL();
    }

    sort(src.begin(), src.end());
    reverse(src.begin(), src.end());
    ll minBall = max(1LL, src[k]);
    ll res = 0;
    forEach(src) {
        res += item >= minBall;
    }

    printLn(res);
}

ll readLL() {
    ll num;
    cin >> num;
    return num;
}

int readINT() {
    int num;
    cin >> num;
    return num;
}

short readShort() {
    short num;
    cin >> num;
    return num;
}

string readStr() {
    string str;
    cin >> str;
    return str;
}

bool readBool() {
    bool val;
    cin >> val;
    return val;
}

bool isPrime(ll n) {
    if (n == 0 || n == 1) {
        return false;
    }

    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

vector<bool> detectPrimes(ll n) {
    vector<bool> nums(n + 1, true);
    nums[0] = false;
    nums[1] = false;
    for (ll i = 2; i <= n; ++i) {
        if (nums[i]) {
            for (ll j = i * i; j <= n; j += i) {
                nums[j] = false;
            }
        }
    }

    return nums;
}

ll minPosInArray(const vector<ll> &nums) {
    ll pos = 0;
    for (ll i = 1; i < nums.size(); ++i) {
        if (nums[pos] > nums[i]) {
            pos = i;
        }
    }

    return pos;
}

ll maxPosInArray(const vector<ll> &nums) {
    ll pos = 0;
    for (ll i = 1; i < nums.size(); ++i) {
        if (nums[pos] < nums[i]) {
            pos = i;
        }
    }

    return pos;
}

vector<ll> getDigits(ll n) {
    vector<ll> digits;
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }

    return digits;
}

vector<ll> calcPrefixSum(const vector<ll> &nums) {
    vector<ll> prefix(nums.size());
    prefix[0] = nums[0];
    for (ll i = 1; i < nums.size(); ++i) {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    return prefix;
}

vector<ll> calcSuffixSum(const vector<ll> &nums) {
    vector<ll> suffix(nums.size());
    suffix[nums.size() - 1] = nums[nums.size() - 1];
    for (ll i = (ll) nums.size() - 2; i >= 0; --i) {
        suffix[i] = suffix[i + 1] + nums[i];
    }

    return suffix;
}

ll sumNumRange(ll start, ll finish) {
    if (finish < start) {
        return 0;
    }

    if (start > 1) {
        return sumNumRange(1, finish) - sumNumRange(1, start - 1);
    }

    if (finish % 2 == 1L) {
        return sumNumRange(1, finish - 1) + finish;
    } else {
        return finish * (finish + 1) / 2;
    }
}

vector<CompressedLetter> processCompressedStr(const string &str) {
    vector<CompressedLetter> res;
    ll pos = 0;

    while (pos < str.length()) {
        ll numLength = 0;
        while ('0' <= str[pos] && str[pos] <= '9') {
            numLength++;
            pos++;
        }

        if (numLength == 0) {
            res.push_back({1, str[pos]});
        } else {
            res.push_back({stoi(str.substr(pos, numLength)), str[pos + numLength]});
        }

        pos += numLength + 1;
    }

    return res;
}

ll calcNumLength(ll n) {
    ll res = 0;
    while (n > 0) {
        n /= 10;
        res++;
    }

    return res;
}

ll minValInArray(const vector<ll> &nums) {
    return nums[minPosInArray(nums)];
}

ll maxValInArray(const vector<ll> &nums) {
    return nums[maxPosInArray(nums)];
}

ll calcDigitSum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
