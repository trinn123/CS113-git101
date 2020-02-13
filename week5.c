สรุป lec pointers

-เราสามารถเข้าถึงหน่วยความจำได้โดย pointers
-การเขียนว่า pointers p อ้างอิงไปที่ตำแหน่งของ c ในหน่วยความจำเขียนได้โดย

int c;
int *p;
p = &c;

Pointers Operators
ในการใช้ pointer เรามีตัวดำเนินการอีก 2 ตัว
- & เรียกว่า address operator ซึ่งเป็น unray operator ที่ต้องการ 1 operand
- * เรียกว่า dereferencing operator หรือ indirection operator โดยที่จะถูกใช้อ้างอิ่ง
ตำแหน่งในความจำที่มีค่าเป็น opreand

Pointers กับ Arrays
int a[10];
-a[i]อ้างอิงข้อมูลตัวที่ i ในอาเรย์ a โดยข้อมูลตัวแรกในอาเรย์ คือ a[0]
-a = &a[0]
- *(a+i) และ a[i]ที่เป็นนิพจน์บอกสิ่งเดียวกัน




#include <stdio.h>
int main(){

    int number[] = {1 ,2 , 3, 4 ,5 ,6};
    int number[100]; 
    int number[100] = {1,2,3,4,5,6}; 
    number[1000] = 200;
    printf("index 1 = %d" , number[1]);
    printf("reference of &number[1] = %p\n", &number[1]); //pointer เก็บ address
    printf("reference of &number[0] = %p\n", &number[0]);   
    printf("reference of number = %p\n", &number + 1);  //เก็บ address index[0] 
    printf("reference of number = %p\n", &number + 1);  //+ ขนาดที่เก็บตัวแปร การบวกaddress
    printf("index 1 = %d" , number[1000]); //access index[1000] เก็บค่า 0 ไว้ นี่คือaddress number[1000]

    int number[] = {1 ,2 , 3, 4 ,5 ,6};
    int *ptr = &x;  //ชี้ address assign address to pointer //ประกาศต้องมี*
    int *arrPtr;
    arrPtr = number; //เรียกตัวแปรไม่ต้องมี*
    arrPtr += 3; //เก็บค่า0c +ตำแหน่งขนาดที่เก็บตัวแปรไปเรื่อยๆ
    *arrPtr += 3; //address 0c ค่า 4 แล้ว+3 = 7 assign กลับที่ตำแหน่ง 0c
    printf("arrPtr = %p , *arrPtr = %d" , arrPtr , *arrPtr);

    int number[] = {1 ,2 , 3, 4 ,5 ,6};
    for (int *ptr = number; ptr < &number[4]; ptr++)
    {
         printf("[%p] = %d\n" , ptr , *ptr);
    }
    printf("\n");
    int *ptr2 = number;
    for(int i = 0; i< 5; i++){
     printf("[%p] = %d\n" , ptr2 + i , *(ptr2 + i)); //work unary before binary
     }
    
    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n') //ปิด\0เอง char arr
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for (char *cPtr = input; *cPtr != '\0' ;cPtr++)
    // {
    //     printf("%c\n" , *cPtr);
    // }

    char s[100];
    int i;
    char c;
    scanf("%d=%c=%s", &i, &c, s); //array ไม่ต้องมี&
    printf("%d--%c--%s", i, c, s);
    
}