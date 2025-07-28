#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义学生信息的结构体
struct Student {
    int number;
    float grade1;
    float grade2;
    char name[21];
};

// 比较函数，用于 qsort 按学号排序
int compare(const void *a, const void *b) {
    return ((struct Student *)a)->number - ((struct Student *)b)->number;
}

// 输入学生信息
void getinput(struct Student *students, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d %f %f %[^\n]", &students[i].number, &students[i].grade1, &students[i].grade2, students[i].name);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // 动态分配学生数组
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // 获取输入
    getinput(students, n);

    // 按学号排序
    qsort(students, n, sizeof(struct Student), compare);

    // 输出学生信息
    for (int i = 0; i < n; i++) {
        printf("%d %s %.2f %.2f\n", students[i].number, students[i].name, students[i].grade1, students[i].grade2);
    }

    // 释放动态分配的内存
    free(students);

    return 0;
}