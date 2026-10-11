//20no. from slide
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
 int n,first =0,second = 1,sum = 0,next;
 cout<<"Enter terms : " ;
 cin>>n;
 for(int i =1;i<=n;++i)
 {
    sum+= first;
    next = first + second;
    first = second;
    second = next;
 }
 cout<<"The sum of the first "<<n<<" th terms is:"<<next-1<<endl;

   getch();
}
