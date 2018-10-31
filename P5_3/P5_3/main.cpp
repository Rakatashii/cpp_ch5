/*
 Exercise P5.3. Implement a class Address. An address has a house number, a street, an optional apartment number, a city, a state, and a postal code. Supply two constructors: one with an apartment number and one without. Supply a print function that prints the address with the street on one line and the city, state, and postal code on the next line. Supply a member function comes_before that tests whether one address comes before another when the addresses are compared by postal code.
*/
#include <iostream>
#include "address.hpp"

int main(int argc, const char * argv[]) {
    Address a1(23, "West Palm Ave.", "Denver", "CO", "45687");
    Address a2(18, "Good Will Blvd.", "Lauderdale", "Arizona", "45923");
    Address a3(93, "Naked Ape St.", 398, "LA", "California", "90024");
    Address a4(5, "Celebration Ave", 902, "Orlando", "FL", "34848");
    
    a1.print_address();
    a2.print_address();
    a3.print_address();
    a4.print_address();
    
    if (a1.comes_before(a2)){
        cout << "a1 postal " << a1.get_postal() << " comes before " << a2.get_postal() << endl;
    }
    if (a2.comes_before(a2)){
        cout << "a2 postal " << a2.get_postal() << " comes before " << a2.get_postal() << endl;
    }
    if (a3.comes_before(a2)){
        cout << "a3 postal " << a3.get_postal() << "  comes before " << a2.get_postal() << endl;
    }
    if (a4.comes_before(a2)){
        cout << "a4 postal " << a4.get_postal() << " comes before " << a2.get_postal() << endl;
    }
    
    // Working
    return 0;
}
