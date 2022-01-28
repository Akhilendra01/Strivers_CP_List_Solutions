#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;

int main(int argc, char const *argv[]){
/*code*/

    ll n, q; cin>>n>>q;
    ll a[n], k[q];

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<q;i++)cin>>k[i];

    ll sum[n]; sum[0]=a[0];
    for(ll i=1;i<n;i++)sum[i]= sum[i-1]+a[i];

    ll arrows=0;

    for(ll i=0;i<q;i++){

        arrows+=k[i];

        ll *ptr=lower_bound(sum, sum+n, arrows);
        if(*ptr-arrows==0)ptr++;
        ll ans=sum+n-ptr;
        if(ans<=0){
            arrows=0;
            cout<<n<<"\n";
        }
        else{
            cout<<ans<<'\n';
        }
    }
    return 0;
}