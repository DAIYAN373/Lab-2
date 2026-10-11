#include<iostream>
#include<string>

using namespace std;
struct Room
{
    int roomNumber;
    string roomType;
    double pricePerNight;
    bool isAvailable;
    void setDetails(int number,string type,double price,bool available)
    {
        roomNumber = number;
        roomType = type;
        pricePerNight = price;
        isAvailable = available;
    }
    void displayDetails()
    {
        cout<<"Room Number : " <<roomNumber<<endl;
        cout<<"Room Type : "<<roomType<<endl;
        cout<<"Price per Night : "<<pricePerNight<<endl;
        if(isAvailable)
        {
            cout<<"Availability : Available"<<endl;
        }
        else
        {
            cout<<"Availability : Not Available "<<endl;
        }
    }
    void bookRoom(int nights)
    {
        if(isAvailable)
        {
            double total_cost = pricePerNight * nights;


    cout<<"Room booked for "<<nights<< " nights"<<endl;
    cout<<"Total Cost : "<<total_cost<<endl;
isAvailable = false;//room is no longer available after booking
        }

    else
    {
        cout<<"Room is already booked! "<<endl;
    }
    }
};
int main()
{
    Room room1;
    room1.setDetails(105,"Single bedroom",2500,true);
    room1.displayDetails();

    room1.bookRoom(3);
    room1.displayDetails();
    return 0;
}
