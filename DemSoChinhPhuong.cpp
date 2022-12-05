#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	short t, L;
    long R;
	cin >> t;
	while(t --)
    {
	    cin >> L >> R;
        short a = sqrt(L); 
	    int b = sqrt(R);
	    int dem = b - a; 
	    if(a * a == L) 
        {
            cout << dem + 1 << "\n";
        }
        if(a * a != L) 
        {
            cout << dem << "\n";
        }
	}
}
