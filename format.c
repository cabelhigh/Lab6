#include <stdio.h>
#include <stdlib.h>

FILE *fp;

int width = 72;

int main(int argc, char *argv[]){

	for(int i = 0; i < argc; i++){
		if(argv[i][0]=='-'){
			if(argv[i][1]=='w'){
				i++;				
				width = atoi(argv[i]);
			}
			else if(argv[i][1]=='r')
		}
		else{
			fp = fopen(argv[i], "r");
			if(fp){}
			else{
				printf("Sorry, can't open file %s!", argv[i]);
							
