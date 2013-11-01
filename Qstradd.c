//adds a string onto the end of another string

#include "format.h"

void Qstradd(char*line, char*str) {
        while(*str!=' ') {
                *line=*str;
                str++;
                line++;
}

}
