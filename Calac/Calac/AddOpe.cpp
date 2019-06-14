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

    long minSize = data1.length() < data2.length() ? data1.length() : data2.length();
    long maxSize = data1.length() > data2.length() ? data1.length() : data2.length();
//    unsigned long maxSize;
//    if(data2.length() < data1.length()) {
//        maxSize = data1.length();
//        const char* aData = data2.c_str();
//
//        const char* aData[data2.length()+1] = '0';
//
//    }
    char* rlt = (char*) malloc(maxSize+2);
    memset(rlt, '0', maxSize+2);
    rlt[maxSize+1] = 0x00;
    
    const char* pData1 = data1.c_str();
    const char* pData2 = data2.c_str();
    // calc per byte
    // rlt[0] = '0';
    char data = 0;

//    for(int i=maxSize-1; i>=0 ;i-- ){
//        data = 0;
//        char iData1 = pData1[i];
//        char iData2 = pData2[i];
//        
//        if ((data2.length() < data1.length())) {
//            i + minSize - maxSize < 0 ? iData2 = '0' : iData2 = pData2[i + minSize - maxSize];
//            iData1 = pData1[i];
//        } else {
//            i + minSize - maxSize < 0 ? iData1 = '0' : iData1 = pData1[i + minSize - maxSize];
//            iData2 = pData2[i];
//        }
////        (i >= data1.length()) ? iData1 = '0' : NULL;
////        (i >= data2.length()) ? iData2 = '0' : NULL;
//        data = (iData1-'0') + (iData2-'0') + rlt[i+1] -'0';
//        char datamod = data % 10 + '0';
 //       char dataInt = data / 10 + '0';
  //      rlt[i+1] = datamod;
   //     rlt[i] = dataInt;
    
    char carryDigit = '\0';
    calcAdd(rlt, pData1, pData2, carryDigit);
    
    
    char* carryL;
    char* carryR;
    
    if ((data1.length() > data2.length())) {
        // copy
        memcpy(rlt, pData1, maxSize - minSize);
        
        pData1 = pData1+(maxSize - minSize);
    } else {
        // copy
        memcpy(rlt, pData2, maxSize - minSize);
        
        pData2 = pData2+(maxSize - minSize);
    }
    //
    rlt = rlt+(maxSize - minSize);
    
    calcAdd(rlt, pData1, pData2, carryDigit);
    
    
//    for(int i = maxSize - 1; i>=0 ;i-- ){
//        data = 0;
//        char iData1 = pData1[i];
//        char iData2 = pData2[i];
//
//        if ((data2.length() < data1.length())) {
//            i + minSize - maxSize < 0 ? iData2 = '0' : iData2 = pData2[i + minSize - maxSize];
//            iData1 = pData1[i];
//        } else {
//            i + minSize - maxSize < 0 ? iData1 = '0' : iData1 = pData1[i + minSize - maxSize];
//            iData2 = pData2[i];
//        }
////        (i >= data1.length()) ? iData1 = '0' : NULL;
////        (i >= data2.length()) ? iData2 = '0' : NULL;
//        data = (iData1-'0') + (iData2-'0') + rlt[i+1] -'0';
//        char datamod = data % 10 + '0';
//        char dataInt = data / 10 + '0';
//        rlt[i+1] = datamod;
//        rlt[i] = dataInt;
//    }
    
    if (rlt[0] == 0) {
        rlt[0] = '0';
    }
    
    
//    string str = new string(rlt);
    
    // TODO
    return string(rlt);
}
