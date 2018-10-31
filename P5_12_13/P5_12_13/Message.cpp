//
//  Message.cpp
//  P5_12_13
//
//  Created by Christian Meyer on 10/18/18.
//  Copyright © 2018 Christian Meyer. All rights reserved.
//

#include "Message.hpp"

Message::Message(){
    sender = "";
    recipient = "";
    text = "";
    timestamp = time(NULL);
};

Message::Message(string s, string r, string t){
    sender = s;
    recipient = r;
    text = t;
    timestamp = time(NULL);
};

string Message::to_string(){
    string m;
    m = "From: " + sender + "\n";
    m += "To: " + recipient + "\n";
    m += text + "\n";
    return m;
};
