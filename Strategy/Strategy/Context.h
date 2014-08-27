//
//  Context.h
//  Strategy
//
//  Created by Yun on 14-8-27.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#ifndef __Strategy__Context__
#define __Strategy__Context__

#include <iostream>
#include "Strategy.h"
using namespace std;

class Context
{
private:
    Strategy* _strategy;
    int _witchst;
public:
    Context(int witchStrategy);
    float getAllPrice();
    void addGoods(float price, float count);
};

#endif /* defined(__Strategy__Context__) */
