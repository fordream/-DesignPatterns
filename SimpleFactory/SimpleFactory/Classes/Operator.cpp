//
//  Operator.cpp
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include "Operator.h"

Operator::Operator(float oprandA, float oprandB)
{
    oprandA = oprandA;
    oprandB = oprandB;
}

float Operator::getResault()
{
    return resault;
}