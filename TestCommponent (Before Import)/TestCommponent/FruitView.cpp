//
//  FruitView.cpp
//  TestCommponent
//
//  Created by CT on 11/25/15.
//  Copyright © 2015 CT. All rights reserved.
//

#include "FruitView.hpp"
#include "CommponentManager.hpp"

FruitView::FruitView()
{
    GetCommponent<FruitModel*>("Fruitmodel")->sayHello();
}

FruitView::~FruitView()
{
	
}