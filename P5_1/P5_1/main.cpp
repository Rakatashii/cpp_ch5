#include <iostream>
#include "person.h"

int main(int argc, const char * argv[]) {
    Person p1("Jeremy", 24);
    string p1_name = p1.get_name();
    int p1_age = p1.get_age();
    Person p2("Linda", 45);
    string p2_name = p2.get_name();
    int p2_age = p2.get_age();
    cout << "Person 1: " << endl;
    cout << "Name: " << p1_name << endl;
    cout << "Age: " << p1_age << endl;
    cout << "\n";
    cout << "Person 2: " << endl;
    cout << "Name: " << p2_name << endl;
    cout << "Age: " << p2_age << endl;
    cout << "\n";
    return 0;
}
