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
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)cin>>a[i][j];
	}
	

	int cnt=0;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(a[i][j]==1)cnt++;


	vector<int> rowHash(n, 1), colHash(m, 1);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==0){
				rowHash[i]=0;
				colHash[j]=0;
			}
		}
	}

	for(int i=0;i<n;i++)cout<<rowHash[i]<<" "; cout<<endl;

	vector<vector<int>> b(n, vector<int>(m, 1));
	for(int i=0;i<n;i++){
		if(rowHash[i]==0){
			for(int I=0;I<m;I++)b[i][I]=0;
				continue;
		}
		for(int j=0;j<m;j++){
			if(colHash[j]==0){
				b[i][j]=0;
			}
		}
	}

	// vector<vector<int>> c(n, vector<int> (m, 0));
	int c[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(rowHash[i]==1 or colHash[j]==1)c[i][j]==1;
			else c[i][j]=0;
		}
	}

	bool ok=true;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(a[i][j]!=c[i][j]){ok=false; break;}

	if(!ok){
		cout<<"NO\n";
		// return 0;
	}
	cout<<"YES\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}

	
	return 0;
}