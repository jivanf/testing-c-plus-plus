//
//  main.cpp
//  essentialtraining
//
//  Created by Jivan Flores on 4/10/17.
//  Copyright © 2017 Jivan Flores. All rights reserved.
//

#include <iostream>
#include <cstdarg>
using std::cout;
using std::cin;


double average (const int count, ...) {
    va_list ap;
    int i;
    double total = 0.0;
    
    va_start(ap, count);
    for(i = 0; i < count; ++i) {
        total += va_arg(ap, double);
    }
    va_end(ap);
    return total / count;}

int main () {
        printf("Average: %lf", average(5, 25.0, 35.7, 50.1, 127.6, 75.0));
        return 0;
    }
     



