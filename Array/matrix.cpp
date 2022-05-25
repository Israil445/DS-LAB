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

     ll brr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }
    }

    //summ

    ll sum[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }

    cout<<"------sum-----"<<nl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<nl;
    }

    ll sub[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sub[i][j]=arr[i][j]-brr[i][j];
        }
    }

    cout<<"------sub-----"<<nl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<sub[i][j]<<" ";
        }
        cout<<nl;
    }













	return 0;
}
