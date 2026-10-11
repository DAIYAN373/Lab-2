#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int r1,c1;

    cout<<"Enter row for first array: ";
    cin>>r1;
    cout<<"Enter colum for first array:";
    cin>>c1;
    int a[r1][c1];
    a[r1][c1]=0;

    cout<<"Element for array a : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j =0;j<c1;j++)
        {
            cout<<"Element "<<i+1<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"Element of a array: "<<endl;
     for(int i=0;i<r1;i++)
    {
        for(int j =0;j<c1;j++)
        {
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
    int r2,c2;
     cout<<"Enter row for second array: ";
    cin>>r2;
    cout<<"Enter colum for secnd array: ";
    cin>>c2;


     int b[r2][c2];
     b[r1][c1] = 0;
     cout<<"Element for array b : "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j =0;j<c2;j++)
        {
            cout<<"Element "<<i+1<<": ";
            cin>>b[i][j];
        }
    }
    cout<<"Element of b array : "<<endl;

    for(int i=0;i<r2;i++)
    {
        for(int j =0;j<c2;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

     int choice;
    cout<<"what you want to do from 1-2 : "<<endl;
    cout<<"1.Summation."<<endl;
    cout<<"2.Multiplication."<<endl;
    cin>>choice;
    int sum[r1][c1];
     int multi[r1][c2];


    switch(choice)
    {
    case 1:
        for(int i =0;i<r1;i++)
        {
        for(int j =0;j<c1;j++)
            {
       sum[i][j] = a[i][j] + b[i][j];
            }
        }
        cout<<"Sum array : "<<endl;
          for(int i =0;i<r1;i++)
        {
        for(int j =0;j<c1;j++)
            {
cout<<sum[i][j] <<" ";
            }
            cout<<endl;
        }
        break;


    case 2 :
        for(int i =0; i <r1;i++)
        {
            for(int j =0;j<c2;j++)
            {
                multi[i][j] =0;
            }
        }
         for(int i =0; i <r1;i++)
        {
            for(int j =0;j<c2;j++)
            {
            for(int k =0;k<c1;k++)
            {
                multi[i][j] += a[i][k] * b [k][j];
            }
            }
        }
        cout<<"Result of multiplication array : "<<endl;
         for(int i =0; i <r1;i++)
        {
            for(int j =0;j<c2;j++)
            {
                cout<<multi[i][j]<<" ";
            }
            cout<<endl;
        }
        break;
    default :
        cout<<"Invalid choice.Please try again."<<endl;
    }
    getch();

}
