//
//  address.cpp
//  P5_3
//
//  Created by Christian Meyer on 10/17/18.
//  Copyright © 2018 Christian Meyer. All rights reserved.
//

#include "address.hpp"

Address::Address(){
    house_number = 0;
    street = "";
    apart_num = 0;
    city = "";
    state = "";
    postal = "";
}
Address::Address(int hn, string st, string c, string s, string pc){
    house_number = hn;
    street = st;
    apart_num = 0;
    city = c;
    state = s;
    postal = pc;
}
Address::Address(int hn, string st, int an, string c, string s, string pc){
    house_number = hn;
    street = st;
    apart_num = an;
    city = c;
    state = s;
    postal = pc;
}
int Address::get_house_number(){
    return house_number;
}
string Address::get_street(){
    return street;
}
int Address::get_apart_num(){
    return apart_num;
}
string Address::get_city(){
    return city;
}
string Address::get_state(){
    return state;
}
string Address::get_postal(){
    return postal;
}
void Address::print_address(){
    cout << house_number << " " << street << " ";
    if (apart_num != 0){
        cout << "apt. " << apart_num  << " ";
    }
    cout << "\n";
    cout << city << ", " << state << " " << postal << "\n" << endl;
}
bool Address::comes_before(Address b){
    bool not_determined = true;
    bool cb = false;
    int i = 0;
    while (not_determined){
        if (int(this->get_postal()[i] < b.get_postal()[i])){
            cb = true;
            not_determined = false;
        } else if (int(this->get_postal()[i] > b.get_postal()[i])){
            cb = false;
            not_determined = false;
        } else if (int(this->get_postal()[i] == b.get_postal()[i])){
            if (i == (b.get_postal().length()-1)){
                cb = false;
                not_determined = false;
            } else {
                i++;
            }
        }
    }
    return cb;
}


/*
private:
    int house_number;
    string street;
    int apart_num;
    string city;
    string state;
    string postal;
*/
