//
//  main.c
//  SwitchStatement
//
//  Created by Mustafa Youldash on 8/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    char grade;
    scanf("%c", &grade);
    
    switch (grade) {
            
        case 'A' : printf("Excellent!\n");
            break;
        case 'B' : printf("Well done\n");
            break;
        case 'C' : printf("You passed\n");
            break;
        case 'D' : printf("Better try again\n");
            break;
        default : printf("Invalid grade\n");
    }
    
    return 0;
}
