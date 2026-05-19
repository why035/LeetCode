#include<stdio.h>
 
int main() {
	int x;
	scanf("%d",&x);
    if (x==0 || x==1){
        return x;
    }
    int left=0;
    int right=x;
    int target=0;
    while(left<=right){
        long long mid=(left+right)/2;
        if (mid*mid<x){
            left=mid+1;
            target=(int)mid;
        }else if(mid*mid==x){
           target=mid;
           break;
        }else {
            right= mid-1;
        }
    }
    printf("%d",target); 
    return target;
}
