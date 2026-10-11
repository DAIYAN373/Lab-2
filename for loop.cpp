#include<iostream>
using namespace std;
int main()
{
    int n,trinum,x;
    cout<<"Enter value of x : ";
    cin>>x;
    trinum = 0;
    for(n;n<=x;n=n+1)
        trinum = trinum+n;
    cout<<"The "<<x<<"th triangular number : " <<trinum;
    return 0;

}
