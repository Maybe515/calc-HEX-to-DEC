#include <stdio.h>
 
// main�֐�
int main(void){
    // 16�i���Œl���i�[����z��
    unsigned char hex_ary[3];
 
    // 10�i���Œl���i�[����z��
    unsigned char dec_ary[3] = { 0 };
 
    // 16�i���̔z��ɒl���i�[
    hex_ary[0] = 0x0D;
    hex_ary[1] = 0x37;
    hex_ary[2] = 0x1E;
 
    // �l�̕\���i16�i�\��, 10�i�\���j
    for (int i = 0; i < 3; i++){
        dec_ary[i] = hex_ary[i];
        printf("hex_ary[%d]=0x%02X dec_ary[%d]=%d \n", i, hex_ary[i], i, hex_ary[i]);
    }
 
    return 0;
};