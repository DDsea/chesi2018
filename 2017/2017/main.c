//
//  main.c
//  2017
//
//  Created by dt on 2017/11/11.
//  Copyright © 2017年 dt. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n == 0 || n == 1) {
        
        
        return  1;
    }
    
    return fib(n-1) + fib(n -2);
}

void func2(int n) {
   // printf("%d\n",n);
    if (n>0) {
        func2(n-1);
    }
   printf("%d\n",n);
}


int main(int argc, const char * argv[]) {
    
//    int  num1 =0;
//    int  num2 =0;
//    int  gcd = 0;
//    int  lcm = 0;
//
//    printf("请输入两个数:\n");
//    scanf("%d",&num1);
//    scanf("%d",&num2);
//    int product = num1*num2;
//
//    if (num1 > num2) {
//        int temp = num1;
//
//        num1 = num2;
//
//        num2 = temp;
//    }
//
//    for (int i =num1; i>0; i--) {
//        if (num1%i==0 && num2%i == 0) {
//            gcd = i;
//            break;
//        }
//    }
//
//    lcm = product/gcd;
//    printf("gcd = %d\n",gcd);
//    printf("lcm = %d\n",lcm);
//
//
    
//    int unit = 0;
//    int decade = 0;
//    int hundred = 0;
//    int count = 0;
//    for (int i =100; i<1000; i++) {
//        unit = i%10;
//        decade = (i%100)/10;
//        hundred=i/100;
//        if (i==(hundred*hundred*hundred+decade*decade*decade+unit*unit*unit)) {
//            printf("%d\n",i);
//            count++;
//        }
//    }
//
//    printf("count = %d\n",count);
    
    
    
    
    
    
    
    return 0;
}




