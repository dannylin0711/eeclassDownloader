#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("%d",argc);
    if (argc == 3){
        FILE *p;
        p = fopen("output.txt","w+");
        for(int i = 1; i < 200; i++){
            fprintf(p,"%s%d.jpg\n",argv[1],i);
        }
        char buf[1024] = "wget -i output.txt -P ./";
        strcat(buf,argv[2]);
        system(buf);
        fclose(p);
    }
    return 0;
}