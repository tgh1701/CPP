#include<bits/stdc++.h>
using namespace std;
int soDoiXung(short n)
{
	return (9 * pow(10, (n - 1) / 2));
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	short t, n; 
	cin >> t;
	while(t --)
	{ 
		cin >> n;
		cout << soDoiXung(n) << "\n";
	}
}
