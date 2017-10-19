//
//  递归.cpp
//  DS&A(book)
//
//  Created by Rey Ren on 2017/10/19.
//  Copyright © 2017年 whoami. All rights reserved.
//

/*
 假设一个正整数n, 把每个数字打印出来
 */

#include "iostream"
using namespace std;


void printOut(int n)
{
    if (n >=10) {
        printOut(n / 10);
    }
    printf("%d\n", n % 10);
    
}
