//9no.
#include<iostream>

using namespace std;
int main()
{
    int choice;
    double temp,converted_temp;

    cout<<"Choose an option: "<<endl;
    cout<<"1.Convert Celsius to Farenheit"<<endl;
    cout<<"2.Convert Fahrenheit to Celsius"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<"Enter temperature in Celcius: ";
        cin>>temp;
        converted_temp=(temp*9/5)+32;
        cout<<"Temperature in Fahrenheit: "<<converted_temp;
        break;

    case 2:
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temp;
        converted_temp = (temp-32)*5/9;
        cout<<"Temperature in Celsius : "<<converted_temp;
        break;
    default :
        cout<<"Invalid choice"<<endl;
    }
    return 0;
}
