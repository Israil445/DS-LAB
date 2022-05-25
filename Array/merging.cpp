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

    ll m; cin>>m;
    int brr[m];
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    ll ans[n+m];
    ll k=0;
    for(int i=0;i<n;i++){
        ans[k++]=arr[i];
    }

    for(int i=0;i<m;i++){
        ans[k++]=brr[i];
    }

    for(int i=0;i<n+m;i++){
        cout<<ans[i]<<" ";
    }cout<<nl;









	return 0;
}
