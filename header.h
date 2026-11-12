#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct stu
{
	int rollno;
	char name[20];                 //defineing the structure variables 
	float marks;
	struct stu *next;
}sll;

void addbegin(sll **, int);
void addend(sll **, int);
void modifyrecord(sll *);
void printnode(sll *);
void savefile(sll *);
void reverselink(sll **);
int  countnode(sll *);
void deleteall(sll **);
void deletenode(sll **);
void sortdata(sll *);
