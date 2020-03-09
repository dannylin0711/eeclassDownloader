#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (argc >= 3){
        int amount = 200;
        if(argc == 4){
            amount = atoi(argv[3]);
        }
        FILE *p;
        p = fopen("temp.txt","w+");
        for(int i = 0; i < amount; i++){
            printf("Output: %d\n",i+1);
            fprintf(p,"%s%d.jpg\n",argv[1],i+1);
        }
        char buf[1024] = "wget -i temp.txt -P ./";
        strcat(buf,argv[2]);
        fclose(p);
        system(buf);
        system("rm temp.txt");
    }else if (argc == 2){
        FILE *p;
        p = fopen("temp.txt","w+");
        for(int i = 0; i < 200; i++){
            printf("Output: %d\n",i+1);
            fprintf(p,"%s%d.jpg\n",argv[1],i+1);
        }
        char buf[1024] = "wget -i temp.txt -P ./Download";
        fclose(p);
        system(buf);
        system("rm temp.txt");
    }
    return 0;
}