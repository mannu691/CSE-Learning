#include <stdio.h>
int factorial(int a){
    int sum=1;
    while(a>0){
        sum*=a;
        a--;
    }
    return sum;
}
int main (){
    int a=5;
    int sum=0;
    for (int i = 1; i <= a; i++)
    {  
        sum+=factorial(i-1);
    }
    printf("%d",sum);
    
    return 0;
}