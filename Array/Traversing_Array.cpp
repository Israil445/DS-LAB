#include<bits/stdc++.h>
#define ll long long
#define   PI        2*acos(0.0)
using namespace std;

int main()
{
	ll n;cin>>n;
	ll arr[n];double sinv[n];
	ll total(0);


	for(int i=0;i<n;i++){
		cin>>arr[i];
		double rad=(arr[i]*PI)/180;
		sinv[i]=sin(rad);
		total+=arr[i];
	}

	ll max=arr[0];ll min=arr[0];

	for(int i=1;i<n;i++){

		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}

	}


	double average=total/(float)n;

	cout<<"Maximum value is "<<max<<endl;
	cout<<"Minimum value is "<<min<<endl;
	cout<<"Total value is "<<total<<endl;
    cout<<"Average value is "<<average<<endl;
	printf("Sin value is :\n");
	for(int i=0;i<n;i++){
		cout<<sinv[i]<<" ";
	}cout<<endl;







	






	return 0;
}