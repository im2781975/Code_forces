#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n], tmp[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j)
                sum += arr[j];
        }
        tmp[i] = sum;
        sum = 0;
    }
    for(int i = 0; i < n; i++)
        cout << tmp[i] << " ";
}
using namespace std;
bool sortbysec(const pair <string, int> &a, const pair <string, int> &b){
    if(a.second!= b.second)
        return a.second > b.second;
    if (a.first.find(b.first) == 0 || b.first.find(a.first) == 0)
        return a.first.size() > b.first.size();
    return a.first < b.first;
}
int main(){
    int n; cin >> n;
    vector <string> name;
    vector <int> mark;
    vector <pair <string, int> > vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i].first >> vec[i].second;
    sort(vec.begin(), vec.end(), sortbysec);
    for(int i = 0; i < n; i++)
        cout << vec[i].first << " " << vec[i].second;
}
using namespace std;
//1325B
void CopyCopy(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int cnt = n;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1])
            cnt--;
    }
    cout << cnt;
}
using namespace std;
//977C
void LessOrEqual(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if(k == 0){
        int res = arr[0] - 1;
        cout << (res > 0) ? res : -1;
    }
    else if(k == n)
        cout << arr[n - 1];
    else{
        if(arr[k - 1] == arr[k])
            cout << -1;
        else
            cout << arr[k - 1];
    }
}
//https://codeforces.com/contest/977/problem/C
//unfinished

// int main(){
// 	long long t,n,k,d,c;
	
	
	
//      cin>>n>>k;
     
     
//      int arr[n];
//      for(int i=0;i<n;i++){
//      	cin>>arr[i];
//      }
//      sort(arr,arr+n);
     
//       if(n==1 && k!=0){
//      	cout<<arr[0]+1<<endl;
//      }
//     else if(k<n && n!=1){
    	
//     	if(k==0){
//         	int l=arr[k]-1;
//         	if(l>0){
//         		cout<<l<<endl;
//         	}
//         	else{
//         		cout<<-1<<endl;
//         	}
//         }
    	
//        else if(arr[k-1]==arr[k]){
//     	cout<<-1<<endl;
//            }
        
//     	else{
//     		cout<<arr[k-1]<<endl;
//     	}
    	
//     }
//     else if(n==1 && k==0){
//     	int l=arr[k]-1;
//     	if(l>0){
//         		cout<<l<<endl;
//         	}
//         	else{
//         		cout<<-1<<endl;
//         	}
//     }
// 	else if(n==k){
// 	    cout<<arr[k-1]<<endl;
//       }  
//   return 0; 
// }
      
// int main(){
// 	string s1="Hello";
// 	s1[0]='Y';
// 	cout<<s1;
// }


//https://codeforces.com/contest/352/problem/B
 //unfinisheaaad

// int main(){
// 	long long t,n,k,d,c,i=0;
// 	pair<int,int> p;
// 	cin>>n;
// 	long long arr[n];
// 	for (int i =0;i<n;i++){
// 		cin>>arr[i];
// 	}
	 
//     while(i<n-1){
// 		for (int j =i+1;j<n;j++){
// 		if(arr[i]==arr[j]){
// 			d=j-i;
// 			i=j;
// 		}
// 	}
// 	}

// }

//https://www.hackerrank.com/challenges/reduced-string/problem?isFullScreen=true

// unfinished

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

// string superReducedString(string s) {
//     int l,i; string r;
//     l=s.size();
//     for( i=0;i<l-1;i++){
//         if(s[i]==s[i+1]){
//             if(i+2<l){
//                 s.erase(s.begin()+i,s.begin()+i+2);
//                 l=s.size();
//                 i=0;
            
//             }
//             if(i+2==l){
//                 // s.erase(i);
//                 // s.erase(i+1);
//                 // l=s.size();
//                 // i=0;
//                 s="Empty String";
//             }
            
            
            
//         }
//     }
//     if (s.empty()){
//         s="Empty String";
//     }
    
//     return s;

// }

// int main()
// {
//     // ofstream fout(getenv("OUTPUT_PATH"));

//      string s;
//     // getline(cin, s);
    
//     cin>>s;

//     string result = superReducedString(s);

//     // fout << result << "\n";
    
//     cout<<result<<" ";

//     // fout.close();

//     return 0;
// }


//https://codeforces.com/contest/1659/problem/A

//Wrong answer on test case 3

// int main(){
// 	long long t,n,r,b,bb,c,q;
	
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n>>r>>b;
// 		char s[n];
// 		for(int i=0;i<n;i++){
// 			s[i]='R';
// 			// cout<<s[i];
// 		}
// 		// cout<<endl;
// 		bb=b;
// 		for (int j=0;j<n;j++){
// 			q=r/(bb+1);
// 			q=floor(q);
// 			s[j+q]='B';
// 			r-=q;
// 			bb-=1;
// 			j+=q;
			
// 		}
// 		for(int i=0;i<n;i++){
// 			cout<<s[i];
// 		}
// 		cout<<endl;
		
//     }
//     return 0;
// }

//pointers and 2D arrays

// int main(){
// 	int B[2][3];
// 	for (int i=0;i<2;i++){
// 		for(int j=0;j<3;j++){
// 			B[i][j]=i+j;
// 		}
// 	}
// 	for (int i=0;i<2;i++){
// 		for(int j=0;j<3;j++){
// 			cout<<B[i][j];
// 		}
// 		cout<<endl;
	
// 	}
// 	int (*p)[3]=B;
// 	cout<<B<<endl;
// 	cout<<B[0]<<endl;
// 	cout<<&B[0][0]<<endl;
// 	cout<<**B<<endl;
// }





// int main(){
// 	long long t,n,r,b,bb,c,q;
// 	string rate;
	
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		long long arr[n];
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		if(n<3){
// 			cout<<-1<<endl;
// 			continue;
// 		}
// 		sort(arr,arr+n);
		
// 		for(int i=0;i<n-1;i++){
// 			c=1;
// 			for(int j=i+1;j<n;j++){
// 				if(arr[i]==arr[j]){
// 					c++;
				
// 				}
				
// 				if(c==3){
// 					break;
// 				}
				
// 				if(arr[j]>arr[i]){
// 					break;
// 				}
				
// 			}
// 			if(c>=3){
// 				cout<<arr[i]<<endl;
// 				break;
// 			}
// 		}
// 		if(c<3){
// 			cout<<-1<<endl;
// 		}
// 	}
// }

// int main(){
// 	long long t,l,n,r,b,bb,c,q;
// 	string s,ss;
// 	n=0;
// 	c=0;
	
// 	cin>>t;
// 	while(t--){
// 		c=0;
// 		cin>>s;
// 		l=s.size();
// 		if(l==1){
// 			cout<<"NO"<<endl;
// 			continue;
// 		}
		
// 		for(int i=0;i<l;i++){
			
		
// 			if(i==0){
// 				if(s[i]==s[i+1]){
// 					c=1;
// 				}
// 				else{
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
// 			else if(i==l-1){
// 				if(s[i]==s[i-1]){
// 					c=1;
// 				}
// 				else{
// 					c=0;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
// 			else if(s[i-1]==s[i]||s[i+1]==s[i]){
// 				c=1;
// 			}
// 			else{
// 				c=0;
// 				cout<<"NO"<<endl;
// 				break;
// 			}
			
// 		}
// 		if(c==1){
// 			cout<<"YES"<<endl;
// 		}
// 	}
// }




// int main(){
// 	long long t,n,r,b,bb,c,q;
// 	string s;
// 	c=1;
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		long long arr[n];
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		c=1;
// 		if(arr[0]%2==0){
// 			for(int i=0;i<n;i+=2){
// 				if(arr[i]%2!=0){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
// 			if(c==-1){
// 			continue;
// 		}	
			
// 		}
// 		else if(arr[0]%2==1){
// 			for(int i=0;i<n;i+=2){
// 				if(arr[i]%2!=1){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
			
// 		if(c==-1){
// 			continue;
// 		}	
// 		}
// 		if(arr[1]%2==0){
// 			for(int i=1;i<n;i+=2){
// 				if(arr[i]%2!=0){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
			
// 			if(c==-1){
// 			continue;
// 		}	
// 		}
// 		else if(arr[1]%2==1){
// 			for(int i=1;i<n;i+=2){
// 				if(arr[i]%2!=1){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
			
// 			if(c==-1){
// 			continue;
// 		}	
// 		}
// 		if(c==1){
// 			cout<<"YES"<<endl;
// 		}


// 	}
// }


// int main(){
// 	long long t,n,r,b,bb,c,q,l;
// 	string s;
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		cin>>s;
// 		bool flag=true;
// 		for(int i=0;i<n;i++){
// 			while(i<n && s[i]=='W') i++;
// 			if(i==n) break;
// 			int blue =0, red=0;
// 			while(i<n && s[i]!='W'){
// 				if(s[i]=='B') blue++;
// 				else red++; 
// 				i++;
// 			}
			 
// 			if(red==0 || blue==0){
// 				flag=false;
// 				break;
// 			}
			
// 		}
// 		if(flag){cout<<"YES"<<endl;}
// 		else cout<<"NO"<<endl; 
// 	}
// }
	
	// c=1;
	
	// cin>>t;
	// while(t--){
	// 	cin>>n;
	// 	cin>>s;
	// 	if(n==1){
	// 		if(s=="W"){
	// 			cout<<"YES"<<endl;
	// 			continue;
	// 		}
	// 		else{
	// 			cout<<"NO"<<endl;
	// 			continue;
	// 		}
	// 	}
	// 	if(n==2){
	// 		if(s=="WW" || s=="RB" || s=="BR"){
	// 			cout<<"YES"<<endl;
	// 			continue;
	// 		}
	// 		else{
	// 			cout<<"NO"<<endl;
	// 			continue;
	// 		}
			
	// 	}
		
		
	// 	l=s.size();
	// 	char c='W';
	// 	bool flag=true;
	// 	for(int i=0;i<l;i++){
	// 		while(i<n && s[i]=='W') i++;
	// 		if(i==n) break;
	// 		int blue =0, red=0;
	// 		while(i<n && s[i]!='W'){
	// 			if(s[i]=='B') blue++;
	// 			else red++; 
	// 			i++;
	// 		}
			 
	// 		if(red==0 || blue==0){
	// 			flag=false;
	// 			break;
	// 		}
			
	// 	}
	// 	if(flag){cout<<"YES"<<endl;}
	// 	else cout<<"NO"<<endl;
	// 	}
		
		
			
		
			// if(i==0){
		// 		if(s[i]=='R' || s[i]=='B'){
		// 			if(s[i+1]=='R' || s[i+1]== 'B'){
		// 			 c=1;
		// 		      }
		// 		   else{
		// 			 cout<<"NO"<<endl;
		// 			 break;
		// 		     }
		// 		}
				
		// 	}
		// 	else if(i==l-1){
		// 		if(s[i]=='R' || s[i]=='B'){
		// 			if(s[i-1]=='R' || s[i-1]== 'B'){
		// 			 c=1;
		// 		      }
		// 		   else{
		// 		   	 c=0;
		// 			 cout<<"NO"<<endl;
		// 			 break;
		// 		     }
		// 		}
		// 	}
		// 	else if(s[i]=='R'){
		// 		if(s[i+1]=='R' || s[i+1]=='B'|| s[i-1]=='R'|| s[i-1]=='B'){
		// 			if(s[i-1]=='W'){
		// 				if(s[i+1]=='B'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 				}
		// 			}
		// 			if(s[i+1]=='W'){
		// 				if(s[i-1]=='B'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 					cout<<"NO"<<endl;
		// 		            break;
		// 				}
		// 			}
					
					
		// 		}
		// 		else{
		// 		    c=0;
		// 		    cout<<"NO"<<endl;
		// 		    break;
		// 	    }
				
		// 	}
		// 	else if(s[i]=='B'){
		// 		if(s[i+1]=='R' || s[i+1]=='B'|| s[i-1]=='R'|| s[i-1]=='B'){
		// 			if(i!=0 && s[i-1]=='W'){
		// 				if(s[i+1]=='R'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 				}
		// 			}
		// 			if(i!=(n-1) && s[i+1]=='W'){
		// 				if(s[i-1]=='R'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 					cout<<"NO"<<endl;
		// 		            break;
		// 				}
		// 			}
					
					
		// 		}
		// 		else{
		// 		    c=0;
		// 		    cout<<"NO"<<endl;
		// 		    break;
		// 	    }
				
		// 	}
			
			
	
		// }
		// if(c==1){
		// 	cout<<"YES"<<endl;
		
// TLE on test case 3
// int main(){
// 	long long t, n,c,l;
// 	string s;
// 	cin>>t;
// 	while(t--){
// 		c=0;
// 		cin>>n;
// 		l=n*(n-1)/2;
// 		string arr[n];
// 		vector<pair<string, string>> v;
// 		for (int i=0;i<n;i++){
// 			cin>>arr[i];
// 			v[i].first=arr[i];
// 		}
		
		
// 		for(int i=0;i<l;i++){
// 			if(j==n)
// 				j=
// 			v[i].first=arr[j];
// 			v[i].second=arr[j+1];
			
			
			
// 		}
// 		cout<<c<<endl;
// 	}
// }

// if((arr[i][0]==arr[j][0] && arr[i][1]!=arr[j][1]) ||  (arr[i][0]!=arr[j][0] && arr[i][1]==arr[j][1])){
// 					c++;
// 				}

// int main(){
// 	long long t, n,c,l,r,ans;
// 	string s;
// 	long long arr[5][5];
// 	for(int i=0;i<5;i++){
// 		for(int j=0;j<5;j++){
// 			cin>>arr[i][j];
// 			if(arr[i][j]==1){
// 				r=i;
// 				c=j;
// 			}
// 		}
	
// 	}
// 	ans=abs(2-r)+abs(2-c);
// 	cout<<ans<<endl;
// }
	
//unfinished
	
// int main(){
// 	long long n,l,t,c=0,j=0;
// 	size_t found=0;
// 	cin>>n>>t;
// 	string s;
// 	cin>>s;
// 	//     while(t!=0){
// 	//     	for(int i=0;i<n;i++){
		    
// 	// 	    	if(s[i]=='B' && s[i+1]=='G'){
			
// 	// 			s[i]='G';
// 	// 		    s[i+1]='B';
// 	// 		    // t--;
// 	// 		    i++;

			
	         
// 	// 	    }
// 	// 	    t--;
		    
		
// 	//     }
		
// 	// }
// 	l=s.size();
// 	while(t--){
// 		found=0;
// 		while(l-found){
			
// 				found = s.find("BG",found);
// 					if (found != string::npos){
// 	                s[found]='G';
// 	                s[found+1]='B';
	                
// 	                cout<<found<<endl;
	
// 	                found=found+2;
	                
// 				}
				
	    
			
			
// 		}

   
// 	}
// 	cout<<s<<endl;
	
// }


// int main(){
// 	long t,l;
// 	string s,n;
// 	cin>>s;
// 	l=s.size();
// 	//.   -->0
// 	// -. -->1
// 	//--  -->2
// 	for(int i=0;i<l;i++){
// 		if(s[i]=='.')
// 			n.push_back('0');
// 		else if(s[i]=='-'){
// 			if(s[i+1]=='.'){
// 				n.push_back('1');
// 				i++;
// 			}
// 			else if(s[i+1]=='-'){
// 				n.push_back('2');
// 				i++;
// 			}
			
	
// 		}
// 	}
// 	cout<<n<<endl;
// }


// int main(){
// 	long long t,n,y,arr[4],c;
// 	cin>>y;
// 	bool flag=true;
// 	n=y+1;
// 	while(flag){
// 		//n=y+1;
// 		for(int i=0;i<4;i++){
// 			arr[i]=n/(pow(10,3-i));
// 			arr[i]%=10;
			
// 		}
// 		sort(arr,arr+4);
// 		for(int i=0;i<3;i++){
// 			if(arr[i]==arr[i+1]){
// 				c=0;
// 				n++;
// 				break;
				
// 			}
// 			else{
// 				c=1;
// 				continue;
// 			}
// 		}
// 		if(c){
// 			cout<<n<<endl;
// 			flag=false;
// 		}
		
		
		
// 	}
	
// }

// 

// 

// int main(){
	
// 	string s;
// 	cin>>s;
	
// 	int upper = 0, lower = 0, number = 0, special = 0;
// 	for (int i = 0; i < s.length(); i++)
// 	{
// 		if (s[i] >= 'A' && s[i] <= 'Z')
// 			upper++;
// 		else if (s[i] >= 'a' && s[i] <= 'z')
// 			lower++;
		
// 	}
	
// 	// cout<<l<< ' '<<u;
// 	if(upper>lower) 
// 		transform(s.begin(), s.end(), s.begin(), ::toupper);
// 	else if(lower>upper) 
// 		transform(s.begin(), s.end(), s.begin(), ::tolower);
// 	else if(upper==lower)
// 		transform(s.begin(), s.end(), s.begin(), ::tolower);
// 	cout<<s<<endl;
	
// }

// // C++ program to count the uppercase,
// // lowercase, special characters
// // and numeric values
// #include<iostream>
// // using namespace std;

// // Function to count uppercase, lowercase,
// // special characters and numbers
// void Count(string str)
// {
// 	int upper = 0, lower = 0, number = 0, special = 0;
// 	for (int i = 0; i < str.length(); i++)
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z')
// 			upper++;
// 		else if (str[i] >= 'a' && str[i] <= 'z')
// 			lower++;
// 		else if (str[i]>= '0' && str[i]<= '9')
// 			number++;
// 		else
// 			special++;
// 	}
// 	cout << "Upper case letters: " << upper << endl;
// 	cout << "Lower case letters : " << lower << endl;
// 	cout << "Number : " << number << endl;
// 	cout << "Special characters : " << special << endl;
// }

// // Driver function
// int main()
// {
// 	string str = "#GeeKs01fOr@gEEks07";
// 	Count(str);
// 	return 0;
// }

// int main(){
// 	string s;
// 	cin>>s;
// 	s[0]=char(toupper(s[0]));
// 	cout<<s<<endl;
// }

// int main(){
// 	long long n,t,tt,c=0;
// 	cin>>n;
// 	t=n;
// 	while(t){
// 		// t=n/(pow(10,3-i));
// 		tt=t%10;
// 		t/=10;
// 		if(tt==4 || tt==7){
// 			c++;
// 		}
// 	}
// 	if(c==4 || c==7){
// 		cout<<"YES"<<endl;
// 	}
// 	else{
// 		cout<<"NO"<<endl;
// 	}
// }

// int main(){
// 	long long arr[4],t,n,c=0;
// 	for(int i=0;i<4;i++){
// 		cin>>arr[i];
// 	}
// 	sort(arr,arr+4);
// 	for (int i = 0; i < 3; ++i)
// 	{
// 		if(arr[i]==arr[i+1]){
// 			c++;
// 		}
// 	}
// 	cout<<c<<endl;
// }


	


// int main(){
// 	long long n,m,f,c=0,c2=0,idx;
// 	cin>>n;
// 	long long a[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>a[i];
// 	}
// 	cin>>m;
// 	long long b[m];
// 	for (int i = 0; i < m; ++i)
// 	{
// 		cin>>b[i];
// 		for (int j = 0; j < n; j+=5){
// 			if (a[j] == b[i]){
// 				idx=j;
// 				break;
// 			}
// 			else if( a[j+1] == b[i] && j+1 < n)
// 				{idx=j+1;
// 				break;}
				
//             else if(a[j+2] == b[i] && j+2 < n)
//             	{idx=j+2;
// 				break;}
       
//             else if(a[j+3] == b[i] && j+3 < n)
//             	{idx=j+3;
// 				break;}
        
//             else if(a[j+4] == b[i] && j+4 < n)
//             	{idx=j+4;
// 				break;}
        
// 		}
// 		// cout<<idx<<endl;
// 		f=idx+1;
// 		c+=f;
// 		f=n-idx;
// 		c2+=f;
// 	}
	
	
	
	
	
// 	cout<<c<<" "<<c2<<endl;
	
	
// }

int main(){
	
	long long n,c=0;
	string s;
	cin>>n;
	cin>>s;
	for (int i = 0; i < n-1; ++i)
	{
		if(s[i]==s[i+1]){
			c++;
		}
	}
	cout<<c<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fo(i, p, n) for (ll i = p; i < n; i++)
const ll MAXN = 1;
const ll M = 998244353;

// long long binpow1(long long a, long long b, long long m) {
//     a %= m;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % m;
//         a = a * a % m;
//         b >>= 1;
//     }
//     return res;
// }
long long binpow(long long a, long long b)
{

	long long res = 1;
	while (b > 0)
	{
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

unsigned long long power(unsigned long long x,
						 ll y, ll p)
{
	unsigned long long res = 1; // Initialize result

	x = x % p; // Update x if it is more than or
	// equal to p

	while (y > 0)
	{

		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res % M;
}
unsigned long long modInverse(unsigned long long n,
							  ll p)
{
	return power(n, p - 2, p);
}

unsigned long long nCrModPFermat(unsigned long long n,
								 ll r, ll p)
{
	// If n<r, then nCr should return 0
	if (n < r)
		return 0;
	// Base case
	if (r == 0)
		return 1;

	// Fill factorial array so that we
	// can find all factorial of r, n
	// and n-r
	unsigned long long fac[n + 1];
	fac[0] = 1;
	for (ll i = 1; i <= n; i++)
		fac[i] = (fac[i - 1] * i) % p;

	return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}


// bool prime[1000100];
// void isprime()
// {
//     memset(prime, true, sizeof(prime));

//     for (ll p = 2; p * p < 1000100; p++)
//     {
//         if (prime[p] == true)
//         {
//             for (ll i = p * p; i < 1000100; i += p)
//                 prime[i] = false;
//         }
//     }
// }

ll fact(ll k)
{
	if (k == 0)
		return 1;
	if (k == 1)
		return 1;
	// return k*fact(k-1);
	return ((k % M) * (fact(k - 1) % M)) % M;
}

// void primefactor(ll n, vector<ll> &p)
// {
//     // Print the number of 2s that divide n
//     while (n % 2 == 0)
//     {
//         p.push_back(2);
//         n = n / 2;
//     }

//     // n must be odd at this point. So we can skip
//     // one element (Note i = i +2)
//     for (ll i = 3; i <= sqrt(n); i = i + 2)
//     {
//         // While i divides n, print i and divide n
//         while (n % i == 0)
//         {
//             p.push_back(i);
//             n = n / i;
//         }
//     }

//     // This condition is to handle the case when n
//     // is a prime number greater than 2
//     if (n > 2)
//         p.push_back(n);
// }

// ll smallestDivisor(ll n)
// {
//     // if divisible by 2
//     if (n % 2 == 0)
//         return 2;

//     // iterate from 3 to sqrt(n)
//     for (ll i = 3; i * i <= n; i += 2)
//     {
//         if (n % i == 0)
//             return i;
//     }

//     return n;
// }
// vector< pair<ll, ll> > findSubArrays(ll arr[], ll n)
// {
//     // create an empty map
//     unordered_map<ll, vector<ll> > map;

//     // create an empty vector of pairs to store
//     // subarray starting and ending index
//     vector <pair<ll, ll>> out;

//     // Maintains sum of elements so far
//     ll sum = 0;

//     for (ll i = 0; i < n; i++)
//     {
//         // add current element to sum
//         sum += arr[i];

//         // if sum is 0, we found a subarray starting
//         // from index 0 and ending at index i
//         if (sum == 0)
//             out.push_back(make_pair(0, i));

//         // If sum already exists in the map there exists
//         // at-least one subarray ending at index i with
//         // 0 sum
//         if (map.find(sum) != map.end())
//         {
//             // map[sum] stores starting index of all subarrays
//             vector<ll> vc = map[sum];
//             for (auto it = vc.begin(); it != vc.end(); it++)
//                 out.push_back(make_pair(*it + 1, i));
//         }

//         // Important - no else
//         map[sum].push_back(i);
//     }

//     // return output vector
//     return out;
// }

// // Utility function to print all subarrays with sum 0
// // ll print(vector<pair<ll, ll>> out)
// // {ll dp=1; ll pr=out.begin()->second;
// //     for (auto it = out.begin()+1; it != out.end(); it++)
// //         if(it->second>pr){dp++; pr=it->second;}
// //         return dp;
// // }
// #define MAXN   (ll)1e7+1

// // stores smallest prime factor for every number
ll spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
	spf[1] = 1;
	for (ll i = 2; i < MAXN; i++)

		// marking smallest prime factor for every
		// number to be itself.
		spf[i] = i;

	// separately marking spf for every even
	// number as 2
	for (ll i = 4; i < MAXN; i += 2)
		spf[i] = 2;

	for (ll i = 3; i * i < MAXN; i++)
	{
		// checking if i is prime
		if (spf[i] == i)
		{
			// marking SPF for all numbers divisible by i
			for (ll j = i * i; j < MAXN; j += i)

				// marking spf[j] if it is not
				// previously marked
				if (spf[j] == j)
					spf[j] = i;
		}
	}
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<ll> getFactorization(ll x)
{
	vector<ll> ret;
	while (x != 1)
	{
		ret.push_back(spf[x]);
		x = x / spf[x];
	}
	return ret;
}

// C++ Program to count all subarrays having
// XOR of elements as given value m with
// O(n) time complexity.

// Returns count of subarrays of arr with XOR
// value equals to m
long long subarrayXor(ll arr[], ll n, ll m)
{
	long long ans = 0; // Initialize answer to be returned

	// Create a prefix xor-sum array such that
	// xorArr[i] has value equal to XOR
	// of all elements in arr[0 ..... i]
	// vector<ll>xorArr(n);

	// Create map that stores number of prefix array
	// elements corresponding to a XOR value
	unordered_map<ll, ll> mp;

	// Initialize first element of prefix array
	// xorArr[0] = arr[0];
	ll cx = arr[0];
	ll px = cx;

	// Computing the prefix array.
	// for (ll i = 1; i < n; i++)
	// 	xorArr[i] = xorArr[i - 1] ^ arr[i];

	// Calculate the answer
	for (ll i = 0; i < n; i++)
	{
		px = cx;
		if (i != 0)
			cx = px ^ arr[i];
		// Find XOR of current prefix with m.
		// ll tmp = m ^ xorArr[i];
		ll tmp = m ^ cx;

		// If above XOR exists in map, then there
		// is another previous prefix with same
		// XOR, i.e., there is a subarray ending
		// at i with XOR equal to m.
		ans = ans + ((long long)mp[tmp]);

		// If this subarray has XOR equal to m itself.
		if (cx == m)
			ans++;

		// Add the XOR of this subarray to the map
		mp[cx]++;
	}

	// Return total count of subarrays having XOR of
	// elements as given value m
	return ans;
}

// Driver program to test above function

// C++ Program to print prime factors and their
// powers using Sieve Of Eratosthenes

// Using SieveOfEratosthenes to find smallest prime
// factor of all the numbers.
// For example, if N is 10,
// s[2] = s[4] = s[6] = s[10] = 2
// s[3] = s[9] = 3
// s[5] = 5
// s[7] = 7
void sieveOfEratosthenes(ll N, ll s[])
{
	// Create a boolean array "prime[0..n]" and
	// initialize all entries in it as false.
	vector<bool> prime(N + 1, false);

	// Initializing smallest factor equal to 2
	// for all the even numbers
	for (ll i = 2; i <= N; i += 2)
		s[i] = 2;

	// For odd numbers less than equal to n
	for (ll i = 3; i <= N; i += 2)
	{
		if (prime[i] == false)
		{
			// s(i) for a prime is the number itself
			s[i] = i;

			// For all multiples of current prime number
			for (ll j = i; j * i <= N; j += 2)
			{
				if (prime[i * j] == false)
				{
					prime[i * j] = true;

					// i is the smallest prime factor for
					// number "i*j".
					s[i * j] = i;
				}
			}
		}
	}
}

// Function to generate prime factors and its power
map<ll, ll> generatePrimeFactors(ll N)
{
	map<ll, ll> mp;
	// s[i] is going to store smallest prime factor
	// of i.
	ll s[N + 1];

	// Filling values in s[] using sieve
	sieveOfEratosthenes(N, s);

	// printf("Factor Power\n");

	ll curr = s[N]; // Current prime factor of N
	ll dp = 1;		// Power of current prime factor

	// Printing prime factors and their powers
	while (N > 1)
	{
		N /= s[N];

		// N is now N/s[N]. If new N als has smallest
		// prime factor as curr, increment power
		if (curr == s[N])
		{
			dp++;
			continue;
		}

		// printf("%d\t%d\n", curr, dp);
		mp[curr] = dp;
		// Update current prime factor as s[N] and
		// initializing count as 1.
		curr = s[N];
		dp = 1;
	}
	return mp;
}

bool isKthBitSet(int n, int k)
{
	if (n & (1 << k))
		return true;
	else
		return false;
}

ll getMid(ll s, ll e)
{
	return s + (e - s) / 2;
}

/*  A recursive function to get the sum of
	values in given range of the array.
	The following are parameters for this
	function.

	st       -> Pointer to segment tree
	node     -> Index of current node in
				the segment tree .
	ss & se  -> Starting and ending indexes
				of the segment represented
				by current node, i.e., st[node]
	l & r    -> Starting and ending indexes
				of range query */
ll MaxUtil(ll *st, ll ss, ll se, ll l,
		   ll r, ll node)
{
	// If segment of this node is completely
	// part of given range, then return
	// the max of segment
	if (l <= ss && r >= se)
		return st[node];

	// If segment of this node does not
	// belong to given range
	if (se < l || ss > r)
		return -1;

	// If segment of this node is partially
	// the part of given range
	ll mid = getMid(ss, se);

	return max(MaxUtil(st, ss, mid, l, r,
					   2 * node + 1),
			   MaxUtil(st, mid + 1, se, l,
					   r, 2 * node + 2));
}

/* A recursive function to update the nodes
   which have the given index in their range.
   The following are parameters st, ss and
   se are same as defined
   above index -> index of the element
   to be updated.*/
void updateValue(ll arr[], ll *st, ll ss, ll se,
				 ll index, ll value, ll node)
{
	if (index < ss || index > se)
	{
		cout << "Invalid Input" << endl;
		return;
	}

	if (ss == se)
	{
		// update value in array and in segment tree
		arr[index] = value;
		st[node] = value;
	}
	else
	{
		ll mid = getMid(ss, se);

		if (index >= ss && index <= mid)
			updateValue(arr, st,
						ss, mid, index,
						value, 2 * node + 1);
		else
			updateValue(arr,
						st, mid + 1, se,
						index,
						value, 2 * node + 2);

		st[node] = max(st[2 * node + 1],
					   st[2 * node + 2]);
	}
	return;
}

// Return max of elements in range from
// index l (query start) to r (query end).
ll getMax(ll *st, ll n, ll l, ll r)
{
	// Check for erroneous input values
	if (l < 0 || r > n - 1 || l > r)
	{
		printf("Invalid Input");
		return -1;
	}

	return MaxUtil(st, 0, n - 1, l, r, 0);
}

// A recursive function that constructs Segment
// Tree for array[ss..se]. si is index of
// current node in segment tree st
ll constructSTUtil(ll arr[], ll ss, ll se,
				   ll *st, ll si)
{
	// If there is one element in array, store
	// it in current node of
	// segment tree and return
	if (ss == se)
	{
		st[si] = arr[ss];
		return arr[ss];
	}

	// If there are more than one elements, then
	// recur for left and right subtrees and
	// store the max of values in this node
	ll mid = getMid(ss, se);

	st[si] = max(constructSTUtil(arr, ss, mid, st,
								 si * 2 + 1),
				 constructSTUtil(arr, mid + 1, se,
								 st, si * 2 + 2));

	return st[si];
}

/* Function to construct segment tree
   from given array.
   This function allocates memory for
   segment tree.*/
ll *constructST(ll arr[], ll n)
{
	// Height of segment tree
	ll x = (ll)(ceil(log2(n)));

	// Maximum size of segment tree
	ll max_size = 2 * (ll)pow(2, x) - 1;

	// Allocate memory
	ll *st = new ll[max_size];

	// Fill the allocated memory st
	constructSTUtil(arr, 0, n - 1, st, 0);

	// Return the constructed segment tree
	return st;
}

bool isPrime(ll n)
{
	// Since 0 and 1 is not prime
	// return false.
	if (n == 1 || n == 0)
		return false;

	// Run a loop from 2 to
	// square root of n.
	for (ll i = 2; i * i <= n; i++)
	{
		// If the number is divisible by i,
		// then n is not a prime number.
		if (n % i == 0)
			return false;
	}

	// Otherwise n is a prime number.
	return true;
}

ll longest_increasing_subsequence(vector<ll> &arr)
{
	vector<ll> ans;
	ll n = arr.size();
	for (ll i = 0; i < n; i++)
	{
		auto it = upper_bound(ans.begin(), ans.end(), arr[i]);
		if (it == ans.end())
		{
			ans.push_back(arr[i]);
		}
		else
		{
			*it = arr[i];
		}
	}
	return ans.size();
}

ll gcdExtended(ll a, ll b, ll *x, ll *y);

// Function to find modulo inverse of b. It returns
// -1 when inverse doesn't
ll modInverse(ll b, ll m)
{
	ll x, y; // used in extended GCD algorithm
	ll g = gcdExtended(b, m, &x, &y);

	// Return -1 if b and m are not co-prime
	if (g != 1)
		return -1;

	// m is added to handle negative x
	return (x % m + m) % m;
}

// Function to compute a/b under modulo m
ll modDivide(ll a, ll b, ll m)
{
	a = a % m;
	ll inv = modInverse(b, m);
	if (inv == -1)
		printf("Division not defined");
	else
	{
		ll c = (inv * a) % m;
		// printf ("Result of division is %d", c) ;
		return c;
	}
}

// C function for extended Euclidean Algorithm (used to
// find modular inverse.
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
	// Base Case
	if (a == 0)
	{
		*x = 0, *y = 1;
		return b;
	}

	ll x1, y1; // To store results of recursive call
	ll gcd = gcdExtended(b % a, a, &x1, &y1);

	// Update x and y using results of recursive
	// call
	*x = y1 - (b / a) * x1;
	*y = x1;

	return gcd;
}


void solve()
{
	string str ;
    int cnt= 0;
    int n;
    cin >>n >> str;
    for(int i = 0; i < n; i++ ){
        if(str[i]==str[i+1])
            cnt++;
    }
    cout << cnt << endl;
   
}

int main()
{ // {freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll t = 1;

	//cin >> t;


	while (t--)
	{
		solve();
	}

	// return 0;
}
