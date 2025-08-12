#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    string str;
    cin >> str;

    int count = 1, ans = 1, size = str.size();
    for (int i = 1; i < size; i++)
    {
        if (str[i] == str[i - 1]) count++;
        else count = 1;
        ans = max(ans, count);
    }
    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    string str;
    cin >> str;

    int size = str.size(), ans = 1;
    for (int left = 0, right = 1; right < size; right++)
    {
        if (str[left] == str[right]) ans = max(ans, right - left + 1);
        else left = right;
    }
    cout << ans << endl;

    return 0;
}