/*
 Exercise P5.4.
 Implement a class Account. An account has a balance, functions to add and withdraw money, and a function to query the current balance. Charge a $5 pen- alty if an attempt is made to withdraw more money than available in the account.
 Exercise P5.5.
 Enhance the Account class of Exercise P5.4 to compute interest on the current balance. Then use the Account class to implement the problem from the beginning of the book: An account has an initial balance of $10,000, and 6 percent annual interest is compounded monthly until the investment doubles.
 */

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

class Account{
public:
    /* Constructor with no arguments
    Area(): length(5), breadth(2) { }
    
    // Constructor with two arguments
    Area(int l, int b): length(l), breadth(b){ }
    */
    Account();
    Account(string n): name(n){balance=0.0;hours_since_creation=0;rate=0.01;};
    Account(double b): balance(b){hours_since_creation=0;rate=0.01;};
    Account(string n, double b): name(n), balance(b) {
        rate = 0.01;
        hours_since_creation = 0;
    };
    Account(string n, double b, double r);
    void deposit(double d);
    void withdraw(double w);
    void check_balance();
    void set_hours(double h);
    void set_years(double y);
    void set_rate(double r);
    string get_name() const;
    double get_balance() const;
    double get_hours() const;
    double get_rate() const;
    void calc_months();
    void calc_years();
    double get_months();
    double get_years();
    double interest_c_monthly();
    double interest_c_yearly();
private:
    string name;
    double balance;
    double rate;
    
    double months;
    double years;
    double hours_since_creation;
    
    void print_penalty(double d){
        cout << "$5.00 penalty fee for attempting to withdraw $" << d << " from account while under minimum balance. \nNew account balance: $" << this->get_balance() << endl;
    }
    void print_penalty(){
        cout << "$5.00 penalty fee for attempting to withdraw from account while under minimum balance. \nNew account balance: $" << fixed << setprecision(2) << this->get_balance() << endl;
    }
};


#endif /* Account_hpp */
