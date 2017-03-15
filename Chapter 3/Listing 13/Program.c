//
//  Program.c
//  Listing 13
//
//  Created by Mustafa Youldash on 8/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    float radius, area;
    printf("\nEnter the radius of Circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("\nArea of Circle : %f\n", area);

    return 0;
}
