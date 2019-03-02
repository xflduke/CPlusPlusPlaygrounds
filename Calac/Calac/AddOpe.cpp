//
//  AddOpe.cpp
//  Calac
//
//  Created by 杜来明 on 2019/03/02.
//  Copyright © 2019 duke. All rights reserved.
//

#include "../h/AddOpe.hpp"
using namespace std;

string AddOpe::Calc(string data1, string data2) {

    unsigned long minSize = data1.length() < data2.length() ? data1.length() : data2.length();
    unsigned long maxSize = data1.length() > data2.length() ? data1.length() : data2.length();

    char* rlt = (char*) malloc(maxSize+2);
    memset(rlt, '0', maxSize+2);
    rlt[maxSize+1] = 0x00;
    
    const char* pData1 = data1.c_str();
    const char* pData2 = data2.c_str();
    // calc per byte
    // rlt[0] = '0';
    char data = 0;
    for(int i=maxSize-1; i>=0 ;i-- ){
        data = 0;
        data = (pData1[i]-'0') + (pData2[i]-'0') + rlt[i+1] -'0';
        char datamod = data % 10 + '0';
        char dataInt = data / 10 + '0';
        rlt[i+1] = datamod;
        rlt[i] = dataInt;
        
    }
    
    if (rlt[0] == 0) {
        rlt[0] = '0';
    }
    
    
//    string str = new string(rlt);
    
    // TODO
    return string(rlt);
}
