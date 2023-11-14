#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> table(n, vector<int>(m));
  
    for (int i = 0; i < n * m; ++i) {
        int row = i / m;
        int col = i % m;
        table[row][col] = row * col;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
