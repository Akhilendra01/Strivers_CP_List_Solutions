#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;

bool isPossible(int diff, int c, vector<int> &v){
    int coordinate=v[0];
    c--;

    for(int i=0;i<v.size();i++){
        if(v[i]-coordinate>=diff){
            c--;
            coordinate=v[i];
        }
        if(c==0)return true;
    }
    return false;
}

int main(int argc, char const *argv[]){
/*code*/

    int t; cin>>t;
    while(t--){
        int n, c;
        cin>>n>>c;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(), v.end());
        
        int low=v[1]-v[0], high=v[n-1]-v[0];
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(mid, c, v)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}