//question no.3 answer
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int length,a[length],even =0 ,odd =0,max_num,min_num;


    cout<<"Enter the size of an array :";
    cin>>length;

    cout<<"Enter elements of the array : "<<endl;
    for(int i =0;i<length;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
    }
 max_num = a[0];
 min_num = a [0];
    for(int i =0;i<length;i++)
    {

        if(a[i]>max_num)
        {


            max_num=a[i];
        }
        if(a[i]<min_num)
{


            min_num=a[i];
}
    if(a[i]%2==0)
    {
        even++;

    }
    else
    {
        odd++;
    }
    }
    cout<<"Maximum number : "<<max_num<<endl;
    cout<<"Minimum number : "<<min_num<<endl;
    cout<<"Number of even elements : "<<even<<endl;
    cout<<"Number of odd elements : "<<odd<<endl;
    getch();

}
