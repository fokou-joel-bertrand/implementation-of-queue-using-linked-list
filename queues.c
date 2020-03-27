#include<stdio.h>
#include<stdlib.h>
#include"header.h"

Bool is_empty_queue(void)
{
    if(first == NULL && last == NULL) return true;
    return false;
}
/***************************/
int queue_length(void)
{return NumberOfElement;}
/*******************************/
int queue_first(void)
{
    if(is_empty_queue()) exit(1);
    else return first->value;
}
/***********************************/
int queue_last(void)
{
    if(is_empty_queue()) exit(1);
    else return last->value;
}
/*********************************/
void print_queue(void)
{
    QueueElement *tmp = first;
    if(is_empty_queue()){printf("the queue is empty"); return;}

    while(tmp != NULL){printf("[%d]\n", tmp->value); tmp = tmp->next;}
    printf("\n\n");
}
/**********************************/
void push_end_queue(int x)
{
    QueueElement *element;
element = malloc(sizeof(*element));
if(element == NULL){ exit(EXIT_FAILURE); return;}

element->value = x;
last = NULL;
if(is_empty_queue()){first = element; last = element;}
else
{
    last->next = element;
    last = element;
} NumberOfElement++;
}
/**********************************/
void pop_queue(void)
{
    QueueElement *tmp;
    if(is_empty_queue()){ printf("The queue is empty"); return;}
    else
    {  
        tmp = first;
        if(first == last){first = NULL; last = NULL;}
        else
        { first = first->next;
        free(tmp);} NumberOfElement--;
    }
}



