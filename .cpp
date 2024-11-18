#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n], tmp[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j)
                sum += arr[j];
        }
        tmp[i] = sum;
        sum = 0;
    }
    for(int i = 0; i < n; i++)
        cout << tmp[i] << " ";
}
using namespace std;
bool sortbysec(const pair <string, int> &a, const pair <string, int> &b){
    if(a.second!= b.second)
        return a.second > b.second;
    if (a.first.find(b.first) == 0 || b.first.find(a.first) == 0)
        return a.first.size() > b.first.size();
    return a.first < b.first;
}
int main(){
    int n; cin >> n;
    vector <string> name;
    vector <int> mark;
    vector <pair <string, int> > vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i].first >> vec[i].second;
    sort(vec.begin(), vec.end(), sortbysec);
    for(int i = 0; i < n; i++)
        cout << vec[i].first << " " << vec[i].second;
}
using namespace std;
string ReducedStr(string &str){
    string res;
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        if(!res.empty() && res.back() == ch)
            res.pop_back();
        else
            res.push_back(ch);
    }
    return (res.empty() ? "Empty" : res);
}
int main(){
    string str; cin >> str;
    cout << ReducedStr(str);
}
using namespace std;
void FindConsecutive(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    if(n < 3){
        cout << -1;
        continue;
    }
    sort(arr, arr + n);
    bool found = false;
    for(int i = 0; i < n - 2; i++){
        if(arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2]){
            cout << arr[i];
            found = true;
            break;
        }
    }
    if(!found)
        cout << -1;
}
using namespace std;0
typedef long long ll;
// Extended Euclidean Algorithm
// This function returns the gcd of a and b, and updates x and y with the coefficients such that: ax + by = gcd(a, b)
ll gcdExtended(ll a, ll b, ll *x, ll *y) {
    // if a is 0, then gcd is b, and the coefficients are (0, 1)
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }
    ll x1, y1;
    // To store results of recursive call
    ll gcd = gcdExtended(b % a, a, &x1, &y1);
    // Update x and y using results of recursive call
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}
// Function to find modulo inverse of b under modulo m
// This returns -1 if the inverse doesn't exist (i.e., if gcd(b, m) != 1)
ll modInverse(ll b, ll m) {
    ll x, y;
    ll g = gcdExtended(b, m, &x, &y);
    // Return -1 if b and m are not coprime (gcd != 1)
    if (g != 1)
        return -1;
    // Handle negative x by ensuring result is positive
    return (x % m + m) % m;
}
// compute a / b under modulo m.This function returns (a * b^(-1)) % m if the modular inverse exists; otherwise, -1
ll modDivide(ll a, ll b, ll m) {
    a = a % m;
    ll inv = modInverse(b, m);

    // Check if the modular inverse exists
    if (inv == -1) {
        printf("Division not defined\n");
        return -1;
    }
    else
        return (inv * a) % m;
}
int main() {
    ll a = 10, b = 3, m = 13;
    ll result = modDivide(a, b, m);
    if (result != -1) {
        printf("Result of %lld / %lld under modulo %lld is %lld\n", a, b, m, result);
    }
    return 0;
}
using namespace std;
void Consecutive(){
    string str; cin >> str;
    int len = str.size();
    if(len == 1){
        cout << "No";
        return 0;
    }
    bool valid = true;
    for(int i = 0; i < len; i++){
        if(i == 0){
            if(str[i]!= str[i + 1]){
                valid = false;
                break;
            }
        }
        else if(i == len - 1){
            if(str[i] != str[i - 1]){
                valid = false;
                break;
            }
        }
        else{
            if(str[i] != str[i + 1] && str[i] != str[i - 1]){
                valid = false;
                break;
            }
        }
    }
    cout << (valid ? "Yes" : "No");
}
using namespace std;
void check(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    bool valid = true;
    int evenIdx = arr[0] % 2;
    for(int i = 0; i < n; i += 2){
        if(arr[i] % 2 != evenIdx){
            valid = false;
            break;
        }
    }
    if(valid){
        int oddIdx = (n > 1) ?  arr[1] % 2 : evenIdx;
        for(int i = 1; i < n; i += 2){
            if(arr[i] % 2 != oddIdx){
                valid = false;
                break;
            }
        }
    }
    cout << (valid ? cout << "Yes" : cout << "No");
}
using namespace std;
void check(){
    int n; string str;
    cin >> n >> str;
    if(n == 1){
        if(str == "W")
            cout << "Yes";
        else
            cout << "No";
        return 0;
    }
    if(n == 2){
        if(str == "WW" || str == "RB" || str == "BR")
            cout << "Yes";
        else
            cout << "No";
        return 0;
    }
    int len = str.size();
    bool flag = true;
    for(int i = 0; i < len;){ 
        //skip white
        while(i < len && str[i] == 'W')
            i++;
        if(i == n)
            break;
        int blue = 0, red = 0;
        while(i < len && str[i]!= 'W'){
            if(str[i] == 'B')
                blue++;
            else if(str[i] == 'R')
                red++;
            i++;
        }
        if(blue == 0 || red == 0){
            flag = false;
            break;
        }
    }
    (flag)? cout << "Yes" : cout << "No";
}
using namespace std;
//determine if a string composed of the characters 'R', 'B', and 'W' satisfies 
// specific adjacency rules for the characters 'R' and 'B'.
void isSatisfied(){
    string str; cin >> str;
    bool valid = true;
    int len = str.size();
    for(int i = 0; i < len; i++){
        if(str[i] == 'R' || str[i] == 'B'){
            bool validVicino = false;
            if(i > 0 && (str[i - 1] == 'R' || str[i - 1] == 'B'))
                validVicino = true;
            if(i < len - 1 && (str[i + 1] == 'R' || str[i + 1] == 'B'))
                validVicino = true;
            if(str[i] == 'R'){
                if(i > 0 && str[i - 1] == 'W' && str[i + 1] != 'B')
                    validVicino = false;
                if(i < len - 1 && str[i + 1] == 'W' && str[i - 1]!= 'B')
                    validVicino = false;
            }
           else if(str[i] == 'B'){
                if(i > 0 && str[i - 1] == 'W' && str[i + 1] != 'R')
                    validVicino = false;
                if(i < len - 1 && str[i + 1] == 'W' && str[i - 1]!= 'R')
                    validVicino = false;
            }
            if(!validVicino){
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
}
using namespace std;
void Satisfied(){ 
    int cnt = 0;
    int n; cin >> n;
    string str[n];
    for(int i = 0; i < n; i++)
        cin >> str[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((str[i][0] == str[j][0] && str[i][1] != str[j][1]) || (str[i][0] != str[j][0] && str[i][1] == str[j][1]))
                cnt++;
        }
    }
    cout << cnt;
}
using namespace std;
//swap occurrences of "BG" to "GB" in a string repeatedly until no more "BG" pairs can be found and swapped
void swap(){
    int n; string str;
    cin >> n >> str;
    size_t found = 0;
    while(found < str.size()){
        found = str.find("BG", found);
        if(found != string::npos){
            str[found] = 'G';
            str[found + 1] = 'B';
            found += 2;
        }
        else
            break;
    }
    cout << str;
}
using namespace std;
//finds the next palindromic date that is larger than n.
int arr[13]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int rev(int x){
    int ans = 0;
    while(x){
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    return ans;
}
bool IsLeap(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool check(int x, int n){
    if(x <= n)
        return false;
    int day = x % 100;
    x /= 100;
    int month = x % 100;
    int year = x / 100;
    if(month < 1 && month > 12)
        return false;
    if(IsLeap(year) && month == 2)
        return day <= 29;
    return day <= arr[month];
}
int main(){
    int n; cin >> n;
    for (int i = n / 10000; i <= 9999; i++) {
        int x = i * 10000 + rev(i);
        if (check(x, n)) {
            cout << x << endl;
            break;
        }
    }
    for (int i = n / 1000000; i <= 9999; i++) {
        int x = i * 1000000 + i * 10000 + rev(i) * 100 + rev(i);
        if (check(x, n)) {
            cout << x << endl;
            break;
        }
    }
}
using namespace std;
void printChar(){
    string str; cin >> str;
    for(int i = 0; i < str.size(); i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            if(i + 1 < str.size() && isdigit(str[i + 1])){
                int n = str[i + 1] - '0';
                for(int j = 0; j < n; j++)
                    cout << str[i] << " ";
                i++;
            }
            else
                cout << str[i] << " ";
        }
        
    }
}
using namespace std;
//find the divisor of 100 that minimizes the value of the expression 100 / i + i.
void FindDiv(){
    int ans = 0, sum = INT_MAX;
    for(int i = 1; i <= 100; i++){
        if(100 % i == 0){
            int cur = 100/i + i;
            if(cur < sum){
                sum = cur;
                ans = i;
            }
        }
    }
    cout << ans;
}
using namespace std;
int func(int n){
    int cnt = 0;
    while(n){
        if(n % 10 == 2)
            cnt++;
        n /= 10;
    }
    return cnt;
}
int main(){
    int ans = 0;
    for(int i = 1; i <= 2020; i++)
        ans += func(i);
    cout << ans;
}
using namespace std;
int GCD(int a, int b){
    if(a % b == 0)
        return b;
    return GCD(b, a % b);
}
int main(){
    int ans = 0;
    for(int i = 1; i <= 2020; i++){
        for(int j = 1; j <= 2020; j++){
            if(GCD(i, j) == 1)
                ans++;
        }
    }
    cout << ans;
}
using namespace std;
void MaxMin(){
    int n; cin >> n;
    int score[100001], mx = 0, mn = INT_MAX, total;
    for(int i = 0; i < n; i++){
        cin >> score[i];
        mx = max(mx, score[i]);
        mn = min(mn, score[i]);
        total += score[i];
    }
    double avg = static_cast<double>(total)/n;
    cout << mx << " " << mn << " " << avg;
}