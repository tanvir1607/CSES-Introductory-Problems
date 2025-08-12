#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int size;
    cin >> size;
    vector<ll> vec(size);
    for (ll &x : vec) cin >> x;

    ll ans = 0, maxNum = vec.front();
    for (ll x : vec) maxNum = max(maxNum, x), ans += maxNum - x;
    cout << ans << endl;

    return 0;
}