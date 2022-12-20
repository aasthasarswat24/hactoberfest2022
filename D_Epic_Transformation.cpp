#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define loop for(int i = 0; i < n; i++)
using namespace std;
 
int countDigit(long long n){
return floor(log10(n) + 1);
}
//-----------------------------------------------------------------------------
void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];         
    }
    map<int, int> m;
    loop{m[a[i]]++;}
    priority_queue<int> q;
    for(auto &it: m){
        q.push(it.second);
    }
    if(q.size() == 1){
        cout << q.top() << endl;
        // cout << 1 << endl;
        return;
    }
    if(m.size() == 2){
        m[0] = q.top(); q.pop();
        m[1] = q.top();
        cout << abs(m[0]-m[1]) << endl;
        // cout << n << " about 2 " << endl;
        return;
    }
    while(q.size() > 1){
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        // cout << x << " " << y << endl;
        if(x-1 > 0) q.push(x-1);
        if(y-1 > 0) q.push(y-1);
    }
    // cout << " the size " << q.size() << " ";
    if(q.size() == 0) cout << 0 << endl;
    else cout << q.top() << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
    // cout << t << " the t " << endl;
      solve();
   }
   return 0;
}