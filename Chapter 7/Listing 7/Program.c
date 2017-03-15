//
//  Program.c
//  Listings 7 and 8
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

void modifyArray(int b[], int size);
void modifyElement(int e);

int main(void) {
    
    int i, a[5] = {0,1,2,3,4};
    
    printf("-- Effects of passing entire values of the original array by reference:\n"
           "The values of the original array are:\n");
    
    for (i = 0; i < 5; ++i) {
        
        printf("%3d", a[i]);
    }
    
    modifyArray(a, 5);
    
    printf("\nThe values of the modified array are:\n");
    
    for (i = 0; i < 5; ++i) {
        
        printf("%3d", a[i]);
    }
    
    printf("\n-- Effects of passing array element "
           "by value:\nThe value of a[3] is %d\n",
           a[3]);
    
    modifyElement(a[3]);
    
    printf("The value of a[3] is %d\n", a[3]);
    
    return 0;
}

void modifyArray(int b[], int size) {
    
    int j;
    
    for (j = 0; j < size; ++j) {
        
        b[j] *= 2;
    }
}

void modifyElement(int e) {
    
    printf("Value in modifyElement is %d\n" ,e *= 2);
}
