#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cout << "number of rows and columns: ";
    cin >> m >> n;
    cout << "number of non-zero elements: ";
    cin >> k;

    int sparseMatrix[k][3]; // Initialize a 2D array to store the non-zero elements

    cout << "non-zero elements (row, column, value): " << endl;
    for (int i = 0; i < k; i++) {
        cin >> sparseMatrix[i][0] >> sparseMatrix[i][1] >> sparseMatrix[i][2]; // Input the non-zero elements
    }

    cout << "Sparse Matrix:" << endl;
    int index = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (index < k && sparseMatrix[index][0] == i && sparseMatrix[index][1] == j) { // Check if the current element is non-zero
                cout << sparseMatrix[index][2] << " "; // Print the non-zero element's value
                index++;
            } else {
                cout << "0 "; // Print 0 for zero elements
            }
        }
        cout << endl; // Move to the next row
    }

    return 0;
}





