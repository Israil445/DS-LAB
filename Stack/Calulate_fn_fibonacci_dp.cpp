#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;
int dp[N];

int fibo(int n){
if(n==0 || n==1){
    return n;
}
if(n==2){
    return 1;
}

    if(dp[n] != -1){
        return dp[n];
    }
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];
}

int main(){

    int n; cin>>n;//7
    memset(dp,-1,sizeof(dp));



    cout<<fibo(n)<<endl;

    /* Time complexity o(n)*/



return 0;
}


