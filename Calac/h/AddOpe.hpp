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
};

#endif /* AddOpe_hpp */
