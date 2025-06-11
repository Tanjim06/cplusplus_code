#include <iostream>
#include <string>
#include <set>
using namespace std;

bool canMeetRedQueen(int a, int b, const string& moves) {
    int x = 0, y = 0;  // Alice's starting position
    int dx = 0, dy = 0;  // Net displacement after one full cycle of moves
    set<pair<int, int>> visited_positions;

    // Traverse through each move in the sequence
    for (char move : moves) {
        // Track current position in one cycle
        visited_positions.insert({x, y});

        // Move Alice according to the character in the sequence
        if (move == 'N') y++;
        else if (move == 'E') x++;
        else if (move == 'S') y--;
        else if (move == 'W') x--;

        // Check if the current position matches the Red Queen's position
        if (x == a && y == b) {
            return true;
        }
    }

    // Calculate net displacement after one full cycle of moves
    dx = x;
    dy = y;

    // If the net displacement is zero, check if (a, b) is reached within one cycle
    if (dx == 0 && dy == 0) {
        // Check only within one cycle since Alice will loop indefinitely
        return visited_positions.count({a, b}) > 0;
    }

    // If the net displacement is non-zero, check positions across multiple cycles
    x = 0;
    y = 0;
    for (int cycle = 0; cycle < 500; ++cycle) { // Limit to avoid infinite loops
        // Check all visited positions in this cycle
        for (const auto& pos : visited_positions) {
            int new_x = x + pos.first;
            int new_y = y + pos.second;
            if (new_x == a && new_y == b) {
                return true;
            }
        }
        // Move to the next cycle's starting position
        x += dx;
        y += dy;
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        string s;

        // Read input values
        cin >> n >> a >> b;
        cin >> s;

        // Check if Alice can meet the Red Queen
        if (canMeetRedQueen(a, b, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
