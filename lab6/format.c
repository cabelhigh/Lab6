#include <stdio.h>
#include <stdlib.h>

char* string;
int width = 72;

int main(int argc, char *argv[]){

        for(int i = 1; i < argc; i++){
                if(argv[i][0]=='-'){
                        if(argv[i][1]=='w'){
                                i++;                            
                                width = atoi(argv[i]);
                        }
                        else if(argv[i][1]=='r') {
                        }
                }
                else{
                        string = argv[i];
                        printf("%s", string);
                }
        }
        
}
