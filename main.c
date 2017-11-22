//
//  main.c
//  function5
//
//  Created by Eun Jae Lee on 22/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  No argumemt return value


#include <stdio.h>

int add();//void

int main() {
    int sum;
    sum = add();
    
    printf("Addition is %d \n",sum);
    getchar();
}

int add(){
    int a,b,add;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a,&b);
    add = a+b;
    return add;
}
