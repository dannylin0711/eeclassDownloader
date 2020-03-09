#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("%d",argc);
    if (argc == 3){
        FILE *p;
        p = fopen("temp.dat","wb+");
        for(int i = 1; i < 200; i++){
            fprintf(p,"%s%d.jpg\n",argv[1],i);
        }
        char buf[1024] = "wget -i temp.dat -P ./";
        strcat(buf,argv[2]);
        fclose(p);
        system(buf);
        system("rm temp.dat");
    }
    return 0;
}