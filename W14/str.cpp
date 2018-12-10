#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void str_reverse(char*s2,char *s1){
    int j=0;
    for(int i=strlen(s1)-1;i>=0;i--){
        s2[j++]=s1[i];

    }
    s2[j]='\0';
}

void str_copy(char*s2,char *s1){
    int i;
    for(i=0;i<strlen(s1);i++){
        s2[i]=s1[i];
    }
    s2[i]='\0';
}

int main(){
    char *str1;
    char *str2;
    str1=(char *)malloc(sizeof(char)*80);
    str2=(char *)malloc(sizeof(char)*80);
    gets(str1);
    printf("str1   :%s\n",str1);
    str_reverse(str2,str1);
    printf("reverse:%s\n",str2);
    str_copy(str2,str1);
    printf("copy   :%s\n",str2);


return 0;
}
