//
//  main.cpp
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include <iostream>
#include "Factory.h"
#include "Operator.h"

int main(int argc, const char * argv[])
{
    
    // insert code here...
    
    Factory* factory = new Factory();
    Operator* whatOperator = factory -> getOperator("+", 4, 5);
    float result = whatOperator -> getResault();
    std::cout<<"result is"<<result<<std::endl;

    return 0;
}

