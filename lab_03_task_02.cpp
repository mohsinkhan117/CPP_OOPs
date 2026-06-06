#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
    const string name, accNo;
    double balance;

public:
    BankAccount(string n, string a, double b = 0.0) : name(n), accNo(a), balance(b) {}
    void deposit(double amt)
    {
        balance += amt;
        cout << "[+]" << amt << " deposited.\n";
    }
    void withdraw(double amt)
    {
        if (amt > balance)
            cout << "[-] Insufficient funds!\n";
        else
            balance -= amt, cout << "[-]" << amt << " withdrawn.\n";
    }
    void show() const
    {
        cout << "\n--- Account Info ---\nName: " << name
             << "\nAccount No: " << accNo
             << "\nBalance: " << balance << "\n";
    }
};

int main()
{
    BankAccount acc("Ahmed Khan", "PK12345", 5000);
    acc.show();
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.show();
}
