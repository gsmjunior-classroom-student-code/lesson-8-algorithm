#include <stdio.h>
#include <string.h>

int charToInt(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    else if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 10;
    }
    return 0;
}

int baseToDecimal(char* number, int base, int length) {
    if (length == 0) {
        return 0;
    }

    int lastDigit = charToInt(number[length - 1]);
    return lastDigit + baseToDecimal(number, base, length - 1) * base;
}

int main() {
    char number[100];  // 입력 수를 저장할 배열
    int base;

    // B진법 수 N과 B 입력 받기
    scanf("%s %d", number, &base);
    
    int length = strlen(number);

    // B진법 수를 10진법으로 변환
    int decimalValue = baseToDecimal(number, base, length);
    
    // 결과 출력
    printf("%d\n", decimalValue);

    return 0;
}
