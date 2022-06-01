#include <stdio.h>

// 每条数据记录该有的信息
typedef struct Book
{
    int wasBorrow;
    char operate;
    int hour;
    int min;
}Book;

int main ()
{
    int days, count, times, id;
    id = days = count = times = 0;
    // 存储每本书的借还情况
    Book records[1005], temp;
    scanf("%d", &days);
    while (days--)
    {
        while (1)
        {
            scanf("%d %c %d:%d", &id, &temp.operate, &temp.hour, &temp.min);
            if (0 == id)
                break;
            // 读取的操作如果是归还的话
            else if ('E' == temp.operate)
            {
                if (records[id].wasBorrow == 1)
                {
                    count++;
                    times += (temp.hour - records[id].hour) * 60 + temp.min - records[id].min;
                    records[id].wasBorrow = 0;
                }
            }
            // 读取的操作如果是借阅的话
            else if ('S' == temp.operate)
            {
                records[id] = temp;
                records[id].wasBorrow = 1;
            }
        }
        // 当天数据处理完之后输出结果
        if (0 == count)
            printf("0 0\n");
        else
            printf("%d %d\n", count, (int)((double)times/count+0.5));
        // 初始化一些该初始化的值
        count = times = 0;
        for (int i = 0; i < 1005; i++)
            records[i].wasBorrow = 0;
    }
    return 0;
}
