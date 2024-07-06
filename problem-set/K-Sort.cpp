#include "bits/stdc++.h"

using namespace std;

#define s second
#define f first
#define pb push_back

typedef long long ll;

typedef pair<int, int> pii;
typedef vector<pii> vpii;

typedef vector<int> vi;

#define FOR(i, a, b) for (int i = (a); i<b; i++)

bool ckmin(int& a, int b){ return b < a ? a = b, true : false; }

bool ckmax(int& a, int b){ return b > a ? a = b, true : false; }

#define int long long


signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int mx = 0;
		int res = 0;
		int prv = 0;
		FOR(i, 0, n) {
			int x;
			cin >> x;
			if (x < prv) {
				res += prv-x;
				mx = max(mx, prv-x);
				x = prv;
			}

			prv = x;
		}

		res += mx;
		cout << res << endl;
	}
    return 0;
}