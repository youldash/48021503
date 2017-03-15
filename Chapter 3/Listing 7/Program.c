//
//  Program.c
//  Listing 7
//
//  Created by Mustafa Youldash on 8/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    char ch, str[100];
    printf("Enter any character \n");
    scanf("%c", &ch);
    printf("Entered character is %c \n", ch);
    printf("Enter any string ( upto 100 characters ) \n");
    scanf("%s", str);
    printf("Entered string is %s \n", str);

    return 0;
}
