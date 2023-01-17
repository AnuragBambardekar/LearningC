//First program in C

#include <stdio.h>
int main(){
    printf("Hello World!");
    return 0;
}

/**
 * Task:-
 * 1. Comment out the #include <stdio.h>
 * PROBLEMS:
 * incompatible implicit declaration of built-in function 'printf' [-Wbuiltin-declaration-mismatch]
 * 
 * 2. Remove the semicolon after printf 
 * PROBLEMS: 
 * expected ';' before 'return'
 * expected a ';'
 * 
 * 3. Remove int return type from main
 * PROBLEMS: return type defaults to 'int' [-Wimplicit-int]
 * 
 * 4. Instead of 0 in return write any integer value you want
 * NO_PROBLEMS:
 * 
 * 5. Replace 0 with some character. Characters are usually written with single quotes.
 * For example you may write return 'a'
 * [Thread 24888.0x59c4 exited with code 97]
 * 
 * 6. Remove semicolon; after return
 * PROBLEM: expected ';' before '}' token
 * expected a ';'
*/