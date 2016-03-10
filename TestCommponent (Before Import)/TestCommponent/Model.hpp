//
//  Model.hpp
//  TestCommponent
//
//  Created by CT on 11/25/15.
//  Copyright © 2015 CT. All rights reserved.
//

#ifndef Model_hpp
#define Model_hpp

#include <stdio.h>
#include <iostream>
#include "Commponent.hpp"
#include "FruitModel.hpp"

class Model:public Commponent
{
public:
	Model(void);
	~Model();
    
	/* data */
protected:
    
private:
    shared_ptr<FruitModel> _fruit;
    
    void init();
};

#endif /* Model_hpp */
