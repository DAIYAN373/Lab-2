#include <iostream>
using namespace std;

int main() {
    bool hasKey = true;
    bool hasPassword = false;

    if (hasKey && hasPassword) {
        cout << "Access granted!" << endl;
    } else if (hasKey || hasPassword) {
        cout << "Partial access granted." << endl;
    } else {
        cout << "Access denied!" << endl;
    }

    return 0;
}
