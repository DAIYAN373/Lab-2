#include<iostream>
#include<string>

using namespace std;

class BankAccount
{
private :
    int account_number;
    string holder_name;
    double balance ;
public:
    BankAccount(int accNumber,string name,double accBalance)
    {
        account_number = accNumber;
        holder_name = name;
        balance = accBalance;
    }
    void deposit(double amount)
    {
        if(amount >0)
        {
            balance += amount ;
            cout<<"Deposited : "<<amount<<endl;
        }
        else {
            cout<<"Invalid deposit amount."<<endl;
        }
    }
    void withdraw (double amount)
    {
        if (amount >0 && amount <=balance)
        {
            balance -= amount;
            cout<<"Withdrawn : "<<amount<<endl;
        }
        else if (amount >balance)
        {
            cout<<"Insufficient balance ."<<endl;
        }
        else
        {
            cout<<"Invalid withdrawal amount ."<<endl;
        }
    }
    void displayAccountDetails()
    {
        cout<<"Account Number : "<<account_number<<endl;
        cout<<"Holder Name : "<<holder_name<<endl;
        cout<<"Balance : "<<balance <<endl;

    }
};
int main()
         {
             BankAccount ac1(123456," Sumaiya Shimu",5000);
             cout<<"Account Details : "<<endl;
             ac1.displayAccountDetails();
             cout<<"Transaction : "<<endl;
             ac1.deposit(300);
             ac1.withdraw(200);
             ac1.withdraw(1600);
             cout<<"Final Account Details : "<<endl;
             ac1.displayAccountDetails();
             return 0;



         }
