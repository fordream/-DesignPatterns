//
//  Factory.h
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#ifndef __SimpleFactory__Factory__
#define __SimpleFactory__Factory__

#include <iostream>
#include "Operator.h"

class Factory
{
public:
    Operator* getOperator(std::string operators, float A, float B);
};

#endif /* defined(__SimpleFactory__Factory__) */
