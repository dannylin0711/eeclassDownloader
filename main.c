#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("%d",argc);
    if (argc == 3){
        FILE *p;
        p = fopen("temp.txt","w+");
        for(int i = 1; i < 200; i++){
            printf("Output: %d\n",i);
            fprintf(p,"%s%d.jpg\n",argv[1],i);
        }
        char buf[1024] = "wget -i temp.txt -P ./";
        strcat(buf,argv[2]);
        fclose(p);
        system(buf);
        system("rm temp.txt");
    }else if (argc == 2){
        FILE *p;
        p = fopen("temp.txt","w+");
        for(int i = 1; i < 200; i++){
            printf("Output: %d\n",i);
            fprintf(p,"%s%d.jpg\n",argv[1],i);
        }
        char buf[1024] = "wget -i temp.txt -P ./";
        fclose(p);
        system(buf);
        system("rm temp.txt");
    }
    return 0;
}