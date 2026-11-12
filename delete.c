#include"header.h"
void deleteall(sll **ptr)
{

	if(*ptr==0)
	{
		printf("no records found....\n");
		printf("*************************\n");
		return ;
	}

	sll *del=*ptr;
	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}

	printf("*************************************************************\n");
	printf("ALL RECORD'S DELETED SUCCESSFULLY  HURRAY !!!!!\n");
	printf("*************************************************************\n");


}
void deletenode(sll **ptr)
{
	if(*ptr==0)
	{
                printf("*************************\n");
	        printf("NO RECORDS FOUND....\n");
		printf("*************************\n");
		return ;
	}
	int op;
	printf("***************************************\n");
	printf("1--->delete according to rollno\n 2---> delete accprding to name\n");
	scanf("%d",&op);

	sll *del=*ptr,*prev=0;
	if(op==1)
	{
		int num;
		printf("enter the rollno to delete...\n");
		scanf("%d",&num);
		while(del)
		{
			if(num==del->rollno)
			{
				if(*ptr==del)
					*ptr=del->next;                     //update the headptr because of delete node found at first link

				else
					prev->next=del->next;                // update the prec add with delete next add

				free(del);
                            printf("****************************************\n");
                            printf("DELETED THE RECORD HURRY !!!!!!!!!\n");
                            printf("****************************************\n");
					return ;


			}
			prev=del;                      //follows the del one step back
			del=del->next;
		}

         printf("******************************************************\n");
         printf("THE SEARCH NOT FOUND IN THE DATABASE...........\n");
         printf("******************************************************\n");
	}

	else if(op==2)
	{
		char s[10];
		printf("enter the name to delete...\n");
		scanf("%s",s);
		while(del)
		{
			if(strcmp(s,del->name)==0)
			{
				if(*ptr==del)
					*ptr=del->next;                     //update the headptr because of delete node found at first link

				else
					prev->next=del->next;                // update the prec add with delete next add

				free(del);
                            printf("****************************************\n");
                            printf("DELETED THE RECORD HURRY !!!!!!!!!\n");
                            printf("****************************************\n");
				return ;


			}
			prev=del;                      //follows the del one step back
			del=del->next;
		}

         printf("******************************************************\n");
         printf("THE SEARCH NOT FOUND IN THE DATABASE...........\n");
         printf("******************************************************\n");
	}
}
