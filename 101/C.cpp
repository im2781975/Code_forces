#include<iostream>
#include<stdio.h> 
using namespace std;
int main()
{
	int a,b,n,p,x,sum;
	cin>>n;
	while(n--)
	{
		cin>>p;
		sum=0;
		for(int i=0;i<p;i++)
		{
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
		if(n) cout<<endl;
	}
	return 0;
} 


#include<iostream>
#include<string> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s,sf;
		cin>>s;
		sf=s.substr(0,6);
		string home;
		int t=(s[0]-'0')*10+(s[1]-'0');
		if(t==33) home="zhejiang,";
		else if(t==11) home="beijing,";
		else if(t==71) home="Taiwan,";
		else if(t==81) home="Hong Kong,";
		else if(t==82) home="Macao,";
		else if(t==54) home="Tibet,";
		else if(t==21) home="Liaoning,";
		else if(t==31) home="shanghai,";
		
		cout<<"He/She is from "<<home;
		cout<<"and his/her birthday is on "
		<<s[10]<<s[11]<<","<<s[12]<<s[13]<<","<<s[6]<<s[7]<<s[8]<<s[9]
		<<" based on the table."<<endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,t;
    string home,a;
    cin>>n;
    for(int k = 0 ; k < n ; k++)
    {
        cin>>a;
        t = (a[0]-'0')*10+a[1]-'0';
        switch(t)
        {
            case 11:home = "Beijing";break;
            case 31:home = "Shanghai";break;
            case 21:home = "Liaoning";break;
            case 33:home = "Zhejiang";break;
            case 54:home = "Tibet";break;
            case 71:home = "Taiwan";break;
            case 81:home = "Hong Kong";break;
            case 82:home = "Macao";break;
            default :break;
        }
        cout<<"He/She is from "<<home<<",and his/her birthday is on "
        <<a[10]<<a[11]<<","<<a[12]<<a[13]<<","<<a[6]<<a[7]<<a[8]<<a[9]
        <<" based on the table."<<endl;
    }
    return 0;
}



#include<iostream>
using namespace std;

bool is_prime(int x)
{
	for(int i=2;i*i<x;i++)
	{
		if(x%i==0) return false;
	}
	return true;
}

int main()
{
	int x,y;
	while(cin>>x>>y,x+y)
	{
		bool f=true;
		for(int i=x;i<=y;i++)
		{
			if(!is_prime(i*i+i+41))
			{
				f=false;
				cout<<"Sorry"<<endl;
				break;
			} 
		}
		if(f) cout<<"OK"<<endl;
	}
	return 0;
}


``````````````````````
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int x=n;
		if(n==1) cout<<1<<endl;
		else if(n==2) cout<<4<<endl;
		else{
		while(n--)
		{
			if(n==2)
			{
				x*=2;
				break;
			}
			else
			{
				x=(x+1)*2+1;
			}
		}
		cout<<x<<endl;
	}
	}
	return 0;
}```````````````



#include<bits/stdc++.h>
using namespace std;

int g[10000][10000];

int main()
{
	int ans=0;
	int x,y;
	x=2020,y=2020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4040,y=2031;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=2031,y=2034;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4020,y=4020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	//int ans=0;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(g[i][j]) ans++;
		}
	} 
	cout<<ans<<endl;
	return 0;
}
20312088


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int w;
	cin>>w;
	for(int i=2;i<w;i+=2)
	{
		if((w-i)%2==0) 
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}


#include<iostream>
using namespace std;
const int N = 1010;
 
int t,n;
int w[N],v[N];
int f[N][N];
int main()
{
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=t;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	} 
	cout<<f[n][t];
	return 0;
} 
*
#include<iostream>
using namespace std;
const int N = 20010;
int m,n;
int f[N];
int main()
{
	//���������m   ��Ʒ����Ϊn 
	cin>>m>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=m;j>=x;j--)
		{
		    f[j]=max(f[j-x]+x,f[j]);
		}
	}
	cout<<m-f[m];
	return 0;
}*

#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		
		char s[10000];
		gets(s);
		int ans=0;
		for(int i=0;i<strlen(s);i++) 
		{
			if(s[i]<0) ans++; 
		}
		cout<<ans/2<<endl;
	}
	return 0;
}


#include<iostream>
#include<string>
using namespace std;

int n;
int solve(string s)
{
	int n=s.size();
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1]) return 0;
	}	
	return 1;
}
int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(solve(s)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;		
	}
	return 0;
}
*
#include<iostream>
#include<stdio.h>
using namespace std;
#define lcm(a,b) a/gcd(a,b)*b
int n;
long gcd(long m,long n)
{
	while(n)
	{
		long temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}

int main()
{
	int a[100001];
	while(scanf("%d",&n)!=EOF)
	{
		int a,x;
		cin>>a;
		while(--n)
		{
			cin>>x;
			a=lcm(a,x);
		}
		cout<<a<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		int a=0,e=0,i=0,o=0,u=0;
		char s[101];
		gets(s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]=='a'||s[j]=='A') a++;
			if(s[j]=='e'||s[j]=='E') e++;
			if(s[j]=='i'||s[j]=='I') i++;
			if(s[j]=='o'||s[j]=='O') o++;
			if(s[j]=='u'||s[j]=='U') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(n) cout<<endl;
		
	}
	
	return 0;
}
*

#include<iostream>
#include<stdio.h> 
#include<cstring>
using namespace std;

char s[105];

int main()
{
	while(gets(s))
	{
		int len=strlen(s);
		s[0]-='a'-'A'; 
		for(int i=1;i<len;i++)
		{
			if(s[i]==' ') s[i+1]-='a'-'A';	
		}
		cout<<s<<endl;
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
	char s[10011];
	while(scanf("%s",&s)!=EOF)
	{
		int maxchar=s[0];
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>maxchar) maxchar=s[i];
		}
		for(int i=0;i<strlen(s);i++)
		{
			cout<<s[i];
			if(s[i]==maxchar)
			{
				cout<<"(max)";
			} 
		}
		cout<<endl;
	}
	return 0;
}



#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int n;
char s[100001];

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		int c=0;
		int l=strlen(s);
		if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_')
		{
			for(int i=1;i<l;i++)
			{
				if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9'))
				c++;
				else 
				{
					cout<<"no"<<endl;
					break;
				}	
				if(c+1==l) 
				{
					cout<<"yes"<<endl;
				}
			}			
		}
		else cout<<"no"<<endl;
	}
	return 0;
}


#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
using namespace std;
int a[101];
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i])<abs(a[j]))
				{
					swap(a[i],a[j]);
				}
			}
		}
		for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
		cout<<a[n-1];
		cout<<endl;
	}
	return 0;
}



#include<iostream>
#include<stdio.h>
#include<stdio.h>
using namespace std;

int n;

int main()
{	
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int a[10001];
		int mp,mn=1000000;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]
			if(a[i]<mn)
			{
				mn=a[i];
				mp=i;
			}
		}
		if(mp!=0){
			a[mp]=a[0];
			a[0]=mp; 
		}
		cout<<a[0];
		for(int i=1;i<n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
} 


#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int f=1;
		for(int i=0;i<66;i++)
		{
			if((n*i+18)%65==0)
			{
				cout<<i<<endl;
				f=0;
				break;
			}
		}
		if(f) cout<<"no"<<endl;
	}
	return 0;
} 



#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==0&&m==0) break;
		int a[1000][1000];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int ans=a[0][0],x=0,y=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(abs(a[i][j])>abs(ans))
				{
					ans=a[i][j];
					x=i+1;
					y=j+1;
				} 
			}
		}
		cout<<x<<" "<<y<<" "<<ans<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
const int N = 1e5+10;

struct edge{
	int ts,id;
	bool operator < (const edge x) const {
		return ts<x.ts;
	} 
}edges[N];

int n,m,ti;
map<int,int> m;
int main()
{
	cin>>n>>m>>ti;
	
	for(int i=0;i<m;i++)
		cin>>edges[i].ts>>edges[i].id;	
	sort(edges,edges+m);
	
	
	
	return 0;
}
*
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	int n1=max(x4,x2)-min(x1,x3);
	int n2=max(y2,y4)-min(y1,y3);
	int n=max(n1,n2);
	cout<<n*n<<endl;
	return 0;
}
*
#################   a^b
#include<iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(int a,int b,int p)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ans;
}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;	
	return 0;
}

################   64λ�����˷�
#include<iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(ll a,ll b,ll p)
{
	ll ans=0;
	while(b)
	{
	    if(b&1) ans=(ans+a)%p;
	    b>>=1;
	    a=a*2%p;
	}
	return ans;
	
}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;	
	return 0;
}
*

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n,m,a[100001];
	while(cin>>n>>m,(n||m))
	{
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=m;
		sort(a,a+n+1);
		cout<<a[0];
		for(int i=1;i<=n;i++)
		{
			cout<<" "<<a[i]; 
		}
		cout<<endl;
	}
	return 0;
} 
*
#include<iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*
#include<iostream>

using namespace std;
const int N = 100001;
int a[N];
int n;
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	while(cin>>n,n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min_index=0,num=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<num)
			{
				num=a[i];
				min_index=i;
			}
		}
		swap(a[min_index],a[0]);
		cout<<a[0];
		for(int i=1;i<n;i++) cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<int> res; 
int main()
{
	while(cin>>n>>m)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=i*2;
			if(i%m==0)
			{
				res.push_back(sum/m);
				sum=0;
			}
		}
		if(n%m!=0) res.push_back(sum/(n%m));
		cout<<res[0];
		for(int i=1;i<res.size();i++)
		{
			cout<<" "<<res[i];
		}
		cout<<endl;
		res.clear();
	}
	return 0;
}
*

#include<iostream>
using namespace std;

int n;
int a[33][33];

void fun()
{
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	for(int i=3;i<=30;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
}

int main()
{
	fun();
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i][1];
			for(int j=2;j<=i;j++)
			{
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}

*
#include<iostream>

using namespace std;

int n;
int a,b;
int is_ans(int x)
{
	int ans=1;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			ans+=i;
			ans+=x/i;
		}
	} 
	return ans;
}
int main()
{
	//cout<<is_ans(200);
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(is_ans(a)==b&&is_ans(b)==a) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0; 
}
*

#include<iostream>

using namespace std;

int t;
char op;
int y;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>op>>y;
		if(op>='a'&&op<='z') cout<<-(op-'a'+1)+y<<endl;
		else cout<<op-'A'+y+1<<endl; 
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

char a[40000],b[40000];
void pop(char *s)
{
	int i,len=strlen(s)-1;
	for(i=len;i>=0;i--)
	{
		if(s[i]=='0') len--;
		else break;
	}
	if(s[i]=='.') len--;
	s[len+1]='\0';
}

int main()
{
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='.') pop(a);
		}
		for(int i=0;i<strlen(b);i++)
		{
			if(b[i]=='.') pop(b);
		}
		if(strcmp(a,b))
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<sstream>
#include<string>
#include<set>
using namespace std;

string s,w;

int main()
{
	while(getline(cin,s),s!="#")
	{
		set<string> ans;
		istringstream str(s);
		while(str>>w)
		{
			ans.insert(w);
		}
		cout<<ans.size()<<endl;
	}
	return 0;
} 
*

#include<iostream>
#include<string>
using namespace std;

int n,x;
//int a[11];

int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans;
		ans=s.substr(6,5);
		ans="6"+ans;
		cout<<ans<<endl;
	}
	return 0;
}
*

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring> 
#include<iomanip>
using namespace std;

struct Stu{
	char name[1000];
	int sn;
	int st;
}stu[1000];

int n,m;
int cmp(Stu x,Stu y)
{
	if(x.sn==y.sn) 
	{
		return x.st<y.st;
	}
	return x.sn>y.sn;
}
int main()
{
	cin>>n>>m;
	int p=0;
	while(cin>>stu[p].name)
	{
		for(int i=0;i<n;i++)
		{
			char ch;
			int k,l;
			cin>>k;
			if(k<=0) continue;
			stu[p].sn++;
			stu[p].st+=k;
			if(getchar()=='(')
			{
				cin>>l;
				cin>>ch;
				stu[p].st+=l*m;
			}
		}
		p++;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<p;i++)
	{
		cout<<left<<setw(10)<<stu[i].name<<" "<<right<<setw(2)<<stu[i].sn<<right<<" "<<setw(4)<<stu[i].st<<endl;
	}
	return 0;
} 


#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char op;
	int n,s=0;
	while(cin>>op,op!='@')
	{
		if(s) cout<<endl;
		s=1;
		cin>>n;
		getchar();
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+n;j++)
			{
				if(j==n-1-i||j==n-1+i) cout<<op;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
//������:http://acm.hdu.edu.cn/showproblem.php?pid=2091
#include <queue>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <assert.h>
using namespace std;
#define N 100005
//�ӵ㣺ע����ĩ��Ҫ�пո� ע�����ͼ�μ任��
char ch;
int main()
{
   bool flag = 0;
    while(scanf("%c",&ch),ch!='@'){  //������ʹ�� scanf("%c",ch) ���� getchar()  ��Ϊ��ȡ�߻س��� ������ scanf("%s",s) ���� cin>>sting ע����ʱ��Ҫ��"@"
      if(flag) printf("\n");
      flag = 1;
      int n;
      scanf("%d",&n);
      getchar();                     //ȡ������n�� ���Ļس�
      for(int i=0;i<n;i++){          //���ǱȽϼ���д��
         for(int j=0;j<i+n;j++){
            if(j==n-1-i || j==n-1+i || i==n-1) printf("%c",ch);
            else printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}

*
#include<iostream>
#include<stdio.h>
using namespace std;

int n,r;
void solve(int n,int r)
{
	int f=1;
	if(n<0) 
	{
		f=0;
		n=-n;
	}
	string ans=""; 
	while(n)
	{
		int a=n%r;
		if(a==10) ans+='A';
		else if(a==11) ans+='B';
		else if(a==12) ans+='C';
		else if(a==13) ans+='D';
		else if(a==14) ans+='E';
		else if(a==15) ans+='F';
		else ans+=a+'0';
		n/=r;
	}
	if(!f) cout<<"-";
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		solve(n,r);
	}
	return 0;
}
*

#include<iostream>

using namespace std;

int a,b,c,d,e,f;
int n;
int main()
{	
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c>>d>>e>>f;
		c+=f;
		if(c>=60) 
		{
			b+=c/60;
			c=c%60;
		} 
		//cout<<b<<" "<<c<<endl;
		b+=e;
		if(b>=60)
		{
			a+=b/60; 
			b%=60;
		}
		cout<<a+d<<" "<<b<<" "<<c<<endl; 
	}
	return 0;
}
*
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int n,k;
double a[101];
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>k;
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}	
		sort(a,a+k);
		printf("%.2lf\n",a[k-1]);
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
using namespace std;
typedef long long ll;
ll f(int n)
{
	if(n<=1) return n; 
	ll a=0,b=1;
	for(int i=1;i<n;i++)
	{
		ll c=a+b;
		a=b;
		b=c;
	}
	return b;
} 

int main()
{
	int n;
	while(scanf("%d",&n),n!=-1)
	{
		cout<<f(n)<<endl;
	}
	return 0;
}

*

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long a,b;
	while(cin>>hex>>a>>b)
	{
		if(a+b<0)
		{
			cout<<setiosflags(ios::uppercase)<<hex<<"-"<<-(a+b)<<endl;
		}
		else cout<<setiosflags(ios::uppercase)<<hex<<a+b<<endl;
	}
	return 0;
}
*
#include<iostream>

using namespace std;

int a,b;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a%b==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;	
	}
	return 0; 
} 
*
#include<iostream>

using namespace std;

int a,b;
int n[1000001];

int main()
{
	n[0]=1;
	for(int i=1;i<1000002;i++)
	{
		int m=i,f=1;
		while(m)
		{
			if(m%10==4) 
			{
				f=0;
				break;
			}
			else if(m%10==2&&m%100/10==6) 
			{
				f=0;
				break;
			}
			m/=10;
		}
		if(f) n[i]=n[i-1]+1;
		else n[i]=n[i-1];
	}	
	while(cin>>a>>b,(a||b))
	{
		cout<<n[b]-n[a-1]<<endl;
	}	
	return 0;
} 

*

#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	char s[1000];
	double a,b,ans;
	while(~scanf("%s",s))
	{
		scanf("%lf%lf",&a,&b);
		ans+=a*b;
	}
	printf("%.1lf\n",ans);
	return 0;
} 
*
#include<iostream>

using namespace std;
int t;
int a,b;

int solve(int a,int b)
{
	a=a%100;
	b=b%100;
	a+=b;
	return a%100; 
}

int main(){
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		
		cout<<solve(a,b)<<endl;
	}
	return 0;
}


#include<iostream>
typedef long long ll;
using namespace std;
int n,m;
int g[10][10];
int st[10][10];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int ans=100,sum=0;
int total;
void dfs(int x,int y,int total,int s)
{
	if(total==sum/2)
	{
		ans=min(ans,s);
		return ;
	}
	if(total>sum/2) return ;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(st[nx][ny]==0&&nx>=0&&ny>=0&&nx<n&&ny<m) 
		{
			st[nx][ny]=1;
			dfs(nx,ny,total+g[nx][ny],s+1);
			st[nx][ny]=0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>g[i][j];
			sum+=g[i][j];
		}
	}
	st[0][0]=1;
	dfs(0,0,g[0][0],1);
	if(ans!=100) cout<<ans<<endl;
	return 0;
}
*
                       codeforces 231 team
#include<iostream>

using namespace std;

int main()
{
	int n,ans=0;
	cin>>n;
	while(n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c>=2) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
*/
#include<iostream>
using namespace std;
int a[55];
int n,k,m=0;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	k=a[k];
	for(int i=1;i<=n;i++)
		if(a[i]>=k&&a[i]) m++;
	cout<<m<<endl;
	return 0;
} 
