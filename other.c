#include"header.h"
void sortdata(sll *ptr)
{
	printf("****************************\n");
	if(ptr==0)
	{
		printf("no records found....\n");
		printf("*************************\n");
		return ;
	}

	sll *p1,*p2,t;
	int i,j,op,c=countnode(ptr);
	printf("enter\n 1--->sort using name\n 2---->sort using the rollno\n 3---->sort using the marks\n");
	scanf("%d",&op);

	for(i=0;i<c-1;i++)
	{    
            p1=ptr;  
            p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{     
			int need=0;

				if(op==1 && strcmp(p1->name,p2->name)>0)
					need=1;
				else if(op==2 && (p1->rollno>p2->rollno))
					need=1;
				else if(op==3 && (p1->marks<p2->marks))
					need=1;

			if(need)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name); 
				t.marks=p1->marks;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->marks=p2->marks;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->marks=t.marks;


			}
                      p1=p1->next;
                      p2=p2->next;
		}
	}
}
void reverselink(sll **ptr)
{

	if(ptr==0)
	{
		printf("no records found....\n");
		printf("*************************\n");
		return ;
	}

	int c=countnode(*ptr);
	if(c>1)
	{
		int i;
		sll *t=*ptr;
		sll **a=malloc(sizeof(sll *)*c);

		for(i=0;i<c;i++)
		{
			a[i]=t;
			t=t->next;
		}

		for(i=c-1;i>0;i--)
		a[i]->next=a[i-1];
			a[0]->next=0;
			*ptr=a[c-1];


		

	}

      printf("*********************************************\n");
      printf("SUSUCCESFULLY REVERSED THE LINKS OF NODE'S\n");
      printf("*********************************************\n");
  
}
