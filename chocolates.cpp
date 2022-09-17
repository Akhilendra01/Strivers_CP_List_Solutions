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
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    int sum=a[n-1];
	for(int i=n-2;i>=0;i--){
		a[i]=min(a[i], a[i+1]-1);
		if(a[i]==0)break;
		sum+=a[i];
	}
	cout<<sum<<endl;	
	return 0;
}