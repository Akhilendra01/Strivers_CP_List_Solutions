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

	int n, m; cin>>n>>m;
	if(m%n){
		cout<<-1<<endl;
		return 0;
	}
	m/=n;
	int cnt=0;
	while(m%2==0)m/=2, cnt++;
	while(m%3==0)m/=3, cnt++;
	if(m==1)cout<<cnt<<endl;
	else cout<<-1<<endl;
	
	return 0;
}