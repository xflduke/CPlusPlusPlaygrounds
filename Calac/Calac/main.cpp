//
//  main.cpp
//  Calac
//
//  Created by 杜来明 on 2019/03/02.
//  Copyright © 2019 duke. All rights reserved.
//

#include <iostream>
#include "../h/Calc.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Calc calc;
    
    cout << "Input Data1: ";
    string input1;
    cin >> input1;
    calc.AddData(input1);
    
    cout << "Input Operator: ";
    string ope;
    cin >> ope;
    calc.AddOpe(ope);
    
    cout << "Input Data2: ";
    string input2;
    cin >> input2;
    calc.AddData(input2);
    
    cout << input1 << " " << ope << " " << input2 << " = " << calc.GetResult();
    cout << '\n';

    return 0;
}
