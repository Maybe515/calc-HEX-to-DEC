#include <stdio.h>
 
// main関数
int main(void){
    // 16進数で値を格納する配列
    unsigned char hex_ary[3];
 
    // 10進数で値を格納する配列
    unsigned char dec_ary[3] = { 0 };
 
    // 16進数の配列に値を格納
    hex_ary[0] = 0x0D;
    hex_ary[1] = 0x37;
    hex_ary[2] = 0x1E;
 
    // 値の表示（16進表示, 10進表示）
    for (int i = 0; i < 3; i++){
        dec_ary[i] = hex_ary[i];
        printf("hex_ary[%d]=0x%02X dec_ary[%d]=%d \n", i, hex_ary[i], i, hex_ary[i]);
    }
 
    return 0;
};