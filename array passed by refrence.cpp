#include<iostream>

using namespace std;

void multiplyby2(float arr[],int n)
{
    int i ;
    for(i=0;i<n;i++)
        arr[i] *=2;
}
int main()
{
    float floatvals[4]={1.2f,3.7f,6.2f,8.5f};
    int i=0;
    multiplyby2(floatvals,4);
    for(i=0;i<4;i++)
        cout<<floatvals[i]<<endl;
    return 0;
}
