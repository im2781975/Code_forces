using namespace std;
int task767_2_A(){
    int n, m; cin >> n >> m;
    vector <int> vec(n), tor(m);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < n; i++)
        cin >> tor[i];
    multiset <pair <int, int> >pr;
    for(int i = 0; i < n; i++)
        pr.insert(make_pair(vec[i], tor[i]));
    for(const auto & i : pr){
        if(i.first > m)
            m += i.first;
        cout << m;
    }
    cout << m;
}
using namespace std;
int task769_2_A()(){
    int n; cin >> n;
    string str; cin >> str;
    (n > 2 || str == "11" || str == "00") ? cout << "No" : cout << "yes";
}
using namespace std;
void task764_3_A(){
    int n; cin >> n;
    int maxi = 0, mini = INT_MAX;
    for(int i = 0; i > n; i++){
        int num; cin >> num;
        if(num > maxi) maxi = num;
        if(num < mini) mini = num;
    }
    cout << maxi - mini;
}
using namespace std;
void task764_3_B(){
    int a, b, c; cin >> a >> b >> c;
    if ((((a + c) % 2) == 0 && ((a + c) / 2) % b == 0) || (a <= b <= c && (b - (c - b) > 0) && (b - (c - b)) % a == 0) || (a <= b && (b + b - a) % c == 0))
        cout << "YES";
    else {
        swap(a, c);
        if ((((a + c) % 2) == 0 && ((a + c) / 2) % b == 0) || (a <= b <= c && (b - (c - b) > 0) && (b - (c - b)) % a == 0) || (a <= b && (b + b - a) % c == 0))
            cout << "YES";
        else
            cout << "NO";
    }
}
using namespace std;
void task768_2_A()(){
    int n; cin >> n;
    int maxA = 0, maxB = 0;
    vector <int> vec(n), tmp(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < n; i++)
        cin >> tmp[i];
    for(int i = 0; i < n; i++){
        if(vec[i] < tmp[i])
            swap(vec[i], tmp[i]);
    }
    for(int i = 0; i < n; i++){
        if(maxA < vec[i])
            maxA = vec[i];
        if(maxB < tmp[i])
            maxB = tmp[i];
    }
    //maxA = *max_element(vec.begin(), vec.end());
    //maxB = *max_element(vec.begin(), vec.end());
    cout << maxA * maxB;
}
using namespace std;
void task122_Rated_2_C() {
    ll heroHealth, heroDamage, monsterHealth, monsterDamage, upgrades, damagePerUpgrade, healthPerUpgrade;
    cin >> heroHealth >> heroDamage >> monsterHealth >> monsterDamage >> upgrades >> damagePerUpgrade >> healthPerUpgrade;
    for (ll currentHealthUpgrades = 0; currentHealthUpgrades <= upgrades; ++currentHealthUpgrades) {
        ll upgradedHealth = heroHealth + healthPerUpgrade * currentHealthUpgrades;
        ll upgradedDamage = heroDamage + damagePerUpgrade * (upgrades - currentHealthUpgrades);
        ll roundsToKillMonster = (monsterHealth + upgradedDamage - 1) / upgradedDamage;
        ll roundsToSurvive = (upgradedHealth + monsterDamage - 1) / monsterDamage;
        if (roundsToKillMonster <= roundsToSurvive) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
using namespace std;
void task122_Rated_2_B()(){
    string str; cin >> str;
    int zero = 0, one = 0, len = str.size();
    for(int i = 0; i < len; i++){
        if(str[i] == '0')
            zero++;
        else
            one++;
    }
    if(zero != one)
        cout << min(zero, one);
    else{
        int first, sec;
        if(str[len - 1] == '0')
            first = min(zero - 1, one);
        else
            first = min(zero, one - 1);
        if(str[0] == '0')
            sec = min(zero - 1, one);
        else
            sec = min(zero, one - 1);
        cout << max(first, sec);
    }
}
using namespace std;
void task767_2_B() {
    int l, r, k; cin >> l >> r >> k;
    if (l == r) {
        if (l == 1)
            cout << "NO";
        else
            cout << "YES";
        return;
    }
    if ((r - l + 1) - (r / 2 - (l - 1) / 2) <= k)
        cout << "YES";
    else
        cout << "NO";
}
using namespace std;
void task122_Rated_2_A() {
    int n; cin >> n;
    if (n % 7 == 0)
        cout << n;
    else if (n % 10 > n % 7)
        cout << n - n % 7;
    else
        cout << n + 7 - n % 7;
}
