// Online C compiler to run C program online
#include <stdio.h>
int rec(int n){
    if (n<2){
        return 1;
    }
    
    return n*rec(n-1);
}
int main() {
    // Write C code here
    printf("Hello world\n\t%d",rec(6));

    return 0;
}