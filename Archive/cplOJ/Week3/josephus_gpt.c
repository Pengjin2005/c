#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of people (n) and the count to be killed (k): ");
    scanf("%d %d", &n, &k);

    // 创建一个数组来表示每个人的存活状态，1表示存活，0表示自杀
    int people[100];
    for (int i = 0; i < n; i++) {
        people[i] = 1;
    }

    int remaining = n;  // 剩下的人数
    int current = 0;    // 当前数数的人

    while (remaining > 1) {
        int count = 0;
        while (count < k) {
            if (people[current] == 1) {
                count++;
            }
            current = (current + 1) % n;
        }

        // 此时，people[current]表示数到第k个人，该人自杀
        people[current] = 0;
        remaining--;

        // 找到下一个存活的人
        while (people[current] == 0) {
            current = (current + 1) % n;
        }
    }


    // 找到最后一个存活的人
    int lastSurvivor = -1;
    for (int i = 0; i < n; i++) {
        if (people[i] == 1) {
            lastSurvivor = i + 1;  // 编号从1开始
            break;
        }
    }

    printf("The last survivor's number is: %d\n", lastSurvivor);

    return 0;
}
