#include <stdio.h>
int main () {
    int arr[]={5,10,15,20,25};
    int*ptr=arr,
    printf("Ptr =%p,*Ptr =%d/n",ptr,*ptr);
    ptr++;
    printf("after ptr++:ptr=%d\n",ptr,*ptr);
    ptr+=2;//move 2 steps
    printf("after ptr +=2:ptr=%p,*ptr=%d\n",ptr,*ptr);
    return 0;
}
