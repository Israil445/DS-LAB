#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char rod_first,char rod_mid,char rod_last ){
    if(n==0) return;
    towerOfHanoi(n-1,rod_first,rod_last,rod_mid);
    cout<<"Move disk "<<n<<" "<<rod_first<<"->"<<rod_last<<endl;
    towerOfHanoi(n-1,rod_mid,rod_first,rod_last);

}

int main()
{
    int n ; cin>>n ;// Number of disks
    towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
    

    return 0;
}