#include <stdio.h>
#define PI 3.14159
void func3 (){
int num;
printf("please enter the number : ");
scanf("%d",&num); /* to store the value from the user*/
if (num < 0) { /*use if statment to check the number*/
    printf("the number is negative");
}
else if (num > 0){
    printf("the number is positive");
}
else {
    printf("the number is zero");
}
}
void func6 (){
float rad;
float result;
printf("please enter the radius of the circle : ");
scanf("%f",&rad);
result = 2*rad*22/7 ; //to calculate the circumference
printf("the circumference of the circle is : %f",result);
}
void func5 (){
    int num;
    int factorial = 1 ;
    printf("enter the number : ");
    scanf("%d",&num);
    while (num >= 1)
    {
     factorial *= num; //to make the loop active
     num-- ;
    }
printf("the factorial is : %d",factorial);


}
void func2 (){
float num1,num2 ;
float result = 0 ;
char x;
printf("what the process do u want ? (+,-,/,*) "); //need to know the process
scanf("%c",&x);
printf("enter the first number : ");
scanf("%f",&num1);
printf("enter the second number : ");
scanf("%f",&num2);
// now i store the numbers from the user
if (x == '+'){
    result= num1+num2 ;
    printf("the result = %.2f",result);
}
else if (x == '-'){
    result= num1-num2 ;
    printf("the result = %.2f",result);
}
else if (x == '*'){
    result= num1*num2 ;
    printf("the result = %.2f",result);}
else if (x == '/'){
        if (num2 == 0){
            printf("error bro u division by zero"); // must handle this error because he cannot make this process
        }
        else {
            result= num1/num2 ;
            printf("the result = %.3f",result);} // use %0.3f because i want 3 number after the decimal point
        }

}
void func4 (){
    int A,B ;
printf("please enter the first num : ");
scanf("%d",&A);
printf("please enter the second num : ");
scanf("%d",&B);
for (;A<=B;A++){
    printf("%9d",A); //to separate between the numbers i use %5d
}
}
void main (){
int X = 5;
float Y = 3.14;
char Z = 'S';
printf("Integer value: %d\n", X); // use %d because it is integer
printf("Floating value: %.2f\n", Y); // here use %f because it has a decimal number
printf("Character value: %c\n", Z); // here i use %c because it is a character
}
void func7(){
int num,i=2 ;
int prime =0;
printf("enter the number : ");
scanf("%d",&num);
while (num%i!=0){
if (num/i==1){
prime = 1;//the prime number can divide by itself or one
}
    i++;
}
if (prime == 1){
printf("the number %d is prime",num);
}
else {
printf("the number %d is not prime",num);
}
}
