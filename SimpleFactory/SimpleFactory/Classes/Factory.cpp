//
//  Factory.cpp
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include "Factory.h"
#include "AddOperator.h"
#include "CutOperator.h"
#include "MultiplyOperator.h"

Operator* Factory::getOperator(std::string operators, float A, float B)
{
    switch (operators) {
        case "+":
            return new AddOperator(A, B);
        case "-":
            return new CutOperator(A, B);
        case "*":
            return new MultiplyOperator(A, B);
            
        default:
            break;
    }
}
