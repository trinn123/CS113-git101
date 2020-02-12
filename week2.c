// สรุป Lec
Week3

Statements and Blocks
- expression กลายเป็น statement เมื่อถูกปิดท้ายด้วย ;
- เครื่องหมาย {} ใช้รวมส่วนของ declarations และ statements เข้าด้วยกันเป็น block
- ฟังก์ชัน, if else while for มักใช้ block ในการรวม statement หลายอันเข้าด้วยกัน
- Null statement คือ statement ที่ปราศจากส่วนของ expression โดยเหลือเพืองเครื่องหมาย ;

If-Else
Ex. if(n > 0)
      if(a > b)
           z = a;
      else
           z = b;

Else-If
    if (expression1)
       statement1
    else if (expression2)
       statement2
    else if (expression3)
       statement3
    else
       statement5

Switch
-switch ใช้ในการตรวจสอบเงื่อนไขเงื่อนไขที่ดูว่าค่าของ expression นั้น match เข้ากับค่าคงที่ หลังจากนั้นโปรแกรม
จะทำงานจนกว่าจะเจอ break แล้วจึงหลุดจาก switch

Loops - While และ For

รูปแบบของ while

while (expression)
       statement
ถ้า expression เป็นจริง statement ก็จะทำงานจนกว่า expression และเป็นเท็จ

For

for(expr1; expr2;expr3)
     statement



//สรุป Lab 
#include <stdio.h>
#include <stdlib.h>
char name[20];   //char arrayกำหนด 20 ตัว
char number[5];
int main(){
    // printf("%s\n", name);
    // scanf("%s", name , &i); 
    // printf("Enter name : ");
    // gets(name); //รับมาตัวเดียว
    // fgets(name , 20 , stdin); 
    // getchar(char); //buffer == 1
    // fgets(number , 5 , stdin); // กำหนดขนาด buffer เผื่อ \n \0 ไว้ด้วย
    // int i = atoi(number); //array to integer >> atoi
    // long l = atol();
    // double d = atof();
    // printf("number = %s , i = %d" , number , i); //ทำไมใส่ 123 แล้วมี \n ใส่ 12345 แล้วเก็บแค่ 1234 

    // char = getcetchar();  การกด enter ถือว่าเป็น 1 char
    // getchar();
    // chr1 = getchar();
    // fgets(number , 5 , stdin);
    // int i = atoi(number);
    // putchar(100);
    // putchar('u');

    // int found = 0; // = false != 0 >> true
    // float inExist = 0.0; // >> false
    // char isOnline = '\0'; // null charecter >> false

    // fgets(number , 5 ,stdin);
    // int i = atoi(number);

    // if (i > 0 && i < 11)
    // {
    //     printf("if = %d\n" , i > 0 && i < 11);
    // }else if (i <= 20 || !found){
    //     printf("else if\n");
    // }else{

    // }

    fgets(number , 5 ,stdin);
    int i = atoi(number);
    int count = 0;
    int j = atoi(number);
    // while (count < i){
    //     // count++ * count - 5;  // FASTER
    //     // ++count * count -5;   //ทำก่อนค่อยบวก   บวกก่อนค่อยทำ  แต่เมื่อจบจะได้ค่าเท่ากัน  ตอนประมวลผลเร็วไม่เท่ากัน
    //     // printf("count = %d\n" , count);
    //     // count++;
    // }

    for (int j = 0; j < i; j++)
    {
        printf("j = %d\n" , j);
    }
    
    while (1){

    }
}
