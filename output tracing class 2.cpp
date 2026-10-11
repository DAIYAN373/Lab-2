#include <iostream>
using namespace std;

int globalVar = 0;

class Test {
private:
    int localVar;         // Current value of the variable
    int initialLocalVar;  // To store the initial value
public:
    static int staticVar;

    Test() {} // Default constructor
    Test(int val) {
        localVar = val;
        initialLocalVar = val; // Store the initial value
    }

    void incrementVariables() {
        globalVar++;
        staticVar++;
        localVar = initialLocalVar; // Reset to the initial value
        localVar++;                // Increment after resetting
    }

    void displayVariables() {
        cout << "Global variable: " << globalVar;
        cout << ", Static variable: " << staticVar;
        cout << ", Local variable: " << localVar << endl;
    }
};

int Test::staticVar = 10; // Initialize static variable

int main() {
    Test obj1(30);
    Test obj2(20);

    obj1.incrementVariables();
    obj1.displayVariables();

    obj2.incrementVariables();
    obj2.displayVariables();

    obj1.incrementVariables();
    obj1.displayVariables();

    obj2.incrementVariables();
    obj2.displayVariables();

    Test obj3(25);
    obj3.incrementVariables();
    obj3.displayVariables();

    return 0;
}

