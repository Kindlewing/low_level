#include <sys/socket.h>

int main(int argc, char *argv[]) {
  int socket_fd = socket(AF_LOCAL, SOCK_STREAM, 0);

  if (socket_fd == -1) {
    // We have an error and should exit
    return -1;
  }

  return 0;
}
