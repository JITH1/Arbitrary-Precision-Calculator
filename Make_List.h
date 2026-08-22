#ifndef M_LIST
#define M_LIST

#include "APC.h"

void create_list(char *operand, node **head, node **tail);
void insert_at_last(node **head, node **tail, int data);
void print_list(node *head);

#endif