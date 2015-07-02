/* Ahmad Musa,
Dept of CSE,
KUET*/

/*Problem #2: Define a class to represent a bank account. Include the following members:
Data members:
1.  Name of the depositor
2.  Account number
3.  Type  of account
4.  Balance amount in the account
Member Functions:
1.  To assign initial values
2.  To deposit an amount
3.  To  withdraw an amount  after checking
balance
4.  To  display the name and balance given
account number
*/

#include <iostream>
#include <string>
using namespace std;
class Account
{
private:
    string Name;
    int accountNo;
    string Type;
    float balance;
    void setName(string);
    void setAccountNo(int);
    void setType(string);
    void setBalance(float);

public:
    Account();
    string getName();
    string getType();
    int getAccountNo();
    float getBalance();

    void getInput();
    void DepositeAmount(float);
    void WithdrawAmount(float);
    void display();

};

Account::Account()
{
    Name = "No Name";
    balance =0;
    Type = "No Type";
    accountNo=0;
}

int Account::getAccountNo()
{
    return accountNo;
}
string Account::getName()
{
    return Name;
}
string Account::getType()
{
    return Type;
}
float Account::getBalance()
{
    return balance;
}

void Account::setAccountNo(int AccNo)
{
    accountNo = AccNo;
}
void Account::setName(string Username)
{
    Name = Username;
}
void Account::setType(string accType)
{
    Type = accType;
}
void Account::setBalance(float amount)
{
    balance = amount;
}

void Account::getInput()
{
    cout<<"Enter your Name : ";
    string name;
    cin>>name;
    setName(name);
    cout<<"\nEnter account Type ";
    string Type;
    cin>>Type;
    setType(Type);
    cout<<"\nEnter account no ";
    int accNo;
    cin>>accNo;
    setAccountNo(accNo);
}

void Account::DepositeAmount(float amount)
{
    float presentMoney = getBalance();
    presentMoney += amount;
    setBalance(presentMoney);
    cout<<amount<<" Taka has been deposited!\n";
}

void Account::WithdrawAmount(float amount)
{
    float presentMoney = getBalance();
    if(presentMoney < amount)
    {
        cout<<"Sorry ! Insufficient Balance!\n";
    }
    else
    {
        presentMoney -= amount;
        setBalance(presentMoney);
        cout<<amount<<" Taka has been withdrawn!\n";
    }

}


void Account::display()
{
    cout<<"Name : "<<getName();
    cout<<"\nAccount No: "<<getAccountNo();
    cout<<"\nAccount Type: "<<getType();
    cout<<"\nBalance : "<<getBalance();

}

int main()
{
Account myAcc;
Account();

myAcc.getInput();
myAcc.DepositeAmount(300);
myAcc.WithdrawAmount(100);
myAcc.display();
}
