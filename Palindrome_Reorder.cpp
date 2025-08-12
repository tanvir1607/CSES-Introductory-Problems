#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    string str, ans;
    cin >> str;

    map<char, int> freq;
    for (char ch : str) freq[ch]++;
    char oddChar = '\0';
    int oddCount = 0;
    for (auto [key, val] : freq)
    {
        if (val % 2) oddChar = key, oddCount++;
        else ans += string(val / 2, key);
    }
    if (oddCount > 1) cout << "NO SOLUTION" << endl;
    else 
    {
        ans += string(freq[oddChar], oddChar) + string(ans.rbegin(), ans.rend());
        cout << ans << endl;
    }

    return 0;
}
