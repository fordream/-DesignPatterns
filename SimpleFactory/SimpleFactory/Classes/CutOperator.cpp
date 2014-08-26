//
//  CutOperator.cpp
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include "CutOperator.h"

CutOperator::CutOperator(float oprandA, float oprandB):Operator(oprandA, oprandB)
{
}

float CutOperator::getResault()
{
    return oprandA - oprandB;
}