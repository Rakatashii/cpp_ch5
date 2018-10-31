/*
 Exercise P5.12.
 Design a class Message that models an e-mail message. A message has
 a recipient, a sender, and a message text. Support the following member functions:
 • A constructor that takes the sender and recipient and sets the time stamp to the current time
 • A member function append that appends a line of text to the message body
 • A member function to_string that makes the message into one long string like
 this: "From: Harry Hacker\nTo: Rudolf Reindeer\n ..."
 • A member function print that prints the message text. Hint: Use to_string.
 Write a program that uses this class to make a message and print it.
*/

#ifndef Message_hpp
#define Message_hpp

#include <stdio.h>
#include <string>
#include "time.h"

using namespace std;

class Message {
public:
    Message();
    Message(string sender, string recipient, string text);
    string get_sender() const { return sender; };
    string get_recipient() const { return recipient; };
    string get_text() const { return text; };
    time_t get_time() const { return timestamp; };
    string to_string();
private:
    string sender, recipient, text;
    time_t timestamp;
};

#endif /* Message_hpp */
