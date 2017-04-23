//
//  main.cpp
//  essentialtraining
//
//  Created by Jivan Flores on 4/10/17.
//  Copyright © 2017 Jivan Flores. All rights reserved.
//

#include <iostream>

using std::cout;
using std::cin;

void function () {
    puts("this is function()");
}

int main () {
    puts("this is main()");
    void (*fp)() = function;
    (*fp)();
    return 0;
}



