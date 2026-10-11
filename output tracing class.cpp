#include<iostream>

using namespace std;

int globalVar =0;
class Test {
private :
    int localVar;
public :
    static int staticVar;
    Tesr(){};
    Test (int Val)
    {
        localVar =Val;
    }
    void increamentVarriables()
    {
        globalVar++;
        staticVar++;
        localVar++;
    }
    void displayVarriables()
    {
        cout<<"Global varriable : "<<globalVar;
        cout<<", Static varriable : "<<staticVar;
        cout<<" , Local varriable : "<<localVar<<endl;

    }
};
int Test::staticVar=10;
int main()
{
    Test obj1(30);
    Test obj2(20);
    obj1.increamentVarriables();
    obj1.displayVarriables();
    obj2.increamentVarriables();
    obj2.displayVarriables();
      obj1.increamentVarriables();
    obj1.displayVarriables();
    obj2.increamentVarriables();
    obj2.displayVarriables();
    Test obj3(20);
     obj3.increamentVarriables();
    obj3.displayVarriables();

}
