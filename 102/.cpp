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
using namespace std;
void main()
{
    string num1, num2, digit1, digit2;
    vector<short> vec1, vec2, result;
    short i, carry, len1, len2, maxLength;
    short temp;
    cin >> num1 >> num2;
    len1 = num1.length();
    len2 = num2.length();
    maxLength = max(len1, len2);
    
    vec1.resize(100000);
    vec2.resize(100000);
    result.resize(maxLength + 1);

    for (i = 0; i < len1; i++){
        digit1 = num1[i];
        vec1[len1 - 1 - i] = stoi(digit1);
    }
    // Reverse and store digits of num2
    for (i = 0; i < len2; i++)
    {
        digit2 = num2[i];
        vec2[len2 - 1 - i] = stoi(digit2);
    }
    // Perform addition with carry
    carry = 0;
    for (i = 0; i <= result.size(); i++){
        result[i] = vec1[i] + vec2[i] + carry;
        carry = result[i] / 10;
        result[i] = result[i] % 10;
    }
    // Find the highest non-zero index in result
    for (i = result.size() - 1; i >= 0; i--){
        if (result[i] > 0)
            break;
    }
    // Print the result in reverse order
    for (short j = i; j >= 0; j--)
        cout << result[j];
}
using namespace std;
void main(){
    int n, m; cin >> n >> m;
    int x, y; cin >> x >> y;
    int a = n / a * m / b;
    int b = n / b * m / a;
    cout << max(a, b);
}
using namespace std;
void main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
            if(i % 3 == 0)
                cout << "Three ";
            if(i % 5 == 0)
                cout << "Five ";
            if(i % 7 == 0)
                cout << "Seven ";
        }
        else
            cout << i << " ";
    }
}
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> vec;
    for(int i = 0; i < n*2; i++){
        int x; cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    int res = 0, tmp = 2 * n - 1;
    for(int i = tmp; i >= n; i--)
        res += vec[i];
    cout << res;
}
using namespace std;
void main(){
    string str, ing; cin >> str >> ing;
    cout << str + ing << "\n";
    int tmp = str.find(ing);
    if(tmp != -1)
        cout << "No";
    else
        cout << "Yes" << "\n" << str + "molla";
    
}
using namespace std;
void main(){
    int x, y, n; cin >> x >> y >> n;
    int arr[2006], res = 0;
    for(int i = 0; i < n * n; i++){
        if(arr[x] == 0){
            arr[x]++;
            res++;
        }
        int tmp = (x + y) % m;
        x = y; y = tmp;
    }
    cout << res;
}
using namespace std;
void main(){
    int n; cin >> n;
    int prv = -1;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x == 0 || x != prv)
            vec.push_back(x);
    }
    if (vec.size() < n)
        cout << 0 << endl;
    else if (vec.size() == n)
        cout << 1 << endl;
    else
        cout << n + 1 << endl;
}
using namespace std;
void main() {
    int t;  cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        // Number of participants and threshold

        int id; cin >> id; 
        // The ID to evaluate
        vector<int> x(n), s1(n), s2(n), s3(n);
        // Input details for all participants
        for (int j = 0; j < n; j++)
            cin >> x[j] >> s1[j] >> s2[j] >> s3[j];
        // Find rank of the participant with the given ID
        int rank = 1;
        // Start with rank 1 (best possible)
        for (int j = 0; j < n; j++) {
            if (id == x[j]) { // Find the target participant
                for (int k = 0; k < n; k++) {
                    if (j == k) continue; // Skip comparing the participant with themselves
                    // Compare s3, then s2, then s1
                    if (s3[k] > s3[j] || 
                        (s3[k] == s3[j] && s2[k] > s2[j]) || 
                        (s3[k] == s3[j] && s2[k] == s2[j] && s1[k] > s1[j]))
                        rank++;
                }
                break; 
                // Found the target participant, no need to continue
            }
        }
        // Output result based on rank and threshold
        if (rank <= m) 
            cout << "YA" << endl;
        else
            cout << "TIDAK" << endl;
    }
    return 0;
}
