#include <iostream>
#include <bits/stdc++.h>
#include<sstream>
/******************************    problems in sheet moustafa saad   ***************************/
/***************************************       Q1  *************************************************/
using namespace std;
int main()

{ /**********************************    Q11    ************************************************/
    /*
    int h,n,f,c;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>f;
        if(f>h)
            c+=2;
        else
            c+=1;

    }
    cout<<c;
*/

 /************************************        Q12   ****************************************************/
 /*
 int s,ca,cd;

  string str;
    cin>>s;
    cin>>str;
    while(s)
    {
        s--;
        if(str[s]=='D')
            cd+=1;
        else if(str[s]=='A')
            ca+=1;
    }
       if(cd>ca)
        cout<<"Danik";
    else if(ca>cd)
        cout<<"Anton";
    else if(ca==cd)
        cout<<"Friendship";
   */

/***********************************     Q16      *****************************************************/
 /*  int l,b,count;
   cin>>l>>b;
    while(1)
   {
       if(l>b)
        {
           //count++;
           break;
        }
        else
        {
            l=l*3;
            b=b*2;
            count++;
        }

    }
    cout<<count;
   */
/**********************************   Q17      ****************************************/

  /*  int x=0,arr[3]={0},count = 0,result=0;
    cin>>x;
    for(int j=0 ; j<x ; j++)
    {
        for(int i=0; i<3; i++)
            {
                cin>>arr[i];
                if(arr[i]==1)
                    count++;
            }
            if(count >= 2 )
                result+=1;

            count=0;

    }
    cout<<result;
    */
/********************************************            Q18        *************************************************/
     /*
     int x=0;
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ;j++)
        {
            cin>>x;
            if(x==1)
                {
                    cout<<(abs(j-2)+abs(i-2));
                    return 0;
                }


        }

    }
    */
/*******************************************     Q19        **************************/
/*
int size=0;
cin>>size;
int arr[size];
for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }

sort(arr,arr+size);

    for(int i=0; i<size ; i++)
        cout<<arr[i]<<" ";
 */
 /***************************************       Q20       *****************************/
/*
 string s1,s2;
 cin>>s1>>s2;
 for(int i=0; i<s1.length() ; i++ )
 {
     s1[i] = tolower(s1[i]);
     s2[i] = tolower(s2[i]);
 }
 if(s1>s2)
    cout<<"1";
 else if(s1<s2)
    cout<<"-1";
 else
    cout<<"0";
*/
/*********************************    Q21            ******************************/
/*
int check[26] ={0} , ans = 0 ,len ;
char str[100] ={'0'};
//scanf("%s",&str);
//scanf("%s",&str)==1
 while(scanf("%s",&str))
 {
     int temp = 0 ;
     len = strlen(str);
     for(int i=0;i<len;i++)
     {
         temp = str[i] - 97 ;
         check[temp]++ ;
     }

  for(int j=0 ; j<26 ; j++)
     {
         if(check[j]>=1)
            ans++;

     }

if(ans%2==0)
     printf("CHAT WITH HER!\n");
else
     printf("IGNORE HIM!\n");

    return 0;
}
*/
/***************************************************   A. Word  Q-22  ****************************************************/
/*string s ;
int l=0 , n = 0 ;
cin >> s ;
for(int i=0 ; i< s.length() ; i ++ )
{
    if(s[i]>= 65 && s[i]<= 90 )
        l++;
    else
        n++;
}
if(l>n)
{   for(int i=0 ; i< s.length() ; i ++ )
    {
        s[i]=toupper(s[i]);

    }
    cout<<s;
}
else
{
    for(int i=0 ; i< s.length() ; i ++ )
    {
        s[i]=tolower(s[i]);

    }
    cout<<s;
}
*/
/********************************************    A. Magnets    Q-23  ***************************************************/
/*
int s ,c = 0 ;
string s_old ,s_new ;
cin >>s ;
cin>>s_old;
c=1;
for(int i = 0 ; i < s-1 ; i++)
{    cin>>s_new ;
        if(s_new != s_old)
        {
            c++;
            s_old = s_new ;
        }
}
cout<<c ;

*/
/********************************************    A. Sereja and Dima    ****************************************/
/*
  int s ,ser =0 ,dem =0 , left= 0 ,right ;
bool flag =true ;
  cin>>s ;
    int arr[s];
    right = s ;
  for(int i = 0 ; i < s ; i++ )
        {
            cin>>arr[i];
        }
        if(s == 1){
            cout<<arr[0] <<" " << 0 ;
            return 0 ;
        }
        else {
              for(int i = 0 ; i < s ; i++ )
              {
                  if(flag == true )
                  {
                      if(arr[ right -1 ] >= arr[left]){
                            ser +=arr[right-1];
                            right-=1;
                      }
                      else if(arr[ right -1 ] < arr[left]){
                            ser +=arr[left];
                            left+=1 ;
                          }
                     flag =false ;
                     continue ;
                  }


                  if(flag == false )
                  {
                      if(arr[ right -1 ] >= arr[left]){
                            dem +=arr[right-1];
                            right-=1;
                      }
                      else if(arr[ right -1 ] < arr[left]){
                            dem +=arr[left];
                            left+=1 ;
                          }
                     flag =true ;

                  }
              }
        }
cout<<ser << " " <<dem ;

*/
/*****************************************    Stones on the Table    **********************************/
/*
int x , c = 0;
string str ;
cin >> x ;
cin >> str ;
for(int i = 0 ; i < (x - 1) ; ++i ){
    if( str[ i ] == str [ i + 1 ])
        c++ ;
}

cout<<c;

*/
/*****************************************    A. Police Recruits    ***********************************/
// شيل بس اول /* بس
/*
int x , c = 0 , h=0 ;
cin >> x ;
int arr[x];
        for (int i = 0 ; i < x ; i ++ ){
            cin >> arr [i] ;
        }
        for (int i = 0 ; i < x ; i ++ ){
            if(arr [ i ] >= 1)
            {
                h += arr [ i ] ;
                continue ;
            }
            else if(arr [ i ] < 0 && h >= 1 ){
                h-- ;
                continue ;
            }
            else if ( arr[ i ] < 0 && h == 0 )
                c++ ;

        }
cout<< c ;
/*
int x , c = 0 , temp = 0 , s = 0 ;
bool flag = false ;

  cin >> x ;

   for(int  i = 0 ; i < x ; i++){

        cin >> temp ;


            if(temp > 0  ){
                flag = true ;
                s += temp ;
                x-=1 ;
                continue ;
                }
   else if( temp < 0 && flag == false ){
        c++ ;
        cout<<c <<" " ;
        x -= 1 ;
        continue ;
    }
    else if( temp < 0 && flag == true)
      {
          x -= 1 ;
          s -= 1 ;
          if(s == 0 ){
            flag = false ;
            continue ;
          }


      }

   }

cout <<endl <<c ;

*/
/****************************    A. Black Square    ****************/
/*
string str ;
int  s[4] ={0} , c = 0, temp = 0;
for (int i = 0 ; i < 4 ; i ++ ) {
    cin >> s[ i ] ;
}
cin >> str ;
for (int i = 0 ; i < str.length() ; i ++ ){

    if (str[ i ] == '\0') break ;

  temp =  str[i] - '0' ;
    c+= s[temp - 1];


}
cout << c  ;
*/
/********************************    A. Night at the Museum    ****************/
/*
char ch='a' ;
int c = 0 ;
string  str ;
cin >>str ;
    for (int i = 0 ; i < str.length() ; ++i ){
     //    cout<<"character number "<< i << " " <<(ch - str [ i ]) <<endl ;
         if ((ch - str [ i ])<= -13 ){  // -25 < -13
                c+= 26 + (ch - str [ i ]) ;
                ch = str[ i ] ;
         }
         else if ((ch - str [ i ])> -13 && (ch - str [ i ]) <= -1 ){  //   -13 < (ch - str [ i ]) <= -1
                c+=(ch - str [ i ]) *-1 ;
                ch = str[ i ] ;
         }
         else if ((ch - str [ i ]) > 13 ){

                c+= 26 - (ch - str [ i ]);
                ch = str[ i ] ;
         }
         else {
                c+= (ch - str [ i ]);
                ch = str[ i ] ;
         }



    }
    cout << c ;
/***************** another solution to Night at th museum  ************
   /* string s;
    char p='a';
    int cnt=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if((abs(s[i]-p))>13)
            cnt+=(26%(abs(s[i]-p)));
        else
            cnt+=(abs(s[i]-p));
        p=s[i];
    }
    cout<<cnt;
    */

/********************************    A. Games    ****************/
/*
 int si = 0 , co = 0 , temp = 0 ;
 cin >> si ;
 int host [ si ] , guest [ si ] ;

  for(int  i = 0 ; i < si ; i++ )
      cin >> host [ i ] >> guest [ i ] ;


    for(int  i = 0 ; i < si ; i++ ){
        temp = guest [ i ] ;
        for(int j = 0 ; j < si ; j++)
        {

                if( temp == host [j] )
                    co += 1 ;
        }
    }


 cout <<co ;

*/
/********************************    A. Buy a Shovel    *************************/
// انا الي كاتب الكود بس  مجبتش الفكره
/*
int pri , r , i = 1 ;
cin >> pri >> r ;
while ( true ){
         //15 * 1
    if((pri * i) % 10 == r || ( pri * i ) % 10 == 0 ){
        cout  << i ;
        break ;
    }
    else {
        i +=1 ;

    }
}
*/
/******************************    A. Is your horseshoe on the other hoof?  ************************/
 /*
 set < int > s ;
int arr [ 4 ] ;
for (int  i = 0 ; i < 4 ; i ++)
    cin >> arr[ i ] ;
s.insert(arr,arr+4) ;
cout<< 4 - s.size() ;
*/
/******************************   A. Colorful Stones (Simplified Edition)  ************************/
 /*
 int temp = 0;
 string s ,t ;
 cin >> s >> t ;

for( int i = 0 ; i < t.length() ; ++i ){
    if(s[ temp ] == t[ i ]) temp++;
}
cout<<temp+1 ;
*/
/****************************      A. Die Roll      *****************************************/
 /*
 int x ,y ,coun = 0 ;
 cin >> x >>y ;
 if(x >= y ){
        coun = (6 - x ) + 1 ;  // 1 2 3    4                5       6
       //coun = 6 / coun ;      // 6 3 2 (4/6) || (2/3)     5/6      1
       //cout<<coun <<endl ;
       if(coun == 6 )
        {
            cout<<"1/1" ;
        }
        else if(6/coun == 3)
        {
            cout<< "1/3" ;
        }
        else if(6/coun == 2)
        {
            cout<< "1/2" ;
        }
        else if(6%coun == 2)
        {
            cout<< "2/3" ;
        }
        else if(6%coun == 1)
        {
            cout<<"5/6" ;
        }
        else if(6/coun == 6)
        {
            cout<< "1/6" ;
        }
 }
 else if (y > x ){
       coun = (6 - y ) + 1 ;  // 1 2 3    4            5       6
        //coun = 6 / coun ;      // 6 3 2 (4/6) || (2/3)  5/6      1
        if(coun == 6 )
        {
            cout<<"1/1" ;
        }
        else if(6/coun == 3)
        {
            cout<< "1/3" ;
        }
        else if(6/coun == 2)
        {
            cout<< "1/2" ;
        }
        else if(6%coun == 2)
        {
            cout<< "2/3" ;
        }
        else if(6%coun == 1)
        {
            cout<<"5/6" ;
        }
        else if(6/coun == 6)
        {
            cout<< "1/6" ;
        }
 }
*/

/****************************      A. Shaass and Oskols    *****************************************/
/*
int s,no_of_shoots, in , shoot ;
cin >> s ;
int arr [s] ;
 for (int i = 0 ; i < s ; i++ )
    cin>>arr[i];

 cin >>no_of_shoots ;
 for (int i = 0 ; i < no_of_shoots ; i++ ){
    cin>> in >>shoot ;
    --in ;
    if(in != 0 )
        arr[in-1]+=shoot-1;
    if(in != s-1)
        arr[in+1]+=arr[in]-shoot ;

    arr[in]=0;

}
for (int i = 0 ; i < s ; i++ )
    cout<<arr[i]<<endl;

/*

if((in-1) == 0){
        arr[in] += arr[ in-1 ]- shoot ; // fly right
        arr[ in-1 ] = 0 ;
    }
    else if(in == s){
        arr[ in - 2 ] += arr[ in-1 ] - (arr[ in-1 ] - shoot)-1;  // fly left
        arr[ in-1]=0;
    }
    else{
            if(arr[in-1]>10){
               //
                arr[in]  += arr[in -1]- shoot ; //fly right
                if((arr[in -1]- shoot) == 0){
                    arr[in-2 ]+= arr[in -1] - 1 ;
                }
                else{
                    arr[ in - 2 ] += arr[ in-1 ] - (arr[ in-1 ] - shoot)-1;  // fly left
                }

            }
            else{
                arr[in] +=  arr[in -1]- shoot;   //fly right
                if((arr[in -1]- shoot) == 0 ) {
                    arr[in-2 ]= arr[in -1] - 1 ;
                }
                else{
                   //                   5        - ( 5  -   4 ) -   1
                    arr[ in - 2 ] += arr[ in-1 ] - (arr[ in-1 ] - shoot)-1;  // fly left
                 }
            }
            arr[ in-1]=0;

    }

*/
/*********************************    A. Juicer      *****************************************/
/*
long long   s = 0 , x , y , z , a ,aa=0;
cin >>x >>y >>z ;
for(long i=0 ;i<x;i++)
    {
        cin>>a;
        if(a>y) continue ;
         s+=a;
         if(s>z)
         {
             s=0;
             aa+=1;
         }
    }


    cout<<aa;

*/
/***************************    A. Anton and Letters    ************************/
/*
set<char>s;
string x;
getline(cin , x);
for(int i =0 ; i < x.length(); i ++ ){
    if((x[i]== '{' )|| (x[i]=='}') || (x[i]==',') ||(x[i]==' ') )
        continue;
    else
        s.insert(x[i]);
}
cout<<s.size();
*/

/***************************    A. Carrot Cakes    ************************/
/*
int  n,t,k,d,count_1=0,count_2=0 ;
int jj=0;

 cin>>n>>t>>k>>d;
 jj = (n+k-1)/k;
 count_1 = 0 ;
 count_2 = d ;
 for(int i = 0 ; i<jj ; i ++)
 {
     if(count_1<=count_2) count_1 += t ;
     else
        count_2+=t;

 }

if(max(count_1,count_2)<(jj*t))cout<<"YES";
else
    cout<<"NO";

    /*

     ++i;
     if(i==t){
        bake += k ;
        count_1+=i;

        i = 0 ;
     if(bake >= n ) break ;
     }
     if(count_1 >= d)
     {
         j=count_1-d;
         count_2=j;
         while(true){
            ++j;
            ++i;
            if(i == t ){
                bake += k ;
                i=0;
                if(bake >= n ) break ;
            }
            if(j == t){
                bake += k ;
                count_2=j+(count_1-d);
                j=0;
                if(bake >= n ) break ;
            }
         }
     }

*/
/*
if(i== d && bake != n){
            j+=i;
            ++i;
        while (true)
        {
            ++j;
            ++i;
            ++x;
            if(x == t){
                bake+=k;
                x=0;
            }
            if(bake >= n )
                break;
        }
        break ;
     }
     if(bake >= n) break ;
*/




/*
 ++bake;
    if(bake!= n && bake >= d){
        bake_2+=bake;
        while(true)
        {
            ++bake;
            ++bake_2;
            if(bake==n || bake_2 == n)
                break;
        }
        break;
    }

*/
/***************************    A. Way Too Long Words    ************************/
/*
int s ;
cin >>s;
string arr[s],str;
for(int i =0 ; i < s ; i ++)
    cin >>arr[i];
for(int i =0 ; i < s ; i ++)
    {
        if(arr[i].length()> 10){
                str=arr[i];
           cout <<str[0]<< arr[i].length()-2<<str[str.length()-1]<<endl;
        }
        else{
            cout<<arr[i]<<endl;
        }
    }
*/
/***************************    A. Free Ice Cream    ************************/
/*
long long n, x , d, c1=0;
 char ch ;
 cin >> n >> x ;
 for(int i =0 ; i < n ; i ++)
 {
      cin >> ch >>d;
    if(ch == '+'){
        x+=d;

    }
    else{
        if(x>=d)
            x-=d;
        else
            c1+=1;
    }

 }

 cout<<x <<" "<<c1;
 */

/***************************    A. Helpful Maths    ************************/
/*
char s[100],str[100],ch;
int j=0;
    cin>>s;
for(int  i = 0 ; s[i]!= '\0' ; i++)
{
    if(s[i]!='+'){
        str[j] = s[i];
        ++j;
    }
}
str[j]='\0';

sort(str,str+j);
int i;
for( i = 0 ; i < j -1 ; i++)
    cout<<str[i]<<"+";
cout<<str[i];
*/
/***************************    A. Team Olympiad    ************************/
/*int n ,c=0 ,s=0;
cin >> n ;
int arr [4][5001] ,count[4]={0},gift=0;

for(int i = 1 ; i <= n ; i ++){
    cin>> gift;
    count[gift]++;
    arr[gift][count[gift]]=i;
}
s=min(min(count[1],count[2]),count[3]);
cout<<s<<endl ;
for(int i = 1 ; i <= s ; i ++)
    cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<endl;
    */

/***************************    A. New Password    ************************/
/*
int n , k ,arr[26]={0},c ,cc=0, i;
char req[25];
cin >> n >> k ;
for( i=97 ; i <= 122  ; i ++ ){
    req[i-97]=i;
}
req[i]='\0';
c= n/k;
for(int i = 0 ; i < c ; i++){
        int j ;
    for( j = 0 ; j < k ;j++){
        cout<< req[j];
    }

}
cc = n%k ;
for(int i = 0 ; i < cc ; i++){
    cout<<req[i];
}
*/
/***************************    A. Presents    ************************/
/*
int n ;
cin>>n;
int arr[n], freq[n]={0};
for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
    freq[arr[i]-1]=i+1;
}
for(int i = 0 ; i<n ; i++){
    cout<<freq[i]<<" ";
}
*/
/***************************    A. Lineland Mail    ************************/
/*
long long n ;
cin >> n ;
long long arr[n],maxx[n]={0},minn[n]={0};
for(int i = 0 ; i < n ; i ++){
    cin>>arr[i];
}
for(int i=0 ; i < n ; i ++){
    maxx[i]=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
    if(i==0){
        minn[i]=abs(arr[i]-arr[i+1]);
    }
    else if(i== (n-1))
    {
        minn[i]=abs(arr[i]-arr[i-1]);
    }
    else{
        minn[i]=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
    }
}
for(int i=0 ; i < n ; i ++)
    cout<<minn[i]<<" "<<maxx[i]<<endl;






/*
for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j< n ; j ++ ){
        if(arr[i]== arr[j] ) continue;
        if(arr[i]> arr[j] ){
            ans[j]=arr[i]-arr[j];

        }
        else{
            ans[j]= arr[j] - arr[i];
        }

    }
  sort(ans , ans+n);
  if(ans[0]!=0)
    {cout<<ans[0]<<" "<<ans[n-1]<<endl;}
   else
   {
       cout<<ans[1]<<" "<<ans[n-1]<<endl;
   }

/*for(int i =0; i < n ; i ++ ){
    cout<<ans[i]<<"  ";
}
cout<<endl ;
*/
/***************************    A. Mahmoud and Longest Uncommon Subsequence    ************************/
/*
string s , ss ;
cin >> s >>ss ;

 if(s == ss){
    cout<<"-1";
 }
 else if(s.length() > ss.length()){
    cout<< s.length();
 }
 else
 {
     cout<< ss.length() ;
 }
*/
/***************************    A. Snacktower    ************************/
/*
int s , t=0 ;
cin >> s ;
t=s ;
int  arr  [ s+1 ]={0} ,temp [s+1]={0};
for(int i = 1 ; i <= s ; i++)
    cin>>arr[i];
for(int i = 1 ; i <=s ; i ++ ){
    temp[arr[i]]=1;
    //cout<<temp[t];
    while(temp[t] && t>0){
        cout<<t-- << " ";
    }
    cout<<endl ;
}
*/
/***************************    A. Oath of the Night's Watch    ************************/
/*
long x ,temp = 0 ,flag_min=0 ,flag_max = 0 ,t = 0;

 cin>>x ;

long arr[x];

for(long i = 0 ; i < x ; i++){
    cin >> arr[i];
}
sort(arr,arr+x);
    for(long j = 1 ; j < x-1 ; j++){
        if(arr[0]<arr[j] && arr[x-1]>arr[j])
            t+=1;
     }


/*for(long i = 1 ; i < x-1 ; i++) {
    temp= arr[i];
    for(long j = 0 ; i < x ; j++){
        if(arr[j] < temp){
            flag_min=1;
            break;
        }
    }
    for(long j = 0 ; i < x ; j++){
        if(arr[j] > temp){
            flag_max=1;
            break;
        }
    }
    if(flag_min == 1 && flag_max == 1)
        t+=1;
}
cout<<t;
*/

/***************************    A. Next Round    ************************/

int x , y ,c= 0 ,eq=0 ;
 cin >> x >> y ;
 int arr [x];
for(int i = 0 ; i < x ;i++){
    cin>>arr[i];
}


if(arr[y-1] == 0 ){
    for(int i = 0 ; i< x ; i ++ )
    {
        if(arr[i] > 0 ){
            c++;
        }
    }

//cout<<c;

}
else{
        c=y;
    for(int i = y    ; i < x ; i++ ){
        if(arr[y-1] <= arr[i]){
            c++;
            //cout<<endl <<arr[i+1];
        }
    }
}
cout<<c;

//cout<<arr[y-1]<<endl <<arr[y+1]<<endl <<arr[y];


return 0;
}
