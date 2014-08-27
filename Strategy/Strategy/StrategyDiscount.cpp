//
//  StrategyDiscount.cpp
//  Strategy
//
//  Created by Yun on 14-8-27.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include "StrategyDiscount.h"

StrategyDiscount::StrategyDiscount(float rebate)
{
    this -> _rebate = rebate;
}

void StrategyDiscount::addGoods(float price, int count)
{
    this->_price += this->_rebate * price * count;
    this->_count += count;
}