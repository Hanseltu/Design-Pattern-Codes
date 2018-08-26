//
//  Factory.cpp
//  Factory pattern
//
//  Created by tuhaoxin on 2018/8/26.
//  Copyright © 2018 dlut. All rights reserved.
//

#include "Factory.hpp"
#include "Product.h"
#include <iostream>

using namespace std;

Factory::Factory(){
    
    
}

Factory::~Factory(){
    
}

ConcreteFactory::ConcreteFactory(){
    
    cout << "ConcreteFactory..." << endl;
}

ConcreteFactory::~ConcreteFactory(){
    
    
}
Product* ConcreteFactory::CreateProduct(){
    return new ConcreteProduct();
}
