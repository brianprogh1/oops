#include <iostream>
#include <string>
using namespace std;

class BankEmployee {
private:
    string name;
    long accountNo;
    float balance;

public:
    BankEmployee(string n, long accNo, float bal) {
        name = n;
        accountNo = accNo;
        balance = bal;
    }

    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Account Number: " << accountNo << endl;
        
        if (balance < 500) {
            cout << "Invalid Balance: " << balance << " (Balance is < 500)" << endl;
        } else {
            cout << "Balance: " << balance << endl;
        }
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount Deposited: " << amount << endl;
        cout << "Updated Balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (balance - amount < 500) {
            cout << "Insufficient balance for withdrawal" << endl;
        } else {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
            cout << "Updated Balance: " << balance << endl;
        }
    }
};

int main() {
    string empName;
    long accNo;
    float initBalance;

    cout << "Enter Employee Name: ";
    getline(cin, empName);

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> initBalance;

    BankEmployee employee(empName, accNo, initBalance);

    cout << "\nEmployee Details:" << endl;
    employee.displayDetails();

    float depositAmount, withdrawAmount;

    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    employee.deposit(depositAmount);

    cout << "\nEnter amount to withdraw: ";
    cin >> withdrawAmount;
    employee.withdraw(withdrawAmount);

    return 0;
}
