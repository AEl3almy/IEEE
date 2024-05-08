#include <stdio.h>
int function (i,n){
int res ;
res = i%n;
if (res == 0){
    printf("%d is divisible by %d",i,n);
}
else {
    printf("%d is not divisible by %d",i,n);

}
}
int f1(){
int x,y;
printf("please enter the two numbers :\n");
scanf("%d%d",&x,&y);
function(x,y);
}
float avg(int a[], int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += a[i];
    }
    return (float)sum / size;
}
int f2(){
    int i = 5;
    int numbers[i];
    int n;
    printf("enter the %d numbers : \n", i);
    for (n=0; n<i; n++){
        scanf("%d",&numbers[n]);
    }
    float average = avg(numbers, i);
    printf("Average: %.2f\n", average);
    return 0;
}
int f3 (){
int i=5;
int arr[i];
int n=0;
while (n<i){
printf("please enter the [%d] number : ",n+1);
scanf("%d",&arr[n]);
n++;
}
for (n=0;n<i;n++){
    printf("%8d",arr[n]);
}
}
int f4 (){
int arr [3][3];
int x=0;
int y=0;
while(x<3){
y=0; //to reset the value of y and enter the loop again
while(y<3){
printf("please enter the [%d,%d] number : ",x+1,y+1);
scanf("%d",&arr[x][y]);
y++;
}
x++;
}
for (x = 0; x < 3; x++) {
    for (y = 0; y < 3; y++) {
        printf("%d ", arr[x][y]);
    }
    printf("\n");
}
}
void f6(int a[], int s) {
    int z = 0;
    printf("Original array: ");
    while (z < s) {
        printf("%4d", a[z]);
        z++;
    }
    printf("\n");

    z = 0;
    while (z < s) {
        int num = a[z];
        int reverse = 0;
        int rev = num;
        while (rev != 0) {
            int reminder = rev % 10;
            reverse = reverse * 10 + reminder;
            rev /= 10;
        }
        if (num == reverse) {
            printf("Number %d is a palindrome.\n", num);
        } else {
            printf("Number %d is not a palindrome.\n", num);
        }
        z++;
    }
}
int f66() {
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];
    int x;
    for (x = 0; x < n; x++) {
        printf("Enter the [%d] number: ", x + 1);
        scanf("%d", &arr[x]);
    }

    f6(arr, n);
    return 0;
}
int f7() {
    int n;
    printf("Enter the size of the square array: ");
    scanf("%d", &n);

    int arr[n][n];
    int i, j,z;

    // Input elements of the array
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element (arr[%d][%d]): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
printf("The array is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Calculate sum of each row and column in the array
    int row_sums[n];
    int col_sums[n];
    for (i = 0; i < n; i++) {
        row_sums[i] = 0;
        col_sums[i] = 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            row_sums[i] += arr[i][j];
            col_sums[j] += arr[i][j];
        }
    }

    // Print the sum of each row and column in the array
    printf("Row sums: ");
    for (i = 0; i < n; i++) {
        printf("%d ", row_sums[i]);
    }
    printf("\n");

    printf("Column sums: ");
    for (i = 0; i < n; i++) {
        printf("%d ", col_sums[i]);
    }
    printf("\n");
// Calculate sum of the main and secondary diagonals
    int main_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;
    for (i = 0; i < n; i++) {
        main_diagonal_sum += arr[i][i];
        secondary_diagonal_sum += arr[i][n - i - 1];
    }
    printf("Main diagonal sum: %d\n", main_diagonal_sum);
    printf("Secondary diagonal sum: %d\n", secondary_diagonal_sum);

if (n == 3 && main_diagonal_sum == 15&& secondary_diagonal_sum == 15) {
        int all_rows_correct = 1;
        int all_cols_correct = 1;
        for (i = 0; i < n; i++) {
            if (row_sums[i] != 15) {
                all_rows_correct = 0;
                break;
            }
        }
        for (i = 0; i < n; i++) {
            if (col_sums[i] != 15) {
                all_cols_correct = 0;
                break;
            }
        }
        if (all_rows_correct && all_cols_correct) {
            printf("this is a magic square \n");
        }
        else {
                printf("this is not a magic square \n");}
    }
if (n == 4 && main_diagonal_sum == 34&& secondary_diagonal_sum == 34) {
        int all_rows_correct = 1;
        int all_cols_correct = 1;
        for (i = 0; i < n; i++) {
            if (row_sums[i] != 34) {
                all_rows_correct = 0;
                break;
            }
        }
        for (i = 0; i < n; i++) {
            if (col_sums[i] != 34) {
                all_cols_correct = 0;
                break;
            }
        }
        if (all_rows_correct && all_cols_correct) {
            printf("this is a magic square \n");
        }
        else {
                printf("this is not a magic square \n");}

    }

    return 0;
}
#include<string.h>
int main(){
    char name []="hellooo";
    int n ;
    int vowels =0 ;
    int consonants = 0;
    for (n=0;n<strlen(name);n++) // use strlen to know the length of the name
    {
    char ch = name[n];
     if (ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'){
       vowels++;
    }
    else {
        consonants++;
    }
    }
    printf("Number of vowels %d \nNumber of consonants %d",vowels,consonants) ;
}
