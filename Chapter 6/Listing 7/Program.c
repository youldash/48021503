//
//  Program.c
//  Listing 7
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int n[10]; //Declaration: n is an array of 10 integers
    int i, j;
    
    // Initialize elements of array n
    for (i = 0; i < 10; i++) {
        
        n[i] = i + 100; // set element at location i to i + 100
    }
    
    // output each array element's value
    
    for (j = 0; j < 10; j++ ) {
        
        printf("Element[%d] = %d\n", j, n[j]);
    }

    return 0;
}
