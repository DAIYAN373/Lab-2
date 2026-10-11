//4no. from slide
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
   int days = 5;
   double temperature,humidity,total_temperature = 0,total_humidity = 0,average_temperature,average_humidity;
   cout<<"Enter the readings for temperature and humidity " <<days<<" days:"<<endl;
   for(int i =1;i<=days;++i)
   {
       cout<<"Day no." <<i<<" - Temperature : ";
       cin>>temperature;
       cout<<"Day no. " <<i<<" - Humidity : ";
       cin>>humidity;
       total_temperature  += temperature;
       total_humidity += humidity;

   }
   average_temperature = total_temperature/ days;
   average_humidity = total_humidity/ days;
   cout<<"The average temperature over "<< days<<" days is : "<<average_temperature<<"C degree or F degree" <<endl;
   cout<<"The average humidity over " <<days<<"days is: " <<average_humidity<<endl;

   getch();


}

