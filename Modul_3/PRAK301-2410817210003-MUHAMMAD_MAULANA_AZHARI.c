#include <stdio.h>

int main(){
    int a, b, c, container;
    scanf("%d %d %d", &a, &b, &c);

   if(a > b){
    container = a;
    a = b;
    b = container;
   }

   if(a > c){
    container = a;
    a = c;
    c = container;
   }

   if(b > c){
    container = b;
    b = c;
    c = container;
   }

    printf("%d %d %d", a, b, c);
    return 0;
}