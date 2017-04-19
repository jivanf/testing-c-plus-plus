//
//  main.cpp
//  essentialtraining
//
//  Created by Jivan Flores on 4/10/17.
//  Copyright © 2017 Jivan Flores. All rights reserved.
//

#include <iostream>

using namespace std;

int main () {
    
    char forString[] = "Using the for loop ";
    string rangeBasedString = "Using the range-based for loop";
    
    // normal for loop
    for(char * cp = forString; *cp; ++cp) {
        printf("element: %c\n", *cp);
    }
    
    // range-based for loop
    for(int i : rangeBasedString) {
        printf("element: %c\n", i);
    }
    
    return 0;
    
}
