#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int squaredDistance(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
        cin>>l>>r>>d>>u;
        vector<pair<int, int>> points = {
            {-l, 0}, {r, 0}, {0, -d}, {0, u}
        };
        vector<int> distances;
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                distances.push_back(squaredDistance(
                    points[i].first, points[i].second, points[j].first, points[j].second
                ));
            }
        }
        sort(distances.begin(), distances.end());
        if (distances[0] > 0 &&
            distances[0] == distances[1] &&
            distances[1] == distances[2] &&
            distances[2] == distances[3] &&
            distances[4] == distances[5] &&
            distances[4] == 2 * distances[0]) {
            cout<<"Yes\n";
        } else {
            cout <<"No\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
