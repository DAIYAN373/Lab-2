#include<iostream>

using namespace std;

int main()
{
    int arr[5] = {3,4,5,8,10};
    int *p =arr;
    for(int i =0;i<15;i++)
    {
        cout<<*p<<" ";
        p++;

    if (p==arr+5)
    {
        p=arr;
        cout<<endl;
    }
    }
    return 0;
}
