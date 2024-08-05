//55 106171380 477771210 955542420 53085690 53085690 566247360 11796820 637028280 8847615 318514140 2949205 159257070 106171380 106171380 637028280 2949205 53085690 11796820 955542420 35390460 35390460 212342760 35390460 53085690 637028280 2949205 2949205 26542845 106171380 106171380 5898410 8847615 424685520 5898410 8847615 283123680 159257070 424685520 2949205 212342760 53085690 35390448 318514140 5898410 141561840 106171380 141561840 17695230 2949205 8847615 106171380 17695230 53085690 17695230 35390460
#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
ll nCr(ll n, ll k) 
{ 
    ll C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  // nC0 is 1 
  
    for (ll i = 1; i <= n; i++) 
    { 
        // Compute next row of pascal triangle using 
        // the previous row 
        for (ll j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 
struct node
{
	int x;
	int r;
	int iq;
};
bool sorte(struct node a,struct node b)
{
	return a.x<b.x;
}
vector<ll> mark(ll p, vector<ll> a,  ll n)
{
    for(ll i=2;i*p<n;i++)
    {
        a[i*p]=1;
    }
    return a;
}
vector<ll> sieve(vector<ll> a, ll n)
{
	a[0]=1;
	a[1]=1;
    for(ll i=2;i<sqrt(n);i++)
    {
        if(a[i]==0)
        {
            a=mark(i,a,n);
        }
    }
    return a;
}
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
ll findGCD(vector<ll> a, ll n) //used to find gcd of array or gcd of array added by constant
{
    ll result = a[1]-a[0]; 
    for (ll i = 1; i+1 < n; i++) 
    {
    	if(a[i+1]-a[0]>result)
    	{
    		result = gcd(a[i+1]-a[0], result);
		}
		else
		{
			result = gcd(result ,a[i+1]-a[0]);
		}
    	
	}  
    return result; 
} 
ll ribbonCut(ll n, ll b, ll c, ll a)
{
	vector<ll> dp(n+1);
	dp[0]=0;
	for(ll i=1;i<=n;i++)
	{
		ll x,y,z;
		x=y=z=-1;
		if(i>=a)
		{
			x=dp[i-a];
		}
		if(i>=b)
		{
			y=dp[i-b];
		}
		if(i>=c)
		{
			z=dp[i-c];
		}
		if(x==-1 &&y==-1 && z==-1)
		{
			dp[i]=-1;
		}
		else
		{
			dp[i]=max(max(x,y),z)+1;
		}
	}
	return dp[n];
}
ll fact(ll n)
{
	ll p=1;
	for(ll i=2;i<=n;i++)
	{
		p=p*i;
	}
	return p;
}
ll modInverse(ll A,ll M)
{
    A=A%M;
    for(ll B=1;B<M;B++)
        if(((A*B)%M)==1)
            return B;
}
//cout<<fixed;
//cout<<setprecision(9);
//n8m vector: vector< vector<ll> > a(n, vector<ll>(m,0));
//while using ceil, use decimal in denominator
//to declare 32 bit int : int32_t n;
//fflush(stdin);
//ios::sync_with_stdio(0);
//    cin.tie(0);
//LCM INBUILT FUNCTION:
//#include<boost/math/common_factor.hpp>
//boost::math::lcm(10,20);
ll ifok(ll x)
{
	while(x % 2 == 0)
	{
		x /= 2;
	}
	while(x % 3 == 0)
	{
		x /= 3;
	}
	return x;
}

bool equal(stack<ll> a, vector<ll> b)
{
	if(a.size() != b.size())
	{
		return 0;
	}
	ll n = a.size();
	for(ll i = 0 ; i < n ; i++)
	{
		ll t = a.top();
		a.pop();
		if(t != b[i])
		{
			return 0;
		}
	}
	return 1;
}

void operate(stack<ll>& a, stack<ll>& b)
{
	ll ad = a.top();
	ll bd = b.top();
	a.pop();
	b.pop();
	stack<ll> temp;
	if(ad > bd)
	{
		while(!a.empty())
		{
			temp.push(a.top());
			a.pop();
		}
		a.push(ad);
		a.push(bd);
		while(!temp.empty())
		{
			a.push(temp.top());
			temp.pop();
		}
	}
	else //bd > ad
	{
		while(!b.empty())
		{
			temp.push(b.top());
			b.pop();
		}
		b.push(bd);
		b.push(ad);
		while(!temp.empty())
		{
			b.push(temp.top());
			temp.pop();
		}
	}
	return;
}
bool finf(ll p,vector<ll> a ,ll n)
{
	vector<ll> dp(n+1, 0);
	for(ll i = 0 ; i < n ; i++)
	{
		dp[a[i]]++;
	}
	bool ans = false;
	ll ansi = 0;
	ll maxi = p;
	for(ll i = 1 ; i <= n ; i++)
	{
		if(dp[i] >= p)
		{
			if(dp[i] >= maxi)
			{
				maxi = dp[i];
				ans = true;
				ansi = i;
			}
		}
	}
	if(ans == false)
	{
		return ans;
	}
	ll f = 0;
	ll pc = p;
	for(ll i = 1 ; i <= n ; i++)
	{
		if(p > 0)
		{
			if(i != ansi && dp[i] != 0 || dp[i] > pc)
			{
				p--;
			}
		}
		else
		{
			f = 1;
			break;
		}
	}
	if(f == 1 || p <= 0)
	{
		return true;
	}
	return false;
}
//1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
//16 8 17 7 8 21 13 5 1 25 12 14 12 6 4 24 6 9 18 3 22 19 3 24 7 7 2 23 11 6 14 17 4 21 24 23 6 14 6 15 26 22 19 18 20 11 10 16 18 5 16 7 7 24 18 16 14 18 22 25 19 20 13 23 3 25 19 25 25 3 17 16 5 22 9 11 5 6 6 13 26 14 9 13 11 11 1 19 22 23 19 18 5 14 26 11 25 3 24 6 24 20 12 19 7 25 16 19 6 1 4 16 15 15 5 6 24 26 2 3 15 5 10 21 22 16 22 1 2 15 25 7 16 15 5 25 12 6 16 2 14 16 12 10 22 18 22 9 16 25 1 13 25 5 8 23 17 14 17 18 17 16 13 24 21 10 10 12 15 15 22 1 15 23 21 24 23 8 13 19 14 3 2 24 3 15 11 19 6 26 11 22 1 20 24 4 11 14 12 25 10 25 8 6 9 24 10 19 23 14 11 11 21 6 14 21 24 24 26 18 26 2 13 14 13 7 17 15 15 11 5 20 12 25 8 14 11 15 1 21 7 26 17 18 3 4 4 9 21 20 5 9 15 10 23 1 25 25 26 16 22 19 3 13 16 19 1 10 12 6 22 7 21 2 6 1 1 15 22 12 26 25 12 14 20 18 11 4 3 16 23 19 18 20 5 19 10 23 8 4 9 26 3 15 2 26 3 14 6 23 12 17 9 10 20 22 4 23 22 24 8 18 3 2 12 4 22 7 25 12 23 7 2 21 19 2 13 2 15 18 24 20 12 8 3 19 13 16 24 15 8 7 13 7 14 11 5 21 6 4 24 15 20 15 7 2 7 24 16 5 25 1 14 6 5 20 3 21 11 5 16 26 19 8 11 12 10 21 7 7 7 5 11 10 4 17 26 10 5 14 16 5 22 17 7 24 9 5 16 10 19 18 4 26 10 1 26 21 10 12 12 3 8 8 2 6 17 13 11 9 13 23 26 15 2 9 23 25 2 24 4 21 21 14 6 19 11 19 18 19 18 20 5 11 13 17 4 3 25 26 10 5 5 21 8 13 19 18 17 3 15 26 9 10 9 16 6 9 15 14 5 5 4 4 16 19 26 18 14 1 22 25 13 13 20 1 20 2 4 26 17 19 15 5 13 21 22 14 16 16 16 19 21 1 3 2 1 26 21 24 13 8 5 3 20 8 12 5 7 18 16 21 14 11 4 13 2 16 16 23 5 17 20 7 10 15 16 1 18 13 15 23 26 4 17 25 15 24 25 20 10 2 2 8 1 23 4 25 4 3 16 18 10 2 24 16 8 15 15 8 16 11 23 17 25 21 8 18 17 26 8 14 2 14 6 21 22 17 14 17 17 12 18 26 10 16 24 9 15 7 22 12 9 5 24 4 26 21 26 15 19 18 11 18 21 19 22 15 10 2 18 26 13 23 26 16 15 23 11 10 9 12 5 6 18 1 1 13 4 9 7 16 14 16 21 21 8 7 24 16 17 14 10 23 10 13 23 1 24 24 13 14 19 14 8 8 12 17 17 18 26 21 4 12 20 6 26 15 20 3 10 20 14 26 24 21 7 12 19 4 19 13 26 3 14 15 3 11 22 6 1 10 6 18 13 24 15 20 8 15 23 11 2 10 26 23 21 3 23 12 10 6 18 9 13 16 13 25 8 3 8 26 18 9 23 11 2 1 18 24 2 7 6 3 2 3 5 25 8 10 21 7 9 24 23 20 2 22 20 18 5 8 2 2 3 16 24 9 6 2 24 22 6 2 3 7 11 3 6 17 3 11 3 15 20 26 7 11 21 2 13 10 18 13 2 19 26 20 19 19 8 6 18 15 5 6 23 19 10 18 24 10 8 7 21 26 25 21 16 26 23 23 5 9 17 21 18 16 9 24 9 17 6 12 4 21 21 22 5 15 15 23 17 3 21 4 8 14 5 6 14 10 8 1 9 13 21 3 26 6 19 11 21 9 4 21 2 21 18 9 19 23 20 2 18 5 3 21 25 11 1 2 6 3 22 11 4 26 5 26 20 15 9 4 21 11 21 8 10 26 5 6 3 26 26 26 2 6 11 17 4 16 17 26 9 11 6 15 2 21 3 4 8 20 8 24 4 10 7 11 10 5 12 18 12 16 1 24 1 13 3 5 18 15 19 23 9 20 4 16 20 16 3 3 12 9 6 11 5 12 10 25 20 9 8 18 3 17 1 25 2 14 5 6 24 14 24 22 7 26 5 4 25 25 8 14 7 25 3 4 18 21 4 13 16 8 13 5 3 11 15 20 18 23 15 19 16 15 6 7 8 6 15 26 17 22 12 17 6 24 23 23 11 13 6 24 4 25 25 7 13 4 3 1 19 26 19 7 15 22 19 15 4 11 10 7 8 3 23 13 2 13 24 18 13 8 21 25 6 25 17 7 1 10 17 11 3 11 12 26 14 1 25 24 17 11 17 15 25 26 23 13 25 21 2 26 1 26 3 16 11 8 11 20 11 25 4 26 9 22 3 21 25 16 21 18 6 13 2 9 19 7 5 11 25 18 7 26 22 24 4 8 16 15 1 13 22 1 6 25 18 1 18 24 19 22 11 8 20 17 4 9 8 5 18 19 9 7 2 8 26 10 26 21 10 24 13 13 25 19 16 14 1 18 1 5 23 11 5 7 10 3 3 22 8 8 18 10 22 2 10 20 19 17 4 10 15 15 20 7 16 11 14 6 16 6 25 3 7 6 9 5 15 23 17 18 23 23 23 16 26 19 17 13 5 20 15 7 5 16 19 16 24 14 22 10 9 21 16 1 12 25 25 14 13 11 13 14 21 22 11 12 8 19 5 3 4 23 18 1 3 7 6 13 26 11 7 9 16 4 6 15 4 11 10 13 10 17 23 9 17 16 21 15 17 8 9 13 22 6 22 21 26 23 25 22 9 10 7 6 21 12 12 11 10 4 21 8 19 10 1 6 2 20 12 11 13 6 17 18 13 25 10 6 10 14 8 8 19 19 17 3 20 25 4 20 5 1 13 4 3 10 2 16 18 8 20 14 5 7 25 9 23 24 7 3 10 23 12 7 18 19 13 5 1 5 1 18 23 20 22 10 19 10 2 1 15 9 15 10 12 23 8 25 16 14 22 18 21 9 8 15 19 23 11 9 6 25 7 20 25 4 8 1 3 23 25 8 19 7 5 23 26 13 20 7 15 14 26 12 20 10 8 7 1 21 8 14 9 8 18 5 17 7 10 6 23 11 10 19 13 20 16 10 8 1 5 6 17 26 1 1 21 12 4 18 3 8 10 3 3 4 25 18 6 22 22 18 9 22 21 25 5 5 7 6 9 22 4 18 3 25 7 21 18 17 4 18 5 4 1 11 21 2 14 6 7 21 16 18 15 17 25 12 15 2 3 23 17 24 11 26 13 1 21 19 10 7 13 8 3 13 8 7 4 14 13 16 8 14 17 11 1 13 8 21 18 11 20 18 6 6 1 3 12 22 7 18 26 11 11 12 4 1 3 12 12 20 5 15 10 15 13 15 14 24 18 17 25 10 26 7 9 14 18 14 14 26 23 1 3 24 24 1 5 4 18 23 21 4 24 26 18 6 21 19 5 23 10 20 2 15 24 22 25 14 6 8 11 19 20 3 5 14 1 21 13 14 4 4 24 6 4 13 22 26 3 1 21 20 4 3 3 11 24 1 1 25 4 26 19 24 20 20 15 2 2 7 17 14 7 22 22 16 10 7 15 10 15 7 12 13 11 24 7 2 6 3 16 25 16 3 11 17 3 8 2 4 4 26 23 18 24 2 26 13 17 18 12 24 22 15 2 20 23 8 24 7 9 14 6 7 6 18 3 3 12 13 26 14 13 10 21 7 23 23 2 19 17 6 3 9 8 21 2 19 10 15 12 12 13 19 17 19 7 8 13 3 16 8 5 12 19 15 20 6 12 2 7 19 6 14 16 3 21 26 19 18 21 16 3 8 25 14 22 26 8 3 16 17 21 7 18 9 23 14 9 17 24 4 6 10 16 23 16 24 6 2 12 11 16 14 16 5 5 12 6 10 13 20 11 21 17 16 26 15 13 23 14 12 13 2 21 16 13 11 20 12 16 20 14 4 13 16 4 19 25 4 19 7 22 6 16 5 14 5 13 23 2 15 18 9 6 19 21 17 8 3 5 19 11 13 11 8 19 19 13 22 14 15 14 23 1 6 24 23 8 7 2 9 2 1 2 22 17 15 16 17 6 15 22 9 21 19 19 17 6 17 23 5 8 20 24 4 26 21 10 20 12 14 20 24 13 18 10 24 24 23 20 12 7 7 11 25 20 2 9 15 12 25 4 14 9 12 17 1 4 15 10 19 11 11 22 6 24 1 8 8 10 13 2 15 3 12 10 1 18 9 14 20 4 23 3 12 4 22 4 24 18 15 16 2 25 10 26 23 25 25 15 10 21 15 20 8 23 13 12 22 18 7 12 6 26 4 26 4 2 20 21 2 24 21 15 6 6 22 14 3 18 19

vector<bool> dectobin(ll n)
{
	vector<bool> ans;
	while(n != 0)
	{
		ans.push_back(n % 2);
		n /= 2;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

ll bintodec(vector<bool> a)
{
	ll ans = 0;
	for(ll i = 0 ; i < a.size() ; i++)
	{
		ans = ans * 2 + (ll)a[i];	
	}
	return ans;
}

vector<bool> process(vector<bool> a, ll d)
{
	vector<bool> ans;
	if(d == 1)
	{
		for(ll i = 0 ; i < a.size() - 1 ; i += 2)
		{
			if(a[i] == 0 && a[i+1] == 0)
			{
				ans.push_back(0);
				ans.push_back(0);
			}
			else if(a[i] == 0 && a[i+1] == 1)
			{
				ans.push_back(1);
				ans.push_back(0);
			}
			else if(a[i] == 1 && a[i+1] == 0)
			{
				ans.push_back(1);
				ans.push_back(1);
			}
			else
			{
				ans.push_back(0);
				ans.push_back(1);
			}
		}
		return ans;
	}
	else if(d == 2)
	{
		for(ll i = 0 ; i < a.size() - 1 ; i += 2)
		{
			if(a[i] == 0 && a[i+1] == 0)
			{
				ans.push_back(0);
				ans.push_back(0);
			}
			else if(a[i] == 0 && a[i+1] == 1)
			{
				ans.push_back(1);
				ans.push_back(1);
			}
			else if(a[i] == 1 && a[i+1] == 0)
			{
				ans.push_back(0);
				ans.push_back(1);
			}
			else
			{
				ans.push_back(1);
				ans.push_back(0);
			}
		}
		return ans;
	}
	return a;
}

string str(ll a)
{
	string t;
	while(a != 0)
	{
		string e;
		if(a%2 == 0)
		{
			e = "0";
		}
		else
		{
			e = "1";
		}
		t = t + e;
		a /= 2;
	}
	return t;
}

ll possible(string a, string b)//a into b
{
	ll c = 0;
	for(ll i = 0 ; i < 7 ; i++)
	{
		if(a[i] == '1' && b[i] == '1')
		{
			return -1;
		}
		else if(a[i] == '0' && b[i] == '1')
		{
			c++;
		}
	}
	return c;
}


vector<vector<ll> > findpos(string a)
{
	vector<vector<ll> > p;
	for(ll i = 1 ; i <= 9 ; i++)
	{
		//if(possible(i, a) != -1)
		{
		//	p.push_back(make_pair(i, possible(a, str(i))));
		}
	}
	return p;
}

int main()
{
	ll n;
	cin>>n;
	ll c = 0;
	for(ll i = 0 ; i < n ; i++)
	{
		string a;
		cin>>a;
		ll f = 0;
		for(ll j = 0; j < a.size() ; j++)
		{
			if(a[j] == '+')
			{
				f = 1;
			}
		}
		if(f == 0)
		{
			c--;
		}
		else
		{
			c++;
		}
	}
	cout<<c;
	return 0;
}/*ll n;
	cin>>n;
	vector<ll> a(n);
	vector<ll> dp(n);
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>a[i];
		if(i == 0)
		{
			dp[i] = a[i];
		}
		else
		{
			dp[i] = dp[i-1] + a[i];
		}
	}
	ll m;
	cin>>m;
	for(ll i = 0 ; i < m ; i++)
	{
		ll p;
		cin>>p;
		ll l = 0;
		ll h = n;
		ll m = (l + h) / 2;
		ll q = 0;
		ll f = 0;
		while(l < h)
		{
			if(p == dp[m])
			{
				q = m;
				f = 1;
				break;
			}
			else if(p < dp[m])
			{
				h = m;
			}
			else
			{
				l = m + 1;
			}
			m = (l + h)/2;
		}
		if(f == 0)
		{
			q = l;
		}
		cout<<q+1<<endl;
	}, m, a, b;
	cin>>n>>m>>a>>b;
	if( ((double)b) / ((double)m) < (double)a )
	{
		cout << (n/m) * b + min(b, a * (n % m));
	}
	else
	{
		cout<<n * a;
	} n, l;
	cin>>n>>l;
	vector<ll> a(n);
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	long double maxa = (long double)max(a[0], l - a[n-1]);
	for(ll i = 0 ; i < n - 1 ; i++)
	{
		maxa = max(maxa, (long double)((a[i+1] - a[i])/2.0));
	}
	cout<<fixed;
	cout<<setprecision(9);
	cout<<maxa;	map<string, ll> m;
	for(ll i = 0 ; i < n ; i++)
	{
		string s;
		cin>>s;
		if(m[s] == 0)
		{
			m[s]++;
			cout<<"OK"<<endl;
		}
		else
		{
			cout<<s<<m[s]<<endl;
			m[s]++;
		}
	}ll n;
	cin>>n;
	vector<ll> a(n);
	for(ll i = 0 ; i < n; i++)
	{
		cin>>a[i];
	}
	ll on = a[0] % 2;
	ll tw = a[1] % 2;
	ll th = a[2] % 2;
	if(on == tw && tw == th)
	{
		for(ll i = 3; i < n ; i++)
		{
			if(a[i] % 2 == (1 - on))
			{
				cout<<i+1;
				break;
			}
		}
	}
	else
	{
		if(on == tw)
		{
			cout<<3;
		}
		else if(on == th)
		{
			cout<<2;
		}
		else
		{
			cout<<1;
		}
	}// TASK : Do checking for a maximum for a 2000 digit number - not ( * 10 + )
	ll n, k;
	cin>>n>>k;
	vector<string> a(n);
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>a[i];
	}
	vector<vector<ll> > dp(n, vector<ll> (k+1));
	vector<pair<ll, ll> > t = findpos(a[0]);//val, k req
	for(ll j = 0 ; j <= k ; j++)
	{
		dp[0][j] = 0;
		for(ll m = 0 ; m < t.size() ; m++)
		{
			dp[0][j] = max(dp[0][j], t[m].ff);
		}
	}
	for(ll i = 1 ; i < n ; i++)
	{
		vector<pair<ll, ll> > t = findpos(a[i]);//val, k req
		for(ll j = 0 ; j <= k ; j++)
		{
			dp[i][j] = 0;
			for(ll m = 0 ; m < t.size() ; m++)
			{
				if(j - t[m].ss >= 0)
				{
					dp[i][j] = max(dp[i][j], dp[i-1][j - t[m].ss] * 10 + t[m].ff);			
				}
			}
		}
	}
	if(dp[n-1][k] < 1e2000-1)///invalid
	{
		cout<<0;
	}
	else
	{
		cout<<dp[n-1][k];		
	}t;
	cin>>t;
	for(int xyz = 0 ; xyz < t ; xyz ++)
	{
		ll n;
		cin>>n;
		vector<ll> a(n);
		for(ll i = 0 ; i < n ; i++)
		{
			cin>>a[i];
		}
		ll ne = 1;
		ll f = 0;
		for(ll i = n - 1 ; i >= 0 ; i-- )
		{
			if(a[i] == ne)
			{
				ne++;
			}
			else
			{
				ll net = a[i] + 1;
				while(i >= 1 && a[i] != ne)
				{
					if(a[i] != a[i-1] + 1)
					{
						f = 1;
						break;
					}
					i--;
				}
				ne = net;
			}
		}
		if(f == 0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}queue<ll> peaks;
		ll p = 0;
		ll q = k - 1;
		for(ll i = p + 1 ; i <= q - 1 ; i++)
		{
			if(a[i] >= a[i-1] && a[i] >= a[i+1])
			{
				peaks.push(i);
			}
		}
		ll maxa = peaks.size();
		ll maxi = p;
		p++;
		q++;
		while(q < n)
		{
			if(!peaks.empty() && peaks.front() == p)
			{
				peaks.pop();
			}
			if(a[q-1] >= a[q-2] && a[q-1] >= a[q])
			{
				peaks.push(q-1);
			}
			if(!peaks.empty() && peaks.size() > maxa)
			{
				maxa = peaks.size();
				maxi = p;
			}
			p++;
			q++;
		}
		cout<<maxa+1<<" "<<maxi+1<<endl;if(n <= 3)
		{
			cout<<n<<endl;
			continue;
		}
		//cout<<"log2(n+1) "<<ceil(log2l(n+1))<<endl;
		ll b = ceil(log2l(n+1));
		if(b % 2 == 1)
		{
			b++;
		}
		ll nd = n - (ll)pow(4, (b-4)/2 + 1) + 1;
		ll d = (nd - 1) % 3;
		//cout<<"b "<<b<<endl;
		//cout<<"nd "<<nd<<endl;
		vector<bool> ans(b, 0);
		ans[1] = 1;
		vector<bool> rem;
		rem = dectobin((nd-1)/3); //MSB = 0 ; LSB = n - 1
		reverse(rem.begin(), rem.end());
		while(rem.size() < b - 2)
		{
			rem.push_back(0);
		}
		reverse(rem.begin(), rem.end());
		/*for(ll i = 0 ; i < rem.size() ; i++)
		{
			cout<<rem[i]<<" ";
		}
		cout<<endl;
		ll ansi = 2;
		for(ll i = 0 ; i < rem.size() ; i++)
		{
			ans[ansi] = rem[i];
			ansi ++;
		}
		ans = process(ans, d);
		ll ansn = bintodec(ans);
		cout<<ansn<<endl;int n;
		cin>>n;
		vector<int> a(n+1);
		for(int i = 1 ; i <= n ; i++)
		{
			cin>>a[i];
		}
		vector<vector<int> > dp(201, vector<int> (n+1));
		for(int p = 1 ; p <= 200 ; p++)
		{
			for(int i = 0 ; i <= n ; i++)
			{
				if(i == 0)
				{
					dp[p][i] = 0;
				}
				else
				{
					dp[p][i] = dp[p][i-1] + (a[i] == p ? 1 : 0);
				}
			}
		}
		vector<vector<int> > c(201);
		for(int i = 1 ; i <= n ; i++)
		{
			c[a[i]].push_back(i);
		}
		int ans = 1;
		for(int i = 1 ; i <= 200 ; i++)
		{
			int len = c[i].size();
			for(int j = 0 ; j < len / 2 ; j++)
			{
				int l = c[i][j];
				int r = c[i][len - j - 1] - 1;
				int maxi = 0;
				for(int k = 1 ; k <= 200 ; k++)
				{
					maxi = max(maxi, dp[k][r] - dp[k][l]);
				}
				ans = max(ans, 2 * (j + 1) + maxi);
			}
		}
		cout<<ans<<endl;fn = 9;
		for(ll i = 1 ; i <= n ; i++)
		{
			string a;
			cin>>a;
			for(ll j = 1 ; j <= n ; j++)
			{
				ll p;
				p = a[j-1] - '0';
				if(i == 1 && j == 1 || i == 2 && j == 4 || i == 3 && j == 7 || i == 4 && j == 2 || i == 5 && j == 5 || i == 6 && j == 8 || i == 7 && j == 3 || i == 8 && j == 6 || i == 9 && j == 9 )
				{
					p %= 9;
					p += 1;
				}
				cout<<p;
			}
			cout<<endl;
		}or(ll i = 0 ; i < n ;i++)
		{
			cin>>a[i];
		}
		if(n == 1)
		{
			cout<<0<<endl;
			continue;
		}
		ll l = 1;
		ll h = n - 1;
		while(l < h)
		{
			ll m = (l + h + 1) / 2;
			if(finf(m, a, n))
			{
				//cout<<"Yes"<<endl;
				l = m;
			}
			else
			{
				//cout<<"No"<<endl;
				h = m - 1;
			}
		}
		cout<<l<<endl;//	ll n=1000001;
//	vector<ll> a(n);
//	a=sieve(a,n);
	ll n;
	cin>>n;
	ll n1;
	cin>>n1;
	ll t;
	vector<ll> ad;
	for(ll i = 0; i < n1 ; i++)
	{
		cin>>t;
		ad.push_back(t);
	}
	ll n2;
	cin>>n2;
	vector<ll> bd;
	for(ll i = 0 ; i < n2 ; i++)
	{
		cin>>t;
		bd.push_back(t);
	}
	//
	stack<ll> a;
	for(ll i = ad.size()-1; i >= 0 ; i--)
	{
		a.push(ad[i]);
	}
	stack<ll> b;
	for(ll i = bd.size()-1; i >= 0 ; i--)
	{
		b.push(bd[i]);
	}
	//
	ll f = 0;
	ll c = 0;
	while(1)
	{
		operate(a, b);//d
		/
		stack<ll> temp;
		while(!a.empty())
		{
			temp.push(a.top());
			cout<<"a : "<<a.top()<<endl;
			a.pop();
		}
		while(!temp.empty())
		{
			a.push(temp.top());
			temp.pop();
		}
		
		while(!b.empty())
		{
			temp.push(b.top());
			cout<<"b : "<<b.top()<<endl;
			b.pop();
		}
		while(!temp.empty())
		{
			b.push(temp.top());
			temp.pop();
		}
		c++;
		//
		if(equal(a, ad) && equal(b, bd)  || equal(a, bd) && equal(b, ad) ||  c > 100000)
		{
			f = 2;
			break;
		}
		if(a.size() == 0 || b.size() == 0)
		{
			f = 1;
			break;
		}
	}
	if(f == 2)
	{
		cout<<-1;
	}
	else
	{
		cout<<c<<" "<<(a.size() == 0 ? 2 : 1);
	}
/*	ll n;
	cin>>n;
	vector<ll> a;
	vector<ll> ans;
	while(n != 0)
	{
		a.push_back(n % 10);
		n /= 10;
	}
	reverse(a.begin(), a.end());
	for(ll j = 0 ; j <= 9 ; j++)
	{
		ll t = 0;
		for(ll i = 0 ; i < a.size() ; i++)
		{
			if(a[i] > 0)
			{
				t = t * 10 + 1;
				a[i]--;
			}
			else
			{
				t = t * 10;
			}
		}
		if(t != 0)
		{
			ans.push_back(t);
		}
	}
	cout<<ans.size()<<endl;
	for(ll i = 0 ; i  <  ans.size() ; i++)
	{
		cout<<ans[i]<<" ";
	}
/*if(n <= 1)
	{
		cout<<"Yes";
		return 0;
	}
	sort(a.begin(), a.end());
	ll p;
	for(ll i = 0 ; i < n ; i++)
	{
		if(i == 0)
		{
			p = ifok(a[i]);
		}
		else
		{
			if(ifok(a[i]) != p)
			{
				cout<<"No";
				return 0;
			}
		}
		//cout<<"LCM : "<<lcm<<endl;
	}
	cout<<"Yes";*/
