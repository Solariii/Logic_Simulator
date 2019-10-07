//
// Created by solari on ٦‏/١٠‏/٢٠١٩.
//

#include "ORGate.h"

void ORGate::CalcOut() {
    if(In1->getValue() || (*In2).getValue())
        Out1->setValue(1);
    else
        Out1->setValue(0);
}
