//
//  Program.c
//  Listing 15
//
//  Created by Mustafa Youldash on 8/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int c, a, b;
    c = 5, a=0, b=1;
    
    printf("c=%d\n", c );
    a= b + c++;
    
    printf("a=%d\n", a );
    printf("c=%d\n\n", c );
    
    c = 5, a=0,b=1;
    printf("c=%d\n", c );
    
    a= b + ++c;
    printf("a=%d\n", a );
    printf("c=%d\n", c );

    return 0;
}
