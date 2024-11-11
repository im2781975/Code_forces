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
