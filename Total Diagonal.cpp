
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;                         // square matrix মানে n × n

    int arr[n][n];                    // n × n array

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];         // ইনপুট নেওয়া
        }
    }

    int sum = 0;                      // diagonal sum

    for(int i = 0; i < n; i++){
        sum += arr[i][i];             // primary diagonal → (0,0) (1,1)...

        // secondary diagonal → (0,n-1) (1,n-2) ...
        // কিন্তু যদি matrix এর মাঝে একই ঘর হয়
        // তাহলে একই মান দুবার যোগ না করার জন্য condition
        if(i != n - 1 - i)
            sum += arr[i][n - 1 - i]; // secondary diagonal যোগ
    }

    cout << "Diagonal Sum = " << sum;
    return 0;
}
