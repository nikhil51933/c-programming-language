//wap to replace a specific char a file.

#include<stdio.h>
void main(int argc,char **argv)
{
if(argc!=4)
{
printf("usage:filename char char1\n");
return;
}
FILE *fp;
fp=fopen(argv[1],"r+");
if(fp==0)
{
printf("file is not present\n");
return;
}
char ch;
while((ch=fgetc(fp))!=-1)
{
if(ch==argv[2][0])
{
fseek(fp,-1,SEEK_CUR);
fputc(argv[3][0],fp);
}
}
}
