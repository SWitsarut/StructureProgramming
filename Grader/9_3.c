#include <stdio.h>
#include <math.h>

typedef struct
{
    int t;
    int fh;
    int h;
    int f;
    int twen;
    int ten;
    int o;
} Box;

int main()
{

    Box moneyBox = {0, 0, 0, 0, 0, 0};
    int money = 0;
    scanf("%d", &money);
    if (money >= 1000)
    {
        moneyBox.t += floor(money / 1000);
        money = money - (floor(money / 1000) * 1000);
    }

    if (money >= 500)
    {
        moneyBox.fh += floor(money / 500);
        money = money - (floor(money / 500) * 500);
    }

    if (money >= 100)
    {
        moneyBox.h += floor(money / 100);
        money = money - (floor(money / 100) * 100);
    }

    if (money >= 50)
    {
        moneyBox.f += floor(money / 50);
        money = money - (floor(money / 50) * 50);
    }

    if (money >= 20)
    {
        moneyBox.twen += floor(money / 20);
        money = money - (floor(money / 20) * 20);
    }

    if (money >= 10)
    {
        moneyBox.ten += floor(money / 10);
        money = money - (floor(money / 10) * 10);
    }
    if (money >= 0)
    {
        moneyBox.o += money;
    }

    printf("%d %d %d %d %d %d %d", moneyBox.t, moneyBox.fh, moneyBox.h, moneyBox.f, moneyBox.twen, moneyBox.ten, moneyBox.o);

    return 0;
}