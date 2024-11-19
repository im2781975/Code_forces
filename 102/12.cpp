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
