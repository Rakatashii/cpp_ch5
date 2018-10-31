#ifndef person_h
#define person_h

#include <string>

using namespace std;

class Person {
public:
    Person();
    Person(string pname, int page);
    string get_name() const;
    int get_age() const;
private:
    string name;
    int age; // 0 if unknown
};

#endif /* person_h */
