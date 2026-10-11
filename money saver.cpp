// 3 no. from slide
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double monthly_savings,total_savings =0;
    int month_in_a_year = 12;
    cout<<"Enter the amount of money saved in a month : " <<endl;
    for(int i =1;i<=month_in_a_year;++i)
    {
        cout<<"Month no. "<<i<<": ";
        cin>>monthly_savings;
        total_savings += monthly_savings;

    }
    cout<<"Total amount of money save in a year : " <<total_savings<<endl;
    getch();
}
