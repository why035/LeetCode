/*
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果 target 存在返回下标，否则返回 -1。
你必须编写一个具有 O(log n) 时间复杂度的算法。
示例 1:
输入: nums = [-1,0,3,5,9,12], target = 9
输出: 4
解释: 9 出现在 nums 中并且下标为 4
示例 2:
输入: nums = [-1,0,3,5,9,12], target = 2
输出: -1
解释: 2 不存在 nums 中因此返回 -1
*/
#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left=0;
    int right=numsSize-1;
    while(left<=right){
        int middle=left+(right-left)/2;
        if(nums[middle]<target){
            left=middle+1;
        }else if(nums[middle]>target){
            right=middle-1;
        }else{
            return middle;
        }
    }
    return -1;
}

int main()
{
    // 测试数组
    int arr[] = {-1,0,3,5,9,12};
    int len = sizeof(arr)/sizeof(arr[0]);
    int aim;
    printf("请输入要查找的数字：");
    scanf("%d",&aim);
    
    int res = search(arr, len, aim);
    printf("下标：%d\n",res);
    return 0;
}
