#include <iostream>

using namespace std;

int main () {

        char name[] = {"Nichapat"}; //lukunA
        int nameLength = 8;
        cout << name;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้

        char revName[nameLength+1];
        for (int e = 0; e < nameLength; e++) {
            revName[e] = name[7-e];
        }
        revName[nameLength] = '\0';
        cout << revName << endl;

        for (int e = 0; e <8 ; e++){
            revName[e] = revName[e]+1;
        }
        cout << revName << endl;

        return 0;
}
