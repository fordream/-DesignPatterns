//
//  AddOperator.cpp
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include "AddOperator.h"

AddOperator::AddOperator(float oprandA, float oprandB):Operator(oprandA, oprandB)
{
}

float AddOperator::getResault()
{
    return oprandA + oprandB;
}
