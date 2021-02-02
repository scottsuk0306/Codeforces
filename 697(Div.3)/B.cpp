#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

bool solve(int n){
	if(n<2020){
		return false;
	}
	int rem = n%2020;
	if(rem > n/2020){
		return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin >> t;
	// cout << t%2020;
	while(t--){
		int n;
		cin >> n;
		if(solve(n)){
			cout << "YES" << endl;
		}
		else cout <<"NO" << endl;
	}
}

