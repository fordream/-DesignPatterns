//
//  StrategyRetrunMoney.cpp
//  Strategy
//
//  Created by Yun on 14-8-27.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include "StrategyRetrunMoney.h"

StrategyRetrunMoney::StrategyRetrunMoney(float critical)
{
    this->_critical = critical;
}

float StrategyRetrunMoney::getAllPrice()
{
    return (this->_price - this->_critical);
}
