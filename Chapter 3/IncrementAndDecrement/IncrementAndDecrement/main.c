//
//  main.c
//  IncrementAndDecrement
//
//  Created by Mustafa Youldash on 8/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // insert code here...
    int a = 21, b=10, c;
    c = a++;
    printf("Line 1 - Value of c is %d\n",c);
    c = a--;
    printf("Line 2 - Value of c is %d\n",c);

    return 0;
}
