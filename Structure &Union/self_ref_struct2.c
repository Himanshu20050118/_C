
//  -> is used to access dat from address.
//   . is used to acces element from object.

#include <stdio.h>
struct node
{
    int data;
    struct node *link1;
    struct node *link2;
};
int main()
{
    struct node n[5];
    for (int i = 0; i <5; i++)
    {   
        n[i].data=101+i;
        n[i].link1=NULL;
        n[i].link2=NULL;
    }
   n[0].link1=&n[1];
   n[0].link2=&n[2];
   n[2].link1=&n[3];
   n[2].link2=&n[4];
    printf("Data at node1 is %d", n[0].data);
    printf("\nData at node2 is %d", n[0].link1->data);
    printf("\nData at node3 is %d", n[0].link2->data);
    printf("\nData at node4 is %d", n[0].link2->link1->data);
    printf("\nData at node4 is %d", n[0].link2->link2->data);
    return 0;
}