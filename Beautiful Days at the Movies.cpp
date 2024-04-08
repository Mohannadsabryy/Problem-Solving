#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

bool isBeatiful(string s1, int k)
{
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    int num1 = stoi(s1);
    int num2 = stoi(s2);
    return abs(num1 - num2) % k == 0;
}

void solve()
{
    int i, j, k;
    cin >> i >> j >> k;
    int ans = 0;
    while (i <= j)
    {
        string s = to_string(i);
        ans += isBeatiful(s, k);
        i++;
    }
    cout << ans;
    return;
}

int main()
{
    IO
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
