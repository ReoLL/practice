#include <stdio.h>

void a(int arr[]);
void b(int a);
int main()
{
    int arr[4] = {0,1,2,3};
    
    for(int i=0; i<4; i++)
        printf("arr[i]: %d, arr+i: %p, &arr[i]: %p \n",arr[i],arr+i,&arr[i]);
    
    printf("func: a \n");
    a(arr);
    
    printf("func: b \n");
    
    for(int i=0; i<4; i++)
        b(arr[i]);
    
    return 0;
}
                  
void a(int arr[])
{
    for(int i=0; i<4; i++)
        printf("arr[i]: %d, arr+i: %p, &arr[i]: %p \n",arr[i],arr+i,&arr[i]);
        
        return;
}

void b(int a)
{
    printf("arr[i]=>a: %d, &a: %p \n",a,&a);
    return;
}
