#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>

int main() {
	struct sockaddr_in *address;

	int socket_fd = socket(AF_LOCAL, SOCK_STREAM, 0);

	if (socket_fd == -1) {
		perror("Nah");
		return -1;
	}

	address->sin_family = AF_LOCAL;
	address->sin_port = 1024;
	address->sin_addr.s_addr = inet_addr("127.0.0.1");

	if (bind(socket_fd, (struct sockaddr *)address, sizeof(*address)) == -1) {
		return -1;
	}
	printf("Bound socket to 127.0.0.1\n");

	return 0;
}
