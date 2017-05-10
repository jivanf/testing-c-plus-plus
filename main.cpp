//
//  main.cpp
//  essentialtraining
//
//  Created by Jivan Flores on 4/10/17.
//  Copyright © 2017 Jivan Flores. All rights reserved.
//

#include <iostream>
//#define NUMBER_DEFINED
#include "header.h"
	
using namespace std;


int main () {
    int number = NUMBER;
    
    if (number == 16) {
        puts("NUMBER macro is NOT defined");
    }
    
    else {
        puts("NUMBER macro is defined");
    
    }
    
    cout << "NUMBER macro is: " << NUMBER << endl;
    return 0;
}
