//
// Created by solari on ٦‏/١٠‏/٢٠١٩.
//
#include<string>
#ifndef NODE_H
#define NODE_H
using namespace std;

class Node {
    string Name;
    short Value;
public:

    Node();

    Node( string name);

    Node( string name, short value);

    void setName( string name);

    short getValue();

    void setValue(short value);

    string getName() ;

    void PrintNode();


};


#endif //UNTITLED_NODE_H
