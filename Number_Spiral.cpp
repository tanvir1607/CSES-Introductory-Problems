#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        ll row, col;
        cin >> row >> col;

        ll L_num = max(row, col), ans = L_num * L_num;
        if (L_num & 1) ans -= row - 1, ans -= L_num - col;
        else ans -= col - 1, ans -= L_num - row;
        cout << ans << endl;
    }

    return 0;
}