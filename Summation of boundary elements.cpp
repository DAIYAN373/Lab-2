
#include <iostream>          // ইনপুট-আউটপুট ব্যবহারের জন্য
using namespace std;

int main() {
    int r, c;                // রো এবং কলামের জন্য ভ্যারিয়েবল
    cout << "Enter rows and columns: ";
    cin >> r >> c;           // ইউজার থেকে রো ও কলাম ইনপুট নেওয়া

    int arr[r][c];           // r × c সাইজের 2D array বানানো (VLA)

    cout << "Enter elements:\n";
    for(int i = 0; i < r; i++){          // সব রো নেওয়া
        for(int j = 0; j < c; j++){      // সব কলাম নেওয়া
            cin >> arr[i][j];            // ইনপুট নেওয়া array তে
        }
    }

    int sum = 0;              // boundary sum রাখার জন্য variable

    // boundary চেক করার নিয়ম শুরু
    for(int i = 0; i < r; i++){                // সব রো ভিজিট
        for(int j = 0; j < c; j++){            // সব কলাম ভিজিট

            // boundary মানে outer frame
            // তাই আমরা চেক করি:
            // i == 0         → উপরের row
            // i == r-1       → শেষ row
            // j == 0         → বাম column
            // j == c-1       → ডান column
            if(i == 0 || i == r-1 || j == 0 || j == c-1) {
                sum += arr[i][j];             // boundary হলে যোগ করা
            }
        }
    }

    cout << "Boundary Sum = " << sum;   // ফল দেখানো
    return 0;
}
