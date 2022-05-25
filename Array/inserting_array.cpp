#include<bits/stdc++.h>
#define ll long long
#define   PI        2*acos(0.0)
#define nl "\n"
using namespace std;

int main()
{


	ll n; cin>>n;
	ll arr[n+1];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	sort(arr,arr+n);
	ll num=54;
	ll indx=0;

	for(int i=0;i<n;i++){
		if(num<arr[i]){
			indx=i;break;
		}
	}

	for(int i=n;i>indx;i--){
		arr[i]=arr[i-1];
	}

	arr[indx]=num;


	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}cout<<nl;







	return 0;
}
