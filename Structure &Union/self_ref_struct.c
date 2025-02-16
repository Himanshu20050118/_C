
//  -> is used to access dat from address.
//   . is used to acces element from object.

#include <stdio.h>
struct node
{
    int data_1;
    float data_2;
    struct node *link;
};
int main()
{
    struct node n1,n2,n3;
    n1.data_1=5;
    n1.data_2=8.5;
    n1.link=NULL;
    n2.data_1=6;
    n2.data_2=9.5;
    n2.link=NULL;
    n3.data_1=7;
    n3.data_2=10.5;
    n3.link=NULL;
    n1.link=&n2;
    n2.link=&n3;
printf("Data at node1 is %d and %f",n1.data_1,n1.data_2);
printf("\nData at node2 is %d and %f",n1.link->data_1,n1.link->data_2);
printf("\nData at node3 is %d and %f",n1.link->link->data_1,n1.link->link->data_2);
    return 0;
}