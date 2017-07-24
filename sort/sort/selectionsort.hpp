//
//  selectionsort.hpp
//  sort
//
//  Created by 黄易 on 2017/7/23.
//  Copyright © 2017年 黄易. All rights reserved.
//

#ifndef selectionsort_hpp
#define selectionsort_hpp


#include <algorithm>
#include <stdio.h>

using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
                minindex=j;
        }
        swap(arr[i],arr[minindex]);
    }
}



#endif /* selectionsort_hpp */
