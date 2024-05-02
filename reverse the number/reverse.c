#include<stdio.h>
int main () {
    int a,r,n,rev=0;
    printf("Enter the number you want to reverse :");
    scanf("%d",&a);

    while(a!=0){
        r=a%10;
        rev= rev*10 + r;
        a=a/10;
    }
    printf("The reversed number is %d",rev);
    return 0;
}