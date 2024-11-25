using namespace std;
void task122_Rated_2_D()(){
    int n, k; cin >> n >> k;
    vector <int> bitCnt(n + 1), val(n + 1);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        int bit = log2(x);
        bitCnt[i + 1] = bit;
        x -= 1 << bit;
        while(x != 0){
            int maxBit = log2(x);
            bitCnt[i + 1]++;
            x -= 1 << maxBit;
        }
    }
    for(int i = 0; i < n; i++)
        cin >> val[i + 1];
    vector <vector <int> >dp(n + 1, vector <int> (k + 1, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            if (j >= bitCnt[i])
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - bitCnt[i]] + val[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][k];
}
void task122_Rated_2_D() {
    int n, k; cin >> n >> k;
    vector<int> c(n + 1), num(n + 1);
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        int f = log2(b);
        num[i + 1] += f;
        b -= (1 << f);
        while (b != 0) {
            int j = log2(b);
            num[i + 1]++;
            b -= (1 << j);
        }
    }
    for (int i = 0; i < n; ++i)
        cin >> c[i + 1];
    vector<vector<int>> dp(n + 1, vector<int>(k + 1));
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < k + 1; ++j) {
            if (j >= num[i])
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - num[i]] + c[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][k];
}

void task121_Rated_2_A() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> fs(30);
    for (int i = 0; i < n; ++i)
        fs[s[i] - 'a']++;
    for (int i = 0; i < 30; ++i)
        for (int j = 0; j < fs[i]; ++j)
            cout << (char)('a' + i);
}

void task121_Rated_2_B() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = n - 1, j = n - 2; j >= 0; --i, --j) {
        if (s[i] - '0' + s[j] - '0' > 10) {
            cout << s.substr(0, j) << s[i] + s[j] - '0' - '0' << s.substr(i + 1, n);
            return;
        }
    }
    cout << s[0] - '0' + s[1] - '0' << s.substr(2, n);
}

void task762_3_B() {
    int n; cin >> n;
    cout << ((int) cbrt(n)) + ((int) sqrt(n)) - ((int) sqrt(cbrt(n)));
}

void task762_3_C() {
    string a, s;
    cin >> a >> s;
    reverse(a.begin(), a.end());
    reverse(s.begin(), s.end());
    int sn = s.size(), an = a.size();
    string b;
    for (int i = 0, j = 0; i < an; ++i) {
        if (j < sn - 1 && s[j] < '9' && s[j + 1] == '1') {
            char c = (char) (10 - (a[i] - '0') + s[j]);
            if (c > '9')
                b += "01";
            else
                b += c;
            j++;
        } else
            b += (s[j] - a[i] + '0');
        j++;
    }
    reverse(b.begin(), b.end());
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] < '0' || b[i] > '9') {
            cout << -1;
            return;
        }
    }
    int i = 0;
    for (i; i < b.size(); ++i)
        if (b[i] != '0')
            break;
    cout << b.substr(i, b.size());
}

void taskHello2022_A() {
    int n, k;
    cin >> n >> k;
    if (k > (n + 1) / 2) {
        cout << -1 << '\n';
        return;
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i % 2 == 0 && j == i && count < k) {
                cout << 'R';
                count++;
            } else
                cout << '.';
        }
        cout << '\n';
    }
}

void taskHello2022_B() {
    int n;
    cin >> n;
    int mn = 1e9 + 2, mx = 0, cn = 0, forl = 0, forr = 0, ln = 0;
    for (int i = 0; i < n; ++i) {
        int l, r, c;
        cin >> l >> r >> c;
        if (l < mn)
            mn = l, forl = c;
        else if (l == mn && c < forl)
            forl = c;

        if (r > mx)
            mx = r, forr = c;
        else if (r == mx && c < forr)
            forr = c;

        if (ln < r - l + 1)
            ln = r - l + 1, cn = c;
        else if (ln == r - l + 1 && c < cn)
            cn = c;

        int best_now = forl + forr;
        if (ln == mx - mn + 1 && cn < best_now)
            best_now = cn;
        cout << best_now << '\n';
    }
}

void taskGoodBye2021_A() {
    int n; cin >> n;
    vector<int> a(101);
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        if (b < 0)
            b = -b;
        a[b]++;
    }
    int count = 0;
    for (int i = 0; i < 101; ++i) {
        if (a[i] >= 2 && i != 0)
            count += 2;
        else if (a[i])
            count++;
    }
    cout << count;
}

void task770_2_C() {
    int n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << "YES" << '\n';
        for (int i = 1; i < n + 1; ++i)
            cout << i << '\n';
        return;
    } else {
        if (n * k % 2 == 1) {
            cout << "NO\n";
            return;
        }
        set<int> no, yes;
        for (int i = 1; i < n * k + 1; ++i) {
            if (i % 2 == 0)
                yes.insert(i);
            else
                no.insert(i);
        }
        auto forNo = no.begin(), forYes = yes.begin();
        if (no.size() % k != 0 || yes.size() % k != 0) {
            cout << "NO" << '\n';
            return;
        }
        cout << "YES" << '\n';
        for (int i = 0; i < no.size() / k; ++i) {
            for (int j = 0; j < k; ++j) {
                cout << *forNo << ' ';
                forNo++;
            }
            cout << '\n';
        }
        for (int i = 0; i < yes.size() / k; ++i) {
            for (int j = 0; j < k; ++j) {
                cout << *forYes << ' ';
                forYes++;
            }
            cout << '\n';
        }
    }
}

void task770_2_E() {
    int m;
    cin >> m;
    map<int, int> L, R;
    string ans;
    for (int i = 0; i < m; ++i) {
        int n;
        cin >> n;
        int countL = 0, countR = 0;
        for (int j = 0; j < n; ++j) {
            int a; cin >> a;
            if (!L.count(a))
                L[a] = 0;
            if (!R.count(a))
                R[a] = 0;
            if (countL == n / 2) {
                R[a]++;
                countR++;
                ans += 'R';
                continue;
            }
            if (countR == n / 2) {
                L[a]++;
                countL++;
                ans += 'L';
                continue;
            }
            if (L[a] < R[a]) {
                L[a]++;
                countL++;
                ans += 'L';
            } else {
                R[a]++;
                countR++;
                ans += 'R';
            }
        }
        ans += '\n';
    }
    for (auto i : L) {
        if (R[i.first] != i.second) {
            cout << "NO";
            return;
        }
    }
    cout << "YES\n" << ans;
}

void task764_3_C() {
    int n; cin >> n;
    vector<int> a(n);
    vector<bool> u(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        while (a[i] > n || (a[i] <= n && u[a[i]]))
            a[i] /= 2;
        if (a[i] == 0) {
            cout << "NO";
            return;
        }
        u[a[i]] = true;
    }
    cout << "YES";
}

void task764_3_D() {
    int n, k;
    cin >> n >> k;
    vector<int> count(26);
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        ++count[c - 'a'];
    }
    int p = 0, no = 0;
    for (int i = 0; i < 26; ++i) {
        p += count[i] / 2;
        no += count[i] % 2;
    }
    int cl = 2 * (p / k);
    no += 2 * (p % k);
    cl += (no / k) >= 1;
    cout << cl;
}
void task20C() {
    int n, m;
    cin >> n >> m;
    V<VPii> graph(n + 1, VPii(n + 1));
    forn (k, m, 0) {
        int i, j, w;
        cin >> i >> j >> w;
        graph[i][j].fi = w;
        graph[i][j].se = j;
        graph[j][i].fi = w;
        graph[j][i].se = i;
    }
    Vll dist(n + 1, 1e18);
    Vi p(n + 1);
    dist[1] = 0;
    p[1] = 1;
    priority_queue<Pii, VPii, greater<Pii>> q;
    q.push(mp(0, 1));
    while (!q.empty()) {
        Pii u = q.top();
        q.pop();
        if (u.fi > dist[u.se]) continue;
        forn(i, n + 1, 1) {
            int v = graph[u.se][i].se, len = graph[u.se][i].fi;
            if (dist[v] > dist[u.se] + len) {
                p[v] = u.se;
                dist[v] = dist[u.se] + len;
                q.push(mp(dist[v], v));
            }
        }
    }
    if (dist[n] == 1e18) cout << -1;
    else {
        int i = n;
        string c;
        while (i != 1) {
            string pl = to_string(i);
            reverse(pl.begin(), pl.end());
            c += pl + " ";
            i = p[i];
        }
        cout << 1;
        for (int i = (int) c.size() - 1; i > -1; i--)
            cout << c[i];
    }
}

void task_Educ119_2_A() {
    string s;
    cin >> s;
    int count = 0;
    for (char i : s)
        if (i == 'E')
            count++;
    if (count == s.size() - 1)
        cout << "NO";
    else
        cout << "YES";
}

void task_Educ119_2_B() {
    ll w, h, ans = 0;
    cin >> w >> h;
    for (int j = 0; j < 4; ++j) {
        ll k; cin >> k;
        vector<int> points(k);
        for (int i = 0; i < k; ++i)
            cin >> points[i];
        if (j < 2)
            ans = max(ans, (points[k - 1] - points[0]) * h);
        else
            ans = max(ans, (points[k - 1] - points[0]) * w);
    }
    cout << ans;
}

void task_Educ119_2_C() {
    ll n, k, x;
    cin >> n >> k >> x;
    string s;
    cin >> s;
    vector<ll> count;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '*') {
            count.push_back(0);
            while (i < n - 1 && s[i + 1] == '*')
                i++, count[count.size() - 1]++;
        }
    }
    // think about it
}

void task763_2_A() {
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    vector<int> p;
    if (cd >= cb)
        p.push_back(cd - cb);
    if (rd >= rb)
        p.push_back(rd - rb);
    if (cd <= cb)
        p.push_back(2 * m - cd - cb);
    if (rd <= rb)
        p.push_back(2 * n - rd - rb);
    int Min = 1e9;
    for (int i = 0; i < p.size(); ++i)
        if (p[i] < Min)
            Min = p[i];
    cout << Min;
}

void taskEduc120_2_A() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || a + c == b || b + c == a || (a == b && c % 2 == 0) || (a == c && b % 2 == 0) || (b == c && a % 2 == 0))
        cout << "YES";
    else
        cout << "NO";
}

void task760_3_A() {
    int a[7];
    for (int i = 0; i < 7; ++i)
        cin >> a[i];
    cout << a[0] << ' ' << a[1] << ' ' << a[6] - a[1] - a[0];
}

void task760_3_B() {
    int n;
    cin >> n;
    string ans, last;
    bool flg = false;
    for (int i = 0; i < n - 2; ++i) {
        string nw;
        cin >> nw;
        if (i == 0 || flg || nw[0] == last[1]) {
            ans += nw[0];
            last = nw;
        } else {
            flg = true;
            ans += last[1];
            ans += nw[0];
        }
        if (i == n - 3)
            ans += nw[1];
    }
    if (!flg)
        ans += 'a';
    cout << ans;
}

void task766_2_A() {
    int n, m, r, c, count = 0;
    cin >> n >> m >> r >> c;
    --r, --c;
    bool flg = false, flg1 = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char k; cin >> k;
            if (flg)
                continue;
            count += (k == 'B');
            if (i == r && j == c && k =='B') {
                cout << 0;
                flg = true;
            } else if ((i == r || j == c) && k == 'B') {
                flg1 = true;
            }
        }
    }
    if (count == 0) {
        cout << -1;
        return;
    }
    if (flg1 && !flg)
        cout << 1;
    else if (!flg)
        cout << 2;
}

void task766_2_B() {
    int n, m;
    cin >> n >> m;
    vector<int> p;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            p.push_back(max(max(i + j, i + m - j - 1), max(j + n - i - 1, m - 1 - j + n - 1 - i)));
    sort(p.begin(), p.end());
    for (int i = 0; i < n * m; ++i)
        cout << p[i] << ' ';
}

void taskGlobal18_A() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        count += a;
    }
    cout << (count % n + n - 1) / n;
}

void task756_3_A() {
    string n; cin >> n;
    if ((n[n.length() - 1] - '0') % 2 == 0) {
        cout << 0;
        return;
    }
    if ((n[0] - '0') % 2 == 0) {
        cout << 1;
        return;
    }
    for (int i = 0; i < n.length(); ++i) {
        if ((n[i] - '0') % 2 == 0) {
            cout << 2;
            return;
        }
    }
    cout << -1;
}

void task756_3_B() {
    ll a, b;
    cin >> a >> b;
    cout << min(min(a, b), (a + b) / 4);
}

void task757_2_A() {
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<int> c(n);
    for (int i = 0; i < n; ++i)
        cin >> c[i];
    sort(c.begin(), c.end());
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (c[i] < l)
            continue;
        if (c[i] > r)
            break;
        if (k >= c[i]) {
            k -= c[i];
            count++;
        } else
            break;
    }
    cout << count;
}

void task757_2_B() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> h;
    for (ll i = 0; i < n; ++i) {
        int num; cin >> num;
        h.push_back(make_pair(num, i));
    }
    sort(h.begin(), h.end());
    reverse(h.begin(), h.end());
    ll now = 1, minus = 1;
    vector<ll> a(n), k(n);
    for (ll i = 0; i < n; ++i)
        a[h[i].second] = i;
    ll count = 0;
    for (auto i : h) {
        k[i.second] = minus * now;
        count += 2 * abs(now) * i.first;
        minus = -minus;
        if (minus == 1)
            now++;
    }
    cout << count << "\n0 ";
    for (ll i = 0; i < n; ++i) {
        cout << k[i] << ' ';
    }
}

void task756_3_C() {
    int n; cin >> n;
    vector<int> p(n);
    deque<int> ans;
    int l = 0, r = n - 1;
    for (int i = 0; i < n; ++i)
        cin >> p[i];
    if (n == 1) {
        cout << 1;
        return;
    }
    if (p[r] != n && p[0] != n) {
        cout << -1;
        return;
    }
    if (p[r] == n)
        --r;
    else
        ++l;
    ans.push_back(n);
    while (r != l) {
        if (min(p[l], p[r]) == p[l]) {
            ans.push_back(p[r]);
            --r;
        } else {
            ans.push_front(p[l]);
            ++l;
        }
    }
    ans.push_front(p[l]);
    for (int i : ans)
        cout << i << ' ';
}

void taskEduc118_Rated_2_A() {
    int x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    int l1 = log10(x1), l2 = log10(x2);
    if (l1 + p1 < l2 + p2) {
        cout << '<';
        return;
    } else if (l1 + p1 > l2 + p2) {
        cout << '>';
        return;
    }
    if (l1 == l2) {
        if (x1 < x2)
            cout << '<';
        else if (x1 > x2)
            cout << '>';
        else
            cout << '=';
        return;
    }
    bool swapped = false;
    if (l1 > l2) {
        swap(x1, x2);
        swap(l1, l2);
        swap(p1, p2);
        swapped = true;
    }
    int new1 = x1 * pow(10, l2 - l1);
    if (new1 < x2) {
        if (swapped)
            cout << '>';
        else
            cout << '<';
    } else if (new1 > x2) {
        if (swapped)
            cout << '<';
        else
            cout << '>';
    } else
        cout << '=';
}

void taskEduc118_Rated_2_B() {
    int n, mn = 1e6 + 7;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < mn)
            mn = a[i];
    }
    int count = 0;
    for (int i = 0; i < n && count < n / 2; ++i) {
        if (a[i] == mn)
            continue;
        cout << a[i] << ' ' << mn << '\n';
        count++;
    }
}

bool can(ll m, ll n, ll h, vector<int> &d) {
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        if (i == n - 1 || d[i] + m < d[i + 1])
            count += m;
        else
            count += d[i + 1] - d[i];
    }
    if (count >= h)
        return true;
    return false;
}

void taskEduc118_Rated_2_C() {
    ll n, h;
    cin >> n >> h;
    vector<int> d(n);
    for (int i = 0; i < n; ++i)
        cin >> d[i];
    ll l = 0, r = 1e18 + 4;
    while (r - l > 1) {
        ll k = (r + l) / 2;
        if (can(k, n, h, d))
            r = k;
        else
            l = k;
    }
    cout << r;
}

void taskEduc118_Rated_2_D() {
    int n; cin >> n;
    vector<int> a(n), dp(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {

    }
}

void taskGlobal19_A() {
    int n; cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
        cin >> p[i];
    for (int i = 0; i < n - 1; ++i) {
        if (*max_element(p.begin(), p.begin() + i + 1) > *min_element(p.begin() + i + 1, p.end())) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

void taskGlobal19_B() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        int last_zero_count = 0;
        for (int j = i; j < n; ++j) {
            int zero_count = last_zero_count + (a[j] == 0);
            count += j - i + 1 + zero_count;
            last_zero_count = zero_count;
        }
    }
    cout << count;
}

void taskGlobal19_C() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll count = 0, count_m = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        if (i != 0 && i != n - 1) {
            count_m += (a[i] + 1) / 2;
            count += a[i];
        }
    }
    if (count % 2 == 1) {
        if (n == 3) {
            cout << -1;
            return;
        }
    }
    if (count <= n - 2) {
        cout << -1;
        return;
    }
    cout << count_m;
}

void taskGlobal19_E() {
    int n, m;
    cin >> n >> m;
    map<int, int> count;
    multiset<int> a;
    for (int i = 0; i < n; ++i) {
        int k;
        if (count.count(k) == 0)
            count[k] = 1;
        else
            ++count[k];
        a.insert(k);
    }
    set<pair<int, int>> bad;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        bad.insert(make_pair(x, y));
        bad.insert(make_pair(y, x));
    }
    set<pair<int, int>> count_set;
    for (auto i : count)
        count_set.insert(make_pair(i.second, i.first));
    auto end1 = a.end();
    --end1;
    ll mx;
    while (end1 != a.begin()) {
        auto end2 = count_set.end();
        --end2;
        bool flg = false;
        while (end2 != count_set.begin()) {
            if (*end1 != (*end2).second && bad.count(make_pair(*end1, (*end2).second)) == 0) {
                mx = (count[*end1] + (*end2).first) * (*end1 + (*end2).second);
                flg = true;
                break;
            }
            --end2;
        }
        if (flg)
            break;
        --end1;
    }
    auto end2 = a.end();
    --end2;
    while (end2 != a.begin()) {
        auto end1 = count_set.end();
        --end1;
        bool flg = false;
        while (end1 != count_set.begin()) {
            if (*end2 != (*end1).second && bad.count(make_pair(*end2, (*end1).second)) == 0) {
                if (mx < (count[*end2] + (*end1).first) * (*end2 + (*end1).second))
                    mx = (count[*end2] + (*end1).first) * (*end2 + (*end1).second);
                flg = true;
                break;
            }
            --end1;
        }
        --end2;
        if (flg)
            break;
    }
    cout << mx;
}

void task761_2_A() {
    string s, t;
    cin >> s >> t;
    map<int, int> count;
    set<char> sym;
    for (int i = 'a'; i < 'z' + 1; ++i) {
        count[i] = 0;
    }
    for (auto i : s) {
        ++count[i];
        sym.insert(i);
    }
    if (t[0] != 'a' || t == "acb" || count['a'] == 0 || count['b'] == 0 || count['c'] == 0) {
        for (char i : sym) {
            for (int j = 0; j < count[i]; ++j) {
                cout << i;
            }
        }
    } else if (t == "abc") {
        for (char i : sym) {
            if (i == 'b') {
                for (int j = 0; j < count['c']; ++j)
                    cout << 'c';
            } else if (i == 'c') {
                if (count['b'])
                    continue;
                else
                    for (int j = 0; j < count['c']; ++j)
                        cout << 'c';
            }
            for (int j = 0; j < count[i]; ++j)
                cout << i;
        }
    }
}

void task761_2_B() {
    int n; cin >> n;
    if (n % 2 == 0)
        cout << n - 3 << ' ' << "2 1";
    else if (n % 4 == 1)
        cout << n / 2 - 1 << ' ' << n / 2 + 1 << " 1";
    else
        cout << n / 2 - 2 << ' ' << n / 2 + 2 << " 1";
}

void task761_2_C() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());

}

void task753_3_A() {
    map<char, int> keyboard;
    for (int i = 0; i < 26; ++i) {
        char key;
        cin >> key;
        keyboard[key] = i;
    }
    string s;
    cin >> s;
    int n = s.length();
    int now = -1, time = 0;
    for (int i = 0; i < n; ++i) {
        if (now != -1)
            time += abs(now - keyboard[s[i]]);
        now = keyboard[s[i]];
    }
    cout << time;
}

void task771_2_A() {
    int n; cin >> n;
    vector<int> p(n);
    int first = 1, lg = -2;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        if (first == i + 1 && p[i] == i + 1)
            ++first;
        else if (lg == -2)
            lg = i - 1;
    }
    for (int i = lg + 1; i < n; ++i) {
        if (p[i] == first) {
            reverse(p.begin() + lg + 1, p.begin() + i + 1);
            break;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << p[i] << ' ';
    }
}

void task771_2_B() {
    int n; cin >> n;
    vector<int> ne1(n), ne2(n), da1(n), da2(n);
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a % 2 == 0) {
            da1.push_back(a);
            da2.push_back(a);
        } else {
            ne1.push_back(a);
            ne2.push_back(a);
        }
    }
    sort(ne1.begin(), ne1.end());
    sort(da1.begin(), da1.end());
    if (ne1 == ne2 && da1 == da2)
        cout << "Yes";
    else
        cout << "No";
}

void task771_2_C() {
    int n;
    cin >> n;
    vector<int> p(n);
    int count = 0;
    set<pair<int, int>> mxs;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        mxs.insert(make_pair(p[i], i));
    }
    auto maxIt = mxs.end();
    --maxIt;
    int idx = -1, mn_last = n + 1, idx_min = n;
    for (int i = n - 1; i >= (*maxIt).second; --i)
        if (p[i] <= mn_last)
            mn_last = p[i];
    bool first = true;
    while ((*maxIt).second != 0) {
        idx = (*maxIt).second;
        if (first)
            ++count;
        while (maxIt != mxs.begin() && (*maxIt).second >= idx) {
            --maxIt;
        }
        if ((*maxIt).first <= mn_last)
            ++count;
        for (int i = idx_min - 1; i > (*maxIt).second; --i) {
            if (p[i] <= mn_last) {
                mn_last = p[i];
                idx_min = i;
            }
        }
        first = false;
    }
    cout << max(count, 1);
}

void task771_2_E() {
    int n, q;
    cin >> n >> q;
    int bad = sqrt(n);
    vector<int> a(n), color(n), will_do_clr, will_do_cnt;
    for (int i = 0; i < q; ++i) {
        string s; cin >> s;
        if (s == "Color") {
            int l, r, c;
            cin >> l >> r >> c;
//            will_do_clr.push_back()
        } else if (s == "Add") {

        } else {
            cout << ' ';
        }
    }
}

void task748_3_A() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(b, c) + 1 - a, 0) << ' ' << max(max(a, c) + 1 - b, 0) << ' ' << max(max(a, b) + 1 - c, 0);
}

void task748_3_B() {
    string n; cin >> n;
    int mn = 19;
    if (stoll(n) % 25 == 0) {
        cout << 0;
        return;
    }
    for (int i = 0; i < (int) n.length(); ++i) {
        if ((n[i] - '0') % 5 != 0)
            continue;
        for (int j = 0; j < i; ++j) {
            int dif = (int) n.length() - j - 2;
            if (((n[j] - '0') * 10 + n[i] - '0') % 25 == 0 && (((n[j] - '0') * 10 + n[i] - '0') != 0 || dif != n.length() - 2))
                if (dif < mn)
                    mn = dif;
        }
    }
    cout << mn;
}

bool will_live(int m, int n, int k, vector<int> &pref) {
    return pref[k - m] < n;
}

void task748_3_C() {
    int n, k; cin >> n >> k;
    vector<int> x(k), pref(k + 1);
    for (int i = 0; i < k; ++i)
        cin >> x[i];
    sort(x.begin(), x.end());
    pref[k] = 0;
    for (int i = k - 1; i >= 0; --i)
        pref[i] = n - x[i] + pref[i + 1];
    int l = 0, r = k + 2;
    while (r - l > 1) {
        int m = (r + l) / 2;
        if (will_live(m, n, k, pref))
            l = m;
        else
            r = m;
    }
    cout << l;
}

void taskGlobal17_A() {
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
        cout << 0;
    else if (min(n, m) == 1)
        cout << 1;
    else
        cout << 2;
}

//bool can_invite(int m, int n, vector<pair<int, int>> &f) {
//
//}

void taskGlobal17_C() {
     int n;
     cin >> n;
     vector<pair<int, int>> f(n);
     for (int i = 0; i < n; ++i)
         cin >> f[i].first >> f[i].second;
     int l = 0, r = n + 1;
//     while (r - l > 1) {
//         if ()
//     }
}

void task759_2_B() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[n - i - 1];
    int mx = a[0], count = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] > mx) {
            ++count;
            mx = a[i];
        }
    }
    cout << count;
}

int calcR(int k, int n, multiset<int> &x) {
    int count = 0, last = 0, now = 0;
    for (int i : x) {
        ++now;
        count += abs(i - last);
        last = i;
        if (now == k) {
            last = 0;
            now = 0;
            count += abs(i);
        }
    }
    if (now != 0) {
        auto itEnd = x.end();
        count += *(--itEnd);
    }
    return count;
}

void task759_2_C() {
    int n, k, mx = 0;
    cin >> n >> k;
    multiset<int> l, r;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (abs(a) > mx)
            mx = abs(a);
        if (a < 0)
            l.insert(abs(a));
        else
            r.insert(a);
    }
    cout << calcR(k, n, r) + calcR(k, n, l) - mx;
}

void task758_1_2_A() {
    int n; cin >> n;
    for (int i = 2; i <= n + 1; ++i)
        cout << i << ' ';
}

void taskDeltixAutumn2021_A() {
    int n;
    cin >> n;
    ll count = 0, maxEnd = 0, sumEnd = 0;
    for (int i = 0; i < n; ++i) {
        ll k; cin >> k;
        while (!(k & 1)) {
            k /= 2;
            ++count;
        }
        if (k > maxEnd)
            maxEnd = k;
        sumEnd += k;
    }
    cout << fixed << setprecision(0) << maxEnd * pow(2, count) + sumEnd - maxEnd;
}

void task117EducRated_2_A() {
    unsigned int x, y;
    cin >> x >> y;
    if (!((x + y) & 1)) {
        if (x >= y)
            cout << (x + y) / 2 - min(x, y) << ' ' << min(x, y);
        else
            cout << min(x, y) << ' ' << (x + y) / 2 - min(x, y);
    } else
        cout << "-1 -1";
}

void task117EducRated_2_B() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a > n / 2 + 1 || b < n / 2 || (b > n / 2 && a > n / 2) || (b <= n / 2 && a <= n / 2)) {
        cout << -1;
        return;
    }
    for (int i = b + 1; i <= n; ++i) {
        cout << i << ' ';
    }
    int cur = a;
    for (int i = 0; i < n / 2 - (n - b); ++i) {
        cout << cur << ' ';
        ++cur;
    }
    for (int i = cur; i <= b; ++i)
        cout << i << ' ';
    for (int i = 1; i < a; ++i)
        cout << i << ' ';
}

bool can_send(ll m, ll k, ll x) {
    ll count = 0;
    if (m <= k) {
        count = (m + 1) * m / 2;
        if (count - m < x)
            return true;
    } else {
        count = (k + 1) * k / 2 + (m - k) * (k - 1 + k - (m - k)) / 2;
        if (count - (k - (m - k)) < x)
            return true;
    }
    return false;
}

void task117EducRated_2_C() {
    ll k, x;
    cin >> k >> x;
    ll l = 0, r = 2 * k;
    while (r - l > 1) {
        ll m = (r + l) / 2;
        if (can_send(m, k, x))
            l = m;
        else
            r = m;
    }
    cout << l;
}

void task755_1_A() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] + 1 < b[i] || a[i] > b[i]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

void task755_2_A() {
    ll x, y;
    cin >> x >> y;
    cout << -(x * x) << ' ' << y * y;
}

void task755_2_B() {
    int n, m;
    cin >> n >> m;
    cout << (n * m + 2) / 3;
}

void task754_2_A() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (((a1 + a3) - (2 * a2)) % 3 == 0)
        cout << 0;
    else
        cout << 1;
}

void task754_2_B() {
    int n; cin >> n;
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    int first = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1')
            ++cnt1;
        else
            ++cnt0;
    }
    vector<int> ans;
    for (int i = 0; i < n; ++i)
        if ((s[i] == '1' && i < cnt0) || (s[i] == '0' && i >= cnt0))
            ans.push_back(i + 1);
    if (!ans.empty())
        cout << "1\n";
    cout << ans.size();
    for (int i : ans)
        cout << ' ' << i;
}

void task754_2_C() {
    int n; cin >> n;
    string s;
    cin >> s;
    int beforeLast = -1, last = -1, now = -1, mn = 1e6 + 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a')
            beforeLast = last, last = now, now = i;
        else
            continue;
        if (last == -1)
            continue;
        if (beforeLast != -1 && now - beforeLast + 1 == 7) {
            int cntA = 0, cntB = 0, cntC = 0;
            for (int j = beforeLast; j <= now; ++j)
                cntA += (s[j] == 'a'), cntB += (s[j] == 'b'), cntC += (s[j] == 'c');
            if (cntA > cntB && cntA > cntC)
                if (7 < mn)
                    mn = 7;
        }
        if (now - last - 1 > 2)
            continue;
        if (now - last - 1 < 2 || (now - last - 1 == 2 && ((s[now - 1] == 'c' && s[now - 2] == 'b') || (s[now - 1] == 'b' && s[now - 2] == 'c'))))
            if (now - last + 1 < mn)
                mn = now - last + 1;
    }
    if (mn == 1e6 + 1)
        cout << -1;
    else
        cout << mn;
}

void task753_3_B() {
    ll x, n;
    cin >> x >> n;
    ll d;
    if (n % 4 == 1)
        d = -n;
    else if (n % 4 == 2)
        d = 1;
    else if (n % 4 == 3)
        d = n + 1;
    else
        d = 0;
    if (x % 2)
        cout << x - d;
    else
        cout << x + d;
}

void task753_3_C() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    ll count = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] - count <= 0 || a[i + 1] - a[i] >= a[i])
            count += (a[i] - count);
        else {
            cout << a[i] - count;
            return;
        }
    }
    cout << a[n - 1] - count;
}

void task753_3_D() {
    int n;
    cin >> n;
    vector<pair<int, char>> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i].first;
    for (int i = 0; i < n; ++i)
        cin >> a[i].second;
    for (int i = 0; i < n; ++i)
        b[i] = i + 1;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if ((a[i].second == 'R' && a[i].first > b[i]) || (a[i].second == 'B' && a[i].first < b[i])) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

void task772_2_A() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (i != j)
                    a[i] -= (a[i] & a[j]);
    ll count = 0;
    for (int i = 0; i < n; ++i)
        count += a[i];
    cout << count;
}

void task772_2_B() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] > a[i + 1] && a[i] > a[i - 1]) {
            if (i < n - 2)
                a[i + 1] = max(a[i + 2], a[i]);
            else
                a[i + 1] = a[i];
            ++count;
        }
    }
    cout << count << '\n';
    for (int i = 0; i < n; ++i)
        cout << a[i] << ' ';
}

void task772_2_C() {
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (a[n - 2] > a[n - 1]) {
        cout << -1 << '\n';
        return;
    }
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] - a[i + 1] <= a[i]) {
            cout << i << '\n';
            for (int j = 0; j < i; ++j)
                cout << j + 1 << ' ' << i + 1 << ' ' << i + 1 + 1<< '\n';
            return;
        } else if (a[i] > a[i + 1]) {
            cout << -1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

void task772_2_D() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n), used2(1e9 + 1), used4(1e9 + 1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (used2[a[i]])
            continue;

    }
}

void task752_2_A() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a - i - 1 - count > 0)
            count += (a - i - 1 - count);
    }
    cout << count;
}

void task726_2_A() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        sum += a;
    }
    if (sum == n)
        cout << 0;
    else if (sum < n)
        cout << 1;
    else
        cout << sum - n;
}

void task726_2_C() {
    int n;
    cin >> n;
    vector<int> h(n);
    unordered_set<int> help;
    set<int> more;
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        if (help.count(h[i]))
            more.insert(h[i]);
        help.insert(h[i]);
    }
    sort(h.begin(), h.end());
    if (!more.empty()) {
        h.erase(find(h.begin(), h.end(), *(more.begin())));
        h.erase(find(h.begin(), h.end(), *(more.begin())));
        cout << *(more.begin()) << ' ';
        for (int i : h)
            cout << i << ' ';
        cout << *(more.begin()) << ' ';
    } else {
        cout << h[0] << ' ';
        for (int i = 2; i < n; ++i)
            cout << h[i] << ' ';
        cout << h[1];
    }
}

void taskEducRated112_2_A() {
    ll n; cin >> n;
    cout << max(6LL, n + 1) / 2 * 5;
}

void taskGoodBye2021_B() {
    int n; cin >> n;
    string s, ans, help;
    cin >> s;
    int i = 0;
    do {
        ans += s[i];
        ++i;
    } while (i < n && (i == 0 || s[i] < s[i - 1]));
    help = ans;
    reverse(help.begin(), help.end());
    cout << ans << help;
}

void taskEducRated123_2_A() {
    string s;
    cin >> s;
    set<char> here;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'r' || s[i] == 'b' || s[i] == 'g')
            here.insert(s[i]);
        if (s[i] == 'R' || s[i] == 'G' || s[i] == 'B') {
            if (s[i] == 'R') {
                if (!here.count('r')) {
                    cout << "NO";
                    return;
                }
            }
            if (s[i] == 'G') {
                if (!here.count('g')) {
                    cout << "NO";
                    return;
                }
            }
            if (s[i] == 'B') {
                if (!here.count('b')) {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    cout << "YES";
}

void taskEducRated123_2_B() {
    int n; cin >> n;
    deque<int> a(n);
    if (n != 3) {
        for (int i = 0; i < n; ++i) {
            if (i == 3)
                a[i] = i;
            else if (i != 2)
                a[i] = i + 1;
            else
                a[i] = i + 2;
        }
    } else {
        cout << "3 2 1\n1 3 2\n3 1 2";
        return;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << a[j] << ' ';
        cout << '\n';
        a.push_front(a[n - 1]);
        a.pop_back();
    }
}

void taskEducRated123_2_C() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    bool all_more = true;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < 0)
            all_more = false;
    }
    if (all_more) {
        int sum = 0;
        for (int i = 0; i < n; ++i)
            sum += a[i];
        for (int k = 0; k <= n; ++k)
            cout << sum + x * k << ' ';
        return;
    }
    vector<int> pref(n + 1), max_sums(n + 1, -(1e9));
    max_sums[0] = 0;
    for (int i = 1; i < n + 1; ++i)
        pref[i] = pref[i - 1] + a[i - 1];
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            max_sums[j - i + 1] = max(max_sums[j - i + 1], pref[j + 1] - pref[i]);
    for (int k = 0; k <= n; ++k) {
        int best = 0;
        for (int i = 0; i <= n; ++i)
            best = max(best, (max_sums[i] + min(i, k) * x));
        cout << best << ' ';
    }
}

void taskEducRated123_2_E() {
    int n; cin >> n;
    int i_pos = 1, j_pos = 1;
    string s;
    cin >> s;
    bool d_f = true;
    int count_o = 0;
    for (auto i : s) {
        i_pos += (i == 'D');
        j_pos += (i == 'R');
        if (i_pos == 1)
            d_f = false;
        if (min(i_pos, j_pos) == 1)
            count_o = max(i_pos, j_pos);
    }
    int can_r = n - j_pos, can_d = n - i_pos;
    if (i_pos == 1)
        can_d = 0;
    if (j_pos == 1)
        can_r = 0;
    vector<bool> vert(n + 1), gor(n + 1);
    i_pos = 1, j_pos = 1;
//    for (int i = 0; i < s.size(); ++i) {
//        if (s[i] == 'D');
//    }
}

void task773_2_C() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    map<ll, ll> cnt;
    for (ll i : a)
        cnt[i] = 0;
    for (ll i : a)
        ++cnt[i];
    if (x == 0) {
        ll count = 0;
        for (ll i : a)
            if (i == 0)
                ++count;
        if (count * 2 == n || (count * 2 > n && !(n & 1)))
            cout << 0;
        else
            cout << (n - count * 2);
        return;
    } else if (x == 1) {
        ll count = 0;
        for (auto i : cnt)
            if (i.second & 1)
                ++count;
        cout << count;
        return;
    }
    ll count = 0;
    for (auto i : cnt) {
        if (i.second == 0)
            continue;
        ll count_of_num = 0;
        if (cnt.count(i.first * x))
            count_of_num = cnt[i.first * x];
        if (count_of_num == i.second) {
            cnt[i.first] = 0;
            cnt[i.first * x] = 0;
        } else if (count_of_num < i.second) {
            count += i.second - count_of_num;
            cnt[i.first] = 0;
            cnt[i.first * x] = 0;
        } else {
            cnt[i.first] = 0;
            cnt[i.first * x] = count_of_num - i.second;
        }
    }
    cout << count;
}

void task773_2_A() {
    vector<pair<double, double>> p(3);
    for (int i = 0; i < 3; ++i)
        cin >> p[i].second >> p[i].first;
    sort(p.begin(), p.end());
    if (p[1].first == p[2].first)
        cout << fixed << setprecision(10) << abs(p[2].second - p[1].second);
    else
        cout << 0;
}

void task773_2_B() {
    int n; cin >> n;
    set<int> a;
    for (int i = 0; i < n; ++i) {
        int c; cin >> c;
        a.insert(c);
    }
    for (int i = 1; i <= n; ++i)
        cout << max(i, (int) a.size()) << ' ';
}

void taskEducRated116_A() {
    string s;
    cin >> s;
    if (s[0] == s[s.length() - 1])
        cout << s;
    else {
        s[0] = s[s.length() - 1];
        cout << s;
    }
}

void taskEducRated116_B() {
    ll k, n, cur = 1, acts = 0;
    cin >> n >> k;
    while (cur < k) {
        cur *= 2;
        ++acts;
    }
    if (cur < n)
        acts += (n - cur + k - 1) / k;
    cout << acts;
}

void taskEducRated116_C() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), can(n), pref(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i) {
        if (i == n - 1)
            can[i] = 1e18 + 1;
        else
            can[i] = pow(10, a[i + 1] - a[i]) - 1;
    }
    for (int i = 1; i < n + 1; ++i)
        pref[i] = pref[i - 1] + can[i - 1];
    for (int i = 1; i < n + 1; ++i) {
        if (pref[i] > k) {
            ll ans = 0;
            for (int j = 0; j < i - 1; ++j)
                ans += pow(10, a[j]) * can[j];
            ll num = pow(10, a[i - 1]) * min(can[i - 1], k - pref[i - 1] + 1);
            ans += num;
            cout << fixed << setprecision(0) << ans;
            return;
        }
    }
}

void task751_1_A() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << 1 << ' ';
            continue;
        }
    }
}

void task751_2_B() {
    string s;
    cin >> s;
    int n = s.size(), idx = 0;
    char mn = s[0];
    for (int i = 1; i < n; ++i) {
        if (s[i] <= mn) {
            idx = i;
            mn = s[i];
        }
    }
    s.erase(s.begin() + idx);
    cout << mn << ' ' << s;
}

void task750_2_C() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> a(26);
    for (int c = 'a'; c <= 'z'; ++c) {
        int l = 0, r = n - 1;
        while (r - l >= 1) {
            if (s[l] != s[r]) {
                if (s[l] == c) {
                    ++a[c - 'a'];
                    ++l;
                } else if (s[r] == c) {
                    ++a[c - 'a'];
                    --r;
                } else {
                    a[c - 'a'] = -1;
                    break;
                }
            } else
                ++l, --r;
        }
    }
    int mn = 1e9 + 1;
    for (auto i : a)
        if (i < mn && i != -1)
            mn = i;
    if (mn == 1e9 + 1)
        cout << -1;
    else
        cout << mn;
}

void task774_2_A() {
    ll n, s;
    cin >> n >> s;
    if (s < n * n || (n != 1 && s <= n * n)) {
        cout << 0;
        return;
    }
}

void task775_2_A() {
    int n, count = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int last = -3, first = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    cout << last - first + 2;
}

void task775_2_B() {
    ll n, mx = -1, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
        if (a >= mx)
            mx = a;
    }
    if (sum == 0) {
        cout << 0;
        return;
    }
    sum -= mx;
    cout << max(1LL, mx - sum);
}

void task775_2_D() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n), can(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
//    for (i)
}

//void task774_2_A() {
//    int n, s;
//    cin >> n >> s;
//    s -=
//}

void task732_2_A() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum1 += a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        sum2 += b[i];
    }
    string ans;
    int count = 0;
    if (sum1 != sum2) {
        cout << -1 << '\n';
        return;
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (a[i] < b[i]) {
                for (int j = 0; j < n; ++j) {
                    if (i == j)
                        continue;
                    while (a[j] > b[j] && a[i] < b[i]) {
                        ++a[i], --a[j];
                        ans += to_string(j + 1) + ' ' + to_string(i + 1) + '\n';
                        ++count;
                    }
                    if (a[i] == b[i])
                        break;
                }
            }
        }
    }
    cout << count << '\n' << ans;
}


void do_task() {
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

//    do_task();
//    task771_2_E();
//    task772_2_D();
    return 0;
}
/*
[8:30 pm, 19/01/2022] Pratik Suryawanshi: #include"bits/stdc++.h"
using namespace std;
void fastio() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define int ll
#define endl "\n"
 
signed main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        if(k==1){
            cout<<6<<endl;
            
        }
        else{
            ll x=3;
            for(ll i=0;i<k;i++){
                cout<<x<<" ";
                x+=2;
            }
        }
    }
    return 0;
}
[8:38 pm, 19/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
using namespace std;
 
#define ll          long long
#define vi          vector<int>
#define vll         vector<ll>
#define pll         pair<ll, ll>
#define pb          push_back
#define endl        '\n'
 
signed main(){
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    vll temp;
    for(int i = 0; i < 17; i++){
        for(int j = i+1; j < 18; j++){
            for(int k = j+1; k < 19; k++){
                for(int l = k+1; l < 20; l++){
                    ll val = (1<<l) + (1<<k) + (1<<j) + (1<<i);
                    temp.pb(val);
                }
                if(temp.size() == 1000){
                    break;
                }
            }
            if(temp.size…
[9:46 pm, 19/01/2022] Pratik Suryawanshi: 2C
 
#include <bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define endl        '\n'
 
 
signed main(){
 
 
 
    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {
 
        ll n;
        cin >> n;
 
        vector<int> arr;
        for(int i = 1; i <= n; i++){
            arr.pb(i);
        }
 
        if(n%2){
            cout << "YES" << endl;
            for(int i = 1; i <= (n/2); i++){
                cout << i << " ";
            }
            cout << n << " ";
            for(int i = n-1; i > (n/2); i--){
                cout << i << " ";
            }cout << endl;
        }else if(n != 2){
            cout << "YES" << endl;
            cout << (n/2) << " ";
            for(int i = 1; i < (n/2); i…
[7:59 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #e…
[8:00 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr);
    #en…
[8:01 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr);
    #en…
[8:02 pm, 21/01/2022] Pratik Suryawanshi: int main()
{
   // code here
   
   int t;
   cin >> t;
   while(t--)
   {
         int n,m;
    cin >> n>> m;
    int cnt=0;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }
    for(int j=0;j<m;j++)
    {
        cin >> arr2[j];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    
    for(int i=0, j=0; i<n && j<m;)
    {
        if(arr1[i] == arr2[j])
        {
            i++;
            j++;
            cnt++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
         j++;
        
    }
    if(cnt == (n/2) )
    {
        cout << "YES" << "\n";
    }
    else
    cout << "NO" << "\n";
   }
 
    return 0;
}
[8:07 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,char>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr);
    #…
[8:12 pm, 21/01/2022] Pratik Suryawanshi: #define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#define cube(x) ((x)(x)(x))
#define inf 1<<30
#define …
[8:14 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
#include<bits/stdc++.h>
using namespace std;
 
int n,m;
set<int> vacant_centres;
map<int,vector<int> > to_discharge;
 
void discharge_patients_untill_day(int day){
    …
[8:15 pm, 21/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
 
 
using namespace std;
 
 
#define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#…
[8:18 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #e…
[8:22 pm, 21/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
 
 
using namespace std;
 
 
#define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#…
[8:25 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #e…
[8:30 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
#include<bits/stdc++.h>
using namespace std;
 
int n,m;
set<int> vacant_centres;
map<int,vector<int> > to_discharge;
 
void discharge_patients_untill_day(int day){
    …
[8:34 pm, 21/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
 
 
using namespace std;
 
 
#define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#…
[8:47 pm, 21/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
 
 
using namespace std;
 
 
#define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#…
[8:16 pm, 22/01/2022] Pratik Suryawanshi: //CF_A_DIV_2
 
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
 
int main() {
  int t=0;
  cin>>t;
  for(int _ = 0; _<t; _++){
      ll n, k;
      vector<pair<ll ,ll>> r;
      cin>>n>>k;
      ll a[n] , b[n];
      for(ll i=0; i<n;i++){
          cin>>a[i];
      }
      for(ll i=0; i<n;i++){
          cin>>b[i];
      }
      for(ll i=0; i<n;i++){
          r.push_back(make_pair(a[i] , b[i]));
      }
      
      sort(r.begin() , r.end());
      
      for(ll i=0; i<n; i++){
          if(r[i].first <= k){
              k+= r[i].second;
          }
          else{
              break;
          }
      }
      cout<<k<<endl;
      
  }
  return 0;
}
[8:51 pm, 22/01/2022] Pratik Suryawanshi: ll countOdd(ll L, ll R) 
{ 
    ll N = (R - L) / 2; 
    if (R % 2 != 0 || L % 2 != 0) 
        N += 1; 
    return N; 
} 
void solve() 
{ 
    ll l, r, k; 
    cin >> l >> r >> k; 
 
    if (l == r && l != 1) 
    { 
        cout << "YES\n"; 
        return; 
    } 
 
    ll o = countOdd(l, r); 
 
    if (o > k) 
        cout << "NO" << nl; 
    else 
        cout << "YES" << nl; 
} 
int main() 
{ 
    int t = 1; 
    cin >> t; 
    while (t--) 
        solve(); 
    return 0; 
}
[9:16 pm, 22/01/2022] Pratik Suryawanshi: class Solution { 
public: 
    int minimumCost(vector<int>& v) { 
    int sum=0; 
  
        sort(v.rbegin(),v.rend()); 
     for(int i=0;i<=v.size()-1;i++) 
    {  
         sum=sum+v[i]; 
    } 
    for(int i=2;i<v.size();i=i+3) 
    { 
            sum=sum-v[i]; 
    } 
    return sum; 
 
 
         
    } 
};
[9:21 pm, 22/01/2022] Pratik Suryawanshi: int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long mini=INT_MAX;
        long long maxi=INT_MIN;
        int ans=0;
        long long s=0;
        for(auto i:differences)
        {
            s+=i;
            mini=min(s,mini);
            maxi=max(s,maxi);
        }
        for(long long i=lower;i<=upper;i++)
        {
            if(i+mini<lower or i+maxi>upper)
                continue;
            else
                ans++;
        }
        return 1LL*ans;
    }
[9:35 pm, 22/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
 
 
using namespace std;
typedef long long ll;
 
 
 
 
 
 struct TrieNode{
 
    
    / Returns if the word is in the trie. 
    bool search(string word) {
        TrieNode *p=&root;
        for (auto c:word){
            if (p->m.find(c)==p->m.end()) return false;
            p=p->m[c];
        }
        return p->isWord;
    }
    
    / Returns if there is any word in the trie that starts with the given prefix. 
    bool startsWith(string prefix) {
        TrieNode *p=&root;
        for (auto c:prefix){
            if (p->m.find(c)==p->m.end()) return false;
            p=p->m[c];
        }
        return true;
    }
    TrieNode root;
};
 
 
void solve() {
    // USE TRIE ONLY WHEN YOU KNOW HOW TO USE IT
    int n;
    cin>>n;
    vect…
[9:58 pm, 22/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
 
 
using namespace std;
typedef long long ll;
 
 
 
 
 
 struct TrieNode{
        unordered_map<char, TrieNode*> m;
        char c;
        bool isWord;
        
        TrieNode() : c(0), isWord(true) {}
        TrieNode(char ch) : c(ch), isWord(false) {};
    };
class Trie {
public:
    / Initialize your data structure here. 
    Trie() {}
        
    / Inserts a word into the trie. 
    void insert(string word) {
        TrieNode *p=&root;
        int i=0;
        for (auto c:word){
            if (p->m.find(c)==p->m.end()){
                p->m[c]=new TrieNode(c);
            }
            p=p->m[c];
        }
        p->isWord=true;
    }
    
    / Returns if the word is in the trie. 
    bool search(string word) {
        Tri…
[10:02 pm, 22/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
 
using namespace std;
 
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #VA_ARGS << "):", dbg_out(VA_ARGS)
#else
#define dbg(...)
#endif
 
#define ar array
#define ll…
[8:14 pm, 23/01/2022] Pratik Suryawanshi: ll n;
  cin >> n;
  ll base = 97;
  for (int i = 0; i < n; ++i)
  {
    if (base > 122) {
      base = 97;
    }
    cout << char(base);
    base++;
  } cout << endl;
[8:41 pm, 23/01/2022] Pratik Suryawanshi: void solve()
{ 
 int n;
 cin>>n;
 vector<float> inp(n);
 fo(i,n){
   cin>>inp[i];
 }
 sort(inp.rbegin(),inp.rend());
 float sum=0;
 for(int i=1;i<n;i++)
 {
   sum+=inp[i];
 }
 float ans=sum/(n-1);
  ans+=inp[0];
 cout<<ans<<endl;
}
[8:45 pm, 23/01/2022] Pratik Suryawanshi: for _ in range(int(input())):
    n = int(input())
    a = sorted(list(map(int, input().split())), reverse = True)
    m1 = a[0]
    m2 = (sum(a) - m1) / (n - 1) 
    print(m1 + m2)
[8:49 pm, 23/01/2022] Pratik Suryawanshi: MSD, [23-01-2022 08:46 PM]
#include<bits/stdc++.h>
using namespace std;
 
 
#define all(cont) cont.begin(), cont.end()
#define ll long long
void solve()
{
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        sort(arr.rbegin(),arr.rend());
        int a = *arr.begin();
    
        int sm = accumulate(all(arr),0LL);
        double ans = double(sm-a)/(n-1);
        ans+=a;
        cout << setprecision(6) << fixed;
        cout << ans << '\n';
 
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
        }
    return 0;
}
[8:56 pm, 23/01/2022] Pratik Suryawanshi: ll lnds(vi &v)
    {
        vi d;
        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (d.empty() or d.back() <= v[i])
            {
                d.push_back(v[i]);
                // cout<<"pushing "<<v[i]<<endl;
            }
            else
            {
                int ub = upper_bound(d.begin(), d.end(), v[i]) - d.begin();
                // cout<<"updating "<<d[ub]<<" to "<<v[i]<<endl;
 
                d[ub] = v[i];
            }
        }
 
        return d.size();
    }
[9:00 pm, 23/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
//Code uploded by T.I.H
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int tt=1;cin>>tt;
    while(tt--)
    {
        ll n;cin>>n;
        string a,b;cin>>a>>b;
        vector <ll>pref(n+1,0),pref1(n+1,0);
        ll dp[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            dp[i][j]=1e18;
        }
        dp[n][n]=0;
        for(int i=n-1;i>=0;i--)
        {
            pref[i]=pref[i+1]+(a[i]=='0');
            pref1[i]=pref1[i+1]+(b[i]=='0');
        }
        for(int i=n-1;i>=0;i--)
        {
            dp[n][i]=dp[n][i+1];
            if(b[i]=='1')
            dp[n][i]+=pref[n]+pref1[i];
…
[9:22 pm, 23/01/2022] Pratik Suryawanshi: int longestNonDecreasingSubsequence(vector<int> arr){ 
multiset < int > s; 
multiset < int > :: iterator it; 
int sizeOfarray = arr.size(); 
for(int i =0; i<sizeOfarray; i++) 
{ 
    s.insert(arr[i]); 
    it = s.upper_bound(arr[i]); 
    if(it != s.end()) 
        s.erase(it); 
} 
    return s.size(); 
} 
void solve(int tc) 
{ 
         
        int n,m; 
        cin >> n >> m; 
        vector<int> a(n); 
        vector<int> b(m); 
        cin >> a; 
        cin >> b; 
 
         
        cout << longestNonDecreasingSubsequence(a) + longestNonDecreasingSubsequence(b)<< '\n'; 
 
 
}
 
2c
[9:24 pm, 23/01/2022] Pratik Suryawanshi: int longestNonDecreasingSubsequence(vector<int> arr){
multiset < int > s;
multiset < int > :: iterator it;
int sizeOfarray = arr.size();
for(int i =0; i<sizeOfarray; i++)
{
    s.insert(arr[i]);
    it = s.upper_bound(arr[i]);
    if(it != s.end())
        s.erase(it);
}
    return s.size();
}
void solve(int tc)
{
        
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        cin >> a;
        cin >> b;
 
        
        cout << longestNonDecreasingSubsequence(a)  +   longestNonDecreasingSubsequence(b)<< '\n';
 
 
}
[9:24 pm, 23/01/2022] Pratik Suryawanshi: int longestNonDecreasingSubsequence(vector<int> arr){
multiset < int > s;
multiset < int > :: iterator it;
int sizeOfarray = arr.size();
for(int i =0; i<sizeOfarray; i++)
{
    s.insert(arr[i]);
    it = s.upper_bound(arr[i]);
    if(it != s.end())
        s.erase(it);
}
    return s.size();
}
void solve(int tc)
{
        
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        cin >> a;
        cin >> b;
 
        
        cout << longestNonDecreasingSubsequence(a)  +   longestNonDecreasingSubsequence(b)<< '\n';
 
 
}
[9:48 pm, 23/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int longestNonDecreasingSubsequence(vector<int> arr)
{
    multiset<int> s;
    multiset<int>::iterator it;
    int sizeOfarray = arr.size();
    for (int i = 0; i < sizeOfarray; i++)
    {
        s.insert(arr[i]);
        it = s.upper_bound(arr[i]);
        if (it != s.end())
            s.erase(it);
    }
    return s.size();
}
void solve()
{
 
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
 
    cout << longestNonDecreasingSubsequence(a) + longestNonDecreasingSubsequence(b) << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}     DIV 2 D
[9:59 pm, 23/01/2022] Pratik Suryawanshi: # Div 2 C (AC solution)
#include<bits/stdc++.h>
using namespace std;
#define xx long long
#define foi(xxxxx) for(xx yyyyy=0;yyyyy<xxxxx;yyyyy++)
typedef vector<xx>          vll;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    xx xxxxxxxxx; cin >> xxxxxxxxx;
    while (xxxxxxxxx--)
    {
        int yy;
        cin >> yy;
        int  yyy = 2;
        int   yyyy = 3;
        for (int yyyyy = 0; yyyyy < yy; yyyyy++) {
            cout << yyy << " ";
            if (yyyyy & 1) {
                yyy += 3;
            }
            else {
                yyy++;
            }
        }
        cout << endl;
    }
    return 0;
}
[10:24 pm, 23/01/2022] Pratik Suryawanshi: #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int gg;
  cin>>gg;
  while(gg--){
      int a,jjj;
      cin>>a;
      if(a>3){
        if(a%2==0){
          jjj=a+a/2;
          cout<<jjj<<endl;
        }
        else{
          jjj=a+(a-1)/2;
          cout<<jjj<<endl;
         }
      }
      else{
          cout<<"3"<<endl;
      }
  }
  return 0;
}
[10:29 pm, 23/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
#include<string>
#include <sstream>
using namespace std;
#include<bitset>
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define fox(i, a,b) for(i=a;i<=b;i++)
#define reps(i, a,b) for(int i=a;i<=b;i++)
#define repe(i, a,b) for(int i=a;i>=b;i--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n…
[10:29 pm, 23/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;
 
//* BOOST BEG //
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt")
// BOOST END 
 
#define gc getchar_unlocked
#define ll long long int
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define fox(i, a,b) for(i=a;i<=b;i++)
#define reps(i, a,b) for(int i=a;i<=b;i++)
#define repe(i, a,b) for(int i=a;i>=b;i--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define…
[10:38 pm, 23/01/2022] Pratik Suryawanshi: from bisect import bisect_left as bl
a = []
 
 
def sieve(n):
 
    prime = [True for i in range(n + 1)]
    p = 2
    while p * p <= n:
        if prime[p]:
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
 
    for p in range(2, n + 1):
        if prime[p]:
            a.append(p)
 
 
sieve(10**5)
 
for _ in range(int(input())):
    n = int(input())
 
    t = bl(a, n - 1)
 
    if t >= len(a) or a[t] > n - 1:
        t -= 1
 
    deg = a[t]
 
    if n % 2:
        print((deg * (n - 1) + 2) // 2)
    else:
 
        print((deg * n) // 2)
[8:39 pm, 29/01/2022] Pratik Suryawanshi: LL n,k;
        cin >> n >> k;
        if(n>1 && k==1)
        {
            cout << -1 << "\n";
        }
        else if( n== 1  && k==1)
        {
            cout << 1 << "\n";
        }
        else
        {
            
            for(int i=1;i<=k-1;i++)
            {
                cout << i << " ";
            }
            for(int i=n;i>=k;i--)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
[9:05 pm, 29/01/2022] Pratik Suryawanshi: ll cal(ll m, string s)
{
    ll add = 0;
    for(int i=m;i>=0;i--)
    {
        ll v = (int(s[i])-int('0')+add)%10;
        if(v==0)
            continue;
        add+=10-v;
    }
    return add;
}
 
int main()
{
    fast
        tc
    {
        ll n,k;
        cin >> n >> k;
        string str;
        cin >> str;
        ll l=0,r=n-1,ans=0;
        while(l<=r)
        {
            ll m=(l+r)/2;
            if(cal(m,str)>k)
                r=m-1;
            else
            {
                ans = m+1;
                l=m+1;
            }
        }
        cout<<ans<<endl;
    }
}
[10:08 pm, 29/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll flip(ll n){
    ll no = 0,cnt = 0;
    while(n){
        if(n%2 == 0) no += (1LL<<cnt);
        n /= 2,cnt++;
        if(n <= 0) break;
    }
    return no;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt=1; cin>>tt;
    while (tt--){
        ll n; cin>>n;
        ll ans = 0;
        while(n > 0)
        {
            ll a = flip(n);
            ll b = n;
            if((b&(b+1)) == 0) b--;
            ll val = ((b * (b+1)) / 2) - ((a * (a-1)) / 2);
            ans += (val*2);
            n = a-1;
        }
        cout<<ans<<"\n";
    }
}
*/
#include<bits/stdc++.h>
#include <cassert>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

// ------------------------------- Micros ------------------------------------------------

#define google(tc) cout<<"Case #"<<tc++<<": ";
#define FILE freopen("input.txt","r",stdin); freopen("output.txt","w", stdout);
#define GetSetBolt ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
#define ll long long int  
#define LD long double

#ifndef LOCAL
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#endif



#define max3(a,b,c) max(a,max(b,c)) 
#define min3(a,b,c) min(a,min(b,c)) 
#define FF first 
#define SS second 
#define PB push_back 
#define PF push_front 
#define PPB pop_back  
#define PPF pop_front  
#define Endl endl

#define in(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define in2(arr,n,m) for(int i=0;i<n;i++){ for(int j=0;j<m;j++) cin>>arr[i][j];}
#define dis(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
#define dis2(arr,n,m) for(int ii=0;ii<n;ii++){for(int j=0;j<m;j++)cout<<arr[ii][j]<<" ";cout<<endl;} 
#define tc int t=0;cin>>t; while(t--) 

#define For(n) for(ll i=0;i<n;i++)
#define For0(x,z) for(ll x=0;x<z;x++)
#define Forx(x,z) for(x;x<z;x++)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

#define toLower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define toUpperr(s) transform(s.begin(),s.end(),s.begin(),::toupper)

#define sortAD(arr,n) sort(arr,arr+n, greater<int>());
#define sortVD(v) sort(v.begin(), v.end(), greater<int>());
#define sortA(arr) sort(arr,arr+n);
#define sortV(v) sort(v.begin(),v.end());

#define mem0(X) memset((X), 0, sizeof((X)))
#define memx(X,x)  memset((X), x, sizeof((X)))
#define setbits(X)  __builtin_popcountll(X)
#define precise(X)  cout<<fixed << setprecision(X);
#define valid(x,y,row,col) (((x) >= 0 and (x) < row) and ((y) >= 0 and (y) < col))
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define timer(d) for(long blockTime=NULL;(blockTime==NULL?(blockTime=clock())!=NULL:false); debug("%s:%.4fs",d,(double)(clock()-blockTime)/CLOCKS_PER_SEC))
#define rsz resize
#define bk back()
#define ld long double

// #ifndef ONLINE_JUDGE
//     cerr<<"\ntime taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<"\n";
// #endif
typedef pair<int, int> PII; 
typedef pair<ll, ll> PLL;
typedef pair<double,double> PDD;
typedef pair<string, string> PSS; 
typedef pair<string, ll> PSL; 
typedef long double lld;

typedef vector<int> VI;  
typedef vector<ll> VL;  
typedef vector<double> VD;
typedef vector<string> VS; 
typedef vector<VI> VVI;  
typedef vector<VL> VVL; 
typedef vector<VS> VVS; 
typedef vector<PII> VPII; 
typedef vector<PLL> VPLL; 
typedef vector<PSS> VPSS; 
typedef vector<PSL> VPSL; 

typedef map<int,int> MII; 
typedef map<ll,ll> MLL;   
typedef map<char,ll> MCL;  
typedef map<char,int> MCI; 
typedef map<char,ll> MCL;   
typedef map<string,string> MSS;  
typedef map<string,int> MSI;  
typedef map<string,ll> MSL; 

typedef unordered_map<int,int> UMII; 
typedef unordered_map<ll,ll> UMLL;   
typedef unordered_map<char,ll> UMCL;  
typedef unordered_map<char,int> UMCI; 
typedef unordered_map<char,ll> UMCL;   
typedef unordered_map<string,string> UMSS;  
typedef unordered_map<string,int> UMSI;  
typedef unordered_map<string,ll> UMSL; 
typedef unsigned long long ull;

const int inf = (int)1e9 + 5;
const ll infl = (ll)1e18 + 5;
const ld PI = acos((ld)-1);
const int MOD = 1e9 + 7;
const int N = 2e5 + 10;
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};   // for every grid problem


//--------------------------------- Trace Functions --------------------------------------

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// ----------------------------- Functions -----------------------------------------------

ll lcm(ll a, ll b) 
{ return (a * (b / __gcd(a, b))); }

string intToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}
 
ll stringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

string to_binary(ll n)
{
    int bin[100];
     int i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    string s="";
    for(int j=i-1;j>=0;j--)
        s+=to_string(bin[j]);
    return s;
}
int linear_search(int arr[],int n, int x)
{
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
}
void leftrotatebyone(int arr[], int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    arr[i]=arr[i+1];
    
    arr[n-1]=temp;
}
void leftrotate(int arr[], int d, int n)
{
    for(int i=0;i<d;i++)
    leftrotatebyone(arr,n);
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

ll gcd(ll a, ll b)
{
        if(a == 0)
            return b;
            
        if(b == 0)
            return a;
            
        if(a == b)
            return a;
            
        if(a>b)
            return gcd(a-b,b);
            
        else
        return gcd(a,b-a);
}

void reverrsestring(string& s)
{
        int n=s.size();
        For(n/2)
        {
                swap(s[i],s[n-i-1]);
        }
}
ll fpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%MOD;
        a = (a * a)%MOD;
        b >>= 1;
    }
    return res%MOD;
}
int gcdExtended(int a, int b, int* x, int* y)
{
    if (a == 0){
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return gcd;
}
void swap(ll &x,ll &y){
	ll temp = y;
	y = x;
	x = temp;
}
int factorirl(int n)
{
        int fact=1;
        for(int i=1;i<=n;i++)
        {
                fact*=i;
        }
        return fact;
}

bool isPerfectSquare(ll x)
{
	if (x >= 0)
	{
		ll sr = sqrt(x);
		return (sr * sr == x);
	}
	return false;
}
void printvec(VL vec, int i)
{
	for (int j = i; j < vec.size(); j++)
	{
		cout << vec[j] << " ";
	}
	cout << endl;
}
void frrrrramework(ll n, ll m)
{
        ll ss;
        for(int i=0,a=m+1;i<n;i++,a++)
        {
                ss=i+1;
                cout << ss << " ";
                for(int j=1;j<m;j++)
                {
                        cout << ss+a << " ";
                        ss+=a;
                }
                cout << "\n";
        }
}
void framework(ll n, ll m)
{
        For(m)
        {
                cout << i+1 << " ";
                cout << "\n";
        }
        int face=2+n;
        for(int i=1;i<n;i++)
        {
                int mm=face;
                cout << mm << " ";
        
        for(int j=1;j<m;j++)
        {
                cout << mm+i+1 << " ";
                mm+=i+1;
        }
        face+=n+1;
        cout << "\n";
        }
}
void ravan(int p[],int arr[],int s[],int n)
{
        p[0]=arr[0];
        for(int i=1;i<n;i++)
        {
                p[i] = gcd(p[i-1],arr[i]);
        }
        s[n-1]=arr[n-1];
        for( int i=n-2;i>=0;i--)
        {
                s[i]= gcd(s[i+1],arr[i]);
        }
}
int Pratik(int l, int r, int p[],int s[],int n)
{
        if(l==0)
        return s[r+1];
        
        if(r==n-1)
          return p[l-1];
          
        return  gcd(p[l-1],s[r+1]);
}

//////////////////////////////// Actual code start here /////////////////////////////////////

   
int main()
{
         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #endif
            
            
    
}
// Bilangan pecahan : mikroskil cp 2014
 
/*int main()
{
    int a,b;
    cin >> a >> b;
    if(__gcd(a,b)>1)
    {
    cout << a/__gcd(a,b) << " " << b/__gcd(a,b);
    } else{cout << "Tidak";}
}*/
 
// Pola III : perulangan lanjut
 
/*int main()
{
    int n,x;
    x = 0;
    cin >> n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cout << x%10;
                x++;
            }
            cout << endl;
        }
}*/
 
// Menghtiung bola
 
/*int main()
{
    int q;
    cin >> q;
    int tmp=1;
    for(int i=0; i<q; i++)
    {
        int angka;
        cin >> angka;
        if(angka==tmp)
        {
            cout << "BENAR" << endl << flush;
            tmp++;
        } else
        {
            cout << "SALAH" << endl << flush;
            tmp = 1;
        }
    }
}*/
 
// Membeli mainan : Troc#3
 
/*int main()
{
    int x;
    cin >> x;
    int a[3];
    for(int i=0; i<3; i++)
    {
        cin >> a[i];
    }
 
    sort(a,a+3);
 
    int tmp = x/(a[0]+a[1]+a[2]);
 
    int ans = 3*tmp;
 
    int sisa = x-(tmp*a[0]+tmp*a[1]+tmp*a[2]);
 
    if(sisa-a[0] >= 0)
    {
        sisa -= a[0];
        ans++;
    }
    if(sisa-a[1] >= 0)
    {
        sisa -= a[1];
        ans++;
    }
    if(sisa-a[2] >= 0)
    {
        sisa -= a[2];
        ans++;
    }
 
    cout << ans;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int x[n+1];
    for(int i=1; i<=n; i++)
    {
        x[i] = i;
    }
 
    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin >> a >> b;
        swap(x[a],x[b]);
    }
 
    int q; cin >> q;
    for(int i=1; i<=q; i++)
    {
        int t;
        cin >> t;
        cout << x[t] << endl;
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    a[n];
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a[i];
        if(a[i]%n==0)
        {
            cout << 1;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if
        }
    }
 
}*/
 
//  Membangun menara :  gemastik 2016 -> greedy
 
/*int main()
{
    int n;
    cin >> n;
    int b[3];
    for(int i=0; i<n; i++)
    {
        int q;
        cin >> q;
        int mx=0,mn=0;
        for(int j=0; j<q; j++)
        {
            int x,y,z;
            cin >> x >> y >> z;
            mx += max(x,max(y,z));
            mn += min(x,min(y,z));
        }
        cout << mn << " " << mx << endl;
    }
}*/
 
// mex tahun baru : troc#18 c -> greedy
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    if(n==1)
    {
        cout << a[0];
    } else{
        sort(a,a+n);
        cout << a[0] << " ";
        for(int i=2; i<n; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[1];
    }
 
}*/
 
// segitiga tahun baru: troc#18 D -> geometry
 
/*int main()
{
    int n;
    cin >> n;
    if(n==2 || n==3 || n==5)
    {
        cout << 4;
    } else {cout << 3;}
}*/
 
// Pelajaran pangan : troc#16 B -> greedy
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
 
    int hasil = a[n] - a[1];
 
    for(int i=1; i<n; i++)
    {
        hasil = min(hasil,a[i]+m-a[i+1]);
    }
 
    cout << hasil;
}*/
 
// Pertahanan wifi : Troc 11 B -> Greedy
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    sort(a,a+n);
    int ans = a[m-1] - a[0];
 
    for(int i=m-1; i<n; i++)
    {
        ans = min(ans, a[i] - a[i-m+1]);
    }
 
    cout << ans;
}*/
 
 
/*int main()
{
    ll n,tmp1=0;
    cin >> n;
    for(int i=0; i<=n; i++)
    {
        ll a;
        cin >> a;
        tmp1 += a*pow(2,i);
    }
 
 
    ll tmp2 = pow(2,n);
    if(tmp1%tmp2 != 0)
    {
        cout << -1;
    } else
    {
        cout << tmp1/tmp2;
    }
}*/
 
/*int main()
{
    int n,ans;
    cin >> n;
    int g1=0,g2=0,b1=0,b2=0,k1=0,k2=0;
    char x,y;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x=='G')
        {
            g1++;
        }
        if(x=='B')
        {
            b1++;
        }
        if(x=='K')
        {
            k1++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin >> y;
        if(y=='G')
        {
            g2++;
        }
        if(y=='B')
        {
            b2++;
        }
        if(y=='K')
        {
            k2++;
        }
    }
 
    ans = min(g1,k2) + min(k1,b2) + min(b1,g2);
    cout << ans;
} */
 
 
 
/*int main()
{
    int n,k,ans;
    cin >> n >> k;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    sort(a,a+n);
 
    ll mn = 1e9;
 
    for(int i=0; i<=n-k; i++)
    {
        mn = min(mn, a[i+k-1] - a[i]);
        ans = mn;
    }
 
    cout << ans;
}*/
 
// Mengangkut bebek : OSP 2022
 
/*int main()
{
    ll k,n;
    cin >> k;
    ll a[k],b[k];
    pair <ll, ll> p[k];
    for(int i=0; i<k; i++)
    {
        cin >> p[i].second;
    }
    for(int i=0; i<k; i++)
    {
        cin >> p[i].first;
    }
    sort(p,p+k+1);
 
    cin >> n;
    ll c[n];
 
    for(int i=0; i<n; i++)
    {
        cin >> c[i];
    }
    sort(c,c+n,greater<ll>());
    ll ans=0;
    int j=0;
 
    for(int i=0; i<n; i++)
    {
        ans += p[j].first * c[i];
        p[j].second--;
        if(p[j].second == 0)
        {
            j++;
        }
    }
 
    cout << ans;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int tmp=0,cnt=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(tmp!=x)
        {
        while(cnt <= n && a[cnt] != x)
        {
            cnt++;
        }
        tmp = x;
        }
    }
 
    if(cnt <= n)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
}*/
 
/*int a,mn=1e4,mx=0;
 
int main()
{
    while(cin >> a)
    {
        if(a==0)
        {
            cout << mn << " " << mx << endl;
            mn = 1e4;
            mx = 0;
        } else
        {
            mx = max(mx,a);
            mn = min(mn,a);
        }
    }
    cout << mn << " " << mx;
 
}*/
 
/*int main()
{
    string s;
 
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
       // cin >> s[i];
        if(s[i] - 2 < 65 && s[i] != ' ')
        {
            s[i] = s[i] + 24;
            cout << s[i];
        }
        else if(s[i] != ' ')
        {
            s[i] -= 2;
            cout << s[i];
        }
        else{cout << s[i];}
    }
}*/
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin  >> a[i];
    }
 
    sort(a,a+n);
}*/
 
/*ll n,m,a[265000];
 
ll binser(ll m, ll r)
{
    ll l=0;
    ll ans=0;
    ll mid,jml;
    while(l<=r)
    {
    mid = (l+r)/2;
    jml = 0;
    for(int i=0; i<n; i++)
    {
        jml += mid/a[i];
    }
    if(jml<m)
    {
        l = mid+1;
    } else
    {
        ans = mid;
        r = mid-1;
    }
    }
    return ans;
}
 
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << binser(m+1, a[0]*m) - binser(m,a[0]*m);
}*/
 
/*int main()
{
    ll n;
    cin >> n;
    ll a[n];
    cin >> a[0];
    for(int i=1; i<n; i++)
    {
        cin >> a[i];
        a[i] += a[i-1];
    }
 
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int x;
        cin >> x;
        int ans = lower_bound(a,a+n,x)-a;
        cout << ans+1 << endl;
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n],b[n],mx=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
        mx = max(mx,a[i]*b[i]);
    }
 
    cout << mx;
}*/
 
/*ll n,m;
 
int main()
{
    cin >> n >> m;
    if(m==1)
    {
        cout << n-1;
    }
    else if(n==1)
    {
        cout << m-1;
    }
    else{
        cout << (m-1)*n;
    }
}*/
 
/*int main()
{
    ll t,a,b;
 
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        cout << a+b-1 << endl;
    }
}*/
 
/*string code;
ll n,b1=0,b2=0,b3=0;
char a;
 
int main()
{
    cin >> code >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a=='1')
        {
            b1 += 1;
        }
        if(a=='2')
        {
            b2 += b1;
        }
        if(a=='3')
        {
            b3 += b2;
        }
    }
    cout << b3 << endl;
}*/
 
/*int main()
{
    cout << "0" << " " << "9223372036854775808" << endl;
    cout << "9223372036854775808" << " " << "9223372036854775808" << endl;
}*/
 
/*int main()
{
    ll n,ans=0; cin >> n;
 
    for(int i=0; i<n; i++)
    {
        ll x; cin >> x;
        ans += x;
    }
    cout << ans/2;
}*/
 
/*ll k,n,v[502],w[502],dp[502][2001],arr[502];
 
void solve(ll i, ll k)
{
    for(int c = 0; c<= k; c++)
    {
        dp[0][c] = 0;
    }
    for(int i=1; i <= n; i++)
    {
        for(int c=0; c<=k; c++)
        {
            if(c >= w[i])
            {
                dp[i][c] =  max(dp[i-1][c], dp[i-1][c-w[i]]+v[i]);
            } else
            {
                dp[i][c] = dp[i-1][c];
            }
        }
    }
}
 
int main()
{
    cin >> k >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> w[i] >> v[i];
    }
 
    solve(n,k);
 
    ll l=n,r=k,x=0;
    while(l>0 && r>0)
    {
        while(dp[l][r] == dp[l][r-1])
        {
            r--;
        }
        while(dp[l][r] == dp[l-1][r])
        {
            l--;
        }
        arr[x] = l;
        x++;
        r -= w[l]; l--;
    }
    sort(arr,arr+x);
 
    for(int i=0; i<x; i++)
    {
        cout << arr[i] << endl;
    }
}*/
 
/*int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    while(n>0)
    {
            cout << "Anak ayam turunlah " << n << endl;
            if(n-1!=0)
            {
            cout << "Mati satu tinggallah " << n-1 << endl;
            } else{cout << "Mati satu tinggallah induknya" << endl;}
        n--;
    }
}*/
 
/*ll mod = 1e9+7;
 
ll t,n,k,a,b;
 
ll tambah(ll x, ll y)
{
    return ((x%mod) + (y%mod)) % mod;
}
 
ll kurang(ll x, ll y)
{
    return ((x%mod) - (y%mod)) % mod;
}
 
ll kali(ll x, ll y)
{
    return ((x%mod) * (y%mod)) % mod;
}
 
ll pang(ll x, ll y)
{
    if(y==0){return 1;}
        int ans = pang(x,y/2);
        ans = kali(ans,ans);
        if(y%2 == 1)
        {
            ans = kali(ans,x);
        }
    return ans;
}
 
ll bagi(ll x, ll y)
{
    return kali(x,pang(y,mod-2));
}
 
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        a = kali(n, kurang(pang(n,k),1));
        b = kurang(n,1);
        cout << bagi(a,b) << endl;
    }
    return 0;
}*/
 
/*ll pang(ll x, ll y)
{
    if(y==0)
    {
        return 1;
    }
    else{
        return x * pang(x, y-1);
    }
}
 
int main()
{
    int x,y;
    cin >> x >> y;
    cout << pang(x,y);
}*/
 
/*ll tmp[1001];
ll dp(ll x)
{
    if(x==1 || x==2)
    {
        return 1;
    }
    if(x==3)
    {
        return 2;
    }
    if(tmp[x] != 0)
    {
        return tmp[x];
    }
    tmp[x] = (dp(x-1) + dp(x-3)) % 1000000;
    return tmp[x];
}
 
int main()
{
    int n;
    cin >> n;
    cout << dp(n);
}*/
 
/*int x,a,b;
char y;
 
int main()
{
    for(int i=0; i<6; i++)
    {
        cin >> x >> y;
        if(y=='A')
        {
            a++;
        } else{b++;}
    }
    if(b>=3)
    {
        cout << 100;
    } else if(b==2)
    {
        cout << 70;
    } else{cout << 40;}
}*/
 
/*int main()
{
    string v;
    cin >> v;
 
    bool flag = false;
 
    if(v[0] != v[1])
    {
        if(v[0] != v[2])
        {
            cout << 1;
        }
        else{cout << 2;}
    }
 
    for(int i=2; i<v.length(); i++)
    {
        if(v[i] != v[i-1])
        {
            if(v[i] != v[i-2])
            {
                cout << i+1;
            }
        }
    }
 
}*/
 
/*int main()
{
    int n, tmp[100][100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp[0][i];
    }
 
    for(int j=1; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            tmp[j][i] = tmp[j-1][i+1] - tmp[j-1][i];
        }
    }
 
    for(int i=0; i<n; i++)
    {
        if(i<n)
        {
            cout << tmp[i][0] << " ";
        }
    }
 
}*/
 
/*int main()
{
    int a,b;
    cin >> a >> b;
    int x;
    cin >> x;
    vector <int> v;
    for(int i=0; i<a; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    for(int i=0; i<b; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
 
    sort(v.begin(), v.end());
 
    cout << v[x-1];
}*/
 
/*int main()
{
    string s;
    cin >> s;
    int tmp = ceil(sqrt(s.length()));
    for(int i=s.length(); i<tmp*tmp; i++)
    {
        s += ".";
    }
 
    for(int i=0; i<tmp; i++)
    {
        if(i%2==0)
        {
            for(int j=i*tmp; j<(i+1)*tmp; j++)
            {
                cout << s[j];
            }
        }
        else
        {
            for(int j = (i+1)*tmp-1; j>i*tmp-1; j--)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}*/
 
/*ll newnum(ll x)
{
    if(x%4==0) {return x;}
    if(x%4==1) {return 1;}
    if(x%4==2) {return x+1;}
    return 0;
}
 
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x >> y;
        ll a = newnum(x-1); ll b = newnum(y);
        cout << (a^b) << endl;
    }
}*/
 
/*int main()
{
    ll n; cin >> n;
    vector<pair <ll, ll>> p(n);
    for(int i=0; i<n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.rbegin(), p.rend());
    ll mx = p[0].second;
    ll ans = 1;
    for(int i=1; i<n; i++)
    {
        if(p[i].second > mx)
        {
            mx = p[i].second;
            ans++;
        }
    }
    cout << ans;
}*/
 
// wildcard
 
/*int main()
{
    string s,a,b,t,c,d;
    int n,btg;
    cin >> s >> n;
    string tmp[n];
    btg = s.find("*");
    a = s.substr(0,btg);
    b = s.substr(btg+1);
    int pjg = b.length();
    for(int i=0; i<n; i++)
    {
        cin >> t;
        if(s.length()-1 > t.length())
        {
            continue;
        }
        c = t.substr(0,btg);
        d = t.substr(t.length()-pjg,pjg);
        if(a==c && b==d)
        {
            tmp[i] = t;
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout << tmp[i] << endl;
    }
}*/
 
/*int main()
{
    string s;
    getline(cin,s);
    if(s.find("ideafuse") != -1)
    {
        cout << s.find("ideafuse") + 1;
    } else{cout << -1;}
}*/
 
/*int main()
{
    double n;
    cin >> n;
    double ans = (n-1)/2 * n/2;
    cout << fixed << setprecision(2) << ans;
}*/
 
/*int main()
{
    double n,k;
    cin >> n >> k;
    for(int i=0; i<k; i++)
    {
        int x;
        cin >> x;
    }
 
    cout << fixed << setprecision(5) << (1/n)*(n-k-1)/(n-1);
}*/
 
/*int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=1; i<=n; i++)
    {
        cin >> s[i];
    }
 
}*/
 
// Pola string
 
/*int main()
{
    string s;
    cin >> s;
    int tmp = ceil(sqrt(s.length()));
    for(int i=s.length(); i<tmp*tmp; i++)
    {
        s += ".";
    }
 
    for(int i=0; i<tmp; i++)
    {
        if(i%2==0)
        {
            for(int j = i*tmp; j<(i+1)*tmp; j++)
            {
                cout << s[j];
            }
        }
        else
        {
            for(int j = (i+1)*tmp-1; j>(i*tmp)-1; j--)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}*/
 
// Angka 1
 
/*int main()
{
    int n;
    cin >> n;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans+=i;
        cout << ans << endl;
    }
}*/
 
// koin asing
/*int main()
{
    string s;
    cin >> s;
 
    if(s[0] != s[1])
    {
        if(s[0] != s[2])
        {
            cout << 1;
        } else{cout << 2;}
    }
 
    for(int i=2; i<s.length(); i++)
    {
        if(s[i] != s[i-1])
        {
            if(s[i] != s[i-2])
            {
                cout << i+1;
            }
        }
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
 
    if(n%2==1)
    {
        for(int i=1; i<=n/2; i++)
        {
            swap(s[i],s[n-i]);
        }
    } else
    {
        for(int i=1; i<n/2; i++)
        {
            swap(s[i],s[n-i]);
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout << s[i] << endl;
    }
 
}*/
 
/*int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
 
    for(int i=0; i<n/2; i++)
    {
        cout << s[i] << endl << s[n-1-i] << endl;
    }
    if(n%2!=0)
    {
        cout << s[n/2];
    }
}*/
 
/*int main()
{
    ll n,k,ans=1,a=0,mx=0,x;
    cin >> n >> k;
    while(n--)
    {
        a++;
        cin >> x;
        mx = max(mx,x);
        if(a==k)
        {
            ans += mx+1;
            a = 0;
            mx = 0;
        }
    }
 
    if(a>0)
    {
        ans+=mx+1;
    }
 
    cout << ans;
 
}*/
 
/*int main()
{
	string k; //ma*
	ll n,x,y,c; // unsigned mulai dari 0 - 65535
	vector<string>vn; //mula, makan, minum, main, hama
	bool depan;
 
	cin >> k >> n; //k=ma*    n=5
	vn.resize(n);
 
	for(x=0; x<n; x++) {  cin >> vn[x]; }
	for(x=0; x<=0; x++)     { 	if(k[x]=='*') 	{ depan=1; } else { depan=0; }  }
 
 
	if(depan==0) //contoh ma*
	{
		for(x=0; x<vn.size(); x++)
		{
			c=0;
			for(y=0; y<k.length()-1; y++)
			{   if(k[y]==vn[x][y]) {  c++;   }  else { break; }	}
 
			if(c==k.length()-1) {  cout << vn[x]<< endl; }
		}
	}
	else if(depan==1) //contoh *ma
	{
		reverse(k.begin(),k.end()); //putar string k
		for(x=0; x<vn.size(); x++)
		{
			c=0;
			reverse(vn[x].begin(),vn[x].end()); //putar string dalam vektor vn
 
			for(y=0; y<k.length(); y++)
			{   if(k[y]==vn[x][y]) {  c++; } else { break; }     }
 
			if(c==k.length()-1)
			{
			      reverse(vn[x].begin(),vn[x].end());
			      cout << vn[x]<< endl;
			}
                              }
              }
	else
	{
   	          for(x=0; x<vn.size(); x++)  { cout << vn[x]<< endl;  }
              }
}*/
 
/*int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll diskon,pajak,tmp;
    diskon = n*a/100;
    tmp = n-diskon;
    pajak = tmp*b/100;
    cout << tmp+pajak;
}*/
 
/*int main()
{
    string s = "halo dunia";
    string x;
    getline(cin,x);
    short i=10,ans=0;
    while(i--)
    {
        if(x[i] == s[i] || x[i] + 32 == s[i])
        {
            ans++;
        }
    }
    cout << ans;
}*/
 
/*int main()
{
    string s;
    getline(cin,s);
    ll ans=1;
    ll n = s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'e')
        {
            if(s[i+1] == 'u')
            {
                ans = (3*ans)%1000000007;
            } else{ans = (2*ans)%1000000007;}
        }
    }
    cout << ans;
}*/
 
/*void solve()
{
    string s;
    cin >> s;
    if(s=="PAS")
    {
         cout <<"var data:array[1..10000] of longint;" << endl;
         cout <<"   n,i,j,temp:longint;" << endl;
         cout <<"begin" <<endl;
         cout <<"  readln(n);"<< endl;
         cout <<"  for i:=1 to n do readln(data[i]);" << endl;
         cout <<"  for i:=1 to n-1 do" << endl;
         cout <<"     for j:=i+1 to n do"<< endl;
         cout <<"       if (data[i]>data[j]) then" << endl;
         cout <<"       begin" << endl;
         cout <<"         temp:=data[i];" << endl;
         cout <<"         data[i]:=data[j];" << endl;
         cout <<"         data[j]:=temp;"<< endl;
         cout <<"       end;" << endl;
         cout <<"  for i:=1 to n do writeln(data[i]);" << endl;
         cout <<"end." << endl;
    }
    else
    {
        cout <<"int data[10001];" << endl;
        cout <<"int n,i,j,temp;" << endl;
        cout <<"int main(){" << endl;
        cout <<"  scanf(\"%d\",&n);" << endl;
        cout <<"  for (i=1;i<=n;i++) scanf(\"%d\",data[i]);" << endl;
        cout <<"  for (i=1;i<=n-1;i++)" << endl;
        cout <<"    for (j=i+1;j<=n;j++)" << endl;
        cout <<"      if (data[i]>data[j]){" << endl;
        cout <<"        temp=data[i];" << endl;
        cout <<"        data[i]=data[j];" << endl;
        cout <<"        data[j]=temp;" << endl;
        cout <<"      }" << endl;
        cout <<"  for (i=1;i<=n;i++) printf(\"%d\\n\",data[i]);" << endl;
        cout <<"  return 0;" << endl;
        cout <<"}" << endl;
    }
}
 
int main()
{
    solve();
    return 0;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    if(n>=1000) {cout << 1000 << " " << n/1000 << endl; n%=1000;}
    if(n>=500) {cout << 500 << " " << n/500 << endl; n%=500;}
    if(n>=200) {cout << 200 << " " << n/200 << endl; n%=200;}
    if(n>=100) {cout << 100 << " " << n/100 << endl; n%=100;}
    if(n>=50) {cout << 50 << " " << n/50 << endl; n%=50;}
    if(n>=20) {cout << 20 << " " << n/20 << endl; n%=20;}
    if(n>=10) {cout << 10 << " " << n/10 << endl; n%=10;}
    if(n>=5) {cout << 5 << " " << n/5 << endl; n%=5;}
    if(n>=2) {cout << 2 << " " << n/2 << endl; n%=2;}
    if(n>=1) {cout << 1 << " " << n/1 << endl;}
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    int a,b; cin >> a >> b;
    int x1=(n/a)*(m/b);
    int x2=(n/b)*(m/a);
    cout << max(x1,x2);
}*/
 
/*int main()
{
    int x;
    cin >> x;
    for(int i=1; i<=x; i++)
    {
        if(i%3==0||i%5==0||i%7==0)
        {
            if(i%3==0)
            {
                cout << "Comp";
            }
            if(i%5==0)
            {
                cout << "Fest";
            }
            if(i%7==0)
            {
                cout << "Seven";
            }
            cout << " ";
        } else{cout << i << " ";}
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    vector <int> v;
    for(int i=0; i<n*2; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    int ans=0,tmp=n*2-1;
    for(int i=tmp; i>=n; i--)
    {
        ans+=v[i];
    }
    cout << ans;
}*/
 
/*int main()
{
    string s,t;
    cin >> s >> t;
    cout << s+t;
}*/
 
/*int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        for(intj=0; j<4; j++)
        {
            cin >> a[j];
        }
    }
}*/
 
/*int main()
{
    string x,y;
    cin >> x >> y;
    int n = x.find(y);
    if(n!=-1)
    {
        cout << "TIDAK";
    } else{cout << "YA" << endl << x+"bukansaitammar";}
}*/
 
/*int a,b,m,arr[2006],ans;
 
int main()
{
    cin >> a >> b >> m;
    for(int i=0; i<m*m; i++)
    {
        if(arr[a] == 0)
        {
            arr[a]++;
            ans++;
        }
        int tmp = (a+b)%m;
        a = b;
        b = tmp;
    }
    cout << ans << endl;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n+1];
    vector <int> v;
    for(int i=0; i<=n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            v.pb(a[i]);
        } else{
            if(a[i] != a[i-1])
            {
                v.pb(a[i]);
            }
        }
    }
 
    if(v.size()<n)
    {
        cout << 0;
    }
    else if(v.size()==n)
    {
        cout << 1;
    }
    else{cout << n+1;}
}*/
 
/*int main()
{
    int t,m,n;
    cin >>t;
    int id[t], x[n],s1[t][n],s2[t][n],s3[t][n];
    for(int i=0; i<t; i++)
    {
        cin >> n >> m;
        cin >> id[i];
        for(int j=0; j<n; j++)
        {
            cin >> x[j] >> s1[i][j] >> s2[i][j] >> s3[i][j];
        }
    }
 
    for(int i=0; i<t; i++)
    {
        int rang = n;
        for(int j=0; j<n; j++)
        {
            if(id[i] == x[j])
            {
                for(int k=0 && k!=j; k<n; k++)
                {
                    if(s3[i][j] > s3[i][k])
                    {
                        rang--;
                    }
                    else if(s3[i][j] == s3[i][k])
                    {
                        if(s2[i][j] > s2[i][k])
                        {
                            rang--;
                        }
                        else if (s2[i][j] == s2[i][k])
                            {
                                if(s1[i][j] > s1[i][k])
                                {
                                    rang--;
                                }
                            }
                        }
                }
            }
        }
        if(rang <= m)
        {
            cout << "YA";
        } else{cout << "TIDAK";}
    }
}*/
 
/*int main()
{
    string b1,b2,a1,a2;
    vector <short> a,b,c;
    short i,y,p1,p2,mx;
    short tmp;
 
    cin >> b1 >> b2;
    p1 = b1.length();
    p2 = b2.length();
    mx = max(p1,p2);
    a.resize(100000);
    b.resize(100000);
    c.resize(mx+1);
 
    for(i=0; i<p1; i++)
    {
        a1 = b1[i];
        a[p1-1-i] = stoi(a1);
    }
 
    for(int i=0; i<p2; i++)
    {
        a2 = b2[i];
        b[p2-1-i] = stoi(a2);
    }
    tmp = 0;
    for(i=0; i<=c.size(); i++)
    {
        c[i] = a[i] + b[i] + tmp;
        tmp = c[i]/10;
        c[i] = c[i]%10;
    }
    for(i=c.size()-1; i>=0; i--)
    {
        if(c[i]>0)
        {
            break;
        }
    }
 
    for(y=i; y>=0; y--)
    {
        cout << c[y];
    }
}*/
 
/*int n,d;
ll ans,a;
 
int main()
{
    cin >> n >> d >> a;
    ll cur = a; ans=1;
    for(int i=1; i<n; i++)
    {
        cin >> a;
        if(a-cur >= d)
        {
            ans++;
        }
        cur = a;
    }
    cout << ans;
}*/
 
// Dominasi sistem bintang
 
/*int main()
{
    int n,ans=0;
    cin >> n;
    pair <int, int> p[n];
    for(int i=0; i<n; i++)
    {
        cin >> p[i].first;
    }
    for(int i=0; i<n; i++)
    {
        cin >> p[i].second;
    }
    sort(p,p+n);
 
    int cur = n-2;
    for(int i=n-1; i>=0; i--)
    {
        if(i == cur) {cur--;}
        while(p[i].first == p[cur].first)
        {
            if(p[i].second > p[cur].second)
            {
                p[cur].first--;
            } else{p[i].first--;}
        }
    }
 
    for(int i=0; i<n; i++)
    {
        if(p[i].first !=0)
        {
            ans+=p[i].second;
        }
    }
    cout << ans;
}*/
 
/*ll ans=0,n;
ll p[100001];
vector<ll>tmp[100001];
 
int main()
{
    cin >> n;
    for(int i=0; i<n; i++) { cin >> p[i];}
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        tmp[p[i]].pb(x);
    }
 
    priority_queue <ll> pq;
    for(int i=100000; i>=1; i--)
    {
        for(ll j:tmp[i])
        {
            pq.push(j);
        }
        if(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
    }
 
    cout << ans;
}*/
 
// Bukit atau lembah
 
/*int main()
{
    ll x;
    cin >> x;
    ll bukit = x;
    ll lembah = x;
    ll prev = x;
    ll diff = 0;
    ll cur;
    while(cin >> x)
    {
        cur =  x;
        if(cur>prev)
        {
            bukit = cur;
           diff = max(diff, bukit-lembah);
        }
        else if(cur<prev)
        {
            lembah = cur;
            diff = max(diff, abs(lembah-bukit));
        }
        prev = cur;
    }
    cout << diff << endl;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n][10001];
    for(int i=0; i<n; i++)
    {
        cin >> a[0][i];
    }
 
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[i][j] = a[i-1][j+1] - a[i-1][j];
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout << a[i][0] << " ";
    }
}*/
 
 
/*int main()
{
    int n;
    cin >> n;
    vector <int> v;
 
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
 
    for(int i=0; i<n/2; i++)
    {
        cout << v[i] << endl << v[n-1-i] << endl;
    }
    if(n%2!=0)
    {
        cout << v[n/2];
    }
}*/
 
/*int main()
{
    ll n,m;
    cin >> n >> m;
    ll mn,mx;
    mx = (n-m)/4;
    if(n>5*m || m>n)
    {
        cout << -1 << " " << -1;
    }
    else{
    if(n <= 4*m)
    {
        mn = 0;
    } else
    {
        mn = n-(4*m);
    }
    cout << mn << " " << mx;
    }
}*/
 
/*ll eu(ll a, ll b)
{
    if(b==0){return a;}
    else{return eu(b,a%b);}
}
 
int main()
{
    ll fpb,kpk; cin >> fpb >> kpk;
    if(kpk%fpb!=0)
    {
        cout << -1 << " " << -1;
        return 0;
    }
    ll x,y;
    ll tmp = kpk/fpb;
    for(int i=1; i<=sqrt(tmp); i++)
    {
        if(eu(i,tmp/i)==1 && tmp%i==0  )
        {
            x = i;
            y = tmp/i;
        }
    }
 
    cout << x*fpb << " " << y*fpb;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    string s; int tmp=1;
 
    n = n/2+1;
    s+="G";
    while(tmp++ < n)
    {
        s+="LG";
    }
 
    cout << s.size() << endl << s;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
}*/
 
/*int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll fpb = __gcd(a,b);
    ll kpk = a*b/fpb;
    cout << kpk/a+kpk/b;
}*/
 
/*ll f(ll x)
{
    if(x<=1)
    {
        return 1;
    } else{return f(x/2)*2+x;};
}
 
int main()
{
    cout << f(1048576);
}*/
/*int n,m,ans;
 
int main()
{
    cin >> n >> m;
    vector <int> v(100005, 0);
    vector <pair <int,int>> p;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        v[a]++;
    }
 
    for(int i=0; i<m; i++)
    {
        int l,r;
        cin >> l >> r;
        p.pb(make_pair(r,l));
    }
 
    sort(p.begin(),p.end());
 
    for(int i=0; i<m; i++)
    {
        int l = p[i].second;
        int r = p[i].first;
        for(int j=l; j<=r; j++)
        {
            if(v[j] > 0)
            {
                v[j]--;
                ans++;
                goto lewat;
            }
        }
        lewat:;
    }
    cout << ans;
}*/
 
// osp 2021 (Lampu hias warna-warni)
 
/*int main()
{
    int n; cin >> n;
    string x = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    vector <int> v(26, 0);
    string s; cin >> s;
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(s[i] == x[j])
            {
                v[j]++;
                break;
            }
        }
    }
 
    sort(v.begin(), v.end());
 
    int a = v[25], b = v[24], c = v[23];
 
    if(c==0)
    {
        cout << -1 << endl;
        return 0;
    }
 
    int hasil = 3*c;
    if(a>c)
    {
        hasil++;
    }
    if(b>c)
    {
        hasil++;
    }
    cout << hasil;
 
}*/
 
// OSP 2022 (mengangkut bebek)
 
/*int main()
{
    ll k; cin >> k;
    pair <ll,ll> p[k];
 
    ll t[k],c[k];
    for(ll i=0; i<k; i++)
    {
        cin >> p[i].second;
    }
    for(ll i=0; i<k; i++)
    {
        cin >> p[i].first;
    }
 
    ll n; cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    sort(p,p+k);
    sort(a,a+n);
 
    ll z = n-1;
    ll ans = 0;
    ll i = 0;
 
    while(z>=0)
    {
        if(p[i].second > 0)
        {
            ans += p[i].first*a[z];
            z--;
            p[i].second--;
        }
        else{i++;}
    }
    cout << ans;
}*/
 
// OSP 2021 (buah)
 
/*int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll tmp = a*b/__gcd(a,b);
    ll ans = tmp/a + tmp/b;
    cout << ans;
}*/
 
// OSP 2021 (kartu)
/*int main()
{
    ll a,b; cin >> a >> b;
    ll mx = max(a,b);
    ll mn = min(a,b);
 
    while(mx%mn!=0)
    {
        ll tmp = mx-mn;
        mx = max(tmp,mn);
        mn = min(tmp,mn);
    }
 
    cout << mn;
}*/
 
// OSP 2022 (lampu hias)
 
/*int main()
{
    ll a,b,c; cin >> a >> b >> c;
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        if(x%a==0 && x%b==0 && x%c==0)
        {
            cout << "YA" << endl;
        } else{cout << "TIDAK" << endl;}
    }
}*/
 
// OSP 2020 (lari jauh)
 
/*int main()
{
    int n,k; cin >> n >> k;
    int a[n];
    cin >> a[0];
    for(int i=1; i<n; i++)
    {
        int x;
        cin >> x;
        a[i] = a[i-1]+x;
    }
 
    for(int i=0; i<k; i++)
    {
        int y;
        cin >> y;
        cout << upper_bound(a,a+n,y) - a << endl;
    }
 
}*/
 
/*int main()
{
    ll n,p,q; cin >> n >> p >> q;
    pair <int, int> a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
 
    sort(a+1,a+n+1);
 
    priority_queue<pair<int,int>>pq;
    vector <int> ans(n+1);
 
    for(int i=1,j=1; i<=n; i++)
    {
        while(a[j].first - a[i].first <= p && j<=n)
        {
            j++;
        }
        j--;
 
        pq.push({j-i+1,j});
        while(pq.top().second < i)
        {
            pq.pop();
        }
        ans[a[i].second] = pq.top().first;
    }
 
    for(int i=0; i<q; i++)
    {
        int x; cin >> x;
        cout << ans[x] << endl;
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    multiset <int> paket;
    while(n--)
    {
        int x;
        cin >> x;
        if(paket.lower_bound(x) != paket.end())
        {
            paket.erase(paket.lower_bound(x));
        }
        paket.insert(x);
    }
    cout << paket.size();
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    if(n%m==0)
    {
        cout << "YA";
    } else{cout << "TIDAK";}
}*/
 
/*int main()
{
    int n; cin >> n;
    if(n%4==0)
    {
        cout << "YA";
    }
    else if(n%2==0)
    {
        cout << "TIDAK";
    }
    else
    {
        if((n-1)%4==0)
        {
            cout << "TIDAK";
        }
        else{cout << "YA";}
    }
}*/
 
/*int main()
{
    int n,q; cin >> n >> q;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr,arr+n);
 
    for(int i=0; i<q; i++)
    {
        ll x; cin >> x;
        bool flag = 0;
 
        int l=0,r=n-1;
 
        while(l<r)
        {
            ll sum = arr[l] + arr[r];
            if(sum==x)
            {
                flag = 1;
                break;
            }
            else if(sum<x)
            {
                l++;
            } else
            {
                r--;
            }
        }
        if(flag)
        {
            cout << "YA" << endl;;
        } else
        {
            cout << "TIDAK" << endl;
        }
    }
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(j%2==0)
            {
                cout << "W";
            } else
            {
                cout << "B";
            }
        }
        cout << endl;
    }
}*/
 
/*int main()
{
    short n,m,x,y;
    cin >> n >> m >> x >> y;
    int cnt1=n-x;
    int cnt2=(m-y)*2;
    int hasil = cnt1+cnt2;
    if(hasil>25)
    {
        cout << "LOLOS";
    }
    else
    {
        cout << "TIDAK LOLOS";
    }
}*/
 
/*int main()
{
    ll m,a,b;
    cin >> m >> a >> b;
    if(a+b == 2*m)
    {
        if(a%2==1 && b%2==1)
        {
            cout << 1 << " ";
        } else
        {
            cout << 0 << " ";
        }
        cout << min(a,b);
    }
    else
    {
        cout << 0 << " " << min(a,b);
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    cout << (n%10==0?"Rep":"Neb");
}*/
 
/*int main()
{
    int n; cin >> n;
    ll cnt=1;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        cnt = cnt * x a% 998244353;
    }
    cout << cnt << endl;
}*/
 
/*int main()
{
    string s; cin >> s;
    short jml=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'O')
        {
            jml++;
        }
        if(jml>1)
        {
            break;
        }
    }
 
    if(jml == 1)
    {
        cout << "Ya";
    } else
    {
        cout << "Tidak";
    }
}*/
 
/*int main()
{
    int n,x,y; cin >> n >> x >> y;
    int a,b,c,d;
    int s = abs(x);
    int r = abs(y);
    int t = s+r;
    if(t>n)
    {
        cout << -1;
        return 0;
    }
 
    if((n-t)%2==0)
    {
        if(x>=0)
        {
            b=s+(n-t)/2;
            d=(n-t)/2;
            if(y>=0)
            {
                a=r;
                c=0;
            }
            else
            {
                a=0;
                c=r;
            }
        }
        else
        {
            b=(n-t)/2;
            d=s+(n-t)/2;
            if(y>=0)
            {
                a=r;
                c=0;
            }
            else
            {
                a=0;
                c=r;
            }
        }
    }
    else
    {
        cout << -1;
        return 0;
    }
 
    cout << a << " " << b << " " << c << " " << d;
}*/
 
/*int main()
{
    int n; cin >> n;
    double r,v; cin >> r >> v;
    int w[n];
 
    for(int i=0; i<n; i++)
    {
        cin >> w[i];
        if(w[i]==v)
        {
            cout << -1 << endl;
            return 0;
        }
    }
 
    double res=0;
 
    for(int i=0; i<n; i++)
    {
        res = max(res, r/abs(w[i]-v));
    }
 
    cout << setprecision(9) << res << endl;
}*/
 
/*int main()
{
    ll n; cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    ll id=0;
 
    while(id < n && a[id]==1)
    {
        id++;
    }
 
    id%=n;
    ll i=id,res=0,cnt=0;
 
    do
    {
        if(a[i] == 1)
        {
            cnt++; res+=cnt;
        }
        else
        {
            cnt=0;
        }
        i = (i+1)%n;;
    } while(i!=id);
 
    cout << res << endl;
} */
 
/*int main()
{
    ll n,m; cin >> n >> m;
    ll x=1,w=0;
    for(ll i=0; i<n; i++)
    {
        ll l,r;
        cin >> l >> r;
 
        if(x < l)
        {
            w += abs(x-l);
            x = l;
        }
        else if(x > r)
        {
            w += abs(x-r);
            x = r;
        }
    }
    cout << w << endl;
}*/
 
/*int main()
{
    ll n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int a,b; cin >> a >> b;
        cout << 2*min(a,b) << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    int odd=0,even=0;
 
    for(int i=0; i<n; i++)
    {
        ll x,y;
        cin >> x >> y;
        if((x+y)%2==0)
        {
            even++;
        } else
        {
            odd++;
        }
    }
 
    if(even==0|| odd==0)
    {
        cout << "NO" << endl;
    } else
    {
        cout << "YES" << endl;
    }
}*/
 
/*int main()
{
    int n,m,res=0;
    cin >> n >> m;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        a[i] = 0;
    }
 
    for(int i=0; i<m; i++)
    {
        int x; cin >> x;
        a[x] = (a[x]+1)%4;
    }
 
    for(int i=1; i<=n; i++)
    {
        if(a[i] == 2 || a[i] == 3)
        {
            res++;
        }
    }
    cout << res << endl;
}*/
 
/*int main()
{
    ll n; cin >> n;
    ll cnt=0;
    ll tmp=2;
 
    while(tmp<=n)
    {
        tmp*=2;
    }
 
    cout << tmp-n;
}*/
 
/*int main()
{
    ll x,y; cin >> x >> y;
    ll mn = min(x,y);
    ll mx = max(x,y);
    cout << (mn-1)*mx;
}*/
 
/*int main()
{
    ll a,b; cin >> a >> b;
    ll arr[a][b];
    ll x,y=0,z=0;
    for(ll i=0; i<a; i++)
    {
        for(ll j=0; j<b; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == -1)
            {
                x=(i+j)%2;
            }
            else if((i+j)%2 == 0)
            {
                y+=arr[i][j];
            }
            else
            {
                z+=arr[i][j];
            }
        }
    }
 
    if(x==0)
    {
        if(y>z)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl << z-y;
        }
    }
    else
    {
        if(y<z)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl << y-z;
        }
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    ll s1=0,s2=0;
 
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin >> x;
        if(n>2)
        {
            s1+=(x*pow(-1,i%2));
            s2+=(x*pow(-1,(i+1)%2));
        }
        else
        {
            s2+=(x*pow(-1,(i+1)%2));
            s1 = INT_MIN;
        }
    }
 
    cout << max(s1,s2);
}*/
 
/*int main()
{
    ll n; cin >> n;
    if(n>=100)
    {
        cout << 9;
    }
    else if(n >= 19 && n <= 99)
    {
        string s = to_string(n);
        if(s[1] == '9')
        {
            cout << n/10;
        }
        else
        {
            cout << n/10-1;
        }
    }
    else
    {
        cout << 0;
    }
}*/
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin >> x >> y;
    }
 
    int ans=n+(n-3)-m;
 
    cout << ans;
}*/
 
/*int main()
{
    ll n,m,mod=998244353,ans=1; cin >> n >> m;
 
    for(int i=1; i<=n*m-1;i++)
    {
        ans*=2;
        ans%=mod;
    }
 
    cout << ans;
}*/
 
/*int main()
{
    int n; cin >> n;
    int arr[n];
    bool eq=0,ni=0,nd=0;
 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] < arr[i-1] && i != 0)
        {
            ni = 1;
        } else if(arr[i] > arr[i-1] && i!=0)
        {
            nd = 1;
        }
        else
        {
            eq = 1;
        }
    }
 
    if(ni && nd)
    {
        cout << "NONE";
    }
    else if(eq)
    {
        if(ni)
        {
            cout << "NONINCREASING";
        }
        else if(nd)
        {
            cout << "NONDECREASING";
        }
        else
        {
            cout << "EQUAL";
        }
    }
    else if(nd)
    {
        cout << "NONDECREASING";
    }
    else if(ni)
    {
        cout << "NONINCREASING";
    }
    else
    {
        cout << "NONE";
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    for(int i=n; i>0; i--)
    {
        int tmp=0;
        for(int j=n; j>0; j--)
        {
            for(int k=n; k>0; k--)
            {
                if(k*k + j*j == i*i)
                {
                    tmp++;
                }
            }
        }
        if(tmp == 2)
        {
            cout << i;
            return 0;
        }
    }
 
    cout << -1;
}*/
 
/*int main()
{
    int a,b,c; cin >> a >> b >> c;
    int mx = max(a,max(b,c));
    for(int i=mx; i<=100; i++)
    {
        if(i%a!=0 && i%b!=0 && i%c!=0)
        {
            cout << i << endl;
            break;
        }
    }
}*/
 
/*int main()
{
    double n; cin >> n;
    cout << fixed << setprecision(1) << (n+1)/2;
}*/
 
/*int main()
{
    int n,m,r; cin >> n >> m >> r;
    int mn=min(n,m);
    cout << (mn-1)/(2*r+1)+1;
}*/
 
/*int main()
{
    int p,q,r,s,t; cin >> p >> q >> r >> s >> t;
    int x = sqrt(p*q*r*s*t);
    cout << x/(q*s) << " " << x/(r*t) << " " << x/(p*s) << " " << x/(q*t) << " " << x/(p*r);
}*/
 
/*int main()
{
    string s; cin >> s;
    int b=0,o=0,n=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'b')
        {
            b++;
        }
        else if(s[i] == 'o')
        {
            o++;
        }
        else if(s[i] == 'n')
        {
            n++;
        }
    }
 
    if(b<2||o<2||n<2)
    {
        cout << 0;
    }
    else
    {
        cout << min(b,min(o,n))-1;
    }
}*/
 
/*int main()
{
    string s,t; cin >> s >> t;
    bool flag = true;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 97)
        {
            s[i] -= 32;
        }
        if(t[i] >= 97)
        {
            t[i] -= 32;
        }
        if(s[i] != t[i])
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout << "20/20";
    } else
    {
        cout << "x_x";
    }
}*/
 
/*int main()
{
    ll a[3]; cin >> a[0] >> a[1] >> a[2];
 
    sort(a,a+3);
        if(a[0] == a[2]-1 && a[1] == a[2]-1 && a[0]+a[1] > a[2])
        {
            cout << "Ya";
        }
        else
        {
            cout << "Tidak";
        }
}*/
 
/*int main()
{
    int n; cin >> n;
    int a,b;
    if(n==1)
    {
        a = 0;
    }
    else if(n%2==0)
    {
        a = n/2;
    }
    else if(n%3==0)
    {
        a = n/3;
    }
    else if(n%5==0)
    {
        a = n/5;
    }
    else if(n%7==0)
    {
        a = n/7;
    }
    else
    {
        a = 1;
    }
 
    cout << a << " " << n-a;
}*/
 
/*int main()
{
    cout << "CHEKHOVSGUN";
}*/
 
/*int main()
{
    int a; cin >> a;
    for(int i=0; i<a*a; i++)
    {
        for(int j=0; j<a*a; j++)
        {
            int b; cin >> b;
        }
    }
 
    cout << (a*a)*(a*a+1)/2 << endl;
}*/
 
/*int main()
{
    ll a,b,c; cin >> a >> b >> c;
    ll d,e,f; cin >> d >> e >> f;
 
    bool c1=(a+d)%2;
    bool c2=(b+e)%2;
    bool c3=(c+f)%2;
 
    if(c1 && c2 && c3)
    {
        cout << 0;
    }
    else if(!c1 && !c2 && !c3)
    {
        cout << 0;
    } else
    {
        cout << 1;
    }
}*/
 
// 8 OSN 2007 Sesi 2 (pecahan biasa ke campuran)
/*int main()
{
    string s; cin >> s;
    int f = s.find('/');
    int t1 = stoi(s);
    s.erase(0,f+1);
    int t2 = stoi(s);
    int fpb = __gcd(t1,t2);
    t1 = t1/fpb;
    t2 = t2/fpb;
    if(t1/t2 <=0)
    {
        cout << t1 << "/" << t2;
    }
    else
    {
        cout << t1/t2 << " " << t1-(t1/t2)*t2 << "/" << t2;
    }
}*/
 
// kartu 2
/*int main()
{
    int n; cin >> n;
    int k; cin >> k;
    int ans=1,a[k];
 
    for(int i=0; i<k; i++)
    {
        string s; cin >> s;
        a[i] = stoi(s);
    }
 
    for(int i=1; i<k; i++)
    {
        if(a[i] < a[i-1])
        {
            ans++;
            break;
        }
        ans++;
    }
    cout << ans;
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i%2==0 && j%2==0)
            {
                cout << "#";
            }
            else if(i%2==1 && j%2==1)
            {
                cout << "*";
            }
            else
            {
                cout << "$";
            }
        }
        cout << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    int maju,mundur,kanan,kiri;
    maju = mundur = kanan = kiri = 0;
    int mx1,mx2,p=0,l=0,mn1,mn2;
    mx1 = mx2 = INT_MIN;
    mn1 = mn2 = INT_MAX;
    for(int i=0; i<n; i++)
    {
        string s; cin >> s;
        int x; cin >> x;
        if(s=="maju")
        {
            p+=x;
            mx1 = max(mx1,p);
            mn1 = min(mn1,p);
        }
        if(s=="mundur")
        {
            p-=x;
            mx1 = max(mx1,p);
            mn1 = min(mn1,p);
        }
        if(s=="kanan")
        {
            l+=x;
            mx2 = max(mx2,l);
            mn2 = min(mn2,l);
        }
        if(s=="kiri")
        {
            l-=x;
            mx2 = max(mx2,l);
            mn2 = min(mn2,l);
        }
    }
 
    p=0;
    l=0;
    if(mx1>0)
    {
        p+=mx1;
    }
    if(mn1<0)
    {
        p+=abs(mn1);
    }
    if(mx2>0)
    {
        l+=mx2;
    }
    if(mn2<0)
    {
        l+=abs(mn2);
    }
 
 
    if(p>l)
    {
        cout << p << " " << l;
    }
    else
    {
        cout << l << " " << p;
    }
}*/
 
/*int main()
{
    int w,h; cin >> w >> h;
    int n; cin >> n;
    int arr[h+1][w+1];
    memset(arr,0,sizeof(arr));
    for(int i=0; i<n; i++)
    {
        int a,b,c,d,k; cin >> a >> b >> c >> d >> k;
        for(int x=b; x<=d; x++)
        {
            for(int y=a; y<=c; y++)
            {
                arr[x][y] = k;
            }
        }
    }
 
    for(int x=1; x<=h; x++)
    {
        for(int y=1; y<=w; y++)
        {
            cout << arr[x][y];
        }
        cout << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,m,k,v; cin >> n >> m >> k >> v;
        int h[n],ans=0;
        for(int i=0; i<n; i++)
        {
            cin >> h[i];
            if(v!=h[i] && abs(v-h[i])%k == 0 && abs(v-h[i])/k < m)
            {
                ans++;
            }
        }
        cout << ans << endl;
 
    }
}*/
 
/*int main()
{
    ll n,ans=0; cin >> n;
    ll a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        ans+=n*a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
        ans+=n*b[i];
    }
 
    cout << ans << endl;
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    if(n%4==0 && m%4==0)
    {
        cout << "Yes" << endl;
    } else
    {
        cout << "No" << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    set<int>s;
    for(int i=0; i<n; i++)
    {
        int a; cin >> a;
        s.insert(a);
    }
    if(s.size()==1)
    {
        cout << 1;
    }
    else if(s.size() == n)
    {
        cout << n;
    } else{cout << n-1;}
}*/
 
/*int main()
{
    start;
    cin.tie(0);cout.tie(0);
 
    string s; int x; cin >> s >> x;
    int n,k,q; cin >> n >> k >> q;
    vector <int> v;
    if(k==2)
    {
        string resp;
        for(int i=1; i<=n; i++)
        {
            cout << 2 << " " << i << " " << n+1 << endl;
            cin >> resp;
            if(resp=="bisajadi"){v.push_back(i);}
        }
        cout << v.size() << " ";
        for(int i: v){cout << i << " ";};
        cout << endl;
        cin >> resp;
        if(resp=="ya"){return 0;}
    }
    if(q>=n+1)
    {
        string resp;
        for(int i=1; i<=n; i++)
        {
            cout << 1 << " " << i << endl;
            cin >> resp;
            if(resp=="ya"){cout << 1 << " " << i << endl; return 0;}
            else if(resp=="bisajadi"){v.push_back(i);}
        }
        cout << v.size() << " ";
        for(int i: v) {cout << i << " ";}
        cout << endl;
        cin >> resp;
        if(resp=="ya"){return 0;}
    }
 
    int l=1,r=n,ans=-1;
    string resp;
    while(l<=r)
    {
        int m = (l+r)/2;
        cout << 1 << " " << m << endl;
        cin >> resp;
        if(resp=="bisajadi")
        {
            ans = m;
            l = m+1;
        }
        else if(resp=="tidak")
        {
            r = m-1;
        }
        else
        {
            return 0;
        }
    }
    cout << ans << " ";
    for(int i=1; i<=ans; i++){cout << i << " ";}
    cout << endl;
    cin >> resp;
    if(resp == "ya"){return 0;}
 
    return 0;
}*/
 
/*int main()
{
    ll n,q; cin >> n >> q;
    ll awal=0,akhir=0;
    while(q--)
    {
        ll x,y,z; cin >> x >> y >> z;
        if(x==1)
        {
            if(y==n)
            {
                awal+=z;
                akhir+=z;
            }
            else
            {
                awal+=z;
            }
        }
        else if(x==2)
        {
            if(y==n)
            {
                awal-=z;
                akhir-=z;
            }
            else
            {
                akhir-=z;
            }
        }
    }
 
    cout << max(abs(awal),abs(akhir)) << endl;
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    bool flag=0;
 
    for(int i=0; i<n; i++)
    {
        for(int i=0; i<m; i++)
        {
            int x; cin >> x;
            if(x==1)
            {
                flag = 1;
            }
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    pair <int,int> p[n];
    for(int i=0; i<n; i++)
    {
        int x,y; cin >> x >> y;
        p[i] = {x+y,x};
    }
 
    sort(p,p+n);
 
    int cnt=0;
    int startTime=0;
    for(int i=0; i<n; i++)
    {
        if(p[i].second >= startTime)
        {
            cnt++;
            startTime = p[i].first;
        }
    }
    cout << cnt << endl;
}*/
 
/*int main()
{
    int n; cin >> n;
    string s1,s2; cin >> s1 >> s2;
    int cnt=0;
    bool flag=0;
    for(int i=0; i<n; i++)
    {
        if(s1[i] > s2[i])
        {
            if(flag == 0)
            {
                cnt++;
                flag = 1;
            }
 
        }
        else if(s1[i] < s2[i])
        {
            flag = 0;
        }
    }
    cout << cnt << endl;
}*/
 
/*int main()
{
    string sub; cin >> sub;
    int z; cin >> z;
    int n; cin >> n;
    int idx[1001];
    int ans[n+1];
    pair <int,int> p[n+1];
    for(int i=1; i<=n; i++)
    {
        int t,a,b; cin >> t >> a >> b;
        idx[t] = i;
        p[i] = {t,a+1};
    }
    sort(p,p+n+1);
    for(int i=1; i<=n; i++)
    {
        ans[i] = p[i].fi;
        int j = i;
        while(p[i].se != j)
        {
            swap(ans[j], ans[j-1]);
            j--;
        }
    }
 
    for(int i=1; i<=n; i++)
    {
        cout << idx[ans[i]] << " ";
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++){cin >> v[i];}
 
    int acc=(accumulate(v.begin(),v.end(),0)+1)/2;
    int cur=0,x;
    for(int i=n-1; i>=0; i--)
    {
        cur+=v[i];
        if(cur>acc)
        {
            x = v[i];
            break;
        }
    }
    cout << (x<acc ? "YES" : "NO") << endl;
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        char c; cin >> c;
        if(c=='c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='r'||c=='s')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    bool flag=0;
    int x=0,y=0;
    while(t--)
    {
        int n; cin >> n;
        for(int i=0; i<n; i++)
        {
            char c; cin >> c;
            if(c=='U')
            {
                y++;
            }
            if(c=='D')
            {
                y--;
            }
            if(c=='R')
            {
                x++;
            }
            if(c=='L')
            {
                x--;
            }
            if(x==1 && y==1)
            {
                flag = 1;
            }
        }
            if(flag)
            {
            cout << "YES" << endl;
            }
            else
            {
            cout << "NO" << endl;
            }
            x=0;
            y=0;
            flag = 0;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int i=0,z=n-1,cnt=0;
        int p1=s[i];
        int p2=s[z];
        bool flag = 0;
        while(p1!=p2)
        {
            i++;
            z--;
            p1=s[i];
            p2=s[z];
            cnt+=2;
            if(cnt>=n)
            {
                flag = 1;
            }
        }
        if(flag)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n-cnt << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        ll sum=0,cnt=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            if(v[i] < 0)
            {
                v[i] = -v[i];
                cnt++;
            }
            sum+=v[i];
        }
 
        sort(v.begin(),v.end());
        if(cnt%2==1)
        {
            sum -= 2*v[0];
        }
 
        cout << sum << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a,b,c; cin >> a >> b >> c;
        if(a+b==c)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int m=0,b=0;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            if(x%2==0)
            {
                m+=x;
            }
            else
            {
                b+=x;
            }
        }
        if(m>b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if(s.length()==1)
        {
            cout << "YES" << endl;
            continue;
        }
        bool flag = 1;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(s[i] == s[j])
                {
                    if((i+j)%2==1)
                    {
                        flag = 0;
                    }
                }
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n,q; cin >> n >> q;
        ll arr[n+1];
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<q; i++)
        {
            ll x,y,k; cin >> x >> y >> k;
            ll sum=0;
            for(int i=1; i<=n; i++)
            {
                if(i>=x && i<=y)
                {
                    sum+=k;
                }
                else
                {
                    sum+=arr[i];
                }
            }
            if(sum%2==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        int a,b; cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    ll prev=0,ans=0;
 
    for(int i=0; i<v.size(); i++)
    {
        prev = v[i].second;
        int j=i+1;
        while(v[j].first <= prev)
        {
            j++;
        }
        i=j-1;
        ans++;
    }
    cout << ans << endl;
}*/
 
/*int main()
{
    int n; cin >> n;
    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        ll a,b; cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
 
    ll prev=0,mx=INT_MIN,ans=0;
    for(int i=0; i<n; i++)
    {
        prev = v[i].second;
        ll tmp=0;
        ll j=i;
        while(v[j].first<=prev && j<n)
        {
            j++;
            tmp++;
        }
        if(tmp>mx)
        {
            ans = v[i].first;
            mx = tmp;
        }
        i=j-1;
    }
    cout << ans << endl;
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int ans=0;
        string c = {"codeforces"};
        for(int i=0; i<10; i++)
            {
                if(s[i]!=c[i])
                {
                    ans++;
                }
            }
            cout << ans << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <int> v(n);
        int mx=0,tmp=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                tmp++;
                mx = max(mx,tmp);
            }
            else
            {
                tmp=0;
            }
        }
        cout << mx << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll mn1=2e10+10,mn2=2e10+10,mn3=2e10+10;
        for(int i=0; i<n; i++)
        {
            ll a; cin >> a;
            string b; cin >> b;
            if(b=="11")
            {
                mn3 = min(mn3,a);
            }
            else if(b=="01")
            {
                mn1 = min(mn1,a);
            }
            else if(b=="10")
            {
                mn2 = min(mn2,a);
            }
        }
        ll ans = min(mn3,mn2+mn1);
        if(ans >=2e10+10)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n][n];
        int mx=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i=n; i>=1; i--)
        {
            for(int j=1; j<=i-1; j++)
            {
                a[i-1][j] = max(a[i-1][j]+a[i][j],a[i-1][j]+a[i][j+1]);
            }
        }
        cout << a[1][1] << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        int neg=0,ans=1;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            ans*=a[i];
            if(a[i] < 0)
            {
                neg++;
            }
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(abs(a[i])>abs(a[j]))
                {
                    swap(a[i],a[j]);
                }
            }
        }
        if(n==5)
        {
            cout << ans << endl;
        }
        else
        {
            if(neg%2==0)
            {
                ans = 1;
                for(int i=n-1; i>=n-5; n--)
                {
                    ans*=a[i];
                }
            }
            else
            {
                ans = 1;
 
            }
        }
    }
}*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;



void cin_massive(int s[],int a)
{
    for(int h = 0;h < a;++h)
        cin >> s[h];
}
void cout_massive(int y[],int u,string d)
{
    for(int h = 0;h < u;++h)
    {
        cout << y[h];
        if(h < u - 1)
            cout << d;
    }
}
void cin_massive_string(string s[],int a)
{
    for(int h = 0;h < a;++h)
        cin >> s[h];
}
void cout_massive_string(string y[],int u,string d)
{
    for(int h = 0;h < u;++h)
    {
        {
        cout << y[h];
        if(h > u - 1)
            cout << d;
        }
    }
}
void byn_is_massive(int h[],int f,int j)
{
    for(int hg = 0;hg < f;++hg)
        h[hg] = h[hg] + j;
}

/*
int main() if(ace % sda != 0)
    qef = qef + 1;
 if(er % sda != 0)
   kol = kol + 1;
{
 int ace;
 int er = 0;
 int sda = 5;
 int qty = 0;
 cin >> ace;
 for (;er + sda <= ace;)
 {
er = er + sda;
qty = qty + 1;
 }
 if(er != ace)
 qty = qty + 1;
cout << qty;
 }
 */
/*
int main()
{
    int a;
    cin >> a;
    cout << (a+4)/5;
}
*/
/*
int main()
{
int ace;
int er;
int sda
int as = 0;
cin >> ace >> er >> sda;
as = as + ace*er*sda;
if(ace == 1)
as = as + sda;
else if(er == 1)
as = as + max(ace,(er,sda));
else if(sda == 1)
as = as + ace;
else if(ace == 1 && er == 1)
as = as + 2;
if(ace == 1 && er == 1 && sda == 1)
as = 3;
if (ace == 1 && sda == 1)
as = ace + er + sda;
cout << as;
return 0;
}
*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int as = 0;
  int sos = 1;
  cin >> ace >> er >> sda;
  for(;sos < sda + 1;)
  {
as = as + sos;
sos = sos + 1;
  }
 as = as*ace;
 as = as - er;
 if (as < 0)
 cout << 0;
 else
 cout << as;
 return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int big;
    cin >> ace >> er;
    big = ace;
    int sda = 0;
    int sd = 0;
    int ert = 0;
    if(ace < er)
        cout << ace;
    else if(ace == er)
        cout << ace + 1;
    else if(ace > er)
    {
        for(;ace > er;)
        {
            if(ace <= er && ace %er != 0)
                sda = sda + 2;
            if(ert == 0 || ace <= er && ace %er != 0)
                sda = sda + ace;
            if(ace > er)
                sda = sda + ace/er;
         if(ace %2 == 1)
            ace = ace + 1;
            ace = ace/er;
        ert = 1;
        }
        cout << sda;
    }
return 0;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda = 0;
cin >> ace >> er;
if(ace < er)
cout << ace;
if(ace == er)
cout << ace + 1;
if(ace > er)
{
sda = ace/er;
ace = ace + ace/er;
ace = ace + sda/er;
cout << ace;
}
return 0;
}
*/
/*
int main()
{
 string s;
 int ace;
    cin >> s;
 if (s[0] > 90)
 s[0] = s [0] - 32;
 cout << s;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
 int wef;
 int kol;
 int weft;
 int sdak;
 cin >> ace;
 weft = ace;
 er = ace % 10;
 ace = ace/10;
 sda = ace % 10;
 ace = ace/10;
 wef = ace % 10;
 ace = ace/10;
 kol = ace;
for(;;)
{
 weft = weft + 1;
 sdak = weft;
 er = sdak % 10;
 sdak = sdak/10;
 sda = sdak % 10;
 sdak = sdak/10;
 wef = sdak % 10;
 sdak = sdak/10;
 kol = sdak;
 if(er != sda && er != wef && er != kol && sda != wef && sda != kol && wef != kol)
 {
  break;
 }
}
cout << weft;
return 0;
}
*/
/*
int main()
{
 string s;
 int ace;
    cin >> s;
ace = s.size();
if(s == "wjmzbmr")
cout << "CHAT WITH HER!";
else if(ace % 2 == 1)
cout << "IGNORE HIM!";
else
cout << "CHAT WITH HER!";
}
*/
/*
int main()
{
 int ace;
 int sda;
 int er;
 int wef;
 cin >> ace >> sda >> er >> wef;
 if(ace != sda && ace != er && ace != wef && sda != er && sda != wef && er != wef)
 cout << 0;
 if(ace == sda && ace != er && ace != wef && er != wef || ace == er && ace != sda && ace != wef && sda != wef || ace == wef && ace != sda && ace != er && er != sda || sda == er && sda != wef && sda != ace && wef != ace || sda == wef && sda != er && sda != ace && er != ace || er == wef && er != sda && er != ace && sda != ace)
 cout << 1;
else if(ace == sda && ace == er && ace != wef || ace == sda && ace == wef && ace != er || ace == er && ace == wef && ace != sda || sda == er && sda == wef && sda != ace)
 cout << 2;
else if(ace == sda && er == wef && ace != er || ace == er && sda == wef && ace != sda || ace == wef && sda == er && ace != sda)
cout << 2;
else if(ace == sda && ace == er && ace == wef)
 cout << 3;
 return 0;
}
*/
/*
int main()
{
  int ace;
  int sda = 0;
  int ghoiu = 0;
  string s [300];
  string ss;
  cin >> ace;
  int ty = ace - 1;
  for(;ty > -1;)
  {
   cin >> s[ty];
   ty = ty - 1;
  }
  for(;ace > 0;)
  {
    if(s[ghoiu] == "X++" || s[ghoiu] == "++X")
    sda = sda + 1;
    else if(s[ghoiu] == "X--" || s[ghoiu] == "--X")
    sda = sda - 1;
    ace = ace - 1;
    ghoiu = ghoiu + 1;
  }
  cout << sda;
  return 0;
}
*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int wef;
  int kol;
  int qef;
    cin >> ace >> er >> sda;
 wef = ace*er;
 kol = sda*sda;
 qef = wef/kol;
 if(wef%kol != 0)
 cout << qef + 1;
 else if(wef%kol == 0)
 cout << qef;
 return 0;
}
*/
/*
int main()
{
 int ace [100];
 int sda = 0;
 int k;
 int swe = 0;
 int h;
 cin >> h >> k >> ace [100];
 int d = k;
 if(h == 0 || k == 0);
 cout << 0;
 for(;;)
 {
 if(ace[sda] <= 0);
 {
  cout << 0;
  break;
 }
 if(swe == 0);
 d = d - 1;
 if(ace[d] != ace[d+1]);
 {
 cout << k;
 break;
 }
 k = k + 1;
 swe = 1;
 sda = sda + 1;
 }







*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int qer;
  int kol;
  int wef = 0;
    cin >> ace >> er >> sda >> qer >> kol;
   for(;kol > 0;)
  {
  if(kol % qer == 0 || kol % sda == 0 || kol % er == 0 || kol % ace == 0)
  wef = wef + 1;
  kol = kol - 1;
  }
    cout << wef;
    return 0;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
 int64_t qef = 0;
 int kol = 0;
 cin >> ace >> er >> sda;
 qef = ace/sda;
 kol = er/sda;
  if(ace % sda != 0)
    qef = qef + 1;
 if(er % sda != 0)
   kol = kol + 1;
 qef = qef*kol;
 cout << qef;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
    cin >> ace >> er >> sda;
 er = er + sda;
 for(;er <= 0 || er > ace;)
 {
if(er <= 0)
 er = er + ace;
if(er > ace)
 er = er - ace;
 }
cout << er;
return 0;
}
*/
/*
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    reverse(s1.begin(),s1.end());
 if(s1 == s2)
    cout << "YES";
else if(s1 != s2)
    cout << "NO";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    if(ace > er)
    {
        ace = ace - er;
        ace = ace/2;
        cout << er << " " << ace;
    }
    else if(ace < er)
    {
        er = er - ace;
        er = er/2;
        cout << ace << " " << er;
    }
    else if(ace == er)
    cout << er << " " << 0;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    int qef = 0;
    string s;
    cin >> ace >> s;
    for(;ace > 0;)
    {
         if(s[qef] == 'A')
         er = er + 1;
         if(s[qef] == 'D')
         sda = sda + 1;
         qef = qef + 1;
         ace = ace - 1;
    }
    if(sda > er)
    cout << "Danik";
    if(er > sda)
    cout << "Anton";
    if(er == sda)
    cout << "Friendship";
    return 0;
}
*/










/*
int main() if(ace % sda != 0)
    qef = qef + 1;
 if(er % sda != 0)
   kol = kol + 1;
{
 int ace;
 int er = 0;
 int sda = 5;
 int qty = 0;
 cin >> ace;
 for (;er + sda <= ace;)
 {
er = er + sda;
qty = qty + 1;
 }
 if(er != ace)
 qty = qty + 1;
cout << qty;
 }
 */
/*
int main()
{
    int a;
    cin >> a;
    cout << (a+4)/5;
}
*/
/*
int main()
{
int ace;
int er;
int sda
int as = 0;
cin >> ace >> er >> sda;
as = as + ace*er*sda;
if(ace == 1)
as = as + sda;
else if(er == 1)
as = as + max(ace,(er,sda));
else if(sda == 1)
as = as + ace;
else if(ace == 1 && er == 1)
as = as + 2;
if(ace == 1 && er == 1 && sda == 1)
as = 3;
if (ace == 1 && sda == 1)
as = ace + er + sda;
cout << as;
return 0;
}
*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int as = 0;
  int sos = 1;
  cin >> ace >> er >> sda;
  for(;sos < sda + 1;)
  {
as = as + sos;
sos = sos + 1;
  }
 as = as*ace;
 as = as - er;
 if (as < 0)
 cout << 0;
 else
 cout << as;
 return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int big;
    cin >> ace >> er;
    big = ace;
    int sda = 0;
    int sd = 0;
    int ert = 0;
    if(ace < er)
        cout << ace;
    else if(ace == er)
        cout << ace + 1;
    else if(ace > er)
    {
        for(;ace > er;)
        {
            if(ace <= er && ace %er != 0)
                sda = sda + 2;
            if(ert == 0 || ace <= er && ace %er != 0)
                sda = sda + ace;
            if(ace > er)
                sda = sda + ace/er;
         if(ace %2 == 1)
            ace = ace + 1;
            ace = ace/er;
        ert = 1;
        }
        cout << sda;
    }
return 0;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda = 0;
cin >> ace >> er;
if(ace < er)
cout << ace;
if(ace == er)
cout << ace + 1;
if(ace > er)
{
sda = ace/er;
ace = ace + ace/er;
ace = ace + sda/er;
cout << ace;
}
return 0;
}
*/
/*
int main()
{
 string s;
 int ace;
    cin >> s;
 if (s[0] > 90)
 s[0] = s [0] - 32;
 cout << s;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
 int wef;
 int kol;
 int weft;
 int sdak;
 cin >> ace;
 weft = ace;
 er = ace % 10;
 ace = ace/10;
 sda = ace % 10;
 ace = ace/10;
 wef = ace % 10;
 ace = ace/10;
 kol = ace;
for(;;)
{
 weft = weft + 1;
 sdak = weft;
 er = sdak % 10;
 sdak = sdak/10;
 sda = sdak % 10;
 sdak = sdak/10;
 wef = sdak % 10;
 sdak = sdak/10;
 kol = sdak;
 if(er != sda && er != wef && er != kol && sda != wef && sda != kol && wef != kol)
 {
  break;
 }
}
cout << weft;
return 0;
}
*/
/*
int main()
{
 string s;
 int ace;
    cin >> s;
ace = s.size();
if(s == "wjmzbmr")
cout << "CHAT WITH HER!";
else if(ace % 2 == 1)
cout << "IGNORE HIM!";
else
cout << "CHAT WITH HER!";
}
*/
/*
int main()
{
 int ace;
 int sda;
 int er;
 int wef;
 cin >> ace >> sda >> er >> wef;
 if(ace != sda && ace != er && ace != wef && sda != er && sda != wef && er != wef)
 cout << 0;
 if(ace == sda && ace != er && ace != wef && er != wef || ace == er && ace != sda && ace != wef && sda != wef || ace == wef && ace != sda && ace != er && er != sda || sda == er && sda != wef && sda != ace && wef != ace || sda == wef && sda != er && sda != ace && er != ace || er == wef && er != sda && er != ace && sda != ace)
 cout << 1;
else if(ace == sda && ace == er && ace != wef || ace == sda && ace == wef && ace != er || ace == er && ace == wef && ace != sda || sda == er && sda == wef && sda != ace)
 cout << 2;
else if(ace == sda && er == wef && ace != er || ace == er && sda == wef && ace != sda || ace == wef && sda == er && ace != sda)
cout << 2;
else if(ace == sda && ace == er && ace == wef)
 cout << 3;
 return 0;
}
*/
/*
int main()
{
  int ace;
  int sda = 0;
  int ghoiu = 0;
  string s [300];
  string ss;
  cin >> ace;
  int ty = ace - 1;
  for(;ty > -1;)
  {
   cin >> s[ty];
   ty = ty - 1;
  }
  for(;ace > 0;)
  {
    if(s[ghoiu] == "X++" || s[ghoiu] == "++X")
    sda = sda + 1;
    else if(s[ghoiu] == "X--" || s[ghoiu] == "--X")
    sda = sda - 1;
    ace = ace - 1;
    ghoiu = ghoiu + 1;
  }
  cout << sda;
  return 0;
}
*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int wef;
  int kol;
  int qef;
    cin >> ace >> er >> sda;
 wef = ace*er;
 kol = sda*sda;
 qef = wef/kol;
 if(wef%kol != 0)
 cout << qef + 1;
 else if(wef%kol == 0)
 cout << qef;
 return 0;
}
*/
/*
int main()
{
 int ace [100];
 int sda = 0;
 int k;
 int swe = 0;
 int h;
 cin >> h >> k >> ace [100];
 int d = k;
 if(h == 0 || k == 0);
 cout << 0;
 for(;;)
 {
 if(ace[sda] <= 0);
 {
  cout << 0;
  break;
 }
 if(swe == 0);
 d = d - 1;
 if(ace[d] != ace[d+1]);
 {
 cout << k;
 break;
 }
 k = k + 1;
 swe = 1;
 sda = sda + 1;
 }







*/
/*
int main()
{
  int ace;
  int er;
  int sda;
  int qer;
  int kol;
  int wef = 0;
    cin >> ace >> er >> sda >> qer >> kol;
   for(;kol > 0;)
  {
  if(kol % qer == 0 || kol % sda == 0 || kol % er == 0 || kol % ace == 0)
  wef = wef + 1;
  kol = kol - 1;
  }
    cout << wef;
    return 0;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
 int64_t qef = 0;
 int kol = 0;
 cin >> ace >> er >> sda;
 qef = ace/sda;
 kol = er/sda;
  if(ace % sda != 0)
    qef = qef + 1;
 if(er % sda != 0)
   kol = kol + 1;
 qef = qef*kol;
 cout << qef;
}
*/
/*
int main()
{
 int ace;
 int er;
 int sda;
    cin >> ace >> er >> sda;
 er = er + sda;
 for(;er <= 0 || er > ace;)
 {
if(er <= 0)
 er = er + ace;
if(er > ace)
 er = er - ace;
 }
cout << er;
return 0;
}
*/
/*
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    reverse(s1.begin(),s1.end());
 if(s1 == s2)
    cout << "YES";
else if(s1 != s2)
    cout << "NO";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    if(ace > er)
    {
        ace = ace - er;
        ace = ace/2;
        cout << er << " " << ace;
    }
    else if(ace < er)
    {
        er = er - ace;
        er = er/2;
        cout << ace << " " << er;
    }
    else if(ace == er)
    cout << er << " " << 0;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    int qef = 0;
    string s;
    cin >> ace >> s;
    for(;ace > 0;)
    {
         if(s[qef] == 'A')
         er = er + 1;
         if(s[qef] == 'D')
         sda = sda + 1;
         qef = qef + 1;
         ace = ace - 1;
    }
    if(sda > er)
    cout << "Danik";
    if(er > sda)
    cout << "Anton";
    if(er == sda)
    cout << "Friendship";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int fff = 0;
    int sda = 0;
    string s[200000];
    cin >> ace;
    int r = ace;
    for(;r > 0;)
     {
         cin >> s[fff];
        fff = fff + 1;
        r = r - 1;
     }
    for(;ace > 0;)
    {
        if(s[er][0] == 'T')
        sda = sda + 4;
       else if(s[er][0] == 'C')
        sda = sda + 6;
       else if(s[er][0] == 'O')
        sda = sda + 8;
       else if(s[er][0] == 'D')
        sda = sda + 12;
       else if(s[er][0] == 'I')
        sda = sda + 20;
        er = er + 1;
        ace = ace - 1;
    }
    cout << sda;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int a[10];
    int s = 5;
    int qef = 0;
    int kol;
    int wef = 0;
    cin >> ace >> kol;
    int d = ace;
     int er = ace;
    int sda = ace;
    wef = wef + kol;
    a[0] = 5;
    a[1] = 10;
    a[2] = 15;
    a[3] = 20;
    a[4] = 25;
    a[5] = 30;
    a[6] = 35;
    a[7] = 40;
    a[8] = 45;
    a[9] = 50;
    if(wef > 240)
    cout << 0;
    else if(wef <= 240)
    for(;ace > 0;)
    {
    wef = wef + s;
    s = s + 5;
    ace = ace - 1;
    }
    if(wef <= 240)
    cout << er;
    if(wef > 240)
    {
      for(;;)
      {
          qef = qef + 1;
          wef = wef - a[d - 1];
          if(wef <= 240)
          {
             sda = sda - qef;
             qef = qef - 1;
             break;
          }
          d = d - 1;
      }
      cout << sda;
      return 0;
    }
}
*/
/*
int main()
{
    int ace = 0;
    int sd;
    int ds = 0;
    int l = 0;
    int d = 0;
    int f = 0;
    int b = 0;
    string s;
    int er = 0;
    cin >> s;
    int sda = s.size();
    for(;sda > 0;)
    {
        if(s[ds] > 90)
            ace = ace + 1;
        else if(s[ds] <= 90)
            er = er + 1;
        ds = ds + 1;
        sda = sda - 1;
    }
    if(ace >= er)
        for(;d < s.size();)
        {
           if(s[l] <= 90)
            s[l] = s[l] + 32;
            d = d + 1;
            l = l + 1;
        }
        if(ace < er)
            for(;b < s.size();)
            {
              if(s[f] > 90)
                s[f] = s[f] - 32;
                f = f + 1;
                b = b + 1;
            }
            cout << s;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    int qef = 1;
    int kol = 0;
    cin >> ace >> er >> sda;
    for(;qef <= sda;)
    {
        if(qef % ace == 0 && qef % er == 0)
            kol = kol + 1;
            qef = qef + 1;
    }
    cout << kol;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    if(er - ace != 1 && er - ace != 0 && ace - er != 1 && ace - er != 0)
        cout << "NO";
    else if(er - ace == 1 || ace - er == 1)
        cout << "YES";
        else if(ace == 0 && er == 0)
         cout << "NO";
    else if(ace == er)
        cout << "YES";
    else
        cout << "NO";
        return 0;
}
*/
/*
int main()
{
   int64_t ace;
   cin >> ace;
   if(ace == 0)
    cout << 1;
   else if(ace % 4 == 0)
    cout << 6;
   else if((ace - 1) % 4 == 0)
    cout << 8;
   else if((ace - 2) % 4 == 0)
    cout << 4;
   else if((ace - 3) % 4 == 0)
    cout << 2;
    else
     cout << "NO";
     return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    int qef;
    int kol;
    int wef;
    int der;
    cin >> ace >> er >> sda >> qef;
    kol = min(ace,min(sda,qef));
    ace = ace - min(ace,min(sda,qef));
    wef = min(ace,er);
    kol = kol*256;
    wef = wef*32;
    der = kol + wef;
    cout << der;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda = 0;
    cin >> ace >> er;
    for(;ace <= er;)
    {
        ace = ace*3;
        er = er*2;
        sda = sda + 1;
    }
    cout << sda;
    return 0;
}
*/
/*
int main()
{
    int64_t ace = 2;
    int er;
    int64_t sda = 0;
    int qef = 0;
    cin >> er;
    for(;qef < er;)
    {
        sda = sda + ace;
        ace = ace*2;
        qef = qef + 1;
    }
    cout << sda;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int64_t er = 0;
    cin >> ace;
    for(;ace > 0;)
    {
        if(ace == 1000000000)
            er = er + 10;
       else if(ace >= 100000000)
            er = er + 9;
       else if(ace >= 10000000)
            er = er + 8;
       else if(ace >= 1000000)
            er = er + 7;
       else if(ace >= 100000)
            er = er + 6;
       else if(ace >= 10000)
            er = er + 5;
       else if(ace >=1000)
            er = er + 4;
       else if(ace >= 100)
            er = er + 3;
       else if(ace >= 10)
            er = er + 2;
       else if(ace < 10)
            er = er + 1;
            ace = ace - 1;
    }
    cout << er;
    return 0;
}
*/
/*
int main()
{

    int er;
    int wer = 0;
    int sd = 0;
    int qwe = 0;
    int wet = 0;
    int wef = 0;
    int e = 0;
    int d = 0;
    cin >> er;
    int i = er;
    int ee = er;
    int iop = er;
    int ace[er];
    int sda[i - 1];
    int qef[ee - 2];
    int ftg = er;
    for(;er > 0;)
    {
        cin >> ace[d];
        d = d + 1;
        er = er - 1;
    }
    for(;i - 1 > 0;)
    {
       cin >> sda[sd];
       sd = sd + 1;
       i = i - 1;
    }
    for(;ee - 2 > 0;)
    {
        cin >> qef[wer];
        ee = ee - 1;
        wer = wer + 1;
    }
    for(;ftg > 0;)
    {
        qwe = qwe + ace[e] + ace [e + 1];
        cout << qwe;
        ftg = ftg - 1;
        if(ftg == 0)
         break;
         if(iop > e)
        wet = wet + sda[e] + sda [e + 1];
         if(iop == e)
              wet = wet + sda[e];
        ftg = ftg - 1;
        if(ftg == 0)
          break;
        if(iop > e)
        wef = wef + qef[e] + qef [e + 1];
        if(iop == e)
         wef = wef + qef[e];
        e = e + 2;
    }
    qwe = qwe - wet;
    wet = wet - wef;
    cout << qwe <<'\n'; wet;
    return 0;
}
*/
/*
int main()
{
    int er = 8;
    string s;
    cin >> s;
    if(s[0] == 'a' || s[0] == 'h')
        er = er - 3;
    if(s[1] == '1' && er == 8 || s[1] == '8' && er == 8)
        cout << 5;
    else if(s[1] == '1' && er == 5 || s[1] == '8' && er == 5)
        cout << 3;
        else
    cout << er;

}
*/
/*
int main()
{
    int ace;
    int we = 0;
    cin >> ace;
    int sda = ace;
    int er[ace];
    for(;sda > 0;)
    {
        cin >> er[we];
        we = we + 1;
        sda = sda - 1;
    }
      if(ace >= 1 && er[ace - 1] == 15)
        cout << "DOWN";
      else if(ace >= 1 && er[ace - 1] == 0)
        cout << "UP";
    else if(ace == 1)
        cout << -1;
    else if(ace > 1 && er[ace - 2] - er[ace - 1] == -1)
        cout << "UP";
    else if(ace > 1 && er[ace - 2] - er[ace - 1] == 1)
        cout << "DOWN";
        return 0;
}
*/
/*
int main()
{
    string s;
    char r = '.';
    cin >> s;
    int er = 0;
    int ace = s.size();
    for(;ace > 0;--ace)
    {
        if(s[er] == 69 || s[er] == 65 || s[er] == 63 || s[er] == 117 || s[er] == 85 || s[er] == 89 || s[er] == 79 || s[er] == 121 || s[er] == 111 || s[er] == 97 || s[er] == 101 || s[er] == 105);
            s[er] = '.';

    }

}
*/
/*
int main()
{
    int64_t ace;
    cin >> ace;
    if(ace % 2 == 0)
        cout << ace/2;
    else
        cout << (ace + 1)/2 - ace - 1;
    return 0;
}
*/
/*
int main()
{
   int er;
   int ace;
   int fg = 0;
   int d = 0;
   int f = 0;
    cin >> er >> ace;
    int de = er;
    int sda[er];
    for(;er > 0;--er)
    {
        cin >> sda[d];
        d = d + 1;
    }
    for(;de > 0;)
    {
        sda[f] = sda[f] + ace;
        if(sda[f] <= 5)
            fg = fg + 1;
        f = f + 1;
        de = de - 1;
    }
    fg = fg/3;
    cout << fg;
    return 0;
}
*/
/*
int main()
{
    int ace = 0;
    int sda = 0;
    int d = 5;
    int e = 5;
    int er[5][5];
    for(int w = 0;w < 5;++w)
    {
        for(int we = 0;we < 5;++we)
        {
            cin >> er[w][we];
        }
    }
    if(er[0][0] == 1||er[0][4] == 1||er[4][0] == 1||er[4][4] == 1)
        cout << 4;
    if(er[0][1] == 1||er[1][0] == 1||er[3][0] == 1||er[0][3] == 1||er[4][1] == 1||er[1][4] == 1||er[4][3] == 1||er[3][4] == 1)
        cout << 3;
    if(er[0][2] == 1||er[2][0] == 1||er[1][1] == 1||er[3][3] == 1||er[4][2] == 1||er[2][4] == 1||er[1][3] == 1||er[3][1] == 1)
        cout << 2;
    if(er[2][1] == 1||er[1][2] == 1||er[3][2] == 1||er[2][3] == 1)
        cout << 1;
    if(er[2][2] == 1)
        cout << 0;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int ert = 0;
    int w = 0;
    int frr = 0;
    int er;
    int sda = 0;
    int f = 0;
    cin >> ace >> er;
    int qef[ace];
    for(int s = ace;s > 0;--s)
    {
        cin >> qef[sda];
        sda = sda + 1;
    }
    for(int e = ace - 1;e > 0;--e)
    {
        qef[0] = qef[0] + qef[f + 1];
        f = f + 1;
    }
    frr = frr + qef[0];
    if(qef[0] == 0)
    {
        cout << 0;
        return 0;
    }
    if(qef[0] > 0)
        for(;qef[0] > 0;)
    {
        qef[0] = qef[0] - er;
        ert = ert + 1;
    }
    if(frr < 0)
    {
         for(;frr < 0;)
        {
            frr = frr + er;
        w = w + 1;
        }
        cout << w;
        return 0;
    }
   cout << ert;
   return 0;
}
*/
/*
int main()
{
    int ace;
    int f = 0;
    int we = 0;
    int d = 0;
    int b = 0;
    cin >> ace;
    int sda = ace*2;
    int er[ace*2];
    ace = ace*2;
    for(;ace > 0;--ace)
    {
        cin >> er[f];
        f = f + 1;
    }
    for(;we < sda;)
    {
        if(er[we] > er[we + 1])
            d = d + 1;
        if(er[we] < er[we + 1])
            b = b + 1;
        we = we + 2;
    }
    if(d > b)
        cout << "Mishka";
    if(d < b)
        cout << "Chris";
    if(d == b)
        cout << "Friendship is magic!^^";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    cin >> ace >> er >> sda;
    er = er/2;
    sda = sda/4;
    er = min(ace,min(er,sda));
    er = er*7;
    cout << er;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    ace = ace/er;
    ace = ace + 1;
    er = er*ace;
    cout << er;
    return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int er = 0;
    cin >> ace;
    int d = ace;
    ace = 0;
    for(;er < d;--d)
    {
        ace = ace + d*6;
    }
    cout << ace + 1;
    return 0;
}
*/
/*
int main()
{
    int ace = 0;
    int er = 0;
    string s;
    string we;
    string e;
    cin >> s;
    int y = s.size();
    if(s.size() % 2 == 0)
    {
         cout << "NIE";
         return 0;
    }
    if(s.size() == 1)
    {
        cout << "TAK";
        return 0;
    }
    else
    {
        ace = ace + s.size();
        ace = (ace - 1)/2;
        we = s.substr(0,ace);
        e = s.substr(ace + 1,s.size());
        reverse(we.begin(),we.end());
        int a = we.size();
        for(;a > 0;)
        {
            if(we[er] == 'b')
                we[er] = 'd';
            else if(we[er] == 'B')
                we[er] = 'd';
            else if(we[er] == 'd')
                we[er] = 'b';
            else if(we[er] == 'D')
                we[er] = 'b';
                er += 1;
                a = a - 1;
        }
        if(we == e)
            cout << "TAK";
        else
            cout << "NIE";
        return 0;
    }
}
*/
/*
int main()
{
    int ace;
    int f = 0;
    cin >> ace;
    string s[ace];
    for(;ace > 0;--ace)
    {
        cin >> s[f];
        if(s[f].size() <= 10)
            cout << s[f] << '\n';
        else
            cout << s[f][0] << s[f].size() - 2 << s[f][s[f].size() - 1] << '\n';
            f = f + 1;
    }
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int d = ace;
    int s = 0;
    int dd = d;
    int er = ace;
    for(;er-1 > 0;--er)
    {
        ace = ace*dd;
        s = 1;
    }
    cout << ace;
}
*/
/*
int main()
{
    int ace;
    int er;
    int e = 1;
    cin >> ace >> er;
    for(;e <= 9;++e)
    {
        if((ace*e - er) % 10 == 0|| ace*e % 10 == 0)
        {
            cout << e;
            return 0;
        }
    }
    cout << 10;
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er = ace;
    cout << ace/2 << '\n';
    if(er % 2 == 0)
    {
       er = er/2;
       for(;er > 0;--er)
           cout << 2 << ' ';
    }
    else
    {
        er = er/2 - 1;
        for(;er > 0;--er)
            cout << 2 << ' ';
        cout << 3;
    }
    return 0;
}
*/
/*
void f(int arr[], int sz)
{
    int ee = 0;
    int rr = 1;
    int ree = 0;
    for(int i = 0;i < sz - 1;++i)
    {
        if(arr[ee] > arr[rr])
        {
            ree = arr[ee];
            arr[ee] = arr[rr];
            arr[rr] = ree;
        }
        ee = ee + 1;
        rr = rr + 1;
    }
}
int main()
{
    int ace;
    int r = 0;
    cin >> ace;
    int ew = ace;
    int e = 0;
    int er[ace];
    for(int w = ace;w > 0;--w)
    {
        cin >> er[e];
        e = e + 1;
    }
    f(er,ace);
    for(;ew > 0;--ew)
    {
        cout << er[r] << ' ';
        r = r + 1;
    }
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    for(int d = 0;d < ace;++d)
        cin >> er[d];


}
*/
/*
int main()
{
    int ace;
    string s;
    cin >> s;
    ace = s.size()/2;
    int er = 0;
    int sda = 0;
    string s1;
    string s2;
    if(s.size() % 2 == 0)
        s1 = s.substr(0,ace);
    else if(s.size() % 2 == 1)
        s1 = s.substr(0,ace);
    if(s.size() % 2 == 0)
        s2 = s.substr(ace,ace);
    else if(s.size() % 2 == 1)
        s2 = s.substr(ace + 1,ace);
        reverse(s1.begin(),s1.end());
        for(int d = 0;d < s1.size();++d)
        {
            if(s1[d] != s2[d])
                er = er + 1;
        }
        if(s.size() % 2 == 1 && er == 1 || s.size() % 2 == 1 && er == 0 || s.size() % 2 == 0 && er == 1)
            cout << "YES";
        else
            cout << "NO";
        return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    int sda = ace;
    if(er > ace)
        cout << ace;
    if(er == ace)
        cout << ace + 1;
    if(er < ace)
        for(;;)
        {
            ace = ace + sda/er;
            sda = sda/er;
            if(sda < er)
                {
                    cout << ace;
                    return 0;
                }
        }

}
*/
/*
int main()
{
    int ace;
    string s;
    cin >> ace >> s;
    string s1[ace];
    for(int d = 0;d < ace;++d)
    {
        cin >> s1[d];
    }
    if(ace % 2 == 0)
        cout << "home";
    else
        cout << "contest";
    return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t sda;
    cin >> ace >> er >> sda;
    if(er < ace && sda < ace)
        cout << -1;
    else
        cout << er/ace + sda/ace;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int der = 0;
    cin >> ace;
    int er[ace];
    int d = ace;
    for(int e = 0;e < ace; ++e)
        cin >> er[e];
    for(int f = 0;f < ace/2;++f)
    {
        if(f % 2 == 0)
            {
                der = er[f];
                er[f] = er[d - 1];
                er[d - 1] = der;
            }
            d = d - 1;
    }
    for(int s = 0;s < ace;++s)
    {
        cout << er[s] << ' ';
    }
    return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t sda;
    int64_t d = 0;
    int64_t as = 0;
    int64_t qef = 0;
    cin >> ace >> er >> sda;
    qef = max(ace,max(er,sda));
    as = qef;
    d = qef;
    qef = qef - ace;
    if(qef > 0)
        qef = qef - 1;
    as = as - er;
    if(as > 0)
        as = as - 1;
    d = d - sda;
    if(d > 0)
        d = d - 1;
    qef = qef + as + d;
    cout << qef;
}
*/
/*
int main()
{
    int ace;
    int er = 1;
    cin >> ace;
    for(;ace > 0;)
    {
        ace = ace - er;
        er = er + 1;
    }
    if(ace < 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    ace = ace/2*3;
    cout << ace;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    ace = ace - 10;
    if(ace > 0 && ace < 10 || ace == 11)
        cout << 4;
    else if(ace == 10)
        cout << 15;
    else
        cout << 0;

}
*/
/*
int main()
{
    int a;
    cin >> a;
    int b[a];
    int dd = 0;
    for(int s = 0;s < a;++s)
        cin >> b[s];
        int sd = 0;
    for(int y = 0;y < a;++y)
        sd = sd + b[y];
    if(sd % 2 == 0)
        for(int df = 0;df < a;++df)
     {
         if(b[df] % 2 == 0)
            dd = dd + 1;
     }
    if(sd % 2 == 1)
        for(int we = 0;we < a;++we)
    {
        if(b[we] % 2 == 1)
            dd = dd + 1;
    }
    cout << dd;
    return 0;
}
*/
/*
int main()
{
    int a;
    int b = 0;
    cin >> a;
    int c[a];
    for(int y = 0;y < a;++y)
        cin >> c[y];
        if(a == 1)
        {
           cout << 1;
           return 0;
        }
    int d = c[0];
    int e = c[1];
    int er = 0;
    int ed = 0;
    er = min(d,e);
    ed = max(d,e);
    for(int r = 2;r < a;++r)
    {
        if(er > c[r])
        {
            swap(er,e);
            er = c[r];
        }
        else if(ed > c[r])
            ed = c[r];
    }
    if(er == ed)
        {
            cout << "Still Rozdil";
            return 0;
        }
    else
        for(;;++b)
        {
            if(c[b] == er)
            {
                cout << b + 1;
                return 0;
            }
        }
}
*/
/*
int main()
{
    int a;
    int c = 0;
    int d = 0;
    int e = 0;
    cin >> a;
    int b[a];
    for(int y = 0;y < a;++y)
        cin >> b[y];
    for(int u = 1;u < a + 1;++u)
    {
        if(u % 3 == 1)
            c += b[u - 1];
        else if(u % 3 == 2)
            d += b[u - 1];
        else if(u % 3 == 0)
            e += b[u - 1];
    }
    if(c > d && c > e)
        cout << "chest";
    else if(d > c && d > e)
        cout << "biceps";
    else
        cout << "back";
    return 0;
}
*/
/*
int main()
{
    int64_t a;
    int64_t b;
    int64_t c;
    int64_t d = 0;
    cin >> a >> b >> c;
    if(a >= c || b >= c)
    {
        cout << 0;
        return 0;
    }
    else if(b <= 0)
    {
        cout << -1;
        return 0;
    }
    else
    {

        a = c - a;
        d = a % b;
        if(d != 0)
            d += 1;
        d = d - a % b;
        d += a/b;
        cout << d;
        return 0;
    }
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda = 0;
    int wef = 0;
    int64_t kol = 0;
    int64_t qev = 0;
    cin >> ace >> er;
int64_t b = 0;
int we = 0;
    int64_t as[ace];
    for(;wef < ace;++wef)
    {
        cin >> as[wef];
    }
    if(er == 0)
    {
        cout << 0;
        return 0;
    }

    for(;ace > 0;--ace)
    {
         qev = qev + 1;
        if(b + as[sda] > 8)
            {
              we = as[sda] - 8;
               kol = kol + 8;
            }
        else if(b + as[sda] < 8)
        {
              kol = kol + b + as[sda];
              b = 0;
        }
            b = b + we;
        if(kol >= er)
        {
            cout << qev;
            return 0;
        }
        ++sda;
        we = 0;
    }
    cout << -1;
    return 0;


}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int b[ace];

    for(int a = 0;a < ace;++a)
        cin >> b[a];
        int ss = b[0];
    for(int s = 1;s < ace;++s)
    {
       ss = max(ss,b[s]);
    }
    ss = ss - 25;
    if(ss > 0)
        cout << ss;
    else
        cout << 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    int dd;
    int kol;
    cin >> ace >> er >> sda >> dd >> kol;
    int sd = ace;
     ace = ace*er + dd*2;
     sda = sda*sd + kol*2;
     if(ace < sda)
        cout << "First";
     if(ace > sda)
        cout << "Second";
     if(ace == sda)
        cout << "Friendship";
     return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    cin >> ace >> er;
    ace = ace/er;
    if(ace % 2 == 1)
        cout << "yes";
    else
        cout << "no";
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    for(int d = 0;d < ace;++d)
        cin >> er[d];
        int f = er[0];
        int s = 0;
    for(int e = 1;e < ace;++e)
        f = max(f,er[e]);
    for(int we = 0;we < ace;++we)
    {
        s = s + f - er[we];
    }
    cout << s;
    return 0;
}
*/
/*
int main()
{
    int B = 0;
    int u = 0;
    int l = 0;
    int b = 0;
    int a = 0;
    int s = 0;
    int r = 0;
    int ace;
    string s1;
    cin >> s1;
    for(int d = 0;d < s1.size();++d)
    {
        if(s1[d] == 66)
            ++B;
        if(s1[d] == 117)
            ++u;
        if(s1[d] == 108)
            ++l;
        if(s1[d] == 98)
            ++b;
        if(s1[d] == 97)
            ++a;
        if(s1[d] == 115)
            ++s;
        if(s1[d] == 114)
            ++r;
    }
    a = a/2;
    u = u/2;
    ace = min(B,min(u,min(l,min(b,min(a,min(s,r))))));
    cout << ace;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    int sda[ace];
    int rr = 0;
    for(int d = 0;d < ace;++d)
        cin >> sda[d];
    for(int r = 1;r < ace;++r)
    {
        rr = rr + 1;
        if(sda[r] - sda[r - 1] > er)
            rr = 0;
    }
    rr = rr + 1;
    cout << rr;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    cin >> ace;
    int f[ace];
    for(int s = 0;s < ace;++s)
        cin >> f[s];
    er = f[0] - f[1];
    for(int ss = 2;ss < ace;++ss)
    {
        if(f[ss - 1] - f[ss] != er && f[ss - 1] - f[ss] != f[ss - 1]*2)
        {
            cout << f[ace - 1];
            return 0;
        }
    }
    if(f[ace - 1] < 0 || er < 0)
    {
        cout << f[ace - 1] - er;
        return 0;
    }
    cout << f[ace - 1] + er;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    cin >> ace;
    int t[ace];
    for(int e = 0;e < ace;++e)
        cin >> t[e];
    if(ace == 1)
    {
        if(t[0] == 1)
            cout << "YES";
        else
            cout << "NO";
        return 0;
    }
    for(int s = 0;s < ace;++s)
    {
        if(t[s] == 0)
            er = er + 1;
        else if(t[s] == 1)
            sda = sda + 1;
    }
    if(er > 1 || er < 1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int qwe = 0;
    cin >> ace;
    int er[ace];
    for(int sda = 0;sda < ace;++sda)
        cin >> er[sda];
    for(int a = 0;a < ace;++a)
        if(er[a]%2 == 1)
            qwe = qwe + 1;
    if(qwe == 1)
    {
        int d = 0;
        for(;d < ace;++d)
        {
             if(er[d]% 2 == 1)
            {
                cout << d + 1;
                return 0;
            }
        }
    }
    if(qwe > 1)
    {
         for(int y = 0;y < ace;++y)
         {
             if(er[y]%2 == 0)
            {
                cout << y + 1;
                return 0;
            }
         }
    }
}
*/
/*
int main()
{
    int ace;
    int b = 0;
    int c = 0;
    int d = 0;
    int i = 0;
    int y = 0;
    cin >> ace;
    int er[ace];
    for(int sda = 0;sda < ace;++sda)
        cin >> er[sda];
    int a = 0;
    for(;a < ace;++a)
        if(er[a] == 1)
            b = b + 1;
        if(er[a] == 2)
            c = c + 1;
        if(er[a] == 3)
            d = d + 1;
    cout << b;
    cout << c;
    cout << d;
    if(b > c && b > d)
        y = 1;
    if(c > b && c > d)
        y = 2;
    if(c == b && c > d)
        y = 1;
    if(d > c && d > b || d == c && d > b || d > c && d == b || d == c && d == b)
        y = 3;
    for(int s = 0;s < ace;++s)
        if(er[s] != d)
            i = i + 1;
    cout << i;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    int sda[ace];
    int qwe[ace];
    int d = 0;
    int e = 0;
    int f = 0;
    for(int aa = 0;aa < ace;++aa)
    {
        cin >> er[aa];
        cin >> sda[aa];
        cin >> qwe[aa];
    }
    for(int vf = 0;vf < ace;++vf)
        d = d + er[vf];
    for(int v = 0;v < ace;++v)
        e = e + er[v];
    for(int vfa = 0;vfa < ace;++vfa)
        f = f + er[vfa];
if(d == 0 && e == 0 && f == 0)
    cout << "YES";
else
    cout << "NO";
return 0;
}
*/
/*
int main()
{
    int64_t ace;
    cin >> ace;
    int r = 0;
    int w = 1;
    for(int a = 0;a < ace;++a)
        w = w*2;
    for(int y = 1;y < w + 1;++y)
        r = r + y;
    cout << r%1000000007;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    for(int a = 0;a < ace;++a)
    {
        cin >> er[a];
        er[a] = er[a]*4 + 1;
    }
    for(int r = 0;r < ace;++r)
        cout << er[r] << ' ';

}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    cin >> ace;
    int e[ace];
    for(int ee = 0;ee < ace;++ee)
    {
        cin >> e[ee];
        er = er + e[ee];
    }
    er = er/2 + er%2;
    for(int s = 0;;++s)
    {
        sda = sda + e[s];
        if(sda >= er)
        {
            cout << s + 1;
            break;
        }
    }
}
*/
/*
int main()
{
    int ace;
    int er;
    int d = 0;
    cin >> ace >> er;
    int sda[ace];
    for(int s = 0;s < ace;++s)
        cin >> sda[s];
    for(int e = 0;e < ace;++e)
    {
        if(er%sda[e] == 0)
            if(sda[e] > d)
                d = sda[e];
    }
    cout << er/d;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t rr = 1;
    cin >> ace >> er;
    for(int r = 0;r < ace;++r)
    {
        rr = rr*2;
        cout << rr;
    }
    cout << rr;
}
*/
/*
int main()
{
    int ace = 2;
    int er = 4;
    for(int a = 0;a < 2018;++a)
    {
        cout << ace << ' ';
        ace = ace + er;
        er = er + 2;
    }
}
*/
/*
int main()
{
	int a;
	int as = 0;
	cin >> a;
    int er[100];
	int r[a];
	for(int y = 0;y < a;++y)
    	cin >> r[y];
	for(int rr = 0;rr < 100;++rr)
    	er[rr] = 0;
	for(int yy = 0;yy < a;++yy)
    {
    	for(int aa = 0;aa < 100;++aa)
        {
        	if(r[yy] == aa + 1)
            		er[aa] = 1;
        }
    }
	for(int ww = 0;ww < 100;++ww)
    	as = as + er[ww];
    cout << as;
}
*/
/*
struct People
{
public:
    string name;
    string family;

    void inputMoney()
    {
        cin >> money;
    }

    void outpuMoney() const
    {
        cout << money;
    }

    void transferMyMoney(People& to, int m)
    {
        if(m < money)
        {
            money -= m;
            to.money += m;
        }
    }

private:
    int money;
};


void sortPeopleData(People pp[])
{
    // ������� i � j �������

    int i = 0, j = 1;


    People tmp = pp[i];
    pp[i] = pp[j];
    pp[j] = tmp;



}



void inputPeople(People& pp)
{
    cin >> pp.name >> pp.family;
    pp.inputMoney();
}

void outputPeople(const People& pp)
{
    cout << "\n" << pp.name << " " << pp.family << " ";
    pp.outpuMoney();
}

void f(int& a)
{
    a = 3;
}

int main()
{
    People pp[100];


    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        inputPeople(pp[i]);
    }

    //sortPeopleData(pp);


    pp[1].transferMyMoney(pp[0], 1);


    for (int i = 0; i < n; ++i)
    {
        outputPeople(pp[i]);
    }


    return 0;
}
*/
/*
int main()
{
    int a;
    int yyy = 0;
    int yr = 0;
    cin >> a;
    int b[a];

    for(int y = 0;y < a;++y)
        cin >> b[y];

    sort(b,b + a);

    int aa = 0;

    if(a%3 == 1)
    {
        aa = aa + b[0];
        yr = 1;
    }
    if(a%3 == 2)
    {
        aa = aa + b[0];
        aa = aa + b[1];
        yr = 2;
    }

    for(int u = 0;u < a/3;++u)
    {
        aa = aa + b[yr + 1 + yyy];
        aa = aa + b[yr + 2 + yyy];
        yyy = yyy + 3;
    }
    cout << aa;
}
*/
/*
int main()
{
    string s;
    getline(cin,s);
    cout << s[0];
    for(int r = 0;r < s.size();++r)
    {
        if(s[r] == ' ')
            cout << s[r + 1];
    }
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace/3 + ace%3*2];
    int a = 0;
    for(int sw = 0;sw < ace/3;++sw)
    {
        er[a] = 3;
        a = a + 1;
    }
    for(int se = 0;se < ace%3;++se)
    {
        er[a] = 3;
        a = a + 1;
        er[a] = -2;
        a = a + 1;
    }
    cout << a << "\n";
    for(int sd = 0;sd < a;++sd)
        cout << er[sd] << ' ';
}
*/
/*
struct otmetki
{
public:
    string name;
    string family;
    int otmetkit[5];
    double cpbal(int otm(5))
    {
        cpp = 0;
        cpp = otm(0) + otm(1) + otm(2) + otm(3) + otm(4);
        cpp = cpp/5;
        return cpp;
    }
}
int main()
{
    int g;
    cout << "input number people";
    cin >> g;
    otmetki rr[g];
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t rr = 2;
    cin >> ace >> er;
    for(int r = 0;r < ace - 1;++r)
    {
        rr = rr*2;
        if(rr > 100000000)
        {
            cout << er;
            return 0;
        }
    }
    cout << er%rr;
}
*/
/*
int main()
{
    int64_t ace;
    int er = 0;
    cin >> ace;
    for(int y = 1;y < ace;++y)
    {
        if(y%2 == 0 && y%3 == 0 && y%4 == 0 && y%5 == 0 && y%6 == 0 && y%7 == 0 && y%8 == 0 && y%9 == 0 && y%10 == 0)
            er = er + 1;
    }
    cout << er;
}
*/
/*
int main()
{
    int a = 0;
    int b;
    int y = 0;
    cin >> a >> b;
    int f[a];
    cin_massive(f,a);
    for(int hg = 0;hg < a;++hg)
    {
        if(f[hg] > b)
            y = y + 1;
        y = y + 1;
    }
    cout << y;
}
*/
/*
int main()
{
    string s;
    cin >> s;
    int y = 1;
    for(int h = 1;h < s.size();++h)
    {
        if(s[h] == s[h - 1])
            y = y + 1;
        else
            y = 1;
        if(y == 7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
*/
int main()
{
    int a = 0;
    string s;
    cin >> s;
    int h[s.size()/2 + 1];
    for(int hg = 0;hg < s.size();hg += 2)
    {
        h[a] = s[hg];
        a = a + 1;
    }
    byn_is_massive(h,s.size()/2 + 1,-48);
    sort(h,h + s.size()/2 + 1);
    cout_massive(h,s.size()/2 + 1,"+");
    return 0;
}
//https://codeforces.com/problemset/problem/195/A
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     char arr[100];
//     char app[100];
//     cin >> arr;
//     int t = 0, m = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         t++;
//     }

//     cout << t << endl;
//     for (int i = 0; i < t; i++)
//     {
//         if (arr[i] == arr[t - 1 - i])
//         {
//             m++;
//             continue;
//         }
//     }

//     cout << m << endl;
//     if (t == m)
//     {
//         cout << "its a palindrone number ";
//     }
//     else
//     {
//         cout << "its a not a palindrone number";
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);
//     int t = 0, m = 0, q;
//     int p = str.size();
//     cout << p << endl;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             t = m;
//             m = 0;
//         }
//         if (str[i] != ' ')
//         {
//             m++;
//             q = max(m, t);
//         }
//     }

//     cout << q;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int search(int *a, int p);
// int m = 0;

// int main(int argc, char const *argv[])
// {
//     int a[5] = {4, 3, 3, 3, 8};
//     int p;
//     cin >> p;
//     for (int i = 0; i < 5; i++)
//     {

//         if (p == a[i])
//         {
//             cout<<i<<endl;
//             search(a, p);
//             break;
//         }
//     }

//     return 0;
// }
// int search(int *a, int p)
// {
//     if (a[5 - m] == p)
//     {
//         cout << (5 - m);
//         return 0;
//     }
// m++;
// return (search(a, p));
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     string str[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> str[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i].size() <= 10)
//         {
//             cout << str[i] << endl;
//         }
//         if (str[i].size() > 10)
//         {
//             int p = str[i].size() - 2;

//             str[i].erase(1, p);
//             string d = to_string(p);
//             str[i].insert(1, d);

//             cout << str[i] << endl;
//         }
//     }
//     return 0;
// }
// nclude<bits/stdc++.h>
// ing namespace std;
// t main(int argc, char const *argv[])
// {
// string str;
// cin>>str;
// str.erase(1,4);
// cout<<str;
// return 0;
// }
//
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int a[n][3];
//     int r = 0, m = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             r = a[i][j] + r;
//             if (r >= 2)
//             {
//                 m++;
//                 r = 0;
//                 break;
//             }
//         }
//         r = 0;
//     }
//     cout << m;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     int p = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] >= i)
//         {
//             p++;
//         }
//     }
//     cout << p
//  return 0;
//  }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int r = 0;
//     int n;
//     cin >> n;
//     string str[n];
//     for (int i = 0; i < n; i++)
//     {

//         cin >> str[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == "++X")
//         {
//             ++r;
//         }
//         if (str[i] == "X++")
//         {
//             r++;
//         }
//         if (str[i] == "--X")
//         {

//             --r;
//         }
//         if (str[i] == "X--")
//         {
//             r--;
//         }
//     }

//     cout << r;
//     return 0;
// }

//  #include <bits/stdc++.h>
//  using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a[5][5];
//     int p, q;
//     int r = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (1 == a[i][j])
//             {
//                 p = i;

//                 q = j;

//                 break;
//             }
//         }
//     }
//     while (p != 2)
//     {

//         if (p > 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p - 1][q];
//             a[p - 1][q] = t;
//             p = p - 1;
//             ++r;
//         }
//         if (p < 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p + 1][q];
//             a[p + 1][q] = t;
//             p = p + 1;
//             ++r;
//         }
//     }
//     while (q != 2)
//     {
//         if (q > 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p][q - 1];
//             a[p][q - 1] = t;
//             q = q - 1;
//             ++r;
//         }
//         if (q < 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p][q + 1];
//             a[p][q + 1] = t;
//             q = q + 1;
//             ++r;
//         }
//     }

//     cout << r;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     int p = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] >= i)
//         {
//             p++;
//         }
//     }
//     cout << p;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     long long n, m, a;
//     cin >> n >> m >> a;
//     long long p = 0, q = 0;
//     for (long i = 1; i <= n; i = i + a)
//     {
//         p++;
//     }
//     for (long j = 1; j <= m; j = j + a)
//     {
//         q++;
//     }
//     cout<<p*q;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int m, n;
//     cin >> m >> n;
//     long long p = m * n;
//     int r = 2;
//     long long g = p / r;

//     cout << g;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str1, str2;
//     getline(cin, str1);
//     getline(cin, str2);
//     int i = 0, u = 0;
//     int p = 0, q = 0;
//     for (; i < str1.size(); i++)
//     {
//         if (str1[i] == str2[i] || str1[i] == str2[i] + 32 || str2[i] == str1[i] + 32)
//         {
//             u++;
//             continue;
//         }

//         if (str1[i] > str2[i])
//         {
//             p = p + str1[i];
//             q = q + str2[i];
//         }
//         if (str1[i] < str2[i])
//         {
//             p = p + str1[i];
//             q = q + str2[i];
//         }
//     }
//     if (u == str1.size())
//     {
//         cout << 0;
//     }
//     if (p > q)
//     {
//         cout << 1;
//     }
//     if (q > p)
//     {
//         cout << -1;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);
//     int p = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         for (int i = 0; i < str.size(); i++)
//         {

//             if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'y')
//             {
//                 if (str[i] >= 65 && str[i] <= 91)
//                 {
//                     str[i] = str[i] + 32;
//                 }
//             }
//             if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'y')
//             {
//                 str.erase(i, 1);
//             }
//         }
//     }

//     for (int i = 0; i < str.size(); i = i + 2)
//     {
//         str.insert(i, ".");
//     }

//     for (int i = 0; i < str.size(); i++)
//     {
//         cout << str[i];
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);

//     for (int i = 0; i < str.size(); i = i + 1)
//     {
//         for (int j = 0; j < str.size() - 1; j = j + 2)
//         {
//             if (str[j] > str[j + 2])
//             {
//                 char c;
//                 c = str[j];
//                 str[j] = str[j + 2];
//                 str[j + 2] = c;
//             }
//         }
//     }
//     cout << str << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);
//     if (str[0] >= 97 && str[0] <= 123)
//     {
//         str[0] = str[0] - 32;
//     }
//     cout<<str;
//     return 0;
// }
// Input
// zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
// Participant's output
// CHAT WITH HER!
// Jury's answer
// IGNORE HIM!
// Checker comment
// wrong answer 1st lines differ - expected: 'IGNORE HIM!', found: 'CHAT WITH HER!'
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     string str1;

//     getline(cin, str);

//     for (int r = 0; r < 4; r++)
//     {
//         for (int i = 0; i < str.size(); i++)
//         {
//             for (int j = i + 1; j < str.size(); j++)
//             {
//                 if (str[i] == str[j])
//                 {
//                     str.erase(j, 1);
//                 }
//             }
//         }
//     }

//     int p = str.size();

//     if (p % 2 == 1)
//     {
//         cout << "IGNORE HIM!";
//     }
//     else
//     {
//         cout << "CHAT WITH HER!";
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, z;
//     cin >> n;
//     int a[n], b[100001], d[100001];
//     long long r = 0, t = 0;
//     int taxi = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] % 2 == 1)
//         {
//             b[r] = a[j];
//             r++;
//         }

//         if (a[j] % 2 == 0)
//         {
//             if (a[j] % 4 == 0)
//             {
//                 taxi++;
//             }
//             if (a[j] % 4 != 0)
//             {
//                 d[t] = a[j];
//                 t++;
//             }
//         }
//     }

//     // for (int i = 0; i < r; i++)
//     // {
//     //     cout << b[i] << endl;
//     // }
//     // for (int i = 0; i < t; i++)
//     // {
//     //     cout << d[i] << endl;
//     // }

//     // cout << taxi << endl;
//     //  for (int i = 0; i < r; i++)
//     //  {
//     //  cout << b[i] << end

//     long long m = 0, u = 0, y = 0;
//     for (int i = 0; i < r; i++)
//     {
//         m = m + b[i];
//     }
//     for (int i = 0; i < t; i++)
//     {
//         u = u + d[i];
//     }
//     for (int i = 0; i < r; i++)
//     {
//         if (b[i] == 3)
//         {
//             y++;
//         }
//     }
//     if (y == r)
//     {
//         cout << r;
//         goto z;
//     }

//     r = m / 4;

//     taxi = taxi + r;

//     r = m % 4;

//     t = u / 4;

//     taxi = taxi + t;

//     t = u % 4;

//     if ((t + r) <= 4 && (t + r) > 0)
//     {
//         taxi = taxi + 1;
//     }
//     if (t == r && (t + r) == 4 && m == 6 && u == 2)
//     {
//         taxi = taxi + 1;
//     }

//     if ((t + r) > 4)
//     {
//         taxi = taxi + 2;
//     }

//     cout << taxi;
// z:
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    char c[20];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == c[i + 1])
        {
            t++;
        }
    }
    cout << t;

    return 0;
}

//DECIMAL DATA
// const long double eps = 1e-9;
// bool equalTo(double a, double b)
// {
//     if (fabs(a - b) <= eps)
//         return true;
//     else
//         return false;
// }
// bool notEqual(double a, double b)
// {
//     if (fabs(a - b) > eps)
//         return true;
//     else
//         return false;
// }
// bool lessThan(double a, double b)
// {
//     if (a + eps < b)
//         return true;
//     else
//         return false;
// }
// bool lessThanEqual(double a, double b)
// {
//     if (a < b + eps)
//         return true;
//     else
//         return false;
// }
// bool greaterThan(double a, double b)
// {
//     if (a > b + eps)
//         return true;
//     else
//         return false;
// }
// bool greaterThanEqual(double a, double b)
// {
//     if (a + eps > b)
//         return true;
//     else
//         return false;
// }

//Funtions
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}
bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool isPowerTwo(ll x)
{
    return (x && !(x & (x - 1)));
};
bool isSubstring(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
        return true;
    return false;
}

ll mod = 1;

ll fast_pow(ll a, ll p)
{
    ll res = 1;
    while (p)
    {
        if (p % 2 == 0)
        {
            a = a * 1ll * a;
            p /= 2;
        }
        else
        {
            res = res * 1ll * a;
            p--;
        }
    }
    return res;
}

ll fact(ll n)
{
    ll res = 1;
    for (ll i = 1; i <= n; i++)
    {
        res = res * 1ll * i % mod;
    }
    return res;
}

ll nCr(ll n, ll k)
{
    return fact(n) * 1ll * fast_pow(fact(k), mod - 2) % mod * 1ll * fast_pow(fact(n - k), mod - 2) % mod;
}

ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void extendgcd(ll a, ll b, ll *v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
} //pass an arry of size1 3
ll mminv(ll a, ll b)
{
    ll arr[3];
    extendgcd(a, b, arr);
    return arr[0];
} //for non prime b
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
bool revsort(ll a, ll b) { return a > b; }
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact)
{
    ll val1 = fact[n];
    ll val2 = ifact[n - r];
    ll val3 = ifact[r];
    return (((val1 * val2) % m) * val3) % m;
}
void google(int t) { cout << "Case #" << t << ": "; }
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} //only for prime m

bool inBetween(int l, int val, int r)
{
    if (l <= val && val <= r)
        return true;
    return false;
}

// sort(s.begin(), s.end());
//distance(s.begin(), unique(s.begin(), s.end()))
//s.resize(distance(s.begin(),  unique(s.begin(), s.end())))
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// int getRand(int l, int r)
// {
//     uniform_int_distribution<int> uid(l, r);
//     return uid(rng);
// }
//Template Completed

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void check(bool b, string y = "YES", string n = "NO")
{
    // b ? cout << "YES\n" : cout << "NO\n";
    b ? cout << y << "\n" : cout << n << "\n";
}

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second < b.second)
        return true;
    if (a.second > b.second)
        return false;
    else
        return a.first < b.first;
}

void sol6()
{
    ll n;
    // cin >> n;
    // string s[n];
    vector<string> s(n);
    for (ll x = 0; x < n; x++)
    {
        cin >> s[x];
    }
}

void sol5()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    char ch = s[0];
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == ch)
            ans++;
        else
            ch = s[i];
    }
    p1(ans);
}

void sol4()
{
    ll n, k;
    cin >> n;
    vector<ll> arr(n), brr(n);
    for (ll x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
}

void sol3()
{
    ll n;
    cin >> n;
    vector<ll> arr(n), brr(n);
    pair<ll, ll> p[n];
    for (ll x = 0; x < n; x++)
    {
        cin >> arr[x];
        p[x] = {arr[x], x};
    }
}

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define pll pair<ll, ll>
#define pyramid priority_queue <ll, vector<ll>, greater<ll> >
#define ulta_pyramid priority_queue <ll>

#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sort_and_unique(a) sort(all(a));(a).resize(unique(all(a))-(a).begin())
#define outrange(x,min,max) ((x)<(min) || (x)>(max))
 
string DecimalToBinary(ll num);
 
void SieveOfEratosthenes(ll n,set<ll>&v);
 
ll power(ll x, ll y, ll p);
 
unsigned long long modInverse(unsigned long long n, int p);
 
unsigned long long nCrModPFermat(unsigned long long n,int r, int p);
 
long long lcm(ll a, ll b);
 
// returns -1 if s1 is not a substring of s2
int isSubstring(string s1, string s2);
 
const ll N=1e9+7;

struct prob{
    int s, t, d;
};

struct pro
{
    // set<pair<ll, ll>, prob> s;
    // set heap, with maxlen -> y-x at top
    bool operator()(const pair<ll, ll> &a, const pair<ll, ll> &b) const
    {
        ll d_a = a.second - a.first - 1;
        ll d_b = b.second - b.first - 1;
        if (d_a == d_b)
        {
            return a.first < b.first;
        }
        return d_a > d_b;
    }
};

int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    char start = s[0];
    for(int i = 0; i < n-1; i++){
        char next = s[i+1];
        if(start == next){
            cnt++;
            // i++;
        }
        else{
            start = next;
        }
    }
    cout << cnt << endl;
    return 0;
}

bool cmp(prob a, prob b){
    return ((a.t)*(b.d) < (b.t)*(a.d));
}

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    // cin>>t;
    t = 1;
    while(t--){
        solve();
    }
    cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms"<<endl;

    return 0;
}

ll power(ll x, ll y, ll p)// binaryExponentiation
{
    ll res = 1;
 
    while (y > 0) {
 
        if (y % 2 == 1)
            res = ((res%p) * (x%p))%p;
 
        y = y >> 1;
 
        x = ((x%p) * (x%p))%p;
    }
    return res % p;
}
unsigned long long modInverse(unsigned long long n,int p)
{
    return power(n, p - 2, p);
}
 
unsigned long long nCrModPFermat(unsigned long long n,int r, int p)
{
    if (n < r)
        return 0;
 
    if (r == 0)
        return 1;
 
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

void SieveOfEratosthenes(ll n,set<ll>&v)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p){
                prime[i] = false;
            }
        }
    }
 
    for (ll p = 2; p <= n; p++){
        if (prime[p]){
            v.insert(p);
        }
    }
        
}
 
string DecimalToBinary(ll num)
{
    string str;
    if(num==0)
        return 0;
    while(num)
    {
        if(num & 1)
            str+='1';
        else
            str+='0';
          num>>=1;
    }   
    string s = str;
    reverse(all(s));
    return s;
}
 
int isSubstring1(char* s1, char* s2)
{
    int M = strlen(s1);
    int N = strlen(s2);
 
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

// function to get the index of s2 in s1
int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

long long lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
////////
ll lucky(ll n,ll f,ll s,ll ans){
    if(n<=ans){
        if(f==s){
            return ans;
        }
    }
    if(ans>1e9){
        return 4444477777;
    }
    ll f1 = lucky(n,f+1,s,ans*10+4);
    ll f2 = lucky(n,f,s+1,ans*10+7);
    return min(f1,f2);
}

void right_max(vi&v,int n,int st = 0){
    if(st==n-1){
        return;
    }
    right_max(v,n,st+1);
    v[st] = max(v[st],v[st+1]);
}

//void right_max(vi&v,int n){
//    if(n==0){
//        return ;
//    }
//
//    v[n-1] = max(v[n],v[n-1]);
//    right_max(v,n-1);
//}
// int suffix(vi&v,int n,int N){
//     if(N==0){
//         return 0;
//     }
//     return v[n-1]+ suffix(v,n-1,N-1);
// }
// int prefix(vi&v,int n,int N){
// if(N==0){
//     return 0;
// }
// return v[N-1]+ prefix(v,n,N-1);
// }

// bool is_palindrome(vi&v,int n,int st = 0){
//     if(st==n){
//         return true;
//     }
//   if(v[st]!=v[n]){
//       return false;
//   }
//   if(st<n+1){
//       return is_palindrome(v,n-1,st+1);
//   }
// }
// bool is_pre(string s,string p,int st = 0){
//     if(st == p.size())return true;
//     if(s[st]!=p[st])return false;
//     if(p.size()==0)return true;
//     return is_pre(s,p,st+1);
// }
// bool is_prime(int n,int st = 2){
//     if(n<=2){
//         return true;
//     }
//     if(st>sqrt(n)){
//         return true;
//     }
//     if(n%st == 0)return false;
//     return is_prime(n,st+1);
// }

// int count_prime(int st,int ed){
//     if(st>ed){
//         return 0;
//     }
//     if(is_prime(st)){
//         return 1 + count_prime(st+1,ed);
//     }
//     return count_prime(st+1,ed);
// }

// int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS) {
//     // base case: if robot reaches last row or column, return the value at that cell
//     if (row == ROWS - 1 && col == COLS - 1) {
//         return grid[row][col];
//     }

//     // check if robot can move right
//     int right_sum = -1;
//     if (col < COLS - 1) {
//         right_sum = grid[row][col] + path_sum(grid, row, col + 1, ROWS, COLS);
//     }

//     // check if robot can move bottom
//     int bottom_sum = -1;
//     if (row < ROWS - 1) {
//         bottom_sum = grid[row][col] + path_sum(grid, row + 1, col, ROWS, COLS);
//     }

//     // check if robot can move diagonal
//     int diagonal_sum = -1;
//     if (row < ROWS - 1 && col < COLS - 1) {
//         diagonal_sum = grid[row][col] + path_sum(grid, row + 1, col + 1, ROWS, COLS);
//     }

//     // choose the maximum direction
//     int max_sum = max(right_sum, max(bottom_sum, diagonal_sum));

//     return max_sum;
// }
#include <list>
// bool is_prime(int n) {
//     if (n <= 1) return false;
//     int sqrtn = sqrt(n);
//     for (int i = 2; i <= sqrtn; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
bool pal(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int p(int n) {
    int cnt = 0;
    if (n <= 1) {
        return false;
    }
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cnt++;
            if (cnt>3) return 0;
        }
    }
    return cnt;
}
vector<int> sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}
struct Employee {
    string name;
    int salary;
};

bool compare(Employee e1, Employee e2) {
    if (e1.salary != e2.salary) {
        return e1.salary > e2.salary;
    } else {
        return e1.name < e2.name;
    }
}
//const int MAXN = 1e5+5;
//int freq[MAXN] = {0};


//bool isProperlyNested(string s) {
//    stack<char> st;
//    for (char c : s) {
//        if (c == '(' || c == '[' || c == '{') {
//            st.push(c);
//        } else {
//            if (st.empty()) {
//                return false;
//            }
//            char top = st.top();
//            st.pop();
//            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
//                return false;
//            }
//        }
//    }
//    return st.empty();
//}


//int v[N], cnt[N], n;


#define MAX_N 100001

using namespace std;

//int a[MAX_N];

#define ll long long
#define endl '\n'
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
using namespace std;

//
//int count_zeroes(const vector<int>& v) {
//    int count = 0;
//    for(int i = 0; i < v.size(); i++) {
//        if(v[i] == 0) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int count_ones(const vector<int>& v) {
//    int count = 0;
//    for(int i = 0; i < v.size(); i++) {
//        if(v[i] == 1) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int solve(const vector<int>& v) {
//    int num_zeroes = count_zeroes(v);
//    int num_ones = count_ones(v);
//
//    if(num_zeroes <= (v.size() + 1) / 2) {
//        return 0;
//    } else if(num_zeroes + num_ones == v.size() && num_ones > 0) {
//        return 2;
//    } else {
//        return 1;
//    }
//}
bool is_palindrome(const string& s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}
struct Test {
    int x,y;
    string num;
};


//const int MAXN = 105;

bool has_four(long long x) {
    while (x > 0) {
        if (x % 10 == 4) {
            return true;
        }
        x /= 10;
    }
    return false;
}

long long count_living(int n) {
    long long count = 1;
    for (int i = 0; i < n; i++) {
        count *= 9;
    }
    return count;
}

long long nth_living(long long k) {
    int n = 1;
    while (true) {
        long long count = count_living(n);
        if (k <= count) {
            break;
        }
        k -= count;
        n++;
    }
    long long x = pow(10, n-1);
    while (k > 1) {
        x++;
        if (!has_four(x)) {
            k--;
        }
    }
    return x;
}


int main() {
int n;cin>>n;
vc v(n);
loop(n){
    cin>>v[i];
}
int cnt = 0 ;
loop(n-1){
    if(v[i]==v[i+1])cnt++;
}
cout<<cnt;

    return 0;
n//////
int main() {
    fastIO();
    fileIO();

//long long int n; cin>>n;
//long long int f=n-1;
//cout<<(f*(f+1)/2)+1<<endl;

//long n; cin>>n;
//int cnt=1;
//long long int a=0,b=0,c=0,d=0;
////vector<pair<ll,char>>res;
//vl arr;
//    loop(n){
//        long tmp; cin>>tmp;
//        switch (cnt) {
//            case 1:
//                a+=tmp;
//                cnt++;
//                break;
//            case 2:
//                b+=tmp;
//                cnt++;
//                break;
//            case 3:
//                c+=tmp;
//                cnt++;
//                break;
//            case 4:
//                d+=tmp;
//                cnt=1;
//                break;
//        }
//    }
//    arr.push_back(a);
//    arr.push_back(b);
//    arr.push_back(c);
//    arr.push_back(d);
//    sort(all(arr));
//    ll check=arr.back();
//        if(a==check)cout<<"A"<<endl;
//        else if(b==check)cout<<"B"<<endl;
//        else if(c==check)cout<<"C"<<endl;
//        else cout<<"D"<<endl;

//int test; cin>>test;
//loop(test){
//    int n; cin>>n;
//    set<int>st;
//    while(n--){
//        int tmp; cin>>tmp;
//        st.insert(tmp);
//    }
//    cout<<*st.begin()<<endl;
//}

//    int test;
//    cin >> test;
//    while (test--) {
//        int n, p, q;
//        cin >> n >> p >> q;
//        vl arr(n);
//        int cnt=0;
//        int cnt2=0;
//        loop(n) {
//            cin >> arr[i];
//            if(arr[i]<0){
//                cnt++;
//            }
//            else{
//                cnt2++;
//            }
//        }
//        vl negative(cnt);
//        vl positive(cnt2);
//        ll sumb=0,suma=0;
//        if(cnt==0){
//            sort(all_r(arr));
//            if(p>0){
//                loop(p){
//                    suma+=arr[i];
//                }
//            }
//            cout<<suma<<endl;
//        }
//        else{
//            sort(all(arr));
//            if(q>0){
//                if(cnt<q){
//                    loop(cnt){
//                        sumb+=arr[i];
//                    }
//                }
//                else{
//                    loop(q){
//                        sumb+=arr[i];
//                    }
//                }
//
//            }
//            sort(all_r(arr));
//            if(p>0){
//                if(cnt2<p){
//                    loop(cnt2){
//                        suma+=arr[i];
//                    }
//                }
//                else{
//                    loop(p){
//                        suma+=arr[i];
//                    }
//                }
//
//            }
//            cout<<suma-sumb<<endl;
//        }
//
//    }

//int m,n; cin>>m>>n;
//    vector<vector<int>>v(n, vector<int>(m,-10));
//    int cnt=0;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cin>>v[i][j];
//            if(v[i][j]==0)cnt++;
//        }
//    }
//    if(cnt==0){
//        cout<<"WIN"<<endl;
//        escanor;
//    }
//    int c=0;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if((i>0&&j>0)&&(v[i][j]==1)){
//                if(v[i][j-1]==0)c++;
//                if(v[i][j+1]==0)c++;
//                if(v[i-1][j]==0)c++;
//                if(v[i+1][j]==0)c++;
//                if(v[i+1][j+1]==0)c++;
//                if(v[i-1][j-1]==0)c++;
//                if(v[i-1][j+1]==0)c++;
//                if(v[i+1][j-1]==0)c++;
//                if(c>=cnt){
//                    cout<<"WIN"<<endl;
//                    escanor;
//                }
//                else{
//                    c=0;
//                }
//            }
//        }
//    }
//    cout<<"LOSE"<<endl;

//int n; cin>>n;
//
//    loop(n){
//
//    }

//int test; cin>>test;
//while(test--){
//    int n; cin>>n;
//    vi arr(n);
//    loop(n){
//        cin>>arr[i];
//    }
//    //1 3 4 5 6
//    sort(all(arr));
//    int sum=0;
//    //if(n%2==0){
//        int check=n/2;
//        int ii=n-1;
//        int jj=0;
//        loop(check){
//            //cout<<arr[ii]<<" "<<arr[jj]<<endl;
//            sum+=arr[ii]-arr[jj];
//            ii--;
//            jj++;
//        }
//        cout<<sum<<endl;
//    //}
////    else{
////        //1 3 4 5 6
////        int tmp=arr[(n/2)+1];
////
////    }
//}
//int test; cin>>test;
//while(test--){
//    int n; cin>>n;
//    vl arr(n);
//    int c=0;
//    ll sum=0;
//    stack<ll>st;
//    ll tmp=0;
//    bool t= true;
//    loop(n){
//        cin>>arr[i];
//        if(arr[i]<0){
//            if(t){
//                c++;
//                t= false;
//            }
//            else{
//                //t= false;
//            }
//        }
//        else if(arr[i]>0){
//            t= true;
//        }
//        if(arr[i]<0){
//            sum+=arr[i]*-1;
//        }
//        else{
//            sum+=arr[i];
//        }
//    }
//    cout<<sum<<" "<<c<<endl;
//}
//int test; cin>>test;
//while(test--){
//    long long int n; cin>>n;
//    long long int sum=n;
//    while(n!=0){
//        sum+=n/2;
//        n=n/2;
//    }
//    cout<<sum<<endl;
//}

//int n,h; cin>>n>>h;
//int sum=0;
//    loop(n){
//        int tmp; cin>>tmp;
//        if(tmp>h)sum+=2;
//        else sum+=1;
//    }
//    cout<<sum<<endl;

//int n;cin>>n;
//string s; cin>>s;
//int a=0,d=0;
//    loop(s.size()){
//        if(s[i]=='A')a++;
//        else if(s[i]=='D')d++;
//    }
//    if(a>d)
//        cout<<"Anton"<<endl;
//    else if(d>a)
//        cout<<"Danik"<<endl;
//    else
//        cout<<"Friendship"<<endl;

//int a,b; cin>>a>>b;
//int c=0;
//while(a<=b){
//    a=a*3;
//    b=b*2;
//    c++;
//}
//cout<<c<<endl;

//int problems; cin>>problems;
//int cnt=0;
//  while(problems--){
//      int a,b,c; cin>>a>>b>>c;
//      if(a+b+c>=2)cnt++;
//  }
//  cout<<cnt<<endl;

//int ii=0,jj=0;
//    for (int i = 0; i < 5; ++i) {
//        for (int j = 0; j < 5; ++j) {
//            int tmp; cin>>tmp;
//            if(tmp==1){
//                ii=i;
//                jj=j;
//                break;
//            }
//        }
//    }
//    cout<<abs(2-ii)+abs(2-jj)<<endl;

//int n;cin>>n;
//vi arr(n);
//    loop(n){
//        cin>>arr[i];
//    }
//    sort(all(arr));
//    loop(n){
//        cout<<arr[i]<<" ";
//    }
//string s; cin>>s;
//string s2; cin>>s2;
//    loop(s.size()){
//        s[i]= ::tolower(s[i]);
//        s2[i]= ::tolower(s2[i]);
//        if((int)s[i]<(int)s2[i]){
//            cout<<-1<<endl;
//            escanor;
//        }
//        else if((int)s2[i]<(int)s[i]){
//            cout<<1<<endl;
//            escanor;
//        }
//    }
//    cout<<0<<endl;

//string s; cin>>s;
//string s2; cin>>s2;
//loop(s.size()){
//    s[i]= ::tolower(s[i]);
//    s2[i]= ::tolower(s2[i]);
//}
//if(s>s2)cout<<1<<endl;
//else if(s2>s)cout<<-1<<endl;
//else cout<<0<<endl;


//string s; cin>>s;
//set<char>st;
//    loop(s.size()){
//        st.insert(s[i]);
//    }
//    if(st.size()%2!=0){
//        cout<<"IGNORE HIM!"<<endl;
//    }
//    else{
//        cout<<"CHAT WITH HER!"<<endl;
//    }

//string s; cin>>s;
//string lower="";
//string upper="";
//int low=0,upp=0;
//loop(s.size()){
//    if((int)s[i]>=97&&(int)s[i]<=122){
//        low++;
//    }
//    else{
//        upp++;
//    }
//    lower+= ::tolower(s[i]);
//    upper+= ::toupper(s[i]);
//}
//if(low>=upp)cout<<lower<<endl;
//else if(upp>low)cout<<upper<<endl;

//int n; cin>>n;
//stack<int>st;
//int cnt=0;
//    loop(n){
//        int tmp; cin>>tmp;
//        if(st.empty()||st.top()==tmp){
//            st.push(tmp);
//        }
//        else{
//            while(!st.empty()){
//                st.pop();
//            }
//            cnt++;
//            st.push(tmp);
//        }
//    }
//    if(!st.empty())cnt++;
//    cout<<cnt<<endl;

//int n; cin>>n;
//deque<int>dq;
//    loop(n){
//        int tmp; cin>>tmp;
//        dq.push_back(tmp);
//    }
//    int a=0,b=0;
//    loop(n){
//        int tmp;
//        if(dq.front()>dq.back()){
//        tmp=dq.front();
//        dq.pop_front();
//        }
//        else { tmp = dq.back();
//            dq.pop_back();
//        }
//        if(i%2==0){
//            a+=tmp;
//        }
//        else{
//            b+=tmp;
//        }
//    }
//cout<<a<<" "<<b<<endl;

int n,cnt=0; cin>>n;
string s; cin>>s;
    loop(s.size()){
        if(i==0)continue;
        else{
            if(s[i]==s[i-1])cnt++;
        }
    }
    cout<<cnt<<endl;
}
 
