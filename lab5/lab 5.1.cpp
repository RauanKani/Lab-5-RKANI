#include <iostream>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == n - i - 1) {
                matrix[i][j] = 1;
            }
            else if (j > n - i - 1) {
                matrix[i][j] = 2;
            }
            else {
                matrix[i][j] = 0;
            }
        }
    }

    printMatrix(matrix);

    return 0;
}
