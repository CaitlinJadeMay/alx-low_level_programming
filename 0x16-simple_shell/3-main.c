#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
char *buffer;
char *args[BUFFER_SIZE];
size_t bufsize = BUFFER_SIZE;
char *token;
int i = 0;
ssize_t lineSize;
pid_t pid;
buffer = (char *)malloc(bufsize * sizeof(char));
if(argc < 1)
{
fprintf(stderr,"Invalid number of arguments\n");
exit(EXIT_FAILURE);
}
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





token = strtok(buffer, " ");
while (token != NULL) {
args[i++] = token;
token = strtok(NULL, " ");
}
args[i] = NULL;


if (strcmp(args[0], "exit") == 0) {
break;
}


pid = fork();

if (pid == -1) {
perror("Fork error");
exit(EXIT_FAILURE);
} else if (pid == 0) {

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

int status;
wait(&status);
}
}

free(buffer);
return 0;
}


