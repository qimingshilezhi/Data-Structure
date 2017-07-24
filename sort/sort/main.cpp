//
//  main.cpp
//  sort
//
//  Created by 黄易 on 2017/7/23.
//  Copyright © 2017年 黄易. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include "selectionsort.cpp"

using namespace std;


int main(int argc, const char * argv[]) {
    int a[10] = {1,3,5,7,9,2,4,6,8,10};
    selectionsort(a, 10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    return 0;
}

