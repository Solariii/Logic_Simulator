//
// Created by solari on ٦‏/١٠‏/٢٠١٩.
//

#ifndef GATE_H
#define GATE_H

#include "Node.h"
using namespace std;

class Gate {
protected:
    Node * In1;
    Node * In2;
    Node * Out1;
public:
    Gate();
    ~Gate();
    void SetIn1(Node*);
    void SetIn2(Node*);
    void SetOut1(Node*);
    Node* GetIn1();
    Node* GetIn2();
    Node* GetOut1();
    virtual void CalcOut()=0;

};


#endif //UNTITLED_GATE_H
