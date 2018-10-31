/*
 Exercise P5.3. Implement a class Address. An address has a house number, a street, an optional apartment number, a city, a state, and a postal code. Supply two constructors: one with an apartment number and one without. Supply a print function that prints the address with the street on one line and the city, state, and postal code on the next line. Supply a member function comes_before that tests whether one address comes before another when the addresses are compared by postal code.
 */

#ifndef address_hpp
#define address_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Address{
public:
    Address();
    Address(int hn, string st, string c, string s, string pc);
    Address(int hn, string st, int an, string c, string s, string pc);
    void print_address();
    bool comes_before(Address b);
    int get_house_number();
    string get_street();
    int get_apart_num();
    string get_city();
    string get_state();
    string get_postal();
private:
    int house_number;
    string street;
    int apart_num;
    string city;
    string state;
    string postal;
};

#endif /* address_hpp */
