//
//  StrategyDiscount.h
//  Strategy
//
//  Created by Yun on 14-8-27.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#ifndef __Strategy__StrategyDiscount__
#define __Strategy__StrategyDiscount__

#include <iostream>
#include "Strategy.h"
using namespace std;

class StrategyDiscount:public Strategy
{
private:
    float _rebate;
public:
    StrategyDiscount(float rebate);
    void addGoods(float price, int count);
};

#endif /* defined(__Strategy__StrategyDiscount__) */
