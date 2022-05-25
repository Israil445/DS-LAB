#include<bits/stdc++.h>
#define ll long long
#define   PI        2*acos(0.0)
#define nl "\n"
using namespace std;

int main()
{

    ll n,m; cin>>n>>m;
    ll arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    ll n1,p; cin>>n1>>p;

     ll brr[n1][p];

    for(int i=0;i<n1;i++){
        for(int j=0;j<p;j++){
            cin>>brr[i][j];
        }
    }


    ll ans[n][p];

    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            ans[i][j]=0;
            for(int k=0;k<p;k++){
                ans[i][j]+=((arr[i][k])*(brr[k][j]));
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cout<<ans[i][j]<<" ";
        }cout<<nl;
    }cout<< nl;




	return 0;
}
