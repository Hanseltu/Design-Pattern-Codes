//
//  Product.h
//  Factory pattern
//
//  Created by tuhaoxin on 2018/8/26.
//  Copyright © 2018 dlut. All rights reserved.
//

#ifndef Product_h
#define Product_h

class Product {
    
public:
    virtual ~Product() = 0;
    
protected:
    Product();
    
private:
    
};

class ConcreteProduct:public Product {
    
public:
    ~ConcreteProduct();
    ConcreteProduct();
    
protected:
    
private:
    
};

#endif /* Product_h */
