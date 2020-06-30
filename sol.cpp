#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	char a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int g = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 'B' && a[i+1] != 'B') g++;
	}
	cout << g << "\n";
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 'B'){
			cnt++;
		} else{
			if(cnt == 0) continue;
			else{
				cout << cnt << " ";
				cnt = 0;
			}
		}
		if(i == n - 1){
			if(cnt != 0) cout << cnt;
		}
	}
	cout << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	solve();
	return 0;
}