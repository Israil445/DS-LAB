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
#define   ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

using namespace __gnu_pbds;
using namespace std;

struct node{
    int data;
    struct node *link;
};

void print(struct node *ptr)
{

    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;

    }

}

struct node *add_at_end(struct node *ptr,int data)
{
    struct node *temp=(struct node *) malloc(sizeof(struct node));//2000;
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;
    return temp;


}
void solve()
{

    struct node *head=(struct node*) malloc(sizeof(struct node));//1000
    head->data=45;
    head->link=NULL;

    struct node *ptr=head;//1000;

    ptr=add_at_end(ptr,98);
    ptr=add_at_end(ptr,3);
    ptr= add_at_end(ptr,20);

    print(head);


}


int main()
{

    solve();


    return 0;
}
