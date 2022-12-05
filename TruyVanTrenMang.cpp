#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	multiset<int> ms;
	int n;
	cin >> n;
	for ( int i =0; i<n;i++){
		int x;
		cin>>x;
		ms.insert(x);
	}
	int a;
	cin>>a;
	while(a--){
		int x,y;
		cin>>x>>y;
		if(x==1){
			ms.insert(y);
		}
		else if(x==2){
			auto it=ms.find(y);
			if(it!=ms.end()){
				ms.erase(it);
			}
		}
		else{
			if(ms.find(y) != ms.end()){
				cout << "YES\n";
			}
			else cout << "NO\n";
		}
	}
}
