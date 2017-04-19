//
//  main.cpp
//  essentialtraining
//
//  Created by Jivan Flores on 4/10/17.
//  Copyright © 2017 Jivan Flores. All rights reserved.
//

#include <iostream>

using namespace std;
int number = 1;
void myFunction(int &number) {
    ++(number);
}

int main () {
    printf("Value of number: %d\n", number);
    myFunction(number);
    printf("Value of number in myFunction: %d\n", number);
    
}


