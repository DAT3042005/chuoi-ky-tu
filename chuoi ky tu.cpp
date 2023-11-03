#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void removeEtraSpaces(char*s){
	int i,j;
	int length = strlen(s);
    for (i=0,j=1;i<length;j++){
    if (s[i]=="&& s[j]=="){
    continue;
	 } else{
	 i++;
	 s[i]=s[j];
	 }
	 }
	 s[i+1]='\0';
	}







 int main()
 {
 char s1 [50];
 char s2 [50];
 printf (" \n nhap vao mot chuoi: ");
 gets(s1);
 printf("\n chuoi vua nhap la: %s" ,s1 );
 
  printf ("\n nhap vao mot chuoi: ");
 gets(s2);
 printf(" \n chuoi vua nhap la: %s" ,s2 );
  } 
  
 
