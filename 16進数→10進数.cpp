#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    
    int input;
	char re;

	printf("16進数→10進数 変換\n");
 
 	do{ //再入力の処理
	
    printf("16進数 0～9、A～Fを入力してください\n");
    fflush(stdout);
    scanf("%x", &input);
 
    printf("16進数「%x」は、10進数「%d」です\n", input, input);

	printf("再入力する場合は【1】を入力:");	
	scanf("%d",&re);
	printf("\n");
 	} while(re==1);	//1で全体プログラムの再入力を実行
	
	printf("Finished");
    return 0;
}