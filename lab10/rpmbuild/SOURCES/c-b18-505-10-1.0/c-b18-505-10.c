#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, world, from C!\n");
    system("rpm -i /root/rpmbuild/RPMS/noarch/b18-505-10-1.0-1.el8.noarch.rpm");
    return 0;
}
