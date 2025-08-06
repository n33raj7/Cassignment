#include<stdio.h>

void TowerOfHanoi(int n, char from, char to, char aux)
{
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    TowerOfHanoi(n - 1, from, aux, to);
    printf("N1 = %d\n", n);
    printf("Move disk %d from %c to %c\n", n, from, to);
    printf("N2 = %d\n", n);
    TowerOfHanoi(n - 1, aux, to, from);
}
int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    TowerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
