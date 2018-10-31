#include "Account.hpp"

Account::Account(){
    name = "";
    balance = 0.0;
    rate = 0.01; // default rate;
    hours_since_creation = 0.0;
}
/*
Account::Account(string n, double b){
    name = n;
    balance = b;
    rate = 0.01;
    hours_since_creation = 0.0;
}*/
Account::Account(string n, double b, double r){
    name = n;
    balance = b;
    rate = r;
    hours_since_creation = 0.0;
}
void Account::deposit(double d){
    balance += d;
}
void Account::withdraw(double w){
    if (balance >= 500){
        balance -= w;
    } else if (balance < 500){
        balance -= 5.0;
        print_penalty();
    }
}
void Account::check_balance(){
    cout << "Balance: $" << balance << endl;
}
void Account::set_hours(double h){
    hours_since_creation = h;
    calc_months();
    calc_years();
}
void Account::set_years(double y){
    hours_since_creation = y * 365 * 24;
    calc_months();
    calc_years();
}
void Account::set_rate(double r){
    rate = r;
}
string Account::get_name() const{
    return name;
}
double Account::get_balance() const{
    return balance;
}
double Account::get_hours() const{
    return hours_since_creation;
}
double Account::get_rate() const{
    return rate;
}
void Account::calc_months(){
    months = (((hours_since_creation/24.0)/7.0)/4.0);
}
void Account::calc_years(){
    calc_months();
    years = (this->get_months() / 12.0);
}
double Account::get_months(){
    calc_months();
    return months;
}
double Account::get_years(){
    calc_years();
    return years;
}
double Account::interest_c_monthly(){
    double ammount = balance*pow((1+(rate/12)), 12*this->get_years());
    return ammount;
}
double Account::interest_c_yearly(){
    double ammount = balance*pow((1+(rate)), this->get_years());
    return ammount;
}

