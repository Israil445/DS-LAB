//Bismillah Hir Rehmanir Rahim
//Allah knows best
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma  GCC optimize ("O3")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define   ll        long long
#define   lli       long long int
#define   ld        long double
#define   lll       __int128
#define   PI        2*acos(0.0)
#define   pb        push_back
#define   ppb       pop_back
#define   pf        push_front
#define   ppf       pop_front
#define   inf       1e18
#define   mod       100000007
#define   ff        first
#define   ss        second
#define   mp        make_pair
#define   vi        vector<int>
#define   si        set<int>
#define   ii        pair<int,int>
#define   all(v)    (v).begin(),(v).end()
#define   rall(v)   (v).begin(),(v).end(),greater<ll>()
#define   rall1(v)  (v).rbegin(),(v).rend()
#define   uniq(v)   (v).erase(unique(all(v)),(v).end())
#define   read(v)   for(auto &it:v) cin>>it
#define   write(v)  for(auto &it:v) cout<<it<<" "
#define   GCD(a,b)   __gcd(a,b)
#define   nl         "\n"
#define   lb         lower_bound
#define   up         upper_bound
#define   loop(i,a,b) for(int i=a;i<=b;i++)
#define   setbits(x)  __builtin_popcountll(x)
#define   zrbits(x)   __builtin_ctzll(x)
#define   ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

using namespace __gnu_pbds;
using namespace std;

void solve()
{
    queue<int>q;
     //pushing data using push function

     q.push(1);
     q.push(2);
     q.push(20);
     q.push(30);
     q.emplace(40);//implace function also used for pushing data

     cout<<q.size()<<nl;//size() function return the size of queue

     cout<<q.front()<<nl;//it's return front element of queue

     cout<<q.back()<<nl;//it's return end element of the queue

     cout<<q.empty()<<nl;//it's return 1 if queue is empty else return 0

     

     //printting data

     while(!q.empty()){
         cout<<q.front()<<" ";
         q.pop();//
     }



     
  


}

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(0),cout.tie(0);

//     #ifndef ONLINE_JUDGE
//      freopen("input.txt", "r", stdin);
//      freopen("output.txt", "w", stdout);
//    #endif

 
//    ll t; cin>>t;
//    while(t--)
//    {
    solve();

//    }


   return 0;
}