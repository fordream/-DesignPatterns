//
//  AddOperator.h
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#ifndef __SimpleFactory__AddOperator__
#define __SimpleFactory__AddOperator__

#include <iostream>
#include "Operator.h"

class AddOperator : public Operator
{
public:
    AddOperator(float,float);
    float getResault();
};

#endif /* defined(__SimpleFactory__AddOperator__) */
