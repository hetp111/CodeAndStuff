#include <bits/stdc++.h>//Carefully Crafted by hetp111
using namespace std;
#define int long long
#define double long double
#define all(v) (v).begin(),(v).end()
#define vi vector<int>
#define pii pair<int,int>
#define prec(n) fixed<<setprecision(n)
#define MOD 1000000007
#define eps 1e-8
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class A, class B> ostream& operator<<(ostream& out, const pair<A, B> &a){
    return out<<"("<<a.first<<","<<a.second<<")";}
template<class A> ostream& operator<<(ostream& out, const vector<A> &a){
    out<<"";for(auto it=a.begin();it!=a.end();it++){if(it!=a.begin())out<<" ";out<<*it;}out<<"";
    return out;}
template<class A, class B> istream& operator>>(istream& in, pair<A,B> &a){in>>a.first>>a.second;return in;}
template<class A> istream& operator>>(istream& in, vector<A> &a){for(A &i:a)in>>i;return in;}
//ifstream cinn("input.txt");ofstream coutt("output.txt");

int x,n,upperbnd;

int dp[1001][1001];

int f(int num,int sum){
    if(sum>x)return 0;
    if(num==upperbnd+1 && sum==x)return 1;
    if(num==upperbnd+1 && sum!=x)return 0;
    if(dp[num][sum]!=-1)return dp[num][sum];
    dp[num][sum]=f(num+1,sum+(int)(pow(num,n)+0.5))+f(num+1,sum);
    return dp[num][sum];
}

signed main(){
    FASTER;
    cin>>x>>n;
    memset(dp,-1,sizeof(dp));
    upperbnd=(int)(pow(x,(1.0/n))+0.5);
    cout<<f(1,0);
}
