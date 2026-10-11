//4no.
#include<iostream>

using namespace std;

int main()
{
    int j,arr[j],max_value,min_value;

    cout<<"Enter size of array : ";
    cin>>j;
    cout<<"Enter value that you want to store in array : "<<endl;
    for(int i = 0;i<j;i++)
    {
        cout<<"Values "<<i+1<<": ";
        cin>>arr[i];
    }
    max_value =arr[0];
    min_value = arr[0];
    for(int i = 0;i<j;i++)
    {
        if(arr[i]>max_value)
        {
            max_value = arr[i];
        }
        if(arr[i]<min_value)
        {
            min_value = arr[i];
        }


    }
    cout<<"Enter the maximum value of array : "<<max_value<<endl;
    cout<<"Enter the minimum value of array : "<<min_value<<endl;
    return 0 ;
}
