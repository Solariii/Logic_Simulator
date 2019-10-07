//
// Created by solari on ٦‏/١٠‏/٢٠١٩.
//

#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "Gate.h"
#include <bits/stdc++.h>

class Simulator {
    vector<Gate *>GA;
    vector<Node *>NA;
public:
    int getGs() ;

    Simulator();

    ~Simulator();

    int getNs() ;

    Node* FindNode(string name);

    Node* AddNode(string name);

    Node* FindOrAddNode(string name);

    Gate* AddGate(string type);

    void Sim();

    void Load(string FileName);

    void PrintAllNodes();


};


#endif //UNTITLED_SIMULATOR_H
