//
//  Model.cpp
//  TestCommponent
//
//  Created by CT on 11/25/15.
//  Copyright © 2015 CT. All rights reserved.
//

#include "Model.hpp"

Model::Model()
:Commponent("Model")
{
    init();
}

Model::~Model()
{
	
}

void Model::init()
{
    _fruit = make_shared<FruitModel>();
}