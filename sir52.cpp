#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid matrix size." << endl;
        return 1;
    }

    int matrix[n][n];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sumDiagonal = 0;

    for (int i = 0; i < n; i++) {
        sumDiagonal += matrix[i][i]; // Sum of the main diagonal (top-left to bottom-right)
        sumDiagonal += matrix[i][n - 1 - i]; // Sum of the other diagonal (top-right to bottom-left)
    }

    if (n % 2 == 1) {
        // If n is odd, subtract the center element from the sum to avoid double counting
        sumDiagonal -= matrix[n / 2][n / 2];
    }

    cout << "Sum of diagonal elements: " << sumDiagonal << endl;
5
    return 0;
}
