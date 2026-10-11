//12no.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Invalid size.";
        return 1;
    }
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array :"<<endl;
    for(int i = 0;i<n;i++)
    {
       cout<<"Elemnets "<<i+1<< ": ";
        cin>>arr[i];
    }
    for(int i =0;i<n;i+=2)
    {
        if(arr[i]>10)
        {
            arr[i]=0;

        }
    }
    cout<<"Modified array : "<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;

}
