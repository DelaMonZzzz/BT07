#include <iostream>

using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}

int main()
{
    cout << weird_string();
}

/* trình biên dịch cảnh báo: địa chỉ của biến cục bộ 'c' được trả về
   out put của hàm main bị hiển thị thành "■h ♠" */
