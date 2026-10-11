#include<iostream>

using namespace std;

int main()
{
    int days = 7;
    int sales[days];
    double total_sales=0,average_sales=0;
    int below_average=0;
    int target =10000;

    cout<<"Enter the sales for each day : "<<endl;

    for(int i = 0;i<days;i++)
    {
        cout<<"Day "<<i+1<< ": ";
        cin>>sales[i];
        total_sales+=sales[i];

    }
    average_sales=total_sales/days;
    for(int i=0;i<days;i++)
    {
        if(sales[i]<average_sales)
        {
            below_average++;
        }

    }
    cout<<"Total sales for the week: "<<total_sales<<endl;
    cout<<"Average sales per day: "<<average_sales<<endl;
    cout<<"Number of sales below average: "<<below_average<<endl;
    if(total_sales>=target)
    {
        cout<<" Target achieved";
    }
    else
        {
        cout<<"Target not achieved";
    }

}
