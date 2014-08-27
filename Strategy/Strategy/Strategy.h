//
//  Strategy.h
//  Strategy
//
//  Created by Yun on 14-8-27.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#ifndef __Strategy__Strategy__
#define __Strategy__Strategy__

#include <iostream>

using namespace std;

class Strategy
{
protected:
    float _price;
    int _count;
public:
    Strategy();
    float getAllPrice();
    virtual void addGoods(float price, int count);
};

#endif /* defined(__Strategy__Strategy__) */
