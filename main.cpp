#include<stdio.h>
#include"header.h"

int main(void)
{
    if(is_empty_queue()) printf("The queue is empty");
    else printf("The queue is not empty");
    printf("Length = [%d]\n", NumberOfElement);
    print_queue();
    push_end_queue(14);

    if(is_empty_queue()) printf("The queue is empty");
    else printf("The queue is not empty");
    printf("Length = [%d]\n", NumberOfElement);
    print_queue();
    pop_queue();
    
    if(is_empty_queue()) printf("The queue is empty");
    else printf("The queue is not empty");
    printf("Length = [%d]\n", NumberOfElement);
    print_queue();
    return 0;
}