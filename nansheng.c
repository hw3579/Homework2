#include<stdio.h>
int main() {
    int i = 0, n, a[32],m,b[32],o=0;
    printf("请输入一个0-255的整数，0-127为男，128-255为女.\n");
    scanf("%d", &n);
    
    if(n<128)  // 男生情况
     { while (n > 0) {
        a[i] = n % 2;
        i = i + 1;
        n = n / 2;
       
         }
    printf("性别：男，学号:\n");
    for (i--; i >= 0; i--)
        printf("%d", a[i]);
    printf("\n");
    
    }
    else     // 女生情况
    {
    m=n-128;
    while (m > 0) {
        b[o] = m % 2;
        o = o + 1;
        m = m / 2;
       
         }
    printf("性别：女，学号:\n");
    for (o--; o >= 0; o--)
        printf("%d", b[o]);
    printf("\n");
    }
    
    
    return 0;
}
