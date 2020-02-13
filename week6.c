สรุป lec เรื่อง array

array คือกลุ่มตัวแปรที่ถูดจัดการร่วมกัน

การเรียกใช้ array
-ตัวแปรแต่ละตัวจะมีเบอร์กำกับ (index)อยู่
int A[10]; A[2] =5;
-A[2] เป็นตัวแปรประเภท int ธรรมดาใช้งานเหมือน int ปกติ

ระวัง ตำแหน่งของ array เริ่มนับที่ 0

การส่งค่าจาก array ไปยังฟังก์ชั่น
-ส่งค่าตัวแปรหนึ่งในarray ตามปกติ
-เป็นการ pass by value
ถ้าจะส่งทั้งอาเรย์ต้องกำหนดฟังก์ชันรับตัวแปรประเภท array

pass by reference
ส่งตำแหน่งของตัวแปรจากผู้เรียกไปฟังก์ชั่นการเปลี่ยนแปลงค่าในฟังก์ชั่นเปลี่ยนตัวแปรต้นตำรับด้วย

2D array
array 2d ประกาศแบบ2ชั้น int A[2][3];
ตัวแรกคือ row ตัวสองคือ column


#include <stdio.h>

// void addTen(int arr[][n]], int n) //มิติสุดท้ายต้องบอกขนาดเสมอ
void addTen(int *arr, int n){
    for(int i = 0; i< n; i++){
        // printf("[%d] = %d" , i, arr[i]);
        printf("addTen [%p] = %d\n" , arr + i, *(arr + i));
        *(arr + i) += 10;
    }
}

int addTwenty(int *n){
    *n += 20;
    return 1; //check ว่า ทำงานจบมั้ย
}

int main(){
    int number[] = {1,2,3,4,5};
    int n = 5;
    addTen(&number[0], n); //ส่งด้วยaddress รับด้วยpointer = pass by reference
    for (int i = 0; i < n; i++)
    {
        // printf("[%d] = %d" , i, arr[i]);
        printf("main [%p] = %d\n" , number + i, *(number + i));
    }
    addTwenty(&n);
    addTwenty(&number[4]);
    printf("n = %d\n", n);
    printf("number[4] = %d", number[4]);
}