#include<windows.h>
int main(int argc,char** argv)
{
    ShellExecuteA(0,"open","index.html",0,0,1);
    return 0;
}
