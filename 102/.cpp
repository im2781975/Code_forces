using namespace std;
int main() {
    string str; 
    int n; cin >> str >> n;
    cin >> str >> n;      
    vector <string> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    // Check the position of the wildcard '*' in the pattern
    bool startsWith = (str[0] == '*');
    bool endsWith = (str[str.size() - 1] == '*');

    if (startsWith && !endsWith) { // Case: *suffix
        string suffix = str.substr(1); 
        // Remove '*' to get the suffix
        for (const auto& word : vec){
            if (word.size() >= suffix.size() &&
                word.compare(word.size() - suffix.size(), suffix.size(), suffix) == 0)
                cout << word << endl;
        }
    } else if (!startsWith&& endsWith) { 
        // Case: prefix*
        string prefix = k.substr(0, k.size() - 1); 
        // Remove '*' to get the prefix
        for (const auto& word : vec) {
            if (word.size() >= prefix.size() &&
                word.compare(0, prefix.size(), prefix) == 0)
                cout << word << endl;
        }
    } else { 
        // Case: No wildcard or invalid pattern
        for (const auto& word : vec)
            cout << word << endl;
    }
    return 0;
}
using namespace std;
void solve() {
    string s;
    cin >> s;
    if (s == "PAS") {
        // Pascal code generation
        cout << "var data: array[1..10000] of longint;" << endl;
        cout << "    n, i, j, temp: longint;" << endl;
        cout << "begin" << endl;
        cout << "    readln(n);" << endl;
        cout << "    for i := 1 to n do readln(data[i]);" << endl;
        cout << "    for i := 1 to n - 1 do" << endl;
        cout << "        for j := i + 1 to n do" << endl;
        cout << "            if (data[i] > data[j]) then" << endl;
        cout << "            begin" << endl;
        cout << "                temp := data[i];" << endl;
        cout << "                data[i] := data[j];" << endl;
        cout << "                data[j] := temp;" << endl;
        cout << "            end;" << endl;
        cout << "    for i := 1 to n do writeln(data[i]);" << endl;
        cout << "end." << endl;
    } else {
        // C code generation
        cout << "#include <stdio.h>" << endl;
        cout << "int data[10001];" << endl;
        cout << "int n, i, j, temp;" << endl;
        cout << "int main() {" << endl;
        cout << "    scanf(\"%d\", &n);" << endl;
        cout << "    for (i = 1; i <= n; i++) scanf(\"%d\", &data[i]);" << endl;
        cout << "    for (i = 1; i <= n - 1; i++)" << endl;
        cout << "        for (j = i + 1; j <= n; j++)" << endl;
        cout << "            if (data[i] > data[j]) {" << endl;
        cout << "                temp = data[i];" << endl;
        cout << "                data[i] = data[j];" << endl;
        cout << "                data[j] = temp;" << endl;
        cout << "            }" << endl;
        cout << "    for (i = 1; i <= n; i++) printf(\"%d\\n\", data[i]);" << endl;
        cout << "    return 0;" << endl;
        cout << "}" << endl;
    }
}
// Pola string
using namespace std;
void main(){
    string str; cin >> str;
    int len = ceil(sqrt(str.length()));
    for(int i = str.length(); i < len * len; i++)
        str[i] += ".";
    for(int i = 0; i < len; i++){
        if(i % 2 == 0){
            for(int j = i * len; j < (i + 1) * len; j++)
                cout << str[j] << " ";
        }
        else{
            for(int j = (i + 1)* len - 1; j > i * len - 1; j--)
                cout << str[j] << " ";
        }
    }
}
// wildcard
using namespace std;
int main(){
    int n; cin >> n;
    string str, tmp[n]; cin >> str;
    string bg = str.find("*");
    string x = str.substr(0, bg);
    string y = str.substr(bg + 1);
    int len = y.length();
    for(int i = 0; i < len; i++){
        string ing; cin >> ing;
        if(str.length() - 1 > ing.length())
            continue;
        string c = ing.substr(0, bg);
        string d = ing.substr(str.length() - len, len);
        if(x == c && y == d)
            tmp[i] = ing;
    }
    for(int i = 0; i < n; i++)
        cout << tmp[i] << " ";
}
using namespace std;
int newNum(int x){
    if(x % 4 == 0)
        return x;
    if(x % 4 == 1)
        return 1;
    if(x % 4 == 2)
        return x + 1;
    return 0;
}
int main(){
    int x, y; cin >> x >> y;
    cout << newNum(x - 1) ^ newNum(y);
}
using namespace std;
void main(){
    int n; cin >> n;
    vector <pair <int, int> >pr(n);
    for(int i = 0; i < n; i++)
        cin >> pr[i].first << " " << pr[i].second;
    sort(pr.rbegin(), pr.rend());
    int mx = pr[0].second, res = 1;
    for(int i = 1; i < n; i++){
        if(pr[i].second > mx){
            mx = pr[i].second;
            res++;
        }
    }
    cout << res;
}
using namespace std;
void main(){
    string str; getline(cin, str);
    if(str.find("molla") != -1)
        cout << str.find("molla") + 1;
    else
        cout << -1;
}
using namespace std;
void main(){
    double n; cin >> n;
    cout << fixed << setprecision(2) << (n - 1)/2 * n/2;
}
using namespace std;
void main(){
    int n, k; cin >> n >> k;
    cout << fixed << setprecision(5) << (1 / n) *(n - k - 1) / (n - 1);
}
using namespace std;
void main(){
    int n; cin >> n;
    int res = 0;
    for(int i = 1; i <= n; i++){
        res += i;
        cout << res;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    /*
    for(int i = 0; i < n / 2; i++)
        cout << arr[i] << "\n" << arr[n - 1 - i] << "\n";
    if(n % 2 != 0)
        cout << arr[n / 2] << "\n";
    */
    if(n % 2 == 1){
        for(int i = 1; i <= n /2; i++)
            swap(arr[i], arr[n - i]);
    }
    else{
        for(int i = 1; i < n /2; i++)
            swap(arr[i], arr[n - i]);
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
using namespace std;
void main(){
    int n, k; cin >> n >> k;
    int ans = 1, mx = 0, cnt = 0;
    while(n--){
        cnt++;
        int x; cin >> x;
        mx = max(mx, x);
        if(cnt == k){
            ans += mx + 1;
            cnt = mx = 0;
        }
    }
    if(cnt > 0)
        ans += mx + 1;
    cout << ans;
}
using namespace std;
void main(){
    int n, a, b; cin >> n >> a >> b;
    int x = n *(a / 100);
    int y = n - x;
    int z = y * b/100;
    cout << y + z;
}
using namespace std;
void main(){
    string res = "molla vai";
    string str; getline(cin, str);
    int i = 10, cnt = 0;
    while(i--){
        if(str[i] == res[i] || str[i] + 32 = res[i])
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void main(){
    string str; getline(cin, str);
    int res = 1, len = str.length;
    for(int i = 0; i < len; i++){
        if(str[i] == 'e'){
            if(str[i] == 'u')
                res *= 3;
            else
                res *= 2;
        }
    }
    cout << res;
}
using namespace std;
void processDenom(int n, int denom){
    if(n >= denom){
        cout << denom << " " << n / denom << "\n";
        n %= denom;
    }
}
int main(){
    int n; cin >> n;
    processDenom(n, 1000);
    processDenom(n, 500);
    processDenom(n, 200);
    processDenom(n, 100);
    processDenom(n, 50);
    processDenom(n, 20);
    processDenom(n, 10);
    processDenom(n, 5);
    processDenom(n, 2);
    processDenom(n, 1);
}
