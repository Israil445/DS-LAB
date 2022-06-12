#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
if(n==0 || n==1){
    return n;
}
else{
    return fibo(n-1)+fibo(n-2);

}
}
int main(){

    int n; cin>>n;//7
    int i=1;
    cout<<"Fibonacci serise "<<endl;
    while(i<=n){
        cout<<fibo(i)<<" ";
        i++;
    }cout<<endl;


return 0;
}
