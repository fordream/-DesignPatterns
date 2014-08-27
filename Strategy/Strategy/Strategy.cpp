//
//  Strategy.cpp
//  Strategy
//
//  Created by Yun on 14-8-27.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include "Strategy.h"

Strategy::Strategy()
{
    this->_price = 0;
    this->_count = 0;
}

float Strategy::getAllPrice()
{
    return _price;
}
void Strategy::addGoods(float price, int count)
{
    this->_price += price * count;
    this->_count += count;
}
