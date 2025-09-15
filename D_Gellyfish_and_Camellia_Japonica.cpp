#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,q; cin >> n >> q;
        vector<int> b(n+1);
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<array<int,3>> mods(q);
        for (int i = 0; i < q; i++) {
            int x,y,z; cin >> x >> y >> z;
            mods[i] = {x,y,z};
        }

        bool valid = true;
        for (auto& [x,y,z] : mods) {
            if (b[z] != min(b[x], b[y])) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << -1 << "\n";
            continue;
        }

        // Build graph z->x and z->y
        vector<vector<int>> g(n+1);
        for (auto& [x,y,z] : mods) {
            g[z].push_back(x);
            g[z].push_back(y);
        }

        vector<int> a = b;
        queue<int> qnodes;
        vector<bool> inQueue(n+1,false);
        for (int i = 1; i <= n; i++) {
            qnodes.push(i);
            inQueue[i] = true;
        }

        while (!qnodes.empty()) {
            int u = qnodes.front(); qnodes.pop();
            inQueue[u] = false;
            for (int nxt : g[u]) {
                if (a[nxt] < a[u]) {
                    a[nxt] = a[u];
                    if (!inQueue[nxt]) {
                        qnodes.push(nxt);
                        inQueue[nxt] = true;
                    }
                }
            }
        }

        for (int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}
