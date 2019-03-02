//
//  Auto_ptr.hpp
//  Calac
//
//  Created by 杜来明 on 2019/03/02.
//  Copyright © 2019 duke. All rights reserved.
//

#ifndef Calc_hpp
#define Calc_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

enum Node_Type {
    DATA,
    OPERATOR
};

enum Ope_Type {
    ADD,
    MINUS,
    MULTIPLIE,
    DIVIDE
};


typedef struct _CALC_NODE
{
    Node_Type type;
    _CALC_NODE *pre;
    _CALC_NODE *next;
    union {
        const char* data;
        Ope_Type ope;
    };
} CALC_NODE;


class Calc {

public:
    Calc();
    ~Calc();
    
    bool AddData(string data);
    bool AddOpe(string ope);
    string GetResult();
    
private:
    CALC_NODE *first;
    CALC_NODE *now;
    
    
};

#endif /* Auto_ptr_hpp */
