#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
typedef vector<int> vi;
#define int long long
#define all(x) x.begin(), x.end()
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define endl "\n"
#define pb push_back
#define mp make_pair
#define re(i, n) for (int i = 0; i < (n); i++)
#define re1(i, k, n) for (int i = k; k < n ? i <= n : i >= n; k < n ? i += 1 : i -= 1)
#define FORD(i, a, b) for (int i = (a); i >= (b); i--)
typedef pair<int, int> pii;
typedef priority_queue<pii, vector<pii>, greater<pii>> minpq;
typedef priority_queue<pii> maxpq;
const int mod = 1000000007;

int32_t main()
{
    FIO;
    int n, k;
    cin >> n >> k;
    vi a(n);
    re(i, n)
    {
        cin >> a[i];
    }
    re(i, k)
    {
        int x;
        cin >> x;
        int r = n;  // a[r]>x;
        int l = -1; // a[l]<=x
        while (l + 1 < r)
        {
            int m = (l + r) / 2;
            if (a[m] <= x)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        cout << l + 1 << endl;
    }
}
