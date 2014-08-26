//
//  CutOperator.h
//  SimpleFactory
//
//  Created by Yun on 14-8-26.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#ifndef __SimpleFactory__CutOperator__
#define __SimpleFactory__CutOperator__

#include <iostream>
#include "Operator.h"

class CutOperator : public Operator
{
public:
    CutOperator(float, float);
    float getResault();
};

#endif /* defined(__SimpleFactory__CutOperator__) */
