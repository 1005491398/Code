//
//  View.cpp
//  TestCommponent
//
//  Created by CT on 11/25/15.
//  Copyright © 2015 CT. All rights reserved.
//

#include "View.hpp"

View::View()
{
    init();
}

View::~View()
{
	
}

void View::init()
{
    _fruitView = make_shared<FruitView>();
}