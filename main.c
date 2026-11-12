#include<stdio.h>
#include"header.h"
int main()
{
	sll *headptr=0;
	int op,c,k=0;
        int rollno=1;
	while(1)
	{       printf("******************************************************\n"); 
		printf("ENTER THE MENU BASED STUDENT DATABASE COLLECTING:\n");
                printf("******************************************************\n");
		printf(" 1)addbegin\n 2)addend\n 3)modifyrecord\n 4)printnode\n 5)savefile\n 6)reverselinks\n 7)countnode\n 8) deletenode_all\n 9)delete_node\n 10)sort_data\n,11)exit\n");
		scanf("%d",&op);

		switch(op)
		{
			case 1:   addbegin(&headptr,rollno++);break;
			case 2:   addend(&headptr,rollno++);break;
			case 3:   modifyrecord(headptr);break; 
			case 4:   printnode(headptr);break;
			case 5:   savefile(headptr);break;
			case 6:   reverselink(&headptr);break; 
			case 7:   c=countnode(headptr);
                                  printf("TOTAL COUNT:%d\n",c);break;
			case 8:   deleteall(&headptr);break; 
			case 9:   deletenode(&headptr);break;
			case 10:  sortdata(headptr);break;
                        case 11:  printf("exitting..........!!!\n");
				  return 0;
			default: k++;
				 if(k<3)
				printf("WARNING:ENTER THE CORRECT OPTION BRO !!!!!\n");
				 else{
					 printf("BYE BYE SEE YOU LATER !!!!\n"); 
					 return 0;
				 }
                                     
		}
	}
}
