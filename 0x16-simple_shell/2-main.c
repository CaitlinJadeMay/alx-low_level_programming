#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
char *buffer;
pid_t pid;
int status;
ssize_t lineSize;
size_t bufsize = BUFFER_SIZE;
if(argc < 1)
{
fprintf(stderr,"Invalid number of arguments\n");
exit(EXIT_FAILURE);
}
buffer = (char *)malloc(bufsize * sizeof(char));
if (buffer == NULL) {
perror("Allocation error");
exit(EXIT_FAILURE);
}

while (1) {
printf("($) ");
lineSize = getline(&buffer, &bufsize, stdin);
if (lineSize == -1) {
if (feof(stdin)) {
printf("\n");
break;
} else {
perror("Read error");
exit(EXIT_FAILURE);
}
}


buffer[strcspn(buffer, "\n")] = '\0';


pid = fork();

if (pid == -1) {
perror("Fork error");
exit(EXIT_FAILURE);
} else if (pid == 0) {



char *token;
char *args[BUFFER_SIZE];
int i = 0;


token = strtok(buffer, " ");
while (token != NULL) {
args[i++] = token;
token = strtok(NULL, " ");
}
args[i] = NULL;


if (execvp(args[0], args) == -1) {
if (errno == ENOENT) {
fprintf(stderr, "%s: No such file or directory\n", argv[0]);
} else {
perror("Execution error");
}
exit(EXIT_FAILURE);
}

exit(EXIT_SUCCESS);
} else {


wait(&status);
}
}

free(buffer);
return 0;
}


