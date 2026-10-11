#include<iostream>
using namespace std;

int main()
{
    int day;
    double consumption[day];
    cout<<"Enter a number of days in a month :";
    cin>>day;
    cout<<"enter the  electricty consumpion per day "<<endl ;
    for(int i =0;i<day;i++)
    {
        cout<<"Day"<<i+1<<": ";
        cin>>consumption[i];

    }
    double total=0;
    double max_cons=0;
    int max_day=0;
    for(int i=0;i<day;i++)
    {
        total+=consumption[i];
        if(consumption[i]>max_cons)
        {
            max_cons=consumption[i];
            max_day=i+1;
        }
    }
    cout<<"total consumption for the month :"<<total<<" kwh"<<endl;
    cout<<"highest consumption day"<<max_day<<" ("<<max_cons<<" kwh"<<endl;
    double limit;
    cout<<"enter limit for consumption : ";
    cin>>limit;
    int n = 0;
    for (int i;i<day;i++)
    {
        if(consumption[i]>limit)
        {
            n++;
        }
    }
    cout<<"Number of days consumption exceed"<<limit<<" kwh is : "<<n<<endl;


}
