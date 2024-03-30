#include <stdio.h>
#include <stdbool.h>

int main(){

    int age ;

    printf("enter your age..");
    scanf("%d",&age);

    //for conditional we can use this way.
    
    //if (age>=18) {

        //printf("you are adult");
        //printf("\n your age:%d",age);
        
    //}
    //else{

        //printf("you are under age!!!!");
    //}    
    
    //or we can use this way.
    
    (age>=18) ? printf("you are an adult."), printf("\n youre agge: %d", age) : printf("you are under age !!!");
    
    
    return 0;



}