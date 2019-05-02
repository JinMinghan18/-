# include <stdio.h>
int main(void)
{
    int val;  //variable的缩写, “变量”的意思
    printf("请输入您想去的楼层:");
    scanf("%d", &val);
    switch (val)
    {
        case 1:
            printf("1层开!\n");
            break;
        case 2:
            printf("2层开!\n");
            break;
        case 3:
            printf("3层开!\n");
            break;
        default:
            printf("该层不存在, 请重新输入\n");
    }
    return 0;
}
