#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    for (int i=2;n>=i;i++){
         if (n%i==0)
         c++;
    }
    if (c==1)
    printf("%d",n);
    else
    printf("%d is not",n);

}