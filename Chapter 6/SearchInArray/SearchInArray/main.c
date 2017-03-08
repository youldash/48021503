//
//  main.c
//  SearchInArray
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // insert code here...
    int T[10]={4,36,89,11,124,90,4,33,7,29}; // create array T
    int n; // counter
    int searchKey; // value to locate in array a
    int element= -1; // It holds location of searchKey or -1
    
    printf( "Enter integer search key: " );
    scanf( "%d", &searchKey );
    
    for ( n = 0; n < 10; n++ ) {
        if ( T[ n ] == searchKey ) {
            element=n; } }
    
    if ( element != -1 ) {
        printf( "Found value in element %d\n", element ); }
    else { printf( "Value not found\n" ); }

    return 0;
}
