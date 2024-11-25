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
