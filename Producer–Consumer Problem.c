#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
sem_t empty, full;
pthread_mutex_t mutex;
int buffer;
void* producer(void* arg) {
    sem_wait(&empty);
    pthread_mutex_lock(&mutex);
    buffer = 100;
    printf("Produced %d\n", buffer);
    pthread_mutex_unlock(&mutex);
    sem_post(&full);
    return NULL;
}
void* consumer(void* arg) {
    sem_wait(&full);
    pthread_mutex_lock(&mutex);
    printf("Consumed %d\n", buffer);
    pthread_mutex_unlock(&mutex);
    sem_post(&empty);
    return NULL;
}
