#include <bits/stdc++.h>//Carefully Crafted by hetp111
using namespace std;
#define int long long
#define double long double
#define all(v) (v).begin(),(v).end()
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define MOD (1000000007)
//#define MOD (998244353)
#define PI acos(-1)
#define eps (1e-8)
#define INF (1e18)
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0)
template<class A,class B>ostream&operator<<(ostream&out,const pair<A,B>&a){return out<<"("<<a.first<<","<<a.second<<")";}
template<class A>ostream&operator<<(ostream&out,const vector<A>&a){for(const A &it:a)out<<it<<" ";return out;}
template<class A,class B>istream&operator>>(istream&in,pair<A,B>&a){return in>>a.first>>a.second;}
template<class A>istream&operator>>(istream&in,vector<A>&a){for(A &i:a)in>>i;return in;}
//ifstream cinn("input.txt");ofstream coutt("output.txt");

signed main(){
    FASTER;
    int t;cin>>t;
    for(int T=1;T<=t;T++){
        string s,ans="";cin>>s;
        ans+=string(s[0]-'0','(');
        ans+=s[0];
        int net=s[0]-'0';
        for(int i=1;i<s.size();i++){
            int dif=s[i]-s[i-1];
            if(dif>0){
                ans+=string(dif,'(');
                net+=dif;
            }else{
                ans+=string(-dif,')');
                net+=dif;
            }
            ans+=s[i];
        }
        ans+=string(net,')');
        cout<<"Case #"<<T<<": "<<ans<<"\n";
    }
}
