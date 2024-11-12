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

//https://codeforces.com/problemset/problem/1325/B
// int main(){
// 	long long t,n,k,d,c,el=0;
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
	
// 	   long long arr[n],narr[n*n];
// 	   for(int i=0;i<n;i++){
// 		  cin>>arr[i];
		  
// 	      }
// 	   //   for(int i=0;i<n;i++){
// 		  // cout<<arr[i]<<" ";
		  
		  
// 	   //    }
// 	   //    cout<<endl;
// 	    // for(int i=0;i<n*n;i++){
// 	    // 	if(i<n){
// 	    // 		narr[i]=arr[i];
// 	    // 	}
// 	    // 	else{
// 	    // 		narr[i]=narr[i-n];
// 	    // 	}
// 	    // }
// 	    // for(int i=0;i<n*n;i++){
// 	    // 	cout<<narr[i]<<" ";
// 	    // }
// 	    sort(arr,arr+n);
// 	    c=n;
// 	   //  for(int i=0;i<n;i++){
// 		  // cout<<arr[i];
		  
// 	   //    }
// 	    for(int i=0;i<n-1;i++){
	    	
// 	    	if(arr[i]==arr[i+1]){
// 	    		c--;
// 	    	}     
	    
// 	    }
	    
// 	   cout<<c<<endl; 
// 	}
// }

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
