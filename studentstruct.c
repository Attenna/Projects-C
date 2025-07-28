#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[21];
    float score1;
    float score2;
};

void sortStudents(struct student students[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (students[j].number > students[j + 1].number) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %f %f", &students[i].number, &students[i].score1, &students[i].score2);
        getchar(); // 吃掉空格
        fgets(students[i].name, 21, stdin);
        // 去掉fgets读取的换行符
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }
    }

    sortStudents(students, n);

    for (int i = 0; i < n; i++) {
        printf("%d %s %.2f %.2f\n", students[i].number, students[i].name, students[i].score1, students[i].score2);
    }

    return 0;
}