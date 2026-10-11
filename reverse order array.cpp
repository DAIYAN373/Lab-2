//5 no.
#include<iostream>

using namespace std;

int main()
{
    int n,arr[n];
    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter elements in the array : "<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<"Elements "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Reversed array : ";
    for(int i =0;i<n;i++)
    {
        cout<<arr[n-1-i]<<" ";
    }
    return 0;
}
