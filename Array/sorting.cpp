#include<bits/stdc++.h>
#define ll long long
#define   PI        2*acos(0.0)
#define nl "\n"
using namespace std;

int main()
{
    ll n; cin>>n;
    ll arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<nl;



	return 0;
}
