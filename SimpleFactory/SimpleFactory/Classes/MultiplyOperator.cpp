//
//  MultiplyOperator.cpp
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include "MultiplyOperator.h"

MultiplyOperator::MultiplyOperator(float oprandA, float oprandB):Operator(oprandA, oprandB)
{
}

float MultiplyOperator::getResault()
{
    return oprandA * oprandB;
}