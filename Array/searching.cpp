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



    int num=72;

    int low=0,high=n-1;
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==num){
            cout<<"Found At Position "<<mid+1<<nl;
            return 0;
        }
        else if(num>arr[mid]){
            low=mid+1;
        }

        else high=mid-1;
    }

    cout<<"NOT FOUND THAT VALUE"<<nl;





	return 0;
}
