//
//  main.cpp
//  essentialtraining
//
//  Created by Jivan Flores on 4/10/17.
//  Copyright © 2017 Jivan Flores. All rights reserved.
//

#include <iostream>
#include "header.h"

#define MIN(a, b) (a < b ? "x is less than y" : "y is less than x")
	
using namespace std;


int main () {
    
    int x = 8;
    int y = 10;
    cout << MIN(x, y) << endl;
    return 0;
}
