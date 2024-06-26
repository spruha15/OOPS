#include <iostream>
#include <string>
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
    void setData(long int account_no_a, string name_a, int PIN_a, double balance_a, string mobile_no_a)
    {
        account_no = account_no_a;
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_no = mobile_no_a;
    }

    // A method to display account details for testing purposes
    void displayAccountDetails() {
        cout << "Account Number: " << account_no << endl;
        cout << "Name: " << name << endl;
        cout << "PIN: " << PIN << endl;
        cout << "Balance: " << balance << endl;
        cout << "Mobile Number: " << mobile_no << endl;
    }
};

int main() {
    atm user1;
    long int account_no;
    string name;
    int PIN;
    double balance;
    string mobile_no;

    cout << "Welcome to ATM machine !!!" << endl;

    cout << "Enter your account number: ";
    cin >> account_no;

    // Example values for other attributes
    name = "John Doe";
    PIN = 1234;
    balance = 1000.0;
    mobile_no = "1234567890";

    // Setting data for user1
    user1.setData(account_no, name, PIN, balance, mobile_no);

    // Displaying account details to verify input was successful
    user1.displayAccountDetails();

    return 0;
}
