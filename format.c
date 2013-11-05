#include "format.h"

char* string;
int width = 72;
char*space=" ";
int flags=0;

int main(int argc, char *argv[]){
char* line;
int i=1;
int rightTrue=0; //0 is false
int justified=0; //0 is false
int spacestoadd=1; //default is 1
int gapsofar=0;
int totalspaces=0;
int gaps=0;


if(argv[i][0]=='-'){
//for after the flag
                        if(argv[i][1]=='w'){
                        i++;
                        width = atoi(argv[i]);
                        if(width>1000||width<1) {
                        printf("Please include a width between 1 and 1000\n");
                        return width;
                        }
                        flags+=2;
                        }
                        else if(argv[i][1]=='r') {
                        rightTrue=1;
                        flags++;
//                      if(justified) {
//                      justified=1;
//                      }
                        }
                        else if(argv[i][1]=='j') {
                        i++;
                                justified=1;
                        flags++;
//                      if(rightTrue) {
//                      rightTrue=1;
//                      }
                        }
                        else if(argv[i][1]=='s') {
                        flags++;
                        }
                        else {
                        printf("Please enter a valid flag (-w <int>, -r, -j, or -s)\n");
                        return 1;
                        }
                    }
//allocates space for each individual line based on flags
line= malloc ( (width) * sizeof(char) );
//starts with the first arg after flags
i=flags+1;

while(i < argc){
                        string = argv[i];
//if less than width add to the current line
                        if(strlen(line)+strlen(string)<=width) {
//copy string into line
                        gapsofar++;
                        totalspaces++;
                        strcat(line, string);

                        if(justified) {
                        gaps=gapsofar-1;
                        spacestoadd=gapsofar*totalspaces/gaps;
                        printf("%d", spacestoadd);
                        }

//adds spaces   
                        for( int k=0; k<spacestoadd;k++) {
                        strcat(line, space);
                        }
                        }
                                else{
                                if(rightTrue) {
                                        for(int j=width-strlen(line); j>=0; j--) {
                                printf(" "); //add space
                                        }
                                }

                                printf("%s\n", line);
//reinitialize line
                                free(line);
                                line = malloc( (width) *sizeof(char) );
                                strcat(line, string);
                                strcat(line, space);
                                }

//"base case"
        if(i==argc-1){
           //right justified     
           if(rightTrue) {
           for(int j=width-strlen(line); j>=0; j--) {
                 printf(" ");
                }
        }

        //fully justified
        if(justified) {
        //do the justification thing
        }

        printf("%s\n", line);
        break;

        }
i++;
}
