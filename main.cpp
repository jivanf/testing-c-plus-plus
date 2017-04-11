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
    
    int x = 34;
    int y = 80;
    if(x < y) {
        puts("y is bigger than x");
    }
    
    else if (x == y){
        puts("x equals to y");
    }
    
    else {
        puts("x is bigger than y");
    }
    
    printf("the bigger is: %d\n", x > y ? x : y);
    
    return 0;
    
}
