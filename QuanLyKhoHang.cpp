#include<bits/stdc++.h>
using namespace std;

using ll = long long;

struct MH{
	string ma, ten, hang, donvi;
	int nhap, ban;
};

string solve(string s){
	string res = " ";
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		res += toupper(tmp[0]);
	}
	return res;
}
bool cmp(MH a, MH b){
	int ln1 = a.ban - a.nhap, ln2 = b.ban - b.nhap;
	if(ln1 != ln2)
	return ln1>ln2;
	else
	return a.ma<b.ma;
}
int main(){
	int n;
	cin >> n;
	vector<MH> v;
	map<string, int> mp;
	for(int i = 0; i < n; i++){
		cin.ignore();
		string ten;
		getline(cin, ten);
		string hang;
		getline(cin, hang);
		string donvi;
		getline(cin, donvi);
		int nhap, ban;
		cin >> nhap >> ban;
		// Cap ma mat hang
		string ma = solve(ten);
		mp[ma]++;
		string tmp = to_string(mp[ma]);
		while(tmp.size()<4) tmp="0"+tmp;
		ma=ma+tmp;
		MH x{ma, ten, hang, donvi, nhap, ban};
		v.push_back(x);
		
	}
	sort(v.begin(), v.end(), cmp);
	for(auto it:v){
		cout << it.ma << ' ' << it.ten << ' ' << it.hang << ' ' << it.donvi << ' '<< it.nhap << ' ' << it.ban << endl;
	}
}
