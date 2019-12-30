#include<stdio.h> 
#include<stdlib.h> 
typedef struct liuyu{ int data; struct liuyu*link; }test;
liuyu *p, *q, *r, *head;
int m = sizeof(test);
int  main (){
	int i;
	head = (test*)malloc(m);
	p = head; i = 0;
	while (i != -9999)
	{
		printf("/ninput an integer [stop by '-9999']:");
		scanf("%d", &i);
		p->data = i;
		p->link = (test*)malloc(m);
		q = p;
		p = p->link;
	}
	q->link = NULL;
	p = head;
	i = 0;
	while (p->link != NULL){
		printf("%d", pp->data);
		p = p->link;
		i++;
	}
	printf("%d", i - 1);
}