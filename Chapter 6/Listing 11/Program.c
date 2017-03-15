//
//  Program.c
//  Listing 11
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int a[2][3] = {
        
        {1,2},
        {4,5,6}
    };
    
    int i, j;
    
    printf("Values in a are: \n");
    
    for (i = 0; i <= 1; ++i) {
        
        for (j = 0; j <= 2; ++j) {
            
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        } 
    }
    
    return 0;
}
