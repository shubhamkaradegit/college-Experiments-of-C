#include<stdio.h>
#include<string.h>

int main(){
char str1[100],str2[200],result[200];
char *char_ptr;
const char *search_string="hello";
char ch ='a';


printf("Enter the first string :  ");
fgets(str1,sizeof(str1),stdin);
str1[strcspn(str1,"\n")] = "\0";


printf("Enter the second string :  ");
fgets(str2,sizeof(str2),stdin);
str1[strcspn(str2,"\n")] = "\0";

printf("Length of the first String : %zu\n",strlen(str1));

int cmp_result =strcmp(str1,str2);
if(cmp_result ==0){
    printf("The two strings are equal.\n");
}
else if(cmp_result < 0){
    printf("The first string is less than the second string.\n");

}
else{
    printf("The first string is grater than the second string.\n");
}

char_ptr = strchr(str1,ch);
if (char_ptr != NULL){
    printf("first occurance of '%c' in the string: %s\n",ch,char_ptr);
}else{
    printf("Character '%c' not found in the first string.\n",ch);
}



char_ptr = strstr(str1,search_string);
if(char_ptr != NULL){
    printf("Substring '%s' found in first string at position: %ld\n",search_string,char_ptr - str1);
}else{
    printf("Substring '%s' not found in the first string.\n",search_string);
}
return 0;
}