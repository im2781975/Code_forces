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
