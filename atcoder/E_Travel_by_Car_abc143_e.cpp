//https://atcoder.jp/contests/abc143/tasks/abc143_e - floyd warshall
#include <bits/stdc++.h>//Carefully Crafted by hetp111
using namespace std;
#define int long long
#define double long double
#define all(v) (v).begin(),(v).end()
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define MOD 1000000007
#define eps (1e-8)
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class A,class B>ostream&operator<<(ostream&out,const pair<A,B>&a){return out<<"("<<a.first<<","<<a.second<<")";}
template<class A>ostream&operator<<(ostream&out,const vector<A>&a){for(const A &it:a)out<<it<<" ";return out;}
template<class A,class B>istream&operator>>(istream&in,pair<A,B>&a){return in>>a.first>>a.second;}
template<class A>istream&operator>>(istream&in,vector<A>&a){for(A &i:a)in>>i;return in;}
//ifstream cinn("input.txt");ofstream coutt("output.txt");
 
signed main(){
    FASTER;
    int n,m,l;cin>>n>>m>>l;
    int v[301][301]={0};
    for(int i=1;i<=300;i++)for(int j=1;j<=300;j++)if(i!=j)v[i][j]=1e18;
    
    while(m--){
        int a,b,c;cin>>a>>b>>c;
        v[a][b]=v[b][a]=c;
    }
    
    for(int k=1;k<=n;k++)for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)v[i][j]=min(v[i][j],v[i][k]+v[k][j]);
    
    
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
        if(v[i][j]<=l)v[i][j]=1;
        else v[i][j]=1e18;
    }
    
    for(int k=1;k<=n;k++)for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)v[i][j]=min(v[i][j],v[i][k]+v[k][j]);
    
    int q;cin>>q;
    while(q--){
        int a,b;cin>>a>>b;
        cout<<((v[a][b])<1e18?v[a][b]-1:-1)<<"\n";
    }
}
