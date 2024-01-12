 #define fastIO ios_base::sync_with_stdio(false);
  #define ll long long
  #define pb push_back
  #include <iostream>
  #include <string>
  #include <algorithm>
  #include <vector>
  #include <cmath>
  #include <string>
  #include <map>
  #include <set>
  #include <unordered_map>
  // void A_Tenzing_and_Tsondu(){
  //  ll tso= 0, tenz=0;
  //  int a, b;
  //  cin >> a >> b ;
  //  for(int i =0 ; i < a ; i++){
  //   int x ; cin >> x ;
  //   tso += x;
  //  }
  //  for(int i = 0 ; i < b ; i++){
  //   int y ; cin >> y ;
  //   tenz += y ;
  //  }
  //  if(tso > tenz) cout << "Tsondu" << "\n";
  //  else if(tso < tenz) cout << "Tenzing" << "\n";
  //  else cout << "Draw" << "\n";
  //  }
  //  void solveee(){
  //   int n ;
  //   cin >> n;
  //   int newn = n/2;
  //   vector<int>v(newn);
  //   vector<int>v2(newn);
  //   if(n%2 != 0){
  //   for(int i = 0; i < n/2 ;i++){
  //     cin >> v[i];
  //     //cout << v[i] << endl;
  //   }
  //   for(int i = 0; i < n/2 ;i++){
  //     cin >> v2[i];
  //    //  cout << v2[i] << endl;
  //   }
  // }
  //   else{
  //   for(int i = 0; i < n/2 ;i++){
  //     cin >> v[i];
  //   }
  //   for(int i = 0; i < n/2 ;i++){
  //     cin >> v2[i];
  //   }
  // }
  //   sort(v.begin(), v.end());
  //   sort(v2.begin(), v2.end());
  //   cout << (v[newn-1] + v2[newn-1])-(v[0] + v2[0])<< "\n";
  //  }
  //  void med_number(){
  //  vector<int>v(3);
  //  for(int i = 0 ; i < 3; i++) cin >> v[i];
  //  sort(v.begin(), v.end());
  //  cout << v[1] << "\n";
  //  }
  // void solvee()
  // {
  //   int n;
  //   cin >> n;
  //   vector<char> v(n);
  //   string s;
  //   cin >> s;
  //   for (int i = 0; i < n; i++)
  //   {
  //     v[i] = s[i];
  //   }
  //   sort(v.begin(), v.end());
  //   cout << v[n - 1] - '0' - 48 << "\n";
  // }
  // void solve_div4()
  // {
  //   vector<int> v(4);
  //   int timor = 0;
  //   int ans = 0;
  //   for (int i = 0; i < 4; i++)
  //   {
  //     cin >> v[i];
  //     timor = v[0];
  //     if (v[i] > timor)
  //     {
  //       ans++;
  //     }
  //   }
  //   cout << ans << "\n";
  // }
  // void solve_div()
  // {
  //   char arr[8][8];
  //   for (int i = 0; i < 8; i++)
  //   {
  //     for (int j = 0; j < 8; j++)
  //     {
  //       cin >> arr[i][j];
  //     }
  //   }
  //   for (int i = 0; i < 8; i++)
  //   {
  //     for (int j = 0; j < 8; j++)
  //     {
  //       if (arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1] && arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == '#')
  //       {
  //         cout << i + 1 << " " << j + 1 << "\n";
  //         break;
  //       }
  //     }
  //   }
  // }
  // void solve_b_div4()
  // {
  //   int n;
  //   cin >> n;
  //   set<int> s({});
  //   int ans = 0;
  //   for (int i = 0; i < n; i++)
  //   {
  //     int x;
  //     cin >> x;
  //     s.emplace(x);
  //   }
  //   for (auto j : s)
  //   {
  //     ans++;
  //   }
  //   if (ans == n)
  //     cout << "YES"
  //          << "\n";
  //   else
  //     cout << "NO"
  //          << "\n";
  // }
  // void s()
  // {
  //   int f = 0;
  //   char arr[8][8];
  //   for (int i = 0; i < 8; i++)
  //   {
  //     for (int j = 0; j < 8; j++)
  //     {
  //       cin >> arr[i][j];
  //     }
  //   }
  //   for (int i = 0; i < 8; i++)
  //   {
  //     for (int j = 0; j < 8; j++)
  //     {
  //  if (arr[i][7] == 'R')
  //   {
  //     f = i;
  //   }
  //    }
  //   }
  //   if(f!=0 && arr[f][7] == 'R'){
  //     cout << arr[f][7] << "\n";
  //   }
  //   else cout << 'B' << "\n";
  // }
  /*
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    int i = 1;
    int current = 0;
    while (i <= n)
    {
      if (s[current] == s[i])
      {
        v.pb(s[current]);
        current = i + 1;
        i++;
      }
      i++;
    }
    for (auto i : v)
      cout << i;
    cout << endl;
    */
  // void solveee()
  // {
  //   ll n;
  //   cin >> n;
  //   vector<ll> v(n);
  //   for (int i = 0; i < n; i++)
  //   {
  //     cin >> v[i];
  //   }
  //   sort(v.begin(), v.end());
  //   if (v[n - 1] * v[n - 2] >= v[0] * v[1])
  //     cout << v[n - 1] * v[n - 2] << "\n";
  //   else
  //     cout << v[0] * v[1] << "\n";
  // }
  // void solve_math()
  // {
  //   ll n;
  //   cin >> n;
  //   cout << n * n + n * 2 + 2 << "\n";
  // }
  // void solveE()
  // {
  //   string s, s2;
  //   cin >> s >> s2;
  //   ll temp = 0;
  //   ll temp2 = 0;
  //   int len1 = s.length(), len2 = s2.length();
  //   if (s[len1 - 1] == 'M')
  //     temp = 1;
  //   else if (s[len1 - 1] == 'L')
  //     temp = (len1)*2;
  //   else if (s[len1 - 1] == 'S')
  //     temp = len1 * -1;

  //   if (s2[len2 - 1] == 'M')
  //     temp2 = 1;
  //   else if (s2[len2 - 1] == 'L')
  //     temp2 = len2 * 2;
  //   else if (s2[len2 - 1] == 'S')
  //     temp2 = len2 * -1;
  //   // sec string
  //   if (temp > temp2)
  //     cout << ">"
  //          << "\n";
  //   else if (temp < temp2)
  //     cout << "<"
  //          << "\n";
  //   else
  //     cout << "="
  //          << "\n";
  //   temp = 0;
  //   temp2 = 0;
  // }
  // void solve_Yes()
  // {
  //   string s;
  //   string ns = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
  //   cin >> s;
  //   int count = 0;
  //   if (ns.find(s) != -1)
  //     cout << "YES"
  //          << "\n";
  //   else
  //     cout << "NO"
  //          << "\n";
  // }
  // void solve_div4c()
  // {
  //   int n;
  //   cin >> n;
  //   ll temp1 = 999999999999999;
  //   ll temp2 = 999999999999999;
  //   int c1 = 0;
  //   int c2 = 0;
  //   int f = 0;
  //   ll t = 999999999999999;
  //   ll t2 = 999999999999999;
  //   vector<pair<int, string>> v(n);
  //   for (int i = 0; i < n; i++)
  //   {
  //     cin >> v[i].first >> v[i].second;
  //   }
  //   sort(v.begin(), v.end());

  //   bool first = true;
  //   bool second = true;
  //   for (int j = 0; j < n; j++)
  //   {
  //     if (v[j].second == "11")
  //     {
  //       c1++;
  //       c2++;
  //       temp1 = v[j].first;
  //     }
  //     else
  //     {
  //       if (v[j].second == "01" && second)
  //       {
  //         c1++;
  //         t = v[j].first;
  //         second = false;
  //       }
  //       if (v[j].second == "10" && first)
  //       {
  //         c2++;
  //         t2 = v[j].first;
  //         first = false;
  //       }
  //       temp1 = t + t2;
  //     }
  //     temp2 = min(temp2, temp1);
  //   }
  //   if (c1 > 0 && c2 > 0)
  //     cout << temp2 << "\n";
  //   else
  //     cout << -1 << "\n";
  // }
  // void solve_dive3()
  // {
  //   int temp = 0;
  //   char c;
  //   int f = 0;
  //   int n;
  //   cin >> n;
  //   vector<int> v1(n);
  //   vector<char> v2(n);
  //   for (int i = 0; i < n; i++)
  //   {
  //     int num;
  //     cin >> v1[i];
  //   }
  //   for (int i = 0; i < n; i++)
  //   {
  //     char letter;
  //     cin >> v2[i];
  //   }

  //   for (int j = 1; j < n; j++)
  //   {
  //     temp = v1[j];
  //     c = v2[j];
  //     for (int z = 0; z < n; z++)
  //       if (v1[z] == temp && v2[z] != c)
  //       {
  //         f++;
  //       }
  //   }
  //   if (f > 0)
  //     cout << "NO"
  //          << "\n";
  //   else
  //     cout << "YES"
  //          << "\n";
  // }
  // void solve_div3()
  // {
  //   set<char> set;
  //   int n;
  //   cin >> n;
  //   string s;
  //   cin >> s;
  //   string tmp = "";
  //   for (int i = 0; i < n; i++)
  //     s[i] = tolower(s[i]);
  //   for (int i = 0; i < n; i++)
  //     tmp += s[i];
  //   tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
  //   if (tmp == "meow")
  //     cout << "YES"
  //          << "\n";
  //   else
  //     cout << "NO"
  //          << "\n";
  // }
  // void solve_ballonIcpc()
  // {
  //   int n;
  //   cin >> n;
  //   string s;
  //   cin >> s;
  //   int tmp = 0;
  //   char arr[50] = {0};
  //   for (int i = 0; i < n; i++)
  //   {
  //     if (arr[s[i]] == 0)
  //       tmp += 2;
  //     else
  //       tmp += 1;
  //     arr[s[i]]++;
  //   }
  //   cout << tmp << "\n";
  // }
  // void solve_wheelBag()
  // {
  //   int n;
  //   cin >> n;
  //   int wheel[100];
  //   for (int i = 0; i < n; i++)
  //   {
  //     cin >> wheel[i];
  //   }
  //   for (int i = 0; i < n; i++)
  //   {
  //     int count;
  //     cin >> count;
  //     for (int j = 0; j < count; j++)
  //     {
  //       char move;
  //       cin >> move;
  //       if (move == 'U')
  //         wheel[i]--;
  //       else
  //         wheel[i]++;
  //     }
  //     if (wheel[i] < 0)
  //       wheel[i] += 10;
  //     if (wheel[i] >= 10)
  //       cout << wheel[i] % 10 << " ";
  //     else
  //       cout << wheel[i] << " ";
  //   }
  //   cout << "\n";
  // }
  // void solvezzz()
  // {
  //   int n;
  //   cin >> n;
  //   bool stat1 = true;
  //   bool stat2 = true;
  //   bool stat3 = true;
  //   bool stat4 = true;
  //   vector<int> v(n);
  //   vector<int> checker(n-1);
  //   for (int i = 0; i < n; i++)
  //   {
  //     cin >> v[i];
  //   }
  //   for(auto elem : v){
  //     if(elem > 0){
  //     if(elem % 2 != 0) stat2=true;
  //     else {
  //       stat2 = false;
  //       break;
  //     }
  //     }
  //   }
  //   for(auto elem : v){
  //     if(elem > 0){
  //     if(elem % 2 == 0) stat1=true;
  //     else {
  //       stat1 = false;
  //       break;
  //     }
  //     }
  //   }
  //    for (int i = 0; i < n-1; i++)
  //   {
  //     checker[i] = abs(v[i] - v[i+1]);
  //     v[i+1] = checker[i];
  //   }
  //    for(int i = 0; i < n-1; i++){
  //     if(checker[i] > 0){
  //     if(checker[i] % 2 != 0) stat3=true;
  //     else {
  //       stat3 = false;
  //       break;
  //     }
  //     }
  //   }
  //  for(int i = 0; i < n-1; i++){
  //   if(checker[i] >0){
  //     if(checker[i] % 2 == 0) stat4=true;
  //     else {
  //       stat4 = false;
  //       break;
  //     }
  //   }
  //   }
  //   // if even
  //   if(stat2 || stat1 || stat3 || stat4) cout << "YES" << "\n";
  //   else cout << "NO" << "\n";
  //   }
  void solve_div4C()
  {
    int n;
    int temp = 0;
    cin >> n;
    string v[3][n];
    map<string, int> v2;
    string t = "";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> v[i][j];
        v2[v[i][j]]++;
      }
    }
    for (int i = 0; i < 3; i++)
    {
      for (int z = 0; z < n; z++)
      {
        if (v2[v[i][z]] == 2)
          temp += 1;
        if (v2[v[i][z]] == 1)
          temp += 3;
      }
      cout << temp << " ";
      temp = 0;
    }
    cout << "\n";
  }
  /* for(int i = 0 ; i < 3 ; i++){
      for(int j = 0;  j < n ; j++){
      if(v2[i][j] == 2) temp +=1;
      if(v2[i][j] == 1) temp +=3;
      }
      cout << temp << " ";
    }
    */
  void solve_LLRR()
  {
    ll n, temp = 0, temp1 = 0, temp2 = 0;
    map<char, int> m;
    cin >> n;
    string s;
    cin >> s;
    int counter = 0;
    int idx = 0;
    int idx2 = 1;
    int size = n / 2;
    s[0] = 'R';
    for (int j = 0; j < n; j++)
    {
      if (j <= size)
      {
        s[n - j] = 'L';
        // cout << s[n-j-1] << " "  << n-j-1;
      }
      if (j > size)
      {
        s[j - (size + 1)] = 'R';
        // cout << s[j-size] << " " << j-size <<" ";
      }
      for (int z = 0; z < n; z++)
      {
        if (s[z] == 'R')
          temp += (n - 1) - z;
        else
          temp += z;
      }
      cout << temp << " ";
      temp = 0;
    }
    cout << "\n";
    // cout << idx;
    // cout << s;
  }
  void solveContest1790ProblemA()
  {
    string s = "314159265358979323846264338327";
    string ns;
    cin >> ns;
    int temp = 0;
    for (int i = 0; i < ns.length(); i++)
      if (ns[i] == s[i])
        temp++;
      else
        break;
    cout << temp << "\n";
  }
  void solveContest1790ProblemB()
  {
    int n, s, r, temp = 0, temp2 = 1;
    cin >> n >> s >> r;
    temp = r;
    vector<int> v;
    vector<int> sides = {1, 2, 3, 4, 5, 6};
    vector<int> result;
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = 5; j >= 0; j--)
      {
        while (r >= sides[j] && sides[j] <= s - r)
        {
          r -= sides[j];
          result.pb(sides[j]);
          temp2++;
        }
      }
    }
    sort(result.rbegin(), result.rend());
    for (int i = 0; i < n - 2; i++)
    {
      while (result[i] > 1)
      {
        if (result.size() == n - 1)
          break;
        result[i]--;
        result.pb(1);
      }
    }
    result.pb(s - temp);
    for (auto j : result)
    {
      cout << j << " ";
    }
    cout << "\n";
  }
  void solveDiv2A()
  {
    ll n;
    bool flag = true;
    ll temp = 9999999999999999;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    for (int i = 1; i < n; i++)
    {
      if (v[i] < v[i - 1])
      {
        flag = false;
        break;
      }
    }
    if (flag)
    {
      for (int i = 1; i < n; i++)
      {
        temp = min(temp, v[i] - v[i - 1]);
      }
      cout << temp / 2 + 1 << "\n";
    }
    else
      cout << 0 << "\n";
  }
  void div2BFibonachairs()
  {
    ll n, k, ans = 0, t = 0, t2 = 0;
    cin >> n >> k;
    ll temp = k;
    vector<ll> v;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
      ll t3 = 0;
      t = n;
      t2 = n - i;
      for (int j = 2; j < k; j++)
      {
        if (t3 >= 0)
        {
          t3 = t - t2;
          t = t2;
          t2 = t3;
        }
        else
          break;
      }
      if (t3 >= 0 && t2 <= t)
      {
        ans++;
      }
    }
    cout << ans << "\n";
  }
  void div2_29_7_23B()
  {
    ll n, msize = 0, ans = 0, mTest = 10000;
    cin >> n;
    for (int i = 1; i <= mTest; i++)
    {
      if (n % i == 0)
        ans++;
      else
      {
        msize = max(msize, ans);
        ans = 0;
      }
    }
    cout << msize << "\n";
  }
  void solveuwu()
  {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> op;
    for (int i = 0; i < n; i++)
    {
      if (s[i + 2] == '0' && i + 2 < s.length() && s[i + 3] != '0')
      {
        int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
        op.pb(char(num + 'a' - 1));
        i += 2;
      }
      else
      {
        int num = s[i] - '0';
        op.pb(char(num + 'a' - 1));
      }
    }
    for (auto i : op)
    {
      cout << i;
    }
    cout << "\n";
  }
  void solve3divA()
  {
    vector<ll> v(7);
    vector<ll> res;
    ll temp = 0;
    int f = 0;
    ll temp2 = 0;
    int counter = 5;
    for (int i = 0; i < 7; i++)
    {
      cin >> v[i];
    }
    ll max = v[6];
    if (v[0] + v[1] + v[2] == v[6])
    {
      cout << v[0] << " " << v[1] << " " << v[2];
    }
    else
    {
      for (int j = 0; j < 7; j++)
      {
        for (int i = j + 1; i < 7; i++)
        {
          for (int z = 0; z < 7; z++)
          {
            if (v[j] + v[i] + v[z] == v[6])
            {
              cout << v[j] << " " << v[i] << " " << v[z] << "\n";
              return;
            }
          }
        }
      }
    }
    cout << "\n";
  }
  void solveDiv4C()
  {
    int a, b, res = 0, finalResult = 100000;
    cin >> a >> b;
    vector<string> s(a);
    for (int i = 0; i < a; i++)
    {
      cin >> s[i];
    }
    for (int i = 0; i < a; i++)
    {
      for (int z = i + 1; z < a; z++)
      {
        res = 0;
        for (int j = 0; j < b; j++)
        {
          if (z != i)
            res += abs((s[i][j] - 'a') - (s[z][j] - 'a'));
        }
        finalResult = min(finalResult, res);
      }
    }
    cout << finalResult << "\n";
  }
  void chessAndBishop()
  {
    ll n, m;
    cin >> n >> m;
    ll chess[n][m];
    ll maxr = 0;
    ll maxrr = 1000;
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> chess[i][j];
        // maxl[i-j] = chess[i][j];
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= m; j++)
      {
        // maxl[i-j] = chess[i][j];
        maxr += chess[i + j][j];
      }
      maxrr = min(maxrr, maxr);
      maxr = 0;
    }
    cout << maxrr << "\n";
    //  for(int i = 0; i < n ; i++){
    //   for(int j =0 ; j < m ; j++){
    //     result = max(result, maxr[i][j]);
    //   }
    //   }
    //   cout << result << "\n";
  }
  void solve1()
  {
    // https://codeforces.com/contest/1843/problem/A
    ll size;
    cin >> size;
    vector<ll> v(size);
    ll subtracts = 0;
    ll sum = 0;
    for (int i = 0; i < size; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    if (size % 2 == 0)
      for (int j = size - 1, i = 0; j >= size / 2, i < size / 2; j--, i++)
        sum += v[j] - v[i];
    else
      for (int j = size - 1, i = 0; j > size / 2, i < size / 2; j--, i++)
        sum += v[j] - v[i];
    cout << sum - subtracts << "\n";
  }
  void solve2()
  {
    // https://codeforces.com/contest/1843/problem/B
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    int c = 0;
    int subarray = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      sum += abs(v[i]);
    }
    for (int i = 0; i < n; i++)
    {
      if (v[i] == 0)
        continue;
      for (int z = i; z < n; z++)
      {
        if (v[z] <= 0)
        {
          flag = false;
          i = z;
        }
        else
          break;
      }
      if (!flag)
        subarray++;
      flag = true;
      c++;
    }
    cout << sum << " " << subarray << "\n";
  }
  void solve3()
  {
    // https://codeforces.com/contest/1772/problem/B
    bool flag = false;
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        cin >> arr[i][j];
      }
    }
    if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
    {
      cout << "YES"
          << "\n";
    }
    else
    {
      for (int i = 0; i < 4; i++)
      {
        int temp1 = arr[1][0];
        int temp2 = arr[1][1];
        int temp3 = arr[0][0];
        int temp4 = arr[0][1];
        arr[0][0] = temp1;
        arr[0][1] = temp3;
        arr[1][0] = temp2;
        arr[1][1] = temp4;
        if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
        {
          cout << "YES"
              << "\n";
          flag = true;
          break;
        }
      }
      if (!flag)
        cout << "NO"
            << "\n";
    }
  }
  int charac(vector<ll> v, int size)
  {
    set<ll> diff;
    for (int i = 0; i < size - 1; i++)
    {
      diff.insert(v[i + 1] - v[i]);
    }
    return diff.size();
  }
  void solve4()
  {
    ////https://codeforces.com/contest/1772/problem/C
    ll n, max;
    cin >> n >> max;
    ll nmax = 1;
    ll temp = 1;
    ll sum = n;
    vector<ll> v;
    while (nmax - 1 < max - n && n > 2)
    {
      v.pb(nmax);
      temp++;
      nmax += temp;
      n--;
    }
    while (n > 0)
    {
      v.pb(max);
      max--;
      n--;
    }
    sort(v.begin(), v.end());
    for (auto i : v)
      cout << i << " ";
    cout << "\n";
    // cout << charac(v, v.size()) << "\n";
  }
  void solve5()
  {
    // https://codeforces.com/contest/1714/problem/A
    ll n, h, m, temp = 100;
    cin >> n >> h >> m;
    vector<pair<ll, ll>> v(n);
    vector<pair<ll, ll>> result(n);
    vector<ll> sum;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i].first >> v[i].second;
      int AlarmTime = v[i].first * 60 + v[i].second;
      int BedTime = (h * 60) + m;
      int Total = abs(AlarmTime - BedTime) / 60;
      int Time_in_min = abs(BedTime - AlarmTime) - Total * 60;
      result[i].first = Total;
      result[i].second = Time_in_min;
      if (Total > 12)
      {
        Total = (((24 * 60) - BedTime) + AlarmTime) / 60;
        Time_in_min = abs((24 * 60 - (h * 60 + m) + AlarmTime) - Total * 60);
        result[i].first = (((24 * 60) - BedTime) + AlarmTime) / 60;
        result[i].second = abs((24 * 60 - (h * 60 + m) + AlarmTime) - Total * 60);
      }
      else if (v[i].first < h || h == v[i].first && m > v[i].second)
      {
        int anaT3bt = 24 * 60 - ((h * 60 + m) - (v[i].first * 60 + v[i].second));
        result[i].first = anaT3bt / 60;
        result[i].second = abs(60 - Time_in_min);
      }
    }
    sort(result.begin(), result.end());
    cout << result[0].first << " " << result[0].second << "\n";
  }
  void solve6()
  {
    // https://codeforces.com/contest/1690/problem/B
    ll n;
    cin >> n;
    int temp = 0;
    int count = 0;
    bool f = false;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i].first;
    }
    for (int i = 0; i < n; i++)
    {
      cin >> v[i].second;
    }
    sort(v.begin(), v.end());
    temp = v[n - 1].first - v[n - 1].second;
    for (int i = 0; i < n; i++)
    {
      if (v[i].second > v[i].first)
      {
        f = false;
        break;
      }
      if (v[i].first - temp < 0)
        v[i].first = 0;
      else
        v[i].first -= temp;
      if (v[i].first == v[i].second)
      {
        f = true;
      }
      else
      {
        f = false;
        break;
      }
    }
    if (f)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  void solve7()
  {
    // https://codeforces.com/contest/1690/problem/C
    ll n;
    cin >> n;
    vector<ll> start(n);
    vector<ll> end(n);
    vector<ll> result(n);
    for (int i = 0; i < n; i++)
    {
      cin >> start[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> end[i];
    }
    for (int j = 0; j < n; j++)
    {
      if (start[j] < end[j - 1] && j >= 1)
      {
        result[j] = (end[j] - end[j - 1]);
      }
      else
      {
        result[j] = (end[j] - start[j]);
      }
    }
    for (auto i : result)
      cout << i << " ";
    cout << "\n";
  }
  ll maxe(ll num, ll num2)
  {
    if (num > num2)
      return num;
    else
      return num2;
  }
  bool isSorted(vector<ll> v)
  {
    for (int i = 1; i < v.size(); i++)
    {
      if (v[i - 1] > v[i])
        return false;
    }
    return true;
  }
  bool checking(string s)
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] != '0')
        return true;
    }
    return false;
  }
  bool LocalMax(vector<ll> v)
  {
    for (int i = 1; i < v.size(); i++)
    {
      if (i != v.size() - 1)
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
          return false;
    }
    return true;
  }
  void solve8()
  {
    // https://codeforces.com/contest/1702/problem/B
    string s;
    cin >> s;
    set<char> set({});
    ll c = 0;
    ll cpp = 0;
    ll it = 0;
    for (int i = 0; i < s.length(); i++)
    {
      map<char, int> m; // lollipops -> abracadabra ---> abr 3 ---abra--- abra
      string ns;
      for (int j = i; j < s.length(); j++)
      {
        if (m[s[j]] == 0)
        {
          c++;
          m[s[j]]++;
        }
        if (c == 3)
        {
          if (m[s[j + 1]] == 0)
          {
            cpp++;
            c = 0;
            i = j;
            break;
          }
        }
        else
        {
          i = j;
        }
      }
    }
    if (c > 0)
      c = 1;
    cout << c + cpp << "\n";
  }
  void solve9()
  {
    // https://codeforces.com/contest/1702/problem/D
    string s, ns = "", op;
    ll n, c = 0, news = 0;
    cin >> s >> n;
    ll nn = n;
    string temp = s;
    map<char, ll> m;
    sort(s.begin(), s.end());
    for (int j = 0; j < s.length(); j++)
    {
      if ((s[j] - 'a' + 1) <= n)
      {
        ns += s[j];
        n -= (s[j] - 'a' + 1);
      }
    }
    for (int i = 0; i < ns.length(); i++)
      m[ns[i]]++;
    for (int i = 0; i < temp.length(); i++)
    {
      if (m[temp[i]] > 0)
      {
        op += temp[i];
        m[temp[i]] -= 1;
        c++;
      }
      if (c == ns.length())
        break;
    }
    cout << op << "\n";
  }
  void solve10()
  {
    // https://codeforces.com/contest/1702/problem/C
    ll n, q;
    cin >> n >> q;
    // vector<ll>stations(n+1);
    // vector<pair<ll,ll>>queries(q+1);
    int last = n - 1;
    map<ll, ll> m;
    map<ll, ll> m2;
    map<ll, ll> l;
    for (int i = 1; i <= n; i++)
    {
      ll x;
      cin >> x;
      m2[x]++;
      if (m2[x] == 1)
        m[x] = i;
      l[x] = i;
    }
    for (int i = 1; i <= q; i++)
    {
      ll a, b;
      cin >> a >> b;

      if (l[b] && m[a] && m[a] < l[b])
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
  void solve11()
  {
    ll n;
    cin >> n;
    string op = "";
    ll t = 0;
    string s;
    cin >> s;
    map<string, ll> m;
    for (int i = 1; i < n; i++)
    {
      string temp;
      temp += s[i - 1];
      temp += s[i];
      m[temp]++;
      if (t < m[temp])
      {
        t = m[temp];
        op = temp;
      }
      temp = "";
    }
    cout << op << "\n";
  }
  void solve12(){
    // https://codeforces.com/contest/1859/problem/A
    ll n;
    cin >> n;
    vector<ll>v(n);
    ll mx = 0;
    bool f = false;
    vector<ll>b,c;
    for(int i = 0 ; i < n; i++) {
      cin >> v[i];
      mx = max(mx , v[i]);
    }
    for(int i = 0 ; i < n; i++){
     if(v[i] == mx) c.pb(v[i]);
     else b.pb(v[i]);
    }
    if(b.size()==0 || c.size() == 0){
      cout << -1 << "\n";
      return;
    }
    cout << b.size() << " " << c.size() << "\n";
    for(auto i : b) cout << i << " ";
    cout << "\n";
    for(auto i : c) cout << i << " ";
    cout << "\n";
  }
  void solve13(){
    //https://codeforces.com/contest/1859/problem/B
    ll n;
    cin >> n;
    ll s;
    ll op = 0;
    ll mn = 1e10;
    ll mx = 0;
    ll f = 0;
    ll sum = 0;
    ll temp = 0;
    vector<vector<ll>>v(n);
    for(int i = 0 ; i < n ; i++){
      cin >> s;
      for(int j = 0 ; j < s ; j++){
        int num;
        cin >> num; 
        v[i].pb(num);
        if(mn > num){
          mn = num;
          temp = i;
          sum = num;
        }
      } 
    }
    for(int i = 0 ; i < n ; i++){
      sort(v[i].begin() ,v[i].end());
      sum+= v[i][1];
     }
    for(int i = 0 ; i < n ; i++){
      op= max(op , sum - v[i][1]);
    }
    cout << op << "\n";
    }
    bool check(vector<ll>v , ll k){
      for(int i = 0; i < v.size(); i++){
        if(v[i] - k >0) return false;
      }
      return true;
    }
    // void solve13(){
    //   // https://codeforces.com/contest/1352/problem/C
    //   ll n, k;
    //   ll op = 0;
    //   cin >> n >> k;
    //   cout << k+(k-1)/(n-1)<< "\n";
    // }
    // void solve14(){
    //   ll n;
    //   cin >> n;
    //   vector<ll>v(n);
    //   for(int i = 0; i < n; i++) cin >> v[i];
    //   sort(v.begin(), v.end());
    //   cout << v[n-1] - v[0] << "\n";
    //  }
    bool sameDif(ll a , ll b, ll c){
      int temp = b - a;
      if(temp == c-b)return true;
      return false;
    }
    void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll>v(n);
    ll idx = 0;
    for(int i = 0; i < n; i++) {
      cin >> v[i]; 
    }
    ll temp = v[k-1];
    if(k > n)
    {
      cout << 0 << "\n";
      return;
    }
    for(int i = 0; i < n; i++){
      if(v[i] >= temp && v[i] > 0) idx = i+1;
    }
    cout << idx << "\n";
    }
  int main()  
  { 
    fastIO
        cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
      solve();
  }
