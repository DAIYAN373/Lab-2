////11no.
#include<iostream>

using namespace std;

int main()
{
    double num,result;
    cout<<"Enter a number : ";
    cin>>num;
    int converted_num = (int)num;
    result = converted_num +10;

    cout<<"Converted to integer : "<<converted_num<<endl;

    cout<<"Result after perform a arithmatic operation(+) : "<<result<<endl;
    return 0;
}
