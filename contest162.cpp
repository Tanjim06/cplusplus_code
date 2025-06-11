#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

struct Edge {
    int to;
    int weight;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> b(n + 1);  // batteries at each checkpoint
        for (int i = 1; i <= n; ++i)
            cin >> b[i];

        vector<vector<Edge>> graph(n + 1);
        for (int i = 0; i < m; ++i) {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
        }

        const int INF = numeric_limits<int>::max();
        vector<int> dist(n + 1, INF);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        dist[1] = 0;
        pq.push({0, 1});

        while (!pq.empty()) {
            auto [batt, u] = pq.top(); pq.pop();
            if (batt > dist[u]) continue;

            int new_batt = batt + b[u];

            for (auto& edge : graph[u]) {
                if (new_batt >= edge.weight) {
                    if (new_batt < dist[edge.to]) {
                        dist[edge.to] = new_batt;
                        pq.push({new_batt, edge.to});
                    }
                }
            }
        }

        if (dist[n] == INF)
            cout << -1 << '\n';
        else
            cout << dist[n] << '\n';
    }

    return 0;
}
