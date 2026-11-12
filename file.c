#include"header.h"
void savefile(sll *ptr)
{
     printf("****************************\n");
if(ptr==0)
{
    printf("no records found....\n");
    printf("*************************\n");
    return ;
}

FILE *fp;
fp=fopen("stu_data.txt","w");
while(ptr)
{
  fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
  ptr=ptr->next;
   }
printf("DATA SAVED SUCCESSFULLY INTO THE FILE.....\n");
printf("***********************************\n");
fclose(fp);
}
