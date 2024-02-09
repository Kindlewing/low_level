#include <netinet/in.h>
#include <sys/socket.h>

int main(int argc, char *argv[]) {
	struct sockaddr_in *address;

	int socket_fd = socket(AF_LOCAL, SOCK_STREAM, 0);

	if (socket_fd == -1) {
		return -1;
	}

	return 0;
}
