//
//  OperatorM.hpp
//  Calac
//
//  Created by 杜来明 on 2019/03/02.
//  Copyright © 2019 duke. All rights reserved.
//

#ifndef OperatorM_hpp
#define OperatorM_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class OperatorM {
protected:
    OperatorM(){};
    ~OperatorM(){};
    
public:
    // TODO not specified count
    virtual string Calc(string , string ) = 0;
    
    static OperatorM* getInstance(string Type);
    
};

#endif /* OperatorM_hpp */
