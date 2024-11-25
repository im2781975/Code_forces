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
