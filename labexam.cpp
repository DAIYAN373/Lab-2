#include<iostream>
using namespace std;
int main()
{
    int stockCount[6]={43,14,34,14,7,28};
    cout<<"Stock Count : "<<endl;
    int x =1;
    cout<<"Deleted stock count : ";
    for(int i=0;i<6-x;i++)
    {
        cout<<stockCount[i]<<" ";
    }
    cout<<endl;


    for(int i=0;i<6-x-1;i++)
    {
        for(int j=0;j<6-x-1-i;j++ )
        {
            if(stockCount[j]>stockCount[j+1])
            {
                int temp = stockCount[j];
                stockCount[j]= stockCount[j+1];
                stockCount[j+1]= temp;
            }
        }
    }
    cout<<"Sorted stock count bubble sort: " <<endl;
    for(int i=0;i<6-x;i++)
    {
        cout<<stockCount[i]<<" ";
    }
    cout<<endl;
    int lowidx=0;
    int highidx =5;
    int mididx= (0+5)/2;
    cout<<"Median value of stock : "<<endl;
    cout<<stockCount[mididx];
    return 0;

}
