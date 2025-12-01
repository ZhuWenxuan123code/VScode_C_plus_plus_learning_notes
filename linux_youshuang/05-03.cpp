#include <sys/socket.h> // 定义了套接字（socket）函数、结构体和常量
#include <netinet/in.h> // 定义了Internet地址族的相关结构体和常量
#include <arpa/inet.h>  // 定义了IP地址转换函数
#include <signal.h>     // 定义了信号处理相关函数和常量
#include <unistd.h>     // 定义了POSIX操作系统API函数 如close sleep等
#include <stdlib.h>     // 定义了通用工具函数 如atoi等
#include <assert.h>     // 提供了断言宏assert 用于调试
#include <stdio.h>
#include <string.h> // 提供了字符串处理函数 如bzero
static bool stop = false;
/*SIGTERM信号的处理函数，触发时结束主程序中的循环*/
static void handle_term(int sig)
{
    stop = true;
}
int main(int argc, char *argv[])
{
    signal(SIGTERM, handle_term); // 注册SIGTERM信号的处理函数：如果本程序收到SIGTERM信号 就调用handle_term函数
    if (argc <= 3)                // 参数个数检查
    {
        printf("usage:%s ip_address port_number backlog\n", basename(argv[0]));
        return 1;
    }
    const char *ip = argv[1];                   // 从命令行获取：监听的 IP 地址（如 127.0.0.1）
    int port = atoi(argv[2]);                   // 从命令行获取：监听的端口号（如 8080）
    int backlog = atoi(argv[3]);                // 从命令行获取：backlog, 连接请求队列的最大长度
    int sock = socket(PF_INET, SOCK_STREAM, 0); // 1. 创建socket
    assert(sock >= 0);
    /*创建一个IPv4 socket地址*/
    struct sockaddr_in address;
    bzero(&address, sizeof(address));
    address.sin_family = AF_INET;
    inet_pton(AF_INET, ip, &address.sin_addr);                          // 字符串IP地址 --> 网络字节序二进制形式
    address.sin_port = htons(port);                                     // 主机字节序 --> 网络字节序
    int ret = bind(sock, (struct sockaddr *)&address, sizeof(address)); // 2. 命名socket
    assert(ret != -1);
    ret = listen(sock, backlog); // 3. 将socket标记为被动监听状态
    assert(ret != -1);
    /*循环等待连接，直到有SIGTERM信号将它中断*/
    while (!stop)
    {
        sleep(1);
    }
    /*关闭socket，见后文*/
    close(sock);
    return 0;
}