#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main() 
    {
    char inputText[MAX_LEN];
    char Dad[] = "������ְ�";
    int len;
    printf("�������ı���");
    fgets(inputText, MAX_LEN, stdin);
    len = strlen(inputText);
    if (inputText[len - 1] == '\n') {
        inputText[len - 1] = '\0';
    }
    if (strcmp(inputText, Dad) == 0) {
        printf("�Ҳ�����ְ�\n");
    }
    else {
        printf("���������\n");
        printf("%s\n", inputText);
    }
    return 0;
    
    }
