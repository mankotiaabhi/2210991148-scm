#include<stdio.h>
int selectionsort(int *a,int n ){
    int minindex;
        for (int i=0;n>i;i++){
            minindex=i;
            for (int j=i;n>j;j++){
                if (a[j]<a[minindex]){
                    minindex=j;
                    
                }

            }
            int temp=a[i];
            a[i]=a[minindex];
            a[minindex]=temp;

        }
    }
int array(int *a,int n){
    for (int i=0;n>i;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[]={7,6,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    selectionsort(a,n);
    array(a,n);
    
}