#ifndef _QUEUE_
#define _QUEUE_

typedef enum {false, true}Bool;
typedef struct QueueElement
{
    int value;
    struct QueueElement *next;
}QueueElement, *Queue;
static QueueElement *first = NULL;
static QueueElement *last = NULL;
static int NumberOfElement = 0;

Bool is_empty_queue(void);
int queue_length(void);
int queue_first(void);
int queue_last(void);
void print_queue(void);
void push_end_queue(int);
void pop_queue(void);
#endif