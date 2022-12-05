#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	int alpha = 0, digit = 0, special = 0;
	for(char x : s){
		if(isalpha(x)){
			++alpha;
		}
		else if(isdigit(x)) ++digit;
		else ++special;
	}
	cout << alpha << " " << digit << " " << special << endl;
}
