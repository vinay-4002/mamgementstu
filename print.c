#include"header.h"
void printnode(sll *ptr)
{
	if(ptr==0)
	{
                printf("********************\n");
		printf("NO RECORD'S FOUND....\n");
		printf("********************\n");
		return ;
	}
       printf("*************************************\n");
       printf("ROLL-NO | NAME | PERCENTAGE \n");
       printf("*************************************\n");
 
	while(ptr)
	{

	     printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks); 

             ptr=ptr->next; 
	}
	printf("************************\n");


}
int countnode(sll *ptr)
{

        int c=0;
	while(ptr)
	{
                c++;
		ptr=ptr->next;                                                        //use teh dot pointer the when the structure is pointing to the normal variable.
	}
   return c;
}
