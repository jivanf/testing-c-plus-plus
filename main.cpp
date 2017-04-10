//
//  main.cpp
//  essentialtraining
//
//  Created by Jivan Flores on 4/10/17.
//  Copyright © 2017 Jivan Flores. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int x = 42;
    int y = 12;
    int *ip = &x    ;
    
    printf("The value of x is: %d\n", x);
    printf("The value of y is: %d\n", y);
    printf("The value of *ip is: %d\n", *ip);
    
    x = 34;
    y = 141;
    
    printf("The value of x is: %d\n", x);
    printf("The value of y is: %d\n", y);
    printf("The value of *ip is: %d\n", *ip);
    
    ip = &y;
    
    printf("The value of x is: %d\n", x);
    printf("The value of y is: %d\n", y);
    printf("The value of *ip is: %d\n", *ip);
    
    
    
    puts("Hello World");
    return 0;
}
