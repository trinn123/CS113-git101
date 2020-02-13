 สรุป Lec

Function and Program Structure

Function Definition 

รูปแบบของการนิยามฟังก์ชัน

return-value-type fucnction-name(parameter-list)
{
     declarations

     statement
     :
}

Function Call - Call by Value
- การเรียกใช้ฟังก์ชันในภาษา C สามารถส่งผ่านค่าข้อมูลจากผู้เรียกไปยังฟังก์ชั่นที่ถูกเรียกใช้ได้
- การผ่านค่าจากผู้เรียกไปยังฟังก์ชันที่ถูกเรียกเรียกว่า pass by value

Recursion (การเรียกซ้ำ)
คือฟังก์ชั่นที่สามารถเรียกใช้ตนเองได้
การเรียกตนเองสามารถเรียกได้ในรูป direct และ indirect


#include <stdio.h> 
int addTen(int x){ 
    x += 10;
    return x;
}

int addTwenty();
int x = 2000;
int main(){

    int x = 90; 
    int y = addTen(x);
    printf("addTen in main = %d\n" , y);
    printf("addTwenty in main = %d\n" , addTwenty());
}

int addTwenty(){ 
    x += 20;
    return x;
}
