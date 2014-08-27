//
//  Context.cpp
//  Strategy
//
//  Created by Yun on 14-8-27.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include "Context.h"
#include "StrategyDiscount.h"
#include "StrategyRetrunMoney.h"

Context::Context(int witchStrategy)
{
    switch (witchStrategy) {
        case 1:
            this->_strategy = new StrategyDiscount(0.6);
            break;
        case 2:
            this->_strategy = new StrategyRetrunMoney(200.00);
            break;
        default:
            break;
    }
    this->_witchst = witchStrategy;
}

float Context::getAllPrice()
{
    return this->_strategy->getAllPrice();
}

void Context::addGoods(float price, float count)
{
    this->_strategy->addGoods(price, count);
}
