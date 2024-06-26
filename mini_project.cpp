#include<conio.h> // to use getch() c programing header
#include<iostream>
#include<string>
using namespace std;

class atm
{
private:
    long int account_no;
    string name;
    int PIN;
    double balance;
    string mobile_no;
public:

    void setData(long int account_no_a,string name_a,int PIN_a,double balance_a,string mobile_no_a)
    {
        account_no = account_no_a;
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_no = mobile_no_a;

    }

    long int getAccount_no()
    {
        return account_no;
    }

    string getName()
    {
        return name;
    }

    int getPIN()
    {
        return PIN;
    }

    double getBalance()
    {
        return balance;
    }

    string getMobile()
    {
        return mobile_no;
    }

    void setMobile(string mob_prev,string mob_new)
    {
        if (mob_prev == mobile_no)
        {
            mobile_no = mob_new;
            cout << endl << "Successfully updated mobile number";
            _getch();  // to hold the screen until any key is pressed     
        }

        else 
        {
            cout << "Wrong mobile number!!";
            _getch();

        }
    }

    void cashWithdraw(int amount_a)
    {
        if (amount_a > 0 && amount_a < balance)
        {
            balance = balance-amount_a;
            cout << endl<< "collect your cash";
            cout << endl << "Available balance" << balance;
            _getch();
        }

        else 
        {
            cout << endl << "Insufficient balance or Invalid Input";
            _getch();
        }

    }

};

int main()
{
    int choice =0 , enterPIN;
    long int enterAccountno;

    system("cls"); // used to clear the screen

    atm user1;
    // set user data 
    user1.setData(98765,"Spruha",1111,50000,"8208749436");

    do 
    {
        system("cls");
        cout << endl << "Welcome to ATM machine !!!";
        cout << endl << "Enter your account number";
        cin >> enterAccountno;

        cout << endl << "Enter PIN";
        cin >> enterPIN;

        if ((enterAccountno == user1.getAccount_no()) && (enterPIN == user1.getPIN()))
        {
           do 
           {
                int amount = 0;
                string oldMobileno,newMobileno;

                system("cls");
                cout << endl << "Select options:";
                cout << endl << "1. Check balance";
                cout << endl << "2. Cash withdrawal";
                cout << endl << "3. Show User Details";
                cout << endl << "4. Update Mobile no.";
                cout << endl << "5 .Exit";

                cin >> choice ;

                switch (choice)
                {
                    case 1:
                    cout << endl << "Your balance is:" << user1.getBalance();

                    _getch();
                    break ;

                    case 2:

                    cout << endl << "Enter the amount :";
                    cin >> amount;
                    user1.cashWithdraw(amount);

                    break;


                    case 3:

                    cout << endl << "User details are :";
                    cout << endl  << "Account No. :" << user1.getAccount_no();
                    cout << endl << "Name :" << user1.getName();
                    cout << endl << "Balance :" << user1.getBalance();
                    cout << endl << "Mobile number :" << user1.getMobile();

                    _getch();
                    break;

                    case 4:
                    
                    cout << endl << "Enter the old mobile number :";
                    cin >> oldMobileno;

                    cout << endl<< "Enter the new mobile number :";
                    cin >> newMobileno;

                    user1.setMobile(oldMobileno,newMobileno);

                    break;

                    case 5:
                    exit(0);

                    default:
                    cout << endl << "Enter Valid Data !";
            

                }





           }

        while (1);
        {
            /* code */
        }
              
        }
        
    } while (1);



}

