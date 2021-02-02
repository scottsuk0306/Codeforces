#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

bool is_prime(ll n){
	if(n<2){
		return false;
	}
	for (ll i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

bool is_twoexp(ll n){
	bool flag = true;
	while(n!=1){
		if(n%2==1){
			flag = false;
			break;
		}
		n/=2;
	}
	return flag;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(!is_twoexp(n)){
			cout << "YES" << endl;
		}
		else cout <<"NO" << endl;
	}
}

