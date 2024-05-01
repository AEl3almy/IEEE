#include<stdio.h>
int binary_search(int a[],int e ,int l,int r)
{
int mid = l+(r-l)/2;
if (l > r) // to make sure the value is not in array
    return -1;
if (a[mid] == e)
    return mid;
else if (a[mid] >e)
    return binary_search(a,e,l,mid-1);
else
    return binary_search(a,e,mid+1,r);

}
int f1 ()
{
int sorted_array []={1,2,3,4,5,6,7,8,9,10,11,12,13};
int index = binary_search(sorted_array,18,0,12);
printf("index of 18  = %d\n",index);
return 0;
}

void swapByValue(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("After swapByValue, x = %d, y = %d\n", a, b);
}

int f2() {
    int x = 10, y = 20;
    printf("Before swap, x = %d, y = %d\n", x, y);
    swapByValue(x,y);
    return 0;
}
void swapByReference(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("After swapByReference, x = %d, y = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;
    printf("Before swap, x = %d, y = %d\n", x, y);
    swapByReference(&x,&y);
    return 0;
}
