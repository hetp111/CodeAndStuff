#include <bits/stdc++.h>
using namespace std;

int trino(int n){
    return n*(n+1)/2;
}

int noOfDiv(int n){
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cnt+=2;
        }
    }
    return cnt;
}

int main(){
    int n,i;
    for(i=1;;i++){
        n=noOfDiv(trino(i));
        if(n>500){
            break;
        }
    }
    cout<<trino(i);
}
