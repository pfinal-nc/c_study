
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
 
#include <netdb.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <sys/types.h>

#include <sys/socket.h>

enum OperatingSystem {
    WINDOWS,
    LINUX,
    MAC,
    UNKNOWN
};

enum OperatingSystem getOperatingSystem() {
    #ifdef _WIN32
        return WINDOWS;
    #elif __linux__
        return LINUX;
    #elif __APPLE__
        return MAC;
    #else
        return UNKNOWN;
    #endif
}
// 获取mac 本地 ip
char* getMacIP() {
	char* ip = NULL;
	const char *test_eth = "eth0";
    int sd;
	struct sockaddr_in sin;
	struct ifreq ifr;
    sd = socket(AF_INET, SOCK_DGRAM, 0);
	if (-1 == sd)
	{
		printf("socket error: %s\n", strerror(errno));
		return NULL;		
	}
 
	strncpy(ifr.ifr_name, test_eth, IFNAMSIZ);
	ifr.ifr_name[IFNAMSIZ - 1] = 0;
	
	// if error: No such device
	if (ioctl(sd, SIOCGIFADDR, &ifr) < 0)
	{
		printf("ioctl error: %s\n", strerror(errno));
		close(sd);
		return NULL;
	}
 
	memcpy(&sin, &ifr.ifr_addr, sizeof(sin));
	snprintf(ip,16, "%s", inet_ntoa(sin.sin_addr));
 
	close(sd);
	return ip;
}

// 获取 本机ip
char * getlocal_ip()
{
    char *ip_address = NULL;
    enum OperatingSystem os = getOperatingSystem();
    switch (os)
    {
        case MAC:
            /* code */
            ip_address = getMacIP();
            break;
        
        default:
            break;
    }
	return ip_address;

}

int main()
{
	char name[28] = "";
	printf("本地IP:%s\n", getlocal_ip());
    return 0;    
}

