#include <stdio.h>
#include "person.h"
/*
 class Person {
 public:
 Person();
 Person(string pname, int page);
 void get_name() const;
 void get_age() const;
 private:
 string name;
 int age; // 0 if unknown
 };
 */
Person::Person(){
    name = "";
    age = 0;
}
Person::Person(string pname, int page){
    name = pname;
    age = page;
}
string Person::get_name() const{
    return name;
}
int Person::get_age() const{
    return age;
}
