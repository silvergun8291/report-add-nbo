#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "sum.h"

int main(int argc, char *argv[]) {
	if (argc == 1) {
    	printf("에러: 인자가 없습니다.\n");
    	return -1;
  	}

  	FILE *file1 = fopen(argv[1], "rb");
  	FILE *file2 = fopen(argv[2], "rb");

  	if (file1 == NULL) {
    	printf("파일 읽기 오류: %s\n", argv[1]);
    	exit(1);
  	}

  	if (file2 == NULL) {
    	printf("파일 읽기 오류: %s\n", argv[2]);
    	exit(1);
  	}

  	uint32_t a, b;
  	fread(&a, sizeof(uint32_t), 1, file1);
  	fread(&b, sizeof(uint32_t), 1, file2);

  	sum(a, b);

  	return 0;
}
