
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll min_dist(ll a,ll k,vector<pair<ll,ll>> &vec){
    ll dist=1e18;
    for(int i=0;i<k;i++){
        dist=min(dist,abs(vec[a].first-vec[i].first)+abs(vec[a].second-vec[i].second));
    }
    return dist;
}
ll solve(){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i].first>>vec[i].second;
    }
    ll dist_maj_a=min_dist(a-1,k,vec);
    ll dist_maj_b=min_dist(b-1,k,vec);
    return min(dist_maj_a+dist_maj_b,abs(vec[a-1].first-vec[b-1].first)+abs(vec[a-1].second-vec[b-1].second));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   // cout<<"so start"<<"\n";
    int t;
    cin>>t;
    while(t--){
        //cout<<"t:"<<t<<"\n";
     cout<<solve()<<"\n";   
    }
    return 0;
}//g++ 2D_travelling_1869_B.cpp -o 2D_travelling_1869_B && ./2D_travelling_1869_B
