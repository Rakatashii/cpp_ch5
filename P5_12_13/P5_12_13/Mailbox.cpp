//
//  Mailbox.cpp
//  P5_12_13
//
//  Created by Christian Meyer on 10/18/18.
//  Copyright © 2018 Christian Meyer. All rights reserved.
//

#include "Mailbox.hpp"

Mailbox::Mailbox(){
    name = "";
    all_messages = "";
    m_count = 0;
}
Mailbox::Mailbox(string n){
    name = n;
    all_messages = "";
    m_count = 0;
}
void Mailbox::give_name(string n){
    name = n;
}
void Mailbox::add_message(Message m){
    m_count++;
    //messages.push_back(m);
    all_messages += m.to_string();
}
string Mailbox::get_message(int i) const{
    int j;
    int count = 0;
    int m_start = 0, m_end = all_messages.length()-1;
    for (j = 0; j < all_messages.length(); j++){
        if (all_messages[j] == 'F'){
            if (all_messages[j+4] == ':'){
                ++count;
                if (count == i){
                    m_start = j;
                }
                if (count == (i+1)){
                    m_end = j;
                }
            }
        }
    }
    if (count == i){
        m_end = all_messages.length()-1;
    }
    int diff = m_end - m_start;
    string m = all_messages.substr(m_start, diff);
    return m;
}

void Mailbox::remove_message(int i){
    --m_count;
    int j;
    int count = 0;
    int m_start = 0, m_end = (all_messages.length() - 1);
    for (j = 0; j < all_messages.length(); j++){
        if (all_messages[j] == 'F'){
            if (all_messages[j+4] == ':'){
                ++count;
                if (count == i){
                    m_start = j-1;
                }
                if (count == (i+1)){
                    m_end = j-1;
                }
            }
        }
    }
    if (count == i){
        m_end = all_messages.length()-1;
    }
    string m1 = all_messages.substr(0, m_start), m2 = "";
    if (m_end != all_messages.length()-1){
        int diff = (all_messages.length() - 1) - m_end;
        m2 = all_messages.substr(m_end, diff);
    }
    all_messages = m1 + m2;
}

