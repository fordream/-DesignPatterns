//
//  MultiplyOperator.h
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#ifndef __SimpleFactory__MultiplyOperator__
#define __SimpleFactory__MultiplyOperator__

#include <iostream>
#include "Operator.h"

class MultiplyOperator : public Operator
{
public:
    MultiplyOperator(float, float);
    float getResault();
};

#endif /* defined(__SimpleFactory__MultiplyOperator__) */
