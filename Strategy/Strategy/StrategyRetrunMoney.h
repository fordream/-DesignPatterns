//
//  StrategyRetrunMoney.h
//  Strategy
//
//  Created by Yun on 14-8-27.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#ifndef __Strategy__StrategyRetrunMoney__
#define __Strategy__StrategyRetrunMoney__

#include <iostream>
#include "Strategy.h"
using namespace std;

class StrategyRetrunMoney:public Strategy
{
private:
    float _critical;//临界点价格
public:
    StrategyRetrunMoney(float critical);
    float getAllPrice();
};

#endif /* defined(__Strategy__StrategyRetrunMoney__) */
