#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

ll apple_division(int idx, ll sumA, ll sumB, int size, const vector<ll>& vec)
{
    if (idx == size) return abs(sumA - sumB);
    ll choose = apple_division(idx + 1, sumA + vec[idx], sumB, size, vec);
    ll notChoose = apple_division(idx + 1, sumA, sumB + vec[idx], size, vec);
    return min(choose, notChoose);
}

int main() 
{
    optimize();

    int size;
    cin >> size;
    vector<ll> vec(size);
    for (ll &x : vec) cin >> x;
    cout << apple_division(0, 0, 0, size, vec) << endl;

    return 0;
}