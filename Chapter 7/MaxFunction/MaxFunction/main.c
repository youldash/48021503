//
//  main.c
//  MaxFunction
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int max(int num1, int num2);// function declaration

int main(int argc, const char * argv[]) {
    
    // insert code here...
    int a = 100, b=200, ret;
    ret = max(a, b); // calling a function to get max value
    printf( "Max value is : %d\n", ret );

    return 0;
}

int max(int num1, int num2) //function definition
{  int result;
    if (num1 > num2){
        result = num1;}
    else{
        result = num2;}
    
    return result;
}

