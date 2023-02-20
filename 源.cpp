#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main() 
    {
    char inputText[MAX_LEN];
    char Dad[] = "我是你爸爸";
    int len;
    printf("请输入文本：");
    fgets(inputText, MAX_LEN, stdin);
    len = strlen(inputText);
    if (inputText[len - 1] == '\n') {
        inputText[len - 1] = '\0';
    }
    if (strcmp(inputText, Dad) == 0) {
        printf("我才是你爸爸\n");
    }
    else {
        printf("复读输出：\n");
        printf("%s\n", inputText);
    }
    return 0;
    
    }
