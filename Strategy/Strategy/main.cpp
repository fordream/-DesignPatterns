//
//  main.cpp
//  Strategy
//
//  Created by Yun on 14-8-27.
//  Copyright (c) 2014年 Yun. All rights reserved.
//

#include <iostream>
#include "Context.h"
using namespace std;

int main(int argc, const char * argv[])
{
    
    // insert code here...
    Context* context = new Context(1);
    context->addGoods(3.5, 2);
    context->addGoods(1.5, 2);
    float price = context->getAllPrice();
    cout<<"price ->"<<price<<endl;
    return 0;
}

