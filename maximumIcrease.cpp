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

	int cnt=0, curCnt=1;
	for(int i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){
			cnt=max(cnt, curCnt);
			curCnt=1;
		}
		else{
			curCnt++;
		}
	}
	cnt=max(cnt, curCnt);
	cout<<cnt<<endl;
	
	return 0;
}