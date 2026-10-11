#include<iostream>
#include<string>
using namespace std;
struct BankAccount
{
    int accountNumber;
    string accountHolderName;
    double balance;
    void setDetails(int accNum,string accHolder,double accBalance)
    {
        accountNumber = accNum;
        accountHolderName =accHolder;
        balance = accBalance;
    }
    void displayDetails()
    {
        cout<<"Account information : "<<endl;
        cout<<"Account number : "<<accountNumber<<endl;
        cout<<"Account Holder Name : "<<accountHolderName<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
        double calculateInterest()
        {
            return balance *0.05*12;
        }

};
int main()
{


BankAccount acc1;
int accountNumber;
string accountHolderName;
double balance;
cout<<"Enter account Number : ";
cin>>accountNumber;
cin.ignore();
cout<<"Enter account Holder Name : ";
getline(cin,accountHolderName);
cout<<"Enter Account Balance : ";
cin>>balance;
acc1.setDetails(accountNumber,accountHolderName,balance);
cout<<"Account Details :"<<endl;
double interest = acc1.calculateInterest();
cout<<"Yearly Interest earned : "<<interest <<endl;
return 0;
}


