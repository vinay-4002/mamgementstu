#include"header.h"
void addbegin(sll **ptr,int temp)
{
	sll *new;
	int rollno;
	new=malloc(sizeof(sll));                                          //allocating the dynamic memory create the node

	new->rollno=temp;
	while(1)
	{
		printf("enter thename & marks\n");
		scanf("%s%f",new->name,&new->marks);
		if(new->marks>0 && new->marks<=100)
			break;
	}
	new->next=*ptr;

	*ptr=new;


}
void addend(sll **ptr,int temp)
{
    sll *new;
   new= malloc(sizeof(sll));
   new->rollno=temp;
   
	while(1)
	{
		printf("enter thename & marks\n");
		scanf("%s%f",new->name,&new->marks);
		if(new->marks>0 && new->marks<=100)
			break;
	}
       new->next=0;                                               //always at the end the there will the zero in sll.
    if(*ptr==0)                   // if no records found then update the headptr immdetilly
      *ptr=new;   
    else

  {
    sll *last=*ptr;               ///last is the pointer pointing to the first node
     while(last->next)

       last=last->next;

    last->next=new; 

    }
}
void modifyrecord(sll *ptr)
{

	if(ptr==0)
	{
		printf("no records found....\n");
		printf("*************************\n");
		return ;
	}

	int rl,op;
	sll *temp=ptr;
	float m;
	char s[10];
	printf("enter option to modify the record using\n 1-->rollno\n 2--->name\n");
	scanf("%d",&op);
	if(op==1)
	{
		printf("enter the rollno\n");
		scanf("%d",&rl);
	}
	else if(op==2)
	{
		printf("enter the name\n");
		scanf("%s",s);

	}
	while(temp)
	{
		if(temp->rollno==rl)
		{     


			printf("enter the name  & marks to modify...\n");
			scanf("%s%f",temp->name,&m);
			if(m>0 &&m<=100)
				temp->marks=m;
			else
				printf("marks must be in between the 0 to 100\n");

			return ;

		}

		else if(strcmp(s,temp->name)==0)
		{     


			printf("enter the name  & marks to modify...\n");
			scanf("%s%f",temp->name,&m);
			if(m>0 &&m<=100)
				temp->marks=m;
			else
				printf("marks must be in between the 0 to 100\n");

			return ;
		}

		temp=temp->next;	

	}

	printf("INVALID ROLLNO TRY AGAIN!!!!\n");

} 
