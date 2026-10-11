#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter elements in the array : "<<endl;
    int arr[n];
     int reverse_arr[n];
    for(int i =0;i<n;i++)
    {
        cout<<"Elements "<<i+1<<": ";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        reverse_arr[i] = arr[n-1-i];

    }
    cout<<"Elements in the reverse array :"<<endl;
for(int i=0;i<n;i++)
{

       cout<<reverse_arr[i]<<" ";
}

    return 0 ;
}
