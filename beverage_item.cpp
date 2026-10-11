//question no.2 answer
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout<<"Welcome,Please select a beverage item : "<<endl;
    cout<<"1.Coffee-$2.50"<<endl;
    cout<<"2.Tea-$1.50"<<endl;
    cout<<"3.soda-$1.75"<<endl;
    cout<<"4.water-$1.00"<<endl;
    int choice,quantity;
    double price=0,total;
    cout<<"Enter your choice(1-4): ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        price =2.50;
        cout<<"Selected coffee"<<endl;
        break;
    case 2:
        price =1.50;
        cout<<"Selected tea"<<endl;
        break;
    case 3:
        price = 1.75;
        cout<<"Selected soda"<<endl;
        break;
    case 4:
        price = 1;
        cout<<"Selected water"<<endl;
        break;
    default :
        cout<<"Invalid selection.Please try again.";
        getch();

    }

    cout<<"Enter quantity : ";
    cin>>quantity;
     total = price*quantity;
     cout<<"The total price is :$ "<<(int)total<<endl;
     getch();


}
