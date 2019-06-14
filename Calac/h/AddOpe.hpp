//
//  AddOpe.hpp
//  Calac
//
//  Created by 杜来明 on 2019/03/02.
//  Copyright © 2019 duke. All rights reserved.
//

#ifndef AddOpe_hpp
#define AddOpe_hpp

#include <stdio.h>
#include "OperatorM.hpp"

class AddOpe : public OperatorM {
    
    friend class OperatorM;
    
public:
    AddOpe(){};
    ~AddOpe(){};
    
    string Calc(string , string );
    
    template<typename T, typename ... Types> bool calcAddVariadic(T* pRlt, Types* ... pDatas) {
        
        cout<<sizeof...(Types);
        return true;
    }
    
    template<typename T> void calcAdd(T* pRlt, const T* data1, const T* data2, T carryDigit) {
        
        // end condition : data1 and data2 both '/0'

        // ALL
        const char *pAllRlt;
        // calc
        *pRlt = *data1 + *data2;
        
        // count
        char datamod = *pRlt % 10 + '0';
        char dataInt = *pRlt / 10 + '0';
        
        addCarryDigit(pRlt--, dataInt);
        
        *pRlt = datamod;
        
        calcAdd(pRlt++, data1++, data2++, carryDigit);
        
    }
    
    template<typename T> void addCarryDigit(T* pRlt, T carryDigit){
        *pRlt = *pRlt + carryDigit;
        char datamod = *pRlt % 10 + '0';
        char dataInt = *pRlt / 10 + '0';
        *pRlt = datamod;
        //
        if (dataInt > '0') {
            addCarryDigit(pRlt--, dataInt);
        }
    }
};

#endif /* AddOpe_hpp */
