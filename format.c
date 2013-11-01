#include "format.h"
//adds poiter references to the front?
// need to figure out how to properly go to the next line


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
                        char line[width];
                        string = argv[i];
//if less than width add to the current line
                        if(strlen(line)+strlen(string)<=width ) {
        //copy string into line
                        *line=strcat(line, string);

                //      *line=' ';
        }
//                        printf("%s\n", string);
                        printf("%s\n", line);

}


}
}
