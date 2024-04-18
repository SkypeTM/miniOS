#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>

#include "system.h"
#include "20192594/myfork.h"
#include "20192594/myipc.h"

void print_minios(char* str);
void myID();

int main() {
    print_minios("[MiniOS SSU] Hello, World!");

    char *input;

    while(1) {
        // readline을 사용하여 입력 받기
        input = readline("커맨드를 입력하세요(종료:exit) : ");

        if (strcmp(input,"exit") == 0) {
            break;
        }
        
        if (strcmp(input,"minisystem") == 0){
            minisystem();
        }

        else if (strcmp(input, "myID") == 0){
            myID();
        }
        
        else if (strcmp(input, "myFork") == 0){
            myFork();
        }
       
        else if (strcmp(input, "myIPC") == 0){
            myIPC();
        }
        else system(input);
    }

    // 메모리 해제
    free(input);
    print_minios("[MiniOS SSU] MiniOS Shutdown........");

    return(1);
}

void print_minios(char* str) {
        printf("%s\n",str);
}

void myID(){
    printf("ID: 20192594\nName: Park Taeseong\n");
}

