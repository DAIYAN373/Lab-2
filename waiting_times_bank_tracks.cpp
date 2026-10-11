//1no. question answer

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int customers,above_average=0;
    cout<<"Enter number of customers: ";
    cin>>customers;
    double wait_times[customers],total_time=0,average_time=0;
    for(int i=0;i<customers;i++)
    {
        cout<<"Customer "<<i+1<< ": ";
        cin>>wait_times[i];
        total_time+=wait_times[i];

    }
    average_time = total_time/customers;
    cout<<"Total waiting times : "<<total_time<<endl;
    cout<<"Average waiting times : "<<average_time<<endl;
    for(int i=0;i<customers;i++)
    {
        if(wait_times[i]>average_time)
        {
            above_average++;
            cout<<"Customer "<< i+1<<" waited "<< wait_times[i]<<" minutes that above average"<<endl;
        }
    }


    cout<<"Number of customer waiting above average times : "<<above_average<<endl;

    getch();

}
