#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("----- [oh jaesik]]   [2022040014] ------ \n");
printf("Size of char: %ld byte\n",sizeof(charType)); // char type 에 할당된 byte 수
printf("Size of int: %ld bytes\n",sizeof(integerType)); // integer type 에 할당된 byte 수
printf("Size of float: %ld bytes\n",sizeof(floatType)); // float type 에 할당된 byte 수
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // double type 에 할당된 byte 수
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); // char라는 자료형에 할당된 byte 수
printf("Size of int: %ld bytes\n",sizeof(int)); // int라는 자료형에 할당된 byte 수
printf("Size of float: %ld bytes\n",sizeof(float)); // float라는 자료형에 할당된 byte 수
printf("Size of double: %ld bytes\n",sizeof(double)); // double라는 자료형에 할당된 byte 수
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*)); // char라는 자료형을 가르키는 포인터에 할당된 byte 수
printf("Size of int*: %ld bytes\n",sizeof(int*)); // int라는 자료형을 가르키는 포인터에 할당된 byte 수
printf("Size of float*: %ld bytes\n",sizeof(float*)); // float라는 자료형을 가르키는 포인터에 할당된 byte 수
printf("Size of double*: %ld bytes\n",sizeof(double*)); // double라는 자료형을 가르키는 포인터에 할당된 byte 수
return 0;
}