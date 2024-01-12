
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         int n , r , b ;
//         cin>>n>>r>>b; 
//         int k=0 ;
//         string ans = "";
//         // ans+='R';
//         // int cnt = ceil((float)r / (b+1));
//         // // cout<<cnt<<endl;
//         // while(k<n){
//         //     for(int i=0;i<cnt && k<n;i++){
//         //         ans+='R';
//         //         k++;
//         //     }
//         //     if(k<n){
//         //         ans+='B';
//         //         k++;
//         //     }
//         // }

//         int d = r / (b+1) ;
//         int remm = r%(b+1) ;

//         // string ans ="";

//         for(int i=0;i<=b;i++){
//             for(int i=0;i<d;i++){
//                 ans += 'R';
//             }
//             if(remm){
//                 ans+='R';
//                 remm--;
//             }
//             if(i!=b)ans+='B';
//         }
//         cout<<ans<<endl;
//         t--;
//     }
// return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         int n , k ;
//         cin>>n>>k ;
//         int total = k ;
//         string s;
//         cin>>s;
//         string temp = s;
//         vector<int> ans (n , 0);
//         int flip = 0 ; 
//         for(int i=0;i<n;i++){
//             if(k==0)break;
//             int bitt = s[i]-'0';
//             if((bitt==0 && flip%2==0) || (bitt==1 && flip%2==1)){
//                 if(k%2==0){
//                     // even 
//                     ans[i]++;
//                     flip++;
//                     k--;
//                     if(k==0)break;
//                 }
//             }
//             else{
//                 if(k%2!=0){
//                     // odd
//                     ans[i]++;
//                     flip++;
//                     k--;
//                     if(k==0)break;
//                 }
//             }
//         }
//         if(k){
//             ans[n-1]+=k;
//         }
//         for(int i=0;i<n;i++){
//             if((total-ans[i]) %2 ==1){
//                 if(temp[i]=='0'){
//                     temp[i]='1';
//                 }
//                 else{
//                     temp[i]='0';
//                 }
//             }
//         }
//         cout<<temp<<endl;
//         for(auto i:ans){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//         t--;
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         long long int n , a , b ;
//         cin>>n>>a>>b ;
//         long long int arr[n]; 
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         vector<long long    int> prefix (n ,0 );
//         prefix[0] = arr[0] ;
//         for(int i=1;i<n;i++){
//             prefix[i] = prefix[i-1] + arr[i] ;
//         }
//         long long int ans = prefix[n-1]*b ;
//         long long int prev = b*arr[0];
//         for(int i=0;i<n;i++){
//             ans = min(ans , prev + arr[i]*a + (prefix[n-1]-prefix[i] - (n-i-1)*arr[i])*b); 
//             if(i+1!=n){
//                 prev+=(arr[i+1]-arr[i])*b;
//             }
//         }
//         cout<<ans<<endl;
//         t--;
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         string s;
//         cin>>s;
//         string ans = ""; 
//         int index = 0 ;
//         for(int i=0;i<s.length();i++){
//             if(s.find(s[i], i+1)>=s.length()){
//                 index = i;
//                 break;
//             }
//         }       
//         cout<<s.substr(index)<<endl;
//         t--;
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         sqrt
//         t--;
//     }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         t--;
//         int m , n ;
//         cin>>m>>n ;
//         if(m==1 && n==1){
//             cout<<"0"<<endl;
//             continue;
//         }
//         else if(m==1 && n==2 || m==2 && n==1){
//             cout<<"1"<<endl;
//             continue;
//         }
//         else if(m==1 && n>2 || m>2 && n==1){
//             cout<<"-1"<<endl;
//             continue;
//         }
//         else{
//             if(m%2==0 && n%2==0 || m%2==1 && n%2==1){
//                 cout<<(max(m,n)-1)*2<<endl;
//             }
//             else{
//                 cout<<(max(m,n)-1)*2-1<<endl;
//             }
//         }
//     }
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         int n , m ;
//         cin>>n>>m;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         if(n>m){
//             cout<<"NO"<<endl;
//             continue;
//         }
//         int count = arr[0];
//         for(int i=0;i<n;i++){
//             if(arr[i]>arr[i+1]){
//                 count+=2*arr[i]-arr[i+1];
//             }
//         }
//         if(count+n <= m){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//         t--;
//     }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxi = INT_MIN ;
//     for(auto i:arr){
//         maxi = max(maxi , i);
//     }
//     vector<int> maxelems ;
//     for(int i=0;i<n;i++){
//         if(arr[i]==maxi){
//             maxelems.push_back(i);
//         }
//     }
//     int size = maxelems.size();
//     int zero = size/2;
//     if(zero!=0){
//         int k = -1;
//         for(int i=zero-1 ;i>=0;i--){
            
//         }
//     }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long int t;
//     cin>>t;
//     while(t){
//         t--;
//         long long int n , m ;
//         cin>>n>>m;
//         long long int arr[n];
//         for(long long int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         sort(arr , arr+n);
//         if(n>m){
//             cout<<"NO"<<endl;
//             continue;
//         }
//         long long int count = 0 ; 
//         for(long long int i=0;i<n-1;i++){
//             count+=max(arr[i] , arr[i+1]);
//         }
//         count+=max(arr[0] , arr[n-1]);
//         count+=n ;
//         if(count>m){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }
//     }
// return 0;
// }


// int n = height.length();
// int left = 0 , right = n -1 ;
// int res = 0 ;
// int leftmax = 0 , rightmax = 0 ;

// while(left<=right){
//     if(height[left] <= height[right]){
//         if(height[left]>=leftmax){
//             leftmax = height[left];
//         }
//         else{
//             res += leftmax - height[left];
//         }
//     }
//     else{
//         if(height[right]>=rightmax){
//             rightmax = height[right];
//         }
//         else{
//             res+=rightmax-height[right];
//         }
//         right--;
//     }
// }
// return res;


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         int n ; cin>>n ;
//         if(n<=1399){
//             cout<<"Division "<<4<<endl;
//         }
//         else if(n>=1400 && n<=1599){
//             cout<<"Division "<<3<<endl;
//         }
//         else if(n>=1600 && n<=1899){
//             cout<<"Division "<<2<<endl;
//         }
//         else{
//             cout<<"Division "<<1<<endl;
//         }
//         t--;
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         int n ;
//         cin>>n;
//         map<int , int> m; 
//         int arr[n]; 
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//             m[arr[i]]++;
//         }
//         bool ans = false;
//         for(auto i:m){
//             if(i.second >= 3){
//                 ans = true ;
//                 cout<<i.first<<endl;
//                 break;
//             }
//         }
//         if(!ans)cout<<-1<<endl;
//         t--;
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         string s ;
//         cin>>s;
//         char prev = s[0]; 
//         int ans = 1;
//         bool res = true;
//         if(s.length()==1)res=false;
//         for(int i=1;i<s.length();i++){
//             if(s[i]==prev){
//                 ans++;
//             }
//             else{
//                 if(ans == 1){
//                     res = false;
//                     break;
//                 }
//                 else{
//                     prev = s[i] ;
//                     ans = 1 ;
//                 }
//             }
//         }
//         if(res && ans!=1)cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//         t--;
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         int n ;
//         cin>>n;
//         int arr[n] ;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         bool ans = true ;
//         int first = 0  , second = 0 ; 
//         if(n==1){
//             t--;
//             cout<<"YES"<<endl;
//             continue;
//         }
//         else{
//             for(int i=1;i<n;i++){
//                 if(arr[i]!=(arr[i-1]+1)){
//                     if(first == 0){
//                         first = i ;
//                     }
//                     else if(second == 0){
//                         second = i ;
//                     }
//                     else{
//                         ans = false;
//                         break;
//                     }
//                 }
//             }
//         }
//         // cout<<first<<second<<endl;
//         if(ans){
//             if(first != 0  && second == 0){
//                 if(arr[first]-arr[first-1] > 3){
//                     ans = false;
//                 }
//             }
//             else if(first != 0  && second != 0){
//                 if(arr[first]-arr[first-1] > 3)ans = false;
//                 else if(arr[first]-arr[first-1] == 3 && arr[second]-arr[second-1] >= 1)ans = false;
//                 else if(arr[first]-arr[first-1] == 2 && arr[second]-arr[second-1] >= 2)ans = false;
//                 else if(arr[first]-arr[first-1] == 1 &&  arr[second]-arr[second-1] >= 3) ans = false;
               
//             }
//              if(ans)cout<<"YES"<<endl;
//                 else cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//         t--;
//     }
// return 0;
// }

// //  1 2 3 6 7 9
// //  2 3 4 5 


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         int n , k ;
//         cin>>n>>k;
//         string s ;
//         cin>>s;
//         if(k==0){
//             cout<<1<<endl;
//         }
//         else{
//             bool ans = true ;
//             for(int i=0;i<n/2;i++){
//                 if(s[i]!=s[n-i-1]){
//                     ans = false; break;
//                 }
//             }
//             if(ans || n==1)cout<<1<<endl;
//             else cout<<2<<endl;
//         }
//         t--;
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         int n ;
//         cin>>n ;
//         int arr[n]; 
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int sum = 0 ;
//         for(int i=0;i<n;i++){
//             sum+=(arr[i]-1);
//         }
//         if(sum%2==0){
//             cout<<"maomao90"<<endl;
//         }
//         else{
//             cout<<"errorgorn"<<endl; 
//         }
//         t--;
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         string s ;
//         cin >> s;
//         int n  = s.length();
//         bool ans = true ;
//         if(s[0]=='B' || s[n-1]=='A'){
//             ans = false;
//         }
//         else{
//             int a = 1 , b=0 ; 
//             for(int i=1;i<n;i++){
//                 if(s[i]=='A'){
//                     a++;
//                 }
//                 else if(s[i]=='B'){
//                     b++;
//                     if(a<b){
//                         ans = false;
//                         break;
//                     }
//                 }
//             }
//         }
//         if(ans){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//         t--;
//     }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         int n ;cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int count = 0 ; 
//         for(int i=1;i<n;i++){
//             if(arr[i]==arr[i-1]){
//                 count++;
//                 i++;
//             }
//         }
//         if(count ==0 || count ==1){
            
//         }
//         t--;
//     }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         long long n ;
//         cin>>n;
//         long long a[n] ;
//         long long b[n] ;

//         for(long long i = 0; i < n; i++){
//             cin >> a[i];
//         }
//        for(long long i = 0; i < n; i++){
//             cin >> b[i];
//        }
//         long long sum = 0 ;
//         for(long long i=0;i<n;i++){
//             if(a[i]>b[i])swap(a[i] ,b[i]);
//         }
//         for(long long i= 0; i<n-1;i++){
//             sum+=abs(a[i+1]-a[i])+ abs(b[i+1]-b[i]);
//         }
//         cout<<sum<<endl;

//         t--;
//     }
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k ;
    cin>>n>>k;
    int arr[n] ;
    int count = 0 ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]!=0)count++;
    }
    cout<<count;
return 0;
}
