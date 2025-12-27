#include <stdio.h>
#define SIZE 5
int q[SIZE], f = -1, r = -1;
void enqueue(int x){
    if(r == SIZE-1)
        printf("Queue Overflow\n");
    else{
        if(f == -1) f = 0;
        q[++r] = x;
    }
}
void dequeue(){
    if(f == -1 || f > r)
        printf("Queue Underflow\n");
    else
        printf("Deleted: %d\n", q[f++]);
}
void display(){
    for(int i = f; i <= r; i++)
        printf("%d ", q[i]);
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();
    return 0;
}
