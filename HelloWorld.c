#include<stdio.h>
int main(int argc, char const *argv[])
{
    int user = 777;
    printf("Hello World, I am %d\n",user);
    printf("A vectorpie\n");
    printf("A conglomerate of Stardust!!\n");
    printf("Number of character from comand-line - %d\n",argc);
    printf("Strings from command-line ...\n");
    for(int i=0;i<argc;i++){
        printf("%s ",argv[i]);
    }
    return 0;
}
