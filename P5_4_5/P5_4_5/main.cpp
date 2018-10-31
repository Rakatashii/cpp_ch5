/*
 Exercise P5.4.
 Implement a class Account. An account has a balance, functions to add and withdraw money, and a function to query the current balance. Charge a $5 pen- alty if an attempt is made to withdraw more money than available in the account.
 Exercise P5.5.
 Enhance the Account class of Exercise P5.4 to compute interest on the current balance. Then use the Account class to implement the problem from the beginning of the book: An account has an initial balance of $10,000, and 6 percent annual interest is compounded monthly until the investment doubles.
*/

#include <iostream>
#include "Account.hpp"

#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    Account a("John David", 23845);
    a.check_balance();
    a.deposit(5000);
    cout << "Current rate = " << a.get_rate() << endl;
    a.withdraw(28600);
    a.withdraw(200);
    a.set_hours(9400);
    a.set_rate(0.04);
    double i_yr = a.interest_c_yearly();
    double i_mo = a.interest_c_monthly();
    cout << "Initial balance $" << a.get_balance() << " accruing interest over " << a.get_years() << " years, compounded yearly at rate " << a.get_rate() << ", will be: $" << i_yr << endl;
    cout << "Initial balance $" << a.get_balance() << " accruing interest over " << a.get_months() << " months, compounded monthly at rate " << a.get_rate() << ", will be: $" << i_mo << endl;
    Account b("Magic Johnson");
    Account c(234534);
    cout << "b.get_name(): " << b.get_name() << endl;
    cout << "b.get_balance(): " << b.get_balance() << endl;
    cout << "c.get_name(): " << c.get_name() << endl;
    cout << "c.get_balance(): " << c.get_balance() << endl;
    b.withdraw(1);
    return 0;
}
