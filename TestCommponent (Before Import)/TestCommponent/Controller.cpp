//
//  Controller.cpp
//  TestCommponent
//
//  Created by CT on 11/25/15.
//  Copyright © 2015 CT. All rights reserved.
//

#include "Controller.hpp"
#include "Model.hpp"
#include "View.hpp"

Controller::Controller()
{

}

Controller::~Controller()
{
	
}

void Controller::start()
{
    auto model = make_shared<Model>();
    auto view = make_shared<View>();
}