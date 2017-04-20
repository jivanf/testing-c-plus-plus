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
void myFunction() {
    static int i = 2;
    i = 45;
    cout << "i is: " << ++i << endl;
    ++i;
    cout << "i is: " << ++i << endl;
}

int main () {
    myFunction();
    myFunction();
    myFunction();
}


