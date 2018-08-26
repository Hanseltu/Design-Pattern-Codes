//
//  main.cpp
//  Factory pattern
//
//  Created by tuhaoxin on 2018/8/26.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>
#include "Factory.hpp"
#include "Product.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Factory* fac = new ConcreteFactory();
    
    Product* p = fac->CreateProduct();
    return 0;
}
