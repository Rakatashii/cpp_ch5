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
 
 Exercise P5.13.
 Design a class Mailbox that stores e-mail messages, using the Message class of Exercise P5.12. You don’t yet know how to store a collection of message objects. Instead, use the following brute force approach: The mailbox contains one very long string, which is the concatenation of all messages. You can tell where a new message starts by searching for a From: at the beginning of a line. This may sound like a dumb strategy, but surprisingly, many e-mail systems do just that.
 Implement the following member functions:
 void Mailbox::add_message(Message m);
 Message Mailbox::get_message(int i) const;
 void remove_message(int i);
*/

#include <iostream>
#include "Message.hpp"
#include "Mailbox.hpp"

/*
 "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."
 */

int main(int argc, const char * argv[]) {
    Message m1("CM", "DL", "hey buddy\nhows it");
    //cout << "m sender: " << m.get_sender() << endl;
    //cout << "m recipient: " << m.get_recipient() << endl;
    //cout << "m timestamp: " << m.get_time() << endl;
    //cout << "m text: " << m.get_text() << endl;
    //cout << "m1 #to_string():\n" << m1.to_string() << endl;
    Message m2("David Len", "Ken", "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.");
    //cout << "m2 #to_string():\n" << m2.to_string() << endl;
    Message m3("Sandy Cheeks", "Larry", "Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.");
    //cout << "m3 #to_string():\n" << m3.to_string() << endl;
    Message m4("Slash", "Donald", "Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.");
    //cout << "m4 #to_string():\n" << m4.to_string() << endl;
    Mailbox mb("Gmail");
    
    mb.add_message(m1);
    mb.add_message(m2);
    mb.add_message(m3);
    mb.add_message(m4);
    
    cout << "BEFORE REMOVAL: \n" << "\n";
    string t1 = mb.get_message(1);
    cout << "t1:\n" << t1 << "\n";
    string t2 = mb.get_message(2);
    cout << "t2\n" << t2 << "\n";
    string t3 = mb.get_message(3);
    cout << "t3\n" << t3 << "\n";
    string t4 = mb.get_message(4);
    cout << "t4\n" << t4 << "\n";
    
    mb.remove_message(2);
    cout << "\n";
    cout << "AFTER REMOVAL: \n" << "\n";
    //cout << "\n" << "All Messages:\n" << mb.get_all_messages() << endl;
    int k;
    for (k = 1; k <= mb.get_count(); k++){
        string tt = mb.get_message(k);
        cout << "R" << k << ": \n" << tt << "\n";
    }
    cout << endl;
    return 0;
}
