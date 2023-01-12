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
    int u,i;
    // printf("Hello world\n\t%f",rec(10));
    scanf("%d",&u);
    for(i=1;i<=u;printf("\n\t%d \t%f",i-1,rec(i++)));

    return 0;
}