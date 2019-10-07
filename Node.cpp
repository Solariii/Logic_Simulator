//
// Created by solari on ٦‏/١٠‏/٢٠١٩.
//

#include "Node.h"
#include <iostream>

Node::Node() {
    Name = "";
    Value = 0;
}

Node::Node( string name){
    Name = name;
    Value = 0;
}

Node::Node( string name, short value){
    Name = name;
    Value = value;
}

string Node::getName()  {
    return Name;
}

void Node::setName(string name) {
    Name = name;
}

short Node::getValue(){
    return Value;
}

void Node::setValue(short value) {
    Value = value;
}

void Node::PrintNode() {
    cout<<this->getName()<<"="<<getValue()<<endl;
}

