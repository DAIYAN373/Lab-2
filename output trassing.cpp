#include<iostream>

using namespace std;

int main()
{
    double va11 = 5.5;
    cout<<va11<<endl;
    int va12 = va11;
    int va13 = va12++;
    cout<<va12<<endl;
    cout<<va13<<endl;
    double va14 = -- va11;
    cout<<va11<<endl;
    cout<<(int) va11 + (int) va11<<endl;
    cout<<va12++ <<endl;
    cout<<--va13<<endl;
    cout<<va14<<endl;
    cout<<(double) va13 + va14<<endl;
    cout<<(va11!=va14)<<endl;
    cout<<va11<<" "<<va12<<" ";
    cout<<va13<<" "<<va14<<" ";
    return 0;
}
