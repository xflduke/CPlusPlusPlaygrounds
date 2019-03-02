//
//  OperatorM.cpp
//  Calac
//
//  Created by 杜来明 on 2019/03/02.
//  Copyright © 2019 duke. All rights reserved.
//

#include "../h/OperatorM.hpp"
#include "../h/AddOpe.hpp"

OperatorM* OperatorM::getInstance(string Type)
{
    // TODO return instance by Type
    return new AddOpe();
}
