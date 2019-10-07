//
// Created by solari on ٦‏/١٠‏/٢٠١٩.
//

#include "Simulator.h"
#include "ANDGate.h"
#include "ORGate.h"
#include <fstream>


int Simulator::getGs() {
    return GA.size();
}



int Simulator::getNs() {
    return NA.size();
}



Simulator::Simulator() {
}

Simulator::~Simulator() {
    for(int i=0 ; i<getNs(); i++)
        delete NA[i];
    for(int i=0 ; i<getGs(); i++)
        delete GA[i];
}

Node* Simulator::FindNode(string name) {
    for(int i=0; i<getNs(); i++)
    {
        if(NA[i]->getName() == name)
            return NA[i];
    }
    return NULL;
}

Node* Simulator::AddNode(string name){
    Node * p = new Node(name);
    NA.push_back(p);
    return p;
}

Node* Simulator::FindOrAddNode(string name){
    Node *N = FindNode(name);
    if(N != NULL)
        return N;
    else
        return AddNode(name);
}

Gate* Simulator::AddGate(string type) {
    Gate *p = NULL;
    if(type == "AND")
        p = new ANDGate();
    else if(type == "OR")
        p = new ORGate();
    GA.push_back(p);
    return p;
}

void Simulator::Sim(){
    for(int j=0; j<getGs(); j++) {

        for (int i = 0; i < getGs(); i++)
            GA[i]->CalcOut();
    }
}

void Simulator::Load(string FileName) {
    ifstream f1;
    f1.open(FileName);
    while (!f1.eof())
    {
        string s;
        f1>>s;
        if(s == "SET")
        {
            string n;
            short v;
            f1>>n>>v;
            FindOrAddNode(n)->setValue(v);
        }
        else if(s == "OUT"){
            string n;
            f1>>n;
            if(n == "ALL")
            {
                PrintAllNodes();
            }
            else{
                FindOrAddNode(n)->PrintNode();
            }
        }
        else if(s == "SIM")
            Sim();
        else
        {
            Gate* g = AddGate(s);
            string n1,n2,n3;
            f1>>n1>>n2>>n3;
            g->SetIn1(FindOrAddNode(n1));
            g->SetIn2(FindOrAddNode(n2));
            g->SetOut1(FindOrAddNode(n3));
        }
    }
    f1.close();
}

void Simulator::PrintAllNodes() {
    for(int i=0; i<getNs(); i++) {
        NA[i]->PrintNode();
    }
}