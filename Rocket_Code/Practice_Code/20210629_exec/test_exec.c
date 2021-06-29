#include <unistd.h>

int main()
{
    char*const  argv[]={"ps","-ef",NULL};
    char*const  envp[]={"PATH=/bin:/usr/bin","term=console",NULL};
    execl("/bin/ps","ps","-ef",NULL);
    // 带p的，可以使用环境变量PATH，无需写全路径
    execlp("ps","ps","-ef",NULL);
    // 带e的，需要自己组装环境变量
    execle("ps","ps","-ef",NULL,envp);
    execv("/bin/ps",argv);
    execvp("ps",argv);
    execve("ps",argv,envp);
    return 0;
}
