//
//  main.c
//  WhileRepetition
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // insert code here...
    int counter = 1; // initialize counter
    do {
        
        printf("%d \t", counter); // display counter
    } while(++counter <= 10); // end do...while

    printf("\n");
    return 0;
}
