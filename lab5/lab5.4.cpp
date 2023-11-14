#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> triangle(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == 0 || j == 0) {
                triangle[i][j] = 1;
            }
            else {
                triangle[i][j] = triangle[i - 1][j] + triangle[i][j - 1];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
