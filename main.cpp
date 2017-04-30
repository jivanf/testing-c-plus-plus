//
//  main.cpp
//  essentialtraining
//
//  Created by Jivan Flores on 4/10/17.
//  Copyright © 2017 Jivan Flores. All rights reserved.
//

#include <iostream>
#include <cstdarg>
using namespace std;
using std::cin;


void myFunction() {
    cout << "This will make the function loop" << endl;
    myFunction();
}

    
int main () {
    myFunction();
    return 0;
}
