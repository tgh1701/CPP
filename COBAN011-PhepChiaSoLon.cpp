#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void modBigNumber(string num, ll m)
{

	vector<int> vec;
	ll mod = 0;


	for (int i = 0; i < num.size(); i++) {
		
		int digit = num[i] - '0';

		mod = mod * 10 + digit;
		int quo = mod / m;
		vec.push_back(quo);

		mod = mod % m;	
	}

	bool zeroflag = 0;
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == 0 && zeroflag == 0)
			continue;
		zeroflag = 1;
		cout << vec[i];
	}
    cout << " " << mod << endl;
	return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        ll m;
        cin >> num >> m;
        modBigNumber(num, m);
    }
	return 0;
}
