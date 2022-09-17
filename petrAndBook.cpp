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
	int a[7];
	for(int i=0;i<7;i++)cin>>a[i];
	int sum=0;
	for(int i=0;i<7;i++)sum+=a[i];
	int leftPages=n%sum;
	if(leftPages==0){
		int i=6;
		while(a[i]==0)i--;
		cout<<i+1<<endl;
		return 0;
	}
	int i=0;
	while(leftPages>0){
		leftPages-=a[i];
		i++;
	}
	cout<<i<<endl;
	
	return 0;
}