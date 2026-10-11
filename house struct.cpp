#include<iostream>
#include<string>

using namespace std;

 struct address
 {
     int house_num;
     string streetname;
     string city;
 };
 int main()
 {
     address a1,a2;
      cout<<"Enter house details for a1 : " <<endl;
     cout<<"Enter house number : ";
     cin>>a1.house_num;
     cin.ignore();

     cout<<"Enter Street name : ";

  getline(cin,a1.streetname);
     cout<<"Enter City name : ";
    getline(cin,a1.city);

     cout<<"House  a1 details given below : "<<endl;
       cout<<"House number : "<<a1.house_num<<endl;

     cout<<"Street name : "<<a1.streetname<<endl;

     cout<<"City name : "<<a1.city<<endl;
     cout<<endl;
       cout<<"Enter house details for a2 : " <<endl;
     cout<<"Enter house number : ";
     cin>>a2.house_num;

     cout<<"Enter Street name : ";

 getline(cin,a2.streetname);
     cout<<"Enter City name : ";
      getline(cin,a1.city);


    cout<<"House a2 details given below : "<<endl;
       cout<<"House number : "<<a2.house_num<<endl;

     cout<<"Street name : "<<a2.streetname<<endl;

     cout<<"City name : "<<a2.city<<endl;

     return 0;



 }
