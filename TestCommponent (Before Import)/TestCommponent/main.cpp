//
//  main.cpp
//  TestCommponent
//
//  Created by CT on 11/24/15.
//  Copyright © 2015 CT. All rights reserved.
//

#include <iostream>
#include "Controller.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Singleton<Controller>::getInstance().start();
    return 0;
}
