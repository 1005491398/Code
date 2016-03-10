//
//  FruitModel.hpp
//  TestCommponent
//
//  Created by CT on 11/25/15.
//  Copyright © 2015 CT. All rights reserved.
//

#ifndef FruitModel_hpp
#define FruitModel_hpp

#include <stdio.h>
#include <iostream>
#include "Commponent.hpp"

class FruitModel:public Commponent
{
public:
	FruitModel(void);
	~FruitModel();
    
    void sayHello()
    {
        std::cout<<"ct said hello"<<endl;
    }
	/* data */
protected:
	
private:

};

#endif /* FruitModel_hpp */
