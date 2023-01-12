
// Online C compiler to run C program online
#include <stdio.h>
float rec(float n){
    if (n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    
    return rec(n-1)+rec(n-2);
}
int main() {
    // Write C code here
    printf("Hello world\n\t%f",rec(9));

    return 0;
}