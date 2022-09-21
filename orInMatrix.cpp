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

    int n, m;	cin>>n>>m;

	int a[n][m];
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];

	int rowHash[n];
	int colHash[m];

	for(int i=0;i<n;i++)rowHash[i]=1;
	for(int i=0;i<m;i++)colHash[i]=1;

	for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(a[i][j]==0)rowHash[i]=0, colHash[j]=0;

	bool allRow0=true;
	for(int i=0;i<n;i++)if(rowHash[i]!=0){allRow0=false; break;}
	bool allCol0=true;
	for(int i=0;i<m;i++)if(colHash[i]!=0){allCol0=false; break;}

	if(allRow0^allCol0){cout<<"NO\n"; return 0;}

	int b[n][m];
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)
		if(rowHash[i]==0 or colHash[j]==0)b[i][j]=0;	else b[i][j]=1;

	int c[n][m];
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)
		if(rowHash[i]==0 and colHash[j]==0)c[i][j]=0;	else c[i][j]=1;

	bool ok=true;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(a[i][j]!=c[i][j]){ok=false; break;}
	
	if(!ok){cout<<"NO\n";	return 0;}
	cout<<"YES\n";
	for(int i=0;i<n;i++){for(int j=0;j<m;j++)cout<<b[i][j]<<" "; cout<<endl;}
	
	return 0;
}