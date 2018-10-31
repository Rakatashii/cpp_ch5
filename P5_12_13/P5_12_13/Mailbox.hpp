/*
 Exercise P5.13.
 Design a class Mailbox that stores e-mail messages, using the Message class of Exercise P5.12. You don’t yet know how to store a collection of message objects. Instead, use the following brute force approach: The mailbox contains one very long string, which is the concatenation of all messages. You can tell where a new message starts by searching for a From: at the beginning of a line. This may sound like a dumb strategy, but surprisingly, many e-mail systems do just that.
 Implement the following member functions:
 void Mailbox::add_message(Message m);
 Message Mailbox::get_message(int i) const;
 void remove_message(int i);
*/

#ifndef Mailbox_hpp
#define Mailbox_hpp

#include <stdio.h>
#include "Message.hpp"
//#include <vector>

class Mailbox{
public:
    Mailbox();
    Mailbox(string n);
    void give_name(string n);
    void add_message(Message m);
    string get_message(int i) const;
    void remove_message(int i);
    string get_all_messages() { return all_messages; };
    int get_count() { return m_count; };
private:
    string name;
    int m_count;
    string all_messages;
    //vector<Message> messages;
};

#endif /* Mailbox_hpp */
