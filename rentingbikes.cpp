#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;
 
ll getBikes(ll r, ll *b, ll n, ll *p, ll m, ll a){
    int j=0;
    ll bikes=0;
    for(int i=n-r;i<n;i++){
        if(b[i]>=p[j]){
            bikes++;
            j++;
        }
        else if(b[i]+a>=p[j]){
            bikes++;
            a-=p[j]-b[i];
            j++;
        }
    }
    return bikes;
}
 
ll getMoney(ll r, ll *b, ll n, ll *p, ll m, ll a){
    ll price=0;
    ll j=0;
    for(int i=n-r;i<n;i++){
        if(b[i]>=p[j]){
            price+=p[j];
            j++;
        }
        else if(b[i]+a>=p[j]){
            price+=b[i];
            a-=p[j]-b[i];
            j++;
        }
    }
    return a>=price?0:price-a;
}
 
int main(int argc, char const *argv[]){
 
    ll n, m, a;
    cin>>n>>m>>a;
 
    ll b[n], p[m];
    for(ll i=0;i<n;i++)cin>>b[i];
    for(ll i=0;i<m;i++)cin>>p[i];
 
    sort(b, b+n); sort(p, p+m);
    ll low=0, high=min(n, m);
    ll ans=-1;
    while(low<=high){
        ll mid=(low+high)/2;
        ll res=getBikes(mid, b, n, p, m, a);
        if(res>=mid){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
    }  
 
    cout<<ans<<" "<<getMoney(ans, b, n, p, m, a);
 
    return 0;
}