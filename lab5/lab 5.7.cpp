#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = i % 2 == 0 ? i * m + j : i * m + (m - 1 - j);
        }
    }

    for (const auto& row : matrix) {
        for (int val : row) {
            cout.width(3);
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
