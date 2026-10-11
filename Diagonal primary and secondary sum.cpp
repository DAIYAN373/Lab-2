#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int arr[n][n];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int primarySum = 0;      // Primary diagonal sum
    int secondarySum = 0;    // Secondary diagonal sum

    for(int i = 0; i < n; i++){
        primarySum += arr[i][i];        // primary diagonal

        secondarySum += arr[i][n - 1 - i];   // secondary diagonal
    }

    cout << "Primary diagonal sum = " << primarySum << endl;
    cout << "Secondary diagonal sum = " << secondarySum << endl;

    return 0;
}
