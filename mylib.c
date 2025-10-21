#include<stdio.h>
#include "mylib.h"

int reverseDigits(int num){
    int r =0;
    while(num!=0){
        int d = num%10;
        r = r*10 + d;
        num = num/10;
    }
    return r;
}

int isArmstrong(int num){
    int o = num;
    int sum = 0, temp = num, digit = 0;

    while(temp>0){
        digit++;
        temp = temp/10;
    }

    temp = num;

    while(temp>0){
        int d = temp%10;
        int power = 1;
        for(int i =0;i<=digit;i++){
            power = power * digit;
        }
        sum = sum + power;
        num = num/10;
    }
    return(sum == o);
}

int isAdams(int num){
    int s = num * num;
    int r = reverseDigits(num);
    int sr = r * r ;
    return reverseDigits(s) == sr;
}

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i = 2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int isPrimePalindrome(int num){
    return isPrime(num) && (num == reverseDigits(num));
}