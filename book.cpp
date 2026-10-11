#include<iostream>
#include<string>

using namespace std;
class book
{
private :
    string tittle;
    int edition;
    double price;
public:
    void set1(string Tittle)
    {
        tittle =Tittle;
    }
    void set2(int Edition)
    {
        edition=Edition;
    }
    void set3(double Price)

    {
        price =Price;
    }
    string getTittle()
    {
        return tittle;
    }
    int getEdition()
    {
        return edition;
    }
    double getPrice()
    {
        return price;
    }

};
int main()
{


book b1;
b1.set1("Agni bina");
b1.set2(8);
b1.set3(1500);
cout<<"Tittle : "<<b1.getTittle()<<endl;
cout<<"Edition : "<<b1.getEdition()<<endl;
cout<<"Price : "<<b1.getPrice()<<endl;
return 0;

}
