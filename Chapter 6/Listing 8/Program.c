//
//  Program.c
//  Listing 8
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int a[12] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int i; // counter
    int total = 0; // sum of array
    
    for (i = 0; i < 12; ++i) {
        
        total += a[i];
    }
    
    printf("Total of array element values is %d\n", total);

    return 0;
}
