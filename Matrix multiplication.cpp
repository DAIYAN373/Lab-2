
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of square matrix (n): ";
    cin >> n;

    int A[n][n], B[n][n], C[n][n];

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> B[i][j];
        }
    }

    // Initialize Result Matrix C with 0
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = 0;
        }
    }

    // Matrix Multiplication
    // C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ... + A[i][n-1]*B[n-1][j]
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output Result Matrix
    cout << "Result Matrix (A × B):\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
