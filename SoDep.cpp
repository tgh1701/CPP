#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll n){
	if(n < 0 ) n *= -1;
	string s = to_string(n);
	for(int i = 0; i < s.size(); i++){
		if((i + 1) % 2 != (s[i] - '0')%2){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		ll n; 
		cin >> n;
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
}
