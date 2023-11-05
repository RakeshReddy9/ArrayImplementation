#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cout << "number of rows and columns: ";
    cin >> m >> n;
    cout << "number of non-zero elements: ";
    cin >> k;

    int sparseMatrix[k][3];

    cout << "non-zero elements (row, column, value): " << endl;
    for (int i = 0; i < k; i++) {
        cin >> sparseMatrix[i][0] >> sparseMatrix[i][1] >> sparseMatrix[i][2];
    }

    cout << "Sparse Matrix:" << endl;
    int index = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (index < k && sparseMatrix[index][0] == i && sparseMatrix[index][1] == j) {
                cout << sparseMatrix[index][2] << " ";
                index++;
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}





