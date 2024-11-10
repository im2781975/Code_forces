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
