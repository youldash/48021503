//
//  main.c
//  ScanfExample
//
//  Created by Mustafa Youldash on 8/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // insert code here...
    char ch, str[100];
    printf("Enter any character \n");
    scanf("%c", &ch);
    printf("Entered character is %c \n", ch);
    printf("Enter any string ( upto 100 character ) \n");
    scanf("%s", str);
    printf("Entered string is %s \n", str);

    return 0;
}
