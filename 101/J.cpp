#include <bits/stdc++.h>
 
using namespace std;
typedef  long long ll;
#define INT_BITS 32
void display(int a)
{
     for(int k=32;k>=0;k--)
    {
        if(a&(1<<k))
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<endl;
 
}
int  Sum(vector<int> m)
{
    int sum=0;
    for(int i=0;i<m.size();i++)
       sum+=m[i];
     return sum;
}
int  element(vector<int> d)
{
    int maxm = d[0];
    for(int i=0;i<d.size();i++)
    {
        if(maxm<=d[i])
            maxm=d[i];
    }
    return maxm;
}
int EuclidGCD(int a,int b)
{
    int rem;
    if(b ==0)
        return a;
    else
    {
        rem = a % b;
        return EuclidGCD(b,rem);
    }
}
int Min(vector<int> a)
{
    return (*min_element(a.begin(),a.end()));
}
void func_A()
{
     int n;
     cin>>n;
     vector<int> v;
     for(int i=0;i<n;i++)
     {
         int x;
         //scanf("%d",&x);
         cin>>x;
         v.push_back(x);
     }
      if(Min(v)==1)
        cout<<element(v)<<endl;
     else
      cout<<Min(v)+1<<endl;
 
 
     /*int cnt=0;
     while(Sum(v)>n)
     {
        for(int i=0;i<n;i++)
         {
         cout<<v[i]<<" ";
         }
         //cout<<endl;
        // cout<<Sum(v)<<endl;
 
        int h=Min(v);
        //cout<<h<<endl;
        for(int j=0;j<n;j++)
        {
            if(v[j]>h)
                v[j]=v[j]-h;
        }
        cnt+=1;
    }
    cout<<cnt+1<<endl;*/
 
 
}
 
int main()
{
    //connection between signed number and unsigned number
   /* int x=-2147483647;
    unsigned int y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    unsigned int z;
    z=4294967296;
    cout<<z<<endl;
    cout<<z-(-x)<<endl;
    */
    //int x,y;
   /* int x;
    cin>>x;
    for(int k=31;k>=0;k--)
    {
        if(x&(1<<k))
            cout<<"1";
        else
            cout<<"0";
    }*/
    /*int x=(1<<1)|(1<<3)|(1<<4)|(1<<8);
    int y=(1<<3)|(1<<6)|(1<<8)|(1<<9);
    int z=x|y;
 
    for(int i=0;i<32;i++)
    {
        if(z&(1<<i))
            cout<<i<<" ";
 
    }
     for(int b=0;b<(1<<31);b++)
    {
        cout<< b <<" ";
    }*/
   /* int arr[]={1,2,3,4,3,2,1};
    int a=0;
 
    for(int i=0;i<7;i++)
    {
        a=a^arr[i];
    }
    cout<<a;
    */
 
    /*int cnt=0;
    while(a)
    {
        cnt++;
        a=a>>1;
    }
    cout<<cnt<<endl;
    cnt--;
    cout<<(1<<cnt)<<endl;
    */
    /*int next=ceil(log2(a));
    cout<<next<<endl;
    next--;
 
    cout<<(1<<next)<<endl;
    */
    //count sets bits in an integer
   /* int x=132;
    int cnt=0;
    while(x)
    {
        if(x&1)
            cnt+=1;
        x>>=1;
    }
     cout<<cnt<<endl;*/
     /*int arr[5]={0};
     int n[5]={2,3,1,5};
     for(int i=0;i<5;i++)
     {
       arr[n[i]-1]=1;
 
     }
     for(int i=0;i<5;i++)
     {
         if(arr[i]==0)
            cout<<i+1;
     }*/
     /*uint8_t a=24;
    display(a);
    a=a<<1;
    cout<<a<<endl;
    display(a);
    //cout<<sizeof(int)<<endl;
    cout<<((a<<3)|(a>>(8-3)));
    */
   /* string s;
	cin>>s;
	int count=0;
	int best=0;
	int i=0;
	int j=0;
	//cout<<s.size()<<endl;
	while(i<(s.size()-1))
	{
		if(s[i]==s[i+1])
		{
			count+=1;
			best=(best>count)?best:count;
			i++;
		}
		else{
			count=1;
			best=(best>count)?best:count;
			i++;
		}
       j++;
 
	}
 
	cout<<best<<endl;
	*/
	/*string s;
	cin>>s;
	//cout<<s.size()<<endl;
	int n=s.size();
	int count=0;int best=0;
	int i=0;
	while(i<n)
	{
 
		if(s[i]==s[i+1])
		{
 
			count+=1;
			best=max(best,count);
			i+=1;
		}
		else{
            if(s[i]==s[i-1]){
            count+=1;
			best=max(best,count);
			i++;
            }
		}
	}
	cout<<best<<endl;
	*/
  /*  int t;
    cin>>t;
    while(t--)
    {
        ll row,col;
        cin>>row>>col;
        ll ans;
        if(row>col)
        {
            if(row%2==0)
            {
                ans=(row*row)-col+1;
            }
            else
            {
                ans=((row-1)*(row-1))+col;
            }
        }
        else
        {
            if(col%2==0)
            {
                ans=((col-1)*(col-1))+row;
            }
            else
            {
                ans=(col*col)-row+1;
            }
        }
        cout<<ans<<endl;
 
    }*/
   /* ll n;
    cin>>n;
 
    for(ll i=1;i<=n;i++)
    {
      ll k=(i*i);
      ll a=k*(k-1)/2;
 
      if(k>2)
        a=a-4*(i-1)*(i-2);
      cout<<a<<endl;
    }*/
    /*ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    if(sum%2!=0)
        cout<<"NO"<<endl;
    else
    {
 
        vector<ll> v;
        for(ll i=1;i<=n;i++)
            v.push_back(i);
       // for(ll i=0;i<v.size();i++)
           // cout<<v[i]<<" ";
        //cout<<"\n";
        ll a = Sum(v)/2;
        vector<ll> set1;
        vector<ll> set2;
 
 
       if(n%2!=0)
       {
        set1.push_back(v[n-1]);
        v.pop_back();
        set2.push_back(v[n-2]);
        v.pop_back();
        for(ll i=0;i<v.size();i++)
        {
             if(Sum(set1)==a||Sum(set2)==a){
                    break;
            }
            set2.push_back(element(v));
            v.pop_back();
            set1.push_back(element(v));
            v.pop_back();
        }
 
        if(Sum(set1)!=a){
            for(int i=0;i<v.size();i++)
                set1.push_back(v[i]);
        }
        if(Sum(set2)!=a){
            for(int i=0;i<v.size();i++)
                set2.push_back(v[i]);
        }
        }
        else{
        ll turn = 1;
        ll start = 1;
        ll last = n;
        while (start < last) {
 
            if (turn) {
                set1.push_back(start);
                set1.push_back(last);
                turn = 0;
            }
            else {
                set2.push_back(start);
                set2.push_back(last);
                turn = 1;
            }
            start++;
            last--;
        }
        }
 
 
        //final output
        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(ll i=0;i<set1.size();i++)
            cout<<set1[i]<<" ";
        cout<<endl;
        cout<<set2.size()<<endl;
        for(ll i=0;i<set2.size();i++)
            cout<<set2[i]<<" ";
}*/
   /* ll n;
    cin>>n;
    ll sum1=n*(n+1)/2;
    if(sum1%2!=0)
        cout<<"NO"<<endl;
    else
    {
 
        //vector<ll> v;
 
        vector<ll> set1;
        vector<ll> set2;
        sum1/=2LL;
        while(n)
        {
            if(sum1-n>=0)
            {
                set1.push_back(n);
                sum1-=n;
            }
            else{
                set2.push_back(n);
            }
            n--;
        }
 
        //final output
        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(ll i=0;i<set1.size();i++)
            cout<<set1[i]<<" ";
        cout<<endl;
        cout<<set2.size()<<endl;
        for(ll i=0;i<set2.size();i++)
            cout<<set2[i]<<" ";
    }*/
   /* int n;
    cin>>n;
   // ll count=0;
    ll x=1,a=1;
    const unsigned int M = 1000000007;
    cout<<(1<<n)%M<<endl;
   for(int i=0;i<n;i++)
   {
       x=2*x%M;
 
   }
   cout<<x<<endl;*/
  /* const unsigned int M = 1000000007;
   ll t;
   cin>>t;
   while(t--)
   {
       ll a,b;
       cin>>a>>b;
 
        while(1)
       {
           if(a==0||b==0)
             break;
           else if((a+b)%3!=0){
 
            break;
           }
           if((a%3==0)&&(b%3==0))
           {
               a=0;
               b=0;
               //cout<<"jsd";
               break;
           }
 
 
           else
          {
           if(a>b)
           {
               a=a-2;
               b=b-1;
           }
           else{
            a=a-1;
            b=b-2;
           }
           }
       }
       if(a==0&&b==0)
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
 
   }*/
  /* ll t;
   cin>>t;
   while(t--)
   {
       ll a,b;
       cin>>a>>b;
       if((2*a-b)%3==0&&(2*a-b)>=0&&(2*b-a)%3==0&&(2*b-a)>=0)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }*/
   /* int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    ll count=0;
    ll m=v[0];
    ll *p;
    p=new ll[m+1];
    for(int i=0;i<m+1;i++)
        p[i]=0;
    for(ll i=0;i<n;i++)
    {
        p[v[i]]++;
    }
    for(ll i=0;i<m+1;i++)
    {
        if(p[i]!=0)
        count++;
    }
    cout<<count<<endl;*/
    /*int t;
    cin>>t;
    while(t--)
    {
         func_A();
 
    }*/
   /* int n;
    cin>>n;
    vector<int> v,v2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
            x=i;
    }
    cout<<x<<endl;*/
  /*  string s;
    //getline(cin,s);
    cin>>s;
    cout<<s<<endl;
    int k=s.length();
    cout<<k<<endl;
 
    bool answer =true;
    int z=k-1;
    for(int i=0;i<(k/2);i++)
    {
        if(s[i]!=s[z-i])
            answer=false;
    }
    cout<<answer<<endl;
    */
 
    /*int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
 
        }
       int cnt=-1;
 
       while(element(v)<=k)
       {
 
           sort(v.begin(),v.end());
           v[1]+=v[0];
           cnt+=1;
 
 
 
       }
       cout<<cnt<<endl;
 
 
    }*/
 
   /* int n;
    cin>>n;
    int cont=0;
    while(n--)
    {
        //vector<int> v;
        int x;
        int a=0;
        for(int i=0;i<3;i++)
        {
            cin>>x;
           // v.push_back(x);
           a+=x;
        }
        //int a=Sum(v);
        if(a>=2)
            cont+=1;
 
    }
    cout<<cont<<endl;*/
 
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a=v[k-1];
    int cont=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=a && v[i]>0)
            cont+=1;
    }
    cout<<cont<<endl;
 
 
 
 
 
 
 
 
 
 
   return 0;
}
