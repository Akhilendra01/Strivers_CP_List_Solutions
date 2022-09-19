#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

	int n; cin>>n;
	int a[n], b[n];
	for(int i=0;i<n;i++)cin>>a[i];

	int sum=0;
	for(int i=0;i<n;i++){
		b[i]=a[i]/2;
		sum+=b[i];
	}
	// cout<<sum<<endl;
	if(sum<0){
		int i=0;
		while(sum!=0 and i<n){
			if(a[i]%2 and a[i]>=0){
				b[i]++;
				sum++;
			}
			i++;
		}
	}
	else if(sum>0){
		int i=0;
		while(sum!=0 and i<n){
			if(a[i]%2 and a[i]<=0){
				b[i]--;
				sum--;
			}
			i++;
		}
	}
	for(int i=0;i<n;i++)cout<<b[i]<<endl;
	return 0;
} 