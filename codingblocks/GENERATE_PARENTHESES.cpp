#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

vector<string> asd;

string f(string s, int opava, int unclose){
    if(opava==0){
        asd.push_back((s+string(unclose,')')));
        return "69";
    }
    if(unclose==0)return f(s+"(",opava-1,unclose+1);
    f(s+")",opava,unclose-1);
    f(s+"(",opava-1,unclose+1);
    return "69";
}

int main(){
    FASTER;
    int n;cin>>n;
    f("",n,0);
    for(string i:asd)cout<<i<<"\n";
}
//note the sorting
