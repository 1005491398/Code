//
//  View.hpp
//  TestCommponent
//
//  Created by CT on 11/25/15.
//  Copyright © 2015 CT. All rights reserved.
//

#ifndef View_hpp
#define View_hpp

#include <stdio.h>
#include <iostream>
#include "FruitView.hpp"

class View
{
public:
	View(void);
	~View();

	/* data */
protected:
	
private:
    shared_ptr<FruitView> _fruitView;
    
    void init();
};

#endif /* View_hpp */
