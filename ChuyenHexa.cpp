#include <bits/stdc++.h>
#define ll unsigned long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

ll n;
int t;
stack<ll>st;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> t;
  while(t--){
    cin >> n;
    if(n==0) {cout<<0<<'\n'; continue;}
    while(n!=0){
        ll x=n%16;
        st.push(x);
        n/=16;
    }
    while(!st.empty()){
        if(st.top()<10) cout<<st.top();
        else cout<<char(st.top()+'A'-10);
        st.pop();
    }
    cout<<'\n';
  }
}
