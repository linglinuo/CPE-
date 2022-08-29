#include <stdio.h>
#include <string.h>

int prime(int n)
{
    for (int i = 2; i * i <= n; i++) if ((n % i) == 0) return 0;
    return 1;
}

int main()
{
    int Num[10010];
    int a, b;
    memset(Num, 0, sizeof(Num));
    for (int i = 0; i <= 10005; i++) Num[i] = prime(i * i + i + 41);
    while (scanf("%d%d", &a, &b) != -1)
    {
        int sum = 0;
        for (int i = a; i <= b; i++) sum += Num[i]; 
        printf("%.2f\n", sum * 1.0 / (b - a + 1) * 100 + 1e-8);
    }
    return 0;
}
