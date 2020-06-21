#include <iostream>
using namespace std;
int day_num[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
string str[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int month, day;
int main(){
    while(cin>>month>>day){
        int cnt = 3, month0 = 4, day0 = 12;
        while(day0 != day || month0 != month){
            day0++;
            if(day0 == day_num[month0] + 1){
                day0 = 1;
                month0++;
            }
            cnt = (cnt + 1) % 7;
        }
        cout<<str[cnt]<<endl;
    }
    return 0;
}