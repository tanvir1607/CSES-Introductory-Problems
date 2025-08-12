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
    vector<int> vec(size);
    map<int, bool> Map;
    for (int &x : vec) cin >> x, Map[x] = true;

    for (int i = 1; i <= size; i++)
    {
        if (!Map[i])
        {
            cout << i << endl;
            return 0;
        }

    }

    return 0;
}