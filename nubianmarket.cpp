#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;

ll totalCost(ll k, ll *a, ll n){
    ll prices[n];
    for(ll i=0;i<n;i++){
        prices[i]=a[i]+(i+1)*k;
    }
    sort(prices, prices+n);
    ll ans=0;
    for(ll i=0;i<k;i++)ans+=prices[i];
    return ans;
}

int main(int argc, char const *argv[]){
/*code*/

    ll n, s; cin>>n>>s;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];

    ll low=0, high=n;
    ll ans=-1;
    while(low<=high){
        ll mid= (low+high)/2;
        ll res=totalCost(mid, arr, n);
        if(res<=s){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
    }

    cout<<ans<<" "<<totalCost(ans, arr, n);

    return 0;
}