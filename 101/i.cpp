
ll maxi(ll a, ll b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
ll mini(ll a, ll b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
// void dfs(int node,vector<vector<int> > &adj,int visited[],int len[],int in[]){
//     for(int i=0;i<adj[node].size();i++){
//         int child=adj[node][i];
//         len[child]=maxi(len[child],len[node]+1);
//         if(visited[child]==0){
//             visited[child]=1;
//             dfs(child,adj,visited,len,in);
//         }
        
//     }
// }
void findCombination(vector<char> sv,ll dis,ll k,vector<string> &total,string temp,ll count){
    if(count==dis){
        if(temp.size()==k){
            total.push_back(temp);
        }
        return;
    }
    findCombination(sv,dis,k,total,temp,count+1);
    temp+=sv[count];
    findCombination(sv,dis,k,total,temp,count+1);
    return;
}
// ll pri(ll n){
//     ll count=0;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     return count;
// }
// // int dfs(int node,vector<vector<int> > &adj,int visited[],int parent,int *sum){
// //     *sum=*sum+1;
// //     int count=0;
// //     int counter=0;
// //     for(int i=0;i<adj[node].size();i++){
        
// //         if(adj[node][i]==node){
// //             count++;
// //             continue;
// //         }
// //         int child=adj[node][i];
// //         if(visited[child]==0){
// //             visited[child]=1;
// //             int a=dfs(child,adj,visited,node,sum);
// //             count+=a+1;
// //         }else{
// //             if(counter==1){
// //                 count++;
// //             }else{
// //                 if(child!=parent){
// //                     count++;
// //                 }else{
// //                     counter=1;
// //                 }
// //             }
// //         }
// //     }
// //     return count;
// // }
int dfs(int node,vector<vector<int> > &adj,int visited[],int dp[]){
    int count=0;
    for(int i=0;i<adj[node].size();i++){
        int child=adj[node][i];
        if(visited[child]==0){
            visited[child]=1;
            int a=dfs(child,adj,visited,dp);
            count=max(count,a+1);
        }else{
            count=max(count,dp[child]+1);
        }
    }
    dp[node]=count;
    return count;
}
ll pow(ll a,ll x,ll m){
    if(x==0){
        return 1;
    }
    ll temp=pow(a,x/2,m)%m;
    temp=(temp*temp)%m;
    if(x%2==0){
        return temp%m;
    }else{
        return (temp*a)%m;
    }
}
// ll geo(ll a,ll x,ll m){
//     if(x==1){
//         return 1;
//     }
//     if(x==2){
//         return (1+a)%m;
//     }
//     ll temp=geo(a,x/2,m)%m;
//     ll p=pow(a,x/2,m)%m;
//     ll p1=pow(a,x-1,m)%m;
//     // cout<<temp<<endl;    
//     if(x%2==0){
//         return (temp*(1+p))%m;
//     }else{
//         return ((temp*(1+p))%m+p1%m)%m;
//     }
// }
// ll traverse(ll a, ll b, ll m,ll n, set<int> s, vector<vector<int> > final){
//     if(s.count(final[a][b])==1){
//         return 0;
//     }
//     if(a==m-1 && b==n-1){
//         return 1;
//     }
//     s.insert(final[a][b]);
//     if(a>=m-1){
//         return traverse(a,b+1,m,n,s,final);
//     }
//     if(b>=n-1){
//         return traverse(a+1,b,m,n,s,final);
//     }
//     return traverse(a+1,b,m,n,s,final)+traverse(a,b+1,m,n,s,final);
// }
// ll dfs(int node,vector<vector<int> > &adj,int visited[],int parent){
//     int count=0;
//     for(int i=0;i<adj[node].size();i++){
//         int child=adj[node][i];
//         if(child==parent){
//             continue;
//         }
//         if(visited[child]==0){
//             visited[child]=1;
//             count+=dfs(child,adj,visited,node);
//         }else{
//             count++;
//         }
//     }
//     return count;
// }
// ll fin(int n,map<vector<vector<int> >,int> &m,vector<vector<int> > a){
//     if(m.count(a)==1){
//         return m[a];
//     }
//     if(n==1){
//         if(a[0][0]==1){
//             m[a]=1;
//             return 1;
//         }else{
//             m[a]=0;
//             return 0;
//         }
//     }
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             sum+=a[i][j];
//         }
//         if(sum==0){
//             m[a]=0;
//             return 0;
//         }
//     }
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             sum+=a[j][i];
//         }
//         if(sum==0){
//             m[a]=0;
//             return 0;
//         }
//     }
//     vector<vector<int> > b(n-1,vector<int>(n-1));
//     int x=0;
//     int y=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(a[i][j]==1){
//                 x=i;
//                 y=j;
//                 goto l;
//             }
//         }
//     }
//     l:
//     // cout<<x<<y<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==x || j==y){
//                 continue;
//             }

//             if(i<x && j<y){
//                 b[i][j]=a[i][j];
//             }else if(i<x && j>y){
//                 b[i][j-1]=a[i][j];
//             }else if(i>x && j<y){
//                 b[i-1][j]=a[i][j];
//             }else{  
//                 b[i-1][j-1]=a[i][j];
//             }
//         }
//     }
//     a[x][y]=0;
//     ll ans1=fin(n,m,a);
//     ll ans2=fin(n-1,m,b);
//     // cout<<m[c]<<endl;
//     a[x][y]=1;
//     m[a]=ans1+ans2;
//     return m[a];
// }
// void ta(int x,int y,int n,int m,vector<vector<char> > &a,vector<vector<int> > &b,int count,string s,string* c){
//     if(x<0 || y<0 || x>=n || y>=m){
//         return;
//     }
//     if(b[x][y]<=count && b[x][y]!=-1){
//         return;
//     }
    
//     if(a[x][y]=='#'){
//         b[x][y]=-1;
//         return;
//     }
//     b[x][y]=count;

//     if(a[x][y]=='B'){
//         *c=s;
//         return;
//     }
//     ta(x+1,y,n,m,a,b,count+1,s+"D",c);
//     ta(x-1,y,n,m,a,b,count+1,s+"U",c);
//     ta(x,y+1,n,m,a,b,count+1,s+"R",c);
//     ta(x,y-1,n,m,a,b,count+1,s+"L",c);
//     return;
// }
// pair<int,int> dfscount(int node,vector<vector<int> > adj,int visited[]){
//     visited[node]=1;
//     int ve=1;
//     int ed=0;
//     for(int i=0;i<adj[node].size();i++){
//         int child=adj[node][i];
//         ed++;
//         if(!visited[child]){
//             pair<int,int> p=dfscount(child,adj,visited);
//             ve=ve+p.first;
//             ed=ed+p.second;
//         }
//     }
//     return make_pair(ve,ed);
// }

int dfschild(int node,vector<vector<int> > &adj,int visited[]){
    visited[node]=1;
    int sum=0;
    for(int i=0;i<adj[node].size();i++){
        int child=adj[node][i];
        if(!visited[child]){
            int r=dfschild(child,adj,visited);
            sum+=r+1;
        }
    }
    return sum;
}
void bfs(int a,vector<vector<int> > &adj,int visited[],int dist[]){
	queue<int> q;
	q.push(a);
	visited[a]=1;
	while(!q.empty()){
	    int node=q.front();
	    q.pop();
	    for(int i=0;i<adj[node].size();i++){
	        int child=adj[node][i];
	        if(!visited[child]){
	            visited[child]=1;
	            dist[child]=dist[node]+1;
	            q.push(child);
	        }
	    }
	}
}
ll extended_gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
ll modinv(ll a, ll m){
    ll x, y;
    ll g = extended_gcd(a, m, x, y);
    if (g != 1) {
        return -1;
    }
    else {
        x = (x % m + m) % m;
        return x;
    }
}
void bfsme(int x1,int y1,int x2,int y2,vector<vector<char> > &a,vector<vector<int> > &visited, vector<vector<char> > &path,queue<pair<int,int> > &q,int n,int m){
    if(q.empty()){
        return;
    }
    pair<int,int> p=q.front();
    q.pop();
    int x=p.first;
    int y=p.second;
    if(x>0){
        if(a[x-1][y]!='#' && visited[x-1][y]>visited[x][y]+1){
            visited[x-1][y]=visited[x][y]+1;
            path[x-1][y]='D';
            q.push(make_pair(x-1,y));
        }
    }
    if(x<n-1){
        if(a[x+1][y]!='#' && visited[x+1][y]>visited[x][y]+1){
            visited[x+1][y]=visited[x][y]+1;
            path[x+1][y]='U';
            q.push(make_pair(x+1,y));
        }
    }
    if(y>0){
        if(a[x][y-1]!='#' && visited[x][y-1]>visited[x][y]+1){
            visited[x][y-1]=visited[x][y]+1;
            path[x][y-1]='R';
            q.push(make_pair(x,y-1));
        }
    }
    if(y<m-1){
        if(a[x][y+1]!='#' && visited[x][y+1]>visited[x][y]+1){
            visited[x][y+1]=visited[x][y]+1;
            path[x][y+1]='L';
            q.push(make_pair(x,y+1));
        }
    }
    bfsme(x1,y1,x2,y2,a,visited,path,q,n,m);
}
int countstring(string s){
    if(s.length()==3){
        int a=countstring(s.substr(0,s.length()/2));
        int b=countstring(s.substr(s.length()/2,s.length()-s.length()/2));
        if(s[0]==s[1]){
            return a+b+1;
        }else{
            return a+b;
        }
    }
    if(s.length()==2){
        if(s[0]==s[1]){
            return 1;
        }else{
            return 0;
        }
    }
    if(s.length()==1){
        return 0;
    }
    int a=countstring(s.substr(0,s.length()/2));
    int b=countstring(s.substr(s.length()/2,s.length()-s.length()/2));
    
    return a+b;
}
