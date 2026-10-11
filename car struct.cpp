#include<iostream>
#include<string>

using namespace std;

 struct car
 {
     int id;
     string brand;
     string model;
     float price;
 };
int main()
{
    car car1,car2;
    cout<<"Enter details for car 1 :"<<endl;
    cout<<"Car Id : ";
    cin>>car1.id;
    cin.ignore();
    cout<<"Brand : ";
    getline(cin,car1.brand);
    cout<<"Model : ";
    getline(cin,car1.model);
    cout<<"Price : ";
    cin>>car1.price;
      cout<<"Enter details for car 2 :"<<endl;
    cout<<"Car Id : ";
    cin>>car2.id;
    cin.ignore();
    cout<<"Brand : ";
    getline(cin,car2.brand);
    cout<<"Model : ";
    getline(cin,car2.model);
    cout<<"Price : ";
    cin>>car2.price;
      cout<<"car 1 details given below : "<<endl;
       cout<<"Car id : "<<car1.id<<endl;

     cout<<"Brand name : "<<car1.brand<<endl;

     cout<<"Model name : "<<car1.model<<endl;

     cout<<"Price is : "<<car1.price<<endl;
       cout<<"Car 2 details given below : "<<endl;
       cout<<"Car id : "<<car2.id<<endl;

     cout<<"Brand name : "<<car2.brand<<endl;

     cout<<"Model name : "<<car2.model<<endl;

     cout<<"Price is : "<<car2.price<<endl;
}
