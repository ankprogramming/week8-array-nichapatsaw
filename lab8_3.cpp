#include <iostream>
using namespace std;

int main () {
        // สร้างตัวแปร array ชื่อ calendar เพื่อสร้างที่เก็บปฏิทิน
        // calendar[5][7]
        int calender[5] [7];
        int day=1;

        for (int q=0; q<4; q++){
            calender[0] [q]=0;
        }

        for (int q=4; q<7; q++){
            calender[0] [q] =day;
            day++;
        }
        for (int q=1; q<5; q++){
            for (int e=0; e<7; e++){
                calender[q][e]=day;
                day++;
            }
        }
        for (int q=0; q<5;q++){
            for (int e=0; e<7; e++){
                cout<<calender[q][e]<< " ";
        }
        cout << endl;
        }


        // เขียนโปรแกรมแสดงปฏิทินเดือน ธันวาคม /2560
        // วันที่ไม่ใช่วันของเดือน ธันวาคมให้แสดงด้วย x


        // เขียนโปรแกรมเพื่อรับวันจากผู้ใช้ แล้วแสดงเฉพาะวันที่นั้น
        // 0 = อาทิตย์, 1 = จันทร์ ... 7 = เสาร์
        int cmd;
        cin>>cmd;

        for (int q =0; q<5;q++){
            if (calender[q] [cmd]!=0){
                cout<<calender[q][cmd]<<" ";
            }
        }


        // เขียนโปรแกรมเพื่อรับสัปดาห์ของเดือนจากผู้ใช้ เขียนโปรแกรมเพื่อคัด เฉพาะวันของสัปดาห์
        // 1 หมายถึง สัปดาห์ที่ 1 ของเดือนธันวาคม 2560 จะได้เลข {1, 2}
        cout << endl;
        cin>> cmd;
        for (int q=0 ; q<7; q++){
            if (calender[cmd] [q] !=0){
                cout << calender[cmd][q]<< " ";
            }
        }







        return 0;
}
