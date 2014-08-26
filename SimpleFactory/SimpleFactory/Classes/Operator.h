//
//  Operator.h
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#ifndef __SimpleFactory__Operator__
#define __SimpleFactory__Operator__

#include <iostream>

class Operator
{
protected:
    float oprandA, oprandB;
    float resault;
public:
    Operator(float, float);
    float getResault();
};

#endif /* defined(__SimpleFactory__Operator__) */
