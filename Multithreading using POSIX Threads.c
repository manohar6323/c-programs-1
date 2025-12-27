#include <stdio.h>
#include <pthread.h>
void* task(void* arg) {
    int id = *(int*)arg;
    printf("Thread %d running\n", id);
    return NULL;
}
int main() {
    pthread_t t1, t2;
    int a = 1, b = 2;
    pthread_create(&t1, NULL, task, &a);
    pthread_create(&t2, NULL, task, &b);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
}
