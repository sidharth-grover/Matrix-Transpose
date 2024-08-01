#include <iostream>
#include <vector>

using namespace std;

// Function to read a matrix from the user
vector<vector<int>> readMatrix(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix row by row:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

// Function to transpose a matrix
vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix, int rows, int cols) {
    vector<vector<int>> transposed(cols, vector<int>(rows));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

// Function to print a matrix
void printMatrix(const vector<vector<int>>& matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix = readMatrix(rows, cols);
    vector<vector<int>> transposed = transposeMatrix(matrix, rows, cols);

    cout << "Transposed matrix:" << endl;
    printMatrix(transposed, cols, rows);

    return 0;
}
