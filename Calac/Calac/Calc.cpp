//
//  Auto_ptr.cpp
//  Calac
//
//  Created by 杜来明 on 2019/03/02.
//  Copyright © 2019 duke. All rights reserved.
//

#include "../h/Calc.hpp"
#include "../h/OperatorM.hpp"

Calc::Calc(){
    
    first = NULL;
    now = NULL;
};
Calc::~Calc(){};

bool Calc::AddData(string data){
    
    // TODO CheckData
    // TODO Check Pre Node
    
    if (now == NULL) {
        now = new CALC_NODE;
        now->next = NULL;
        now->pre = NULL;
        first = now;
    } else {
        CALC_NODE* tmpNode;
        tmpNode = new CALC_NODE;
        now->next = tmpNode;
        tmpNode->pre = now;
        tmpNode->next = NULL;
        now = tmpNode;
    }
    
    now->type = DATA;
    now->data = data.c_str();
    
    return true;
    
}

bool Calc::AddOpe(string ope){
    
    // TODO Check Ope
    // TODO Check pre Node
    if (now == NULL) {
        now = new CALC_NODE;
        now->next = NULL;
        now->pre = NULL;
        first = now;
    } else {
        CALC_NODE* tmpNode;
        tmpNode = new CALC_NODE;
        now->next = tmpNode;
        tmpNode->pre = now;
        tmpNode->next = NULL;
        now = tmpNode;
    }
    
    now->type = OPERATOR;
    now->ope = ADD;
    
    return true;
}

string Calc::GetResult(){
    
    // TODO one pair limited now
    
    // TODO Adapter to judge correct Operator
    
    // TODO Use Template And Operator Overload to DO it
    
    OperatorM* oper = OperatorM::getInstance("");
    
    // TODO iterat the node chain
    return oper->Calc(first->data, first->next->next->data);
    
}
