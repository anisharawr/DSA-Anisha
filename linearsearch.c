#include<stdio.h>
int linearsearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key)
        {
        printf("The element %d is found at index %d\n",key,i);
        }
        else {
            printf("The %d is not found",key);
        }
    }
    return 0;
}
void main(){
    int a[10],i,n,key;
    printf("enter the number of elements of array");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the number to search");
    scanf("%d",&key);
    linearsearch(a,n,key);
}
