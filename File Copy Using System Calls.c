#include <fcntl.h>
#include <unistd.h>
int main() {
    char buf[1024];
    int fd1 = open("src.txt", O_RDONLY);
    int fd2 = open("dest.txt", O_CREAT | O_WRONLY, 0644);
    int n;
    while ((n = read(fd1, buf, sizeof(buf))) > 0)
        write(fd2, buf, n);
    close(fd1);
    close(fd2);
    return 0;
}
