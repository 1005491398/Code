//
//  Controller.hpp
//  TestCommponent
//
//  Created by CT on 11/25/15.
//  Copyright © 2015 CT. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <stdio.h>
#include <iostream>
#include "Singleton.hpp"

class Controller
{
public:
    void start();

protected:
    friend class Singleton<Controller>;
private:
    Controller(void);
    ~Controller();
};

#endif /* Controller_hpp */
