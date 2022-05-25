#include<bits/stdc++.h>
#define   ll        long long
#define   nl         "\n"

int main()
{
    ll n; std::cin>>n;
    std:: string arr[n];

    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }

  std::  string name="karim";//rahim ,karim,israil,abcd

    int indx=0;
    for(int i=0;i<n;i++){
        if(arr[i]==name){
            indx=i;break;
        }
    }

    for(int i=indx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n-=1;

    for(int i=0;i<n;i++){
       std:: cout<<arr[i]<<" ";
    }
   std::  cout<<nl;


	return 0;
}
