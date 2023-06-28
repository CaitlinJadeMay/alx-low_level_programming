#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
pid_t pid;
char *buffer;
size_t bufsize = BUFFER_SIZE;
ssize_t lineSize;
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
break;  /* Exit the loop on EOF (Ctrl+D)*/
} else {
perror("Read error");
exit(EXIT_FAILURE);
}
}

/* Remove the trailing newline character*/
buffer[strcspn(buffer, "\n")] = '\0';

/* Fork a child process*/

pid = fork();

if (pid == -1) {
perror("Fork error");
exit(EXIT_FAILURE);
} else if (pid == 0) {
/* Child process*/

/* Tokenize the command and arguments*/
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
fprintf(stderr, "%s: No such file or directory\n", argv[0]);
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

