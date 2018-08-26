//
//  Factory.hpp
//  Factory pattern
//
//  Created by tuhaoxin on 2018/8/26.
//  Copyright © 2018 dlut. All rights reserved.
//
#include <stdio.h>

#ifndef Factory_hpp
#define Factory_hpp

class Product;

class Factory {
    
public:
    virtual ~Factory() = 0;
    
    virtual Product* CreateProduct() = 0;
    
protected:
    Factory();
    
private:
    
};

class ConcreteFactory:public Factory {
    
public:
    ~ConcreteFactory();
    ConcreteFactory();
    
    Product* CreateProduct();
    
protected:
    
private:
    
};


#endif /* Factory_hpp */
