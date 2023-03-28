/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW7.3.cpp
*/
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
bool is_Square(int n)
{    
    for (int i = 0; i*i <= n; i++)
        if (i*i==n) return true;
    return false;
}
 
void is_Square(int n, bool&k)
{    
    for (int i = 0; i*i <= n; i++)
        if (i*i==n) {k=true;return;}
    k=false;
}
 
void is_Square(int n, bool*k)
{    
    for (int i = 0; i*i <= n; i++)
        if (i*i==n) {*k=true;return;}
    *k=false;
}
 
int main()
{
    bool k;
    int num1, num2, num3, count=0;
    printf("Enter numbers: ");
    printf("\n"); 
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(is_Square(num1)) count++;
    if(is_Square(num2)) count++;
    if(is_Square(num3)) count++;
    
    printf("Result 1: ");  
    printf("%3d", count);
    printf("\n");    
    
    count=0;
    is_Square(num1,k); if(k) count++;
    is_Square(num2,k); if(k) count++;
    is_Square(num3,k); if(k) count++;
    
    printf("Result 2: ");  
    printf("%3d", count);
    printf("\n");    
    
    count=0;
    is_Square(num1,&k); if(k) count++;
    is_Square(num2,&k); if(k) count++;
    is_Square(num3,&k); if(k) count++;
    
    printf("Result 3: ");  
    printf("%3d", count);
    printf("\n");    

return 0;
}