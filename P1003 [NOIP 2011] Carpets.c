#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // 存储地毯信息：左下角坐标(a,b)，x轴长度g，y轴长度k
    int carpets[10000][4];
    
    // 读取每张地毯的信息
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &carpets[i][0], &carpets[i][1], &carpets[i][2], &carpets[i][3]);
    }
    
    // 读取查询点坐标
    int x, y;
    scanf("%d %d", &x, &y);
    
    int result = -1;  // 默认没有地毯覆盖
    
    // 从第一张地毯开始检查，后铺的会覆盖前面的
    for (int i = 0; i < n; i++) {
        int a = carpets[i][0];  // 左下角x坐标
        int b = carpets[i][1];  // 左下角y坐标
        int g = carpets[i][2];  // x轴方向长度
        int k = carpets[i][3];  // y轴方向长度
        
        // 检查点(x,y)是否在地毯范围内
        // 地毯范围：[a, a+g] × [b, b+k]
        if (x >= a && x <= a + g && y >= b && y <= b + k) {
            result = i + 1;  // 地毯编号从1开始
        }
    }
    
    printf("%d\n", result);
    
    return 0;
}