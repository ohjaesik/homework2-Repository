#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("----- [oh jaesik]]   [2022040014] ------ \n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // i에 할당된 값 출력
printf("address of i == %p\n", &i); // i의 주솟값 출력
printf("value of ptr == %p\n", ptr); // ptr에 할당된 값 출력
printf("address of ptr == %p\n", &ptr); // ptr의 주솟값 출력
ptr = &i; /* ptr is now holding the address of i */ //ptr에 i의 주솟값 할당
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); // i에 할당된 값 출력
printf("address of i == %p\n", &i); // i의 주솟값 출력
printf("value of ptr == %p\n", ptr); // ptr의 할당된 값 출력
printf("address of ptr == %p\n", &ptr); // ptr의 주솟값 출력
printf("value of *ptr == %d\n", *ptr); //ptr에 할당된 값의 할당된 값 출력
dptr = &ptr; /* dptr is now holding the address of ptr */ // dptr에 ptr 주솟값 할당
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); // i에 할당된 값 출력
printf("address of i == %p\n", &i); // i의 주솟값 출력
printf("value of ptr == %p\n", ptr); // ptr에 할당된 값 출력
printf("address of ptr == %p\n", &ptr); // ptr의 주솟값 출력
printf("value of *ptr == %d\n", *ptr); // ptr에 할당된 값의 할당된 값 출력
printf("value of dptr == %p\n", dptr); // dptr에 할당된 값 출력
printf("address of dptr == %p\n", &dptr); // dptr에 주솟값 출력
printf("value of *dptr == %p\n", *dptr); // dptr에 할당된 값의 할당된 값 출력
printf("value of **dptr == %d\n", **dptr); // dptr에 할당된 값의 할당된 값의 할당된 값 출력
*ptr = 7777; /* changing the value of *ptr */ // ptr에 할당된 주솟값이 가르키는 곳에 7777 할당.
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i); // i에 할당된 값 출력
printf("value of *ptr == %d\n", *ptr); // ptr에 할당된 값의 할당된 값 출력
printf("value of **dptr == %d\n", **dptr); // dptr에 할당된 값의 할당된 값의 할당된 값 출력
**dptr = 8888; /* changing the value of **dptr */ // dptr이 가르키는 주솟값에 있는 값이 가르키는 주솟값에 8888 할당.
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); // i에 할당된 값 출력
printf("value of *ptr == %d\n", *ptr); // ptr에 할당된 값의 할당된 값 출력
printf("value of **dptr == %d\n", **dptr); // dptr에 할당된 값의 할당된 값의 할당된 값 출력
return 0;
}