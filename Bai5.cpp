#include <stdio.h>

struct Subscription {
    int sub_id;
    char plan_name[31];
    float monthly_fee;
    int user_limit;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n <= 0) {
        printf("So luong goi dich vu khong hop le!\n");
        return 0;
    }

    struct Subscription subs[100];
    float total_revenue = 0.0f;

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f %d", &subs[i].sub_id, subs[i].plan_name, &subs[i].monthly_fee, &subs[i].user_limit);
        total_revenue += subs[i].monthly_fee;
    }

    printf("%-10s %-15s %-16s %-15s\n", "MA GOI", "TEN GOI", "CUOC PHI (USD)", "GIOI HAN USER");
    printf("---------------------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%-10d %-15s %-16.2f %-15d\n", subs[i].sub_id, subs[i].plan_name, subs[i].monthly_fee, subs[i].user_limit);
    }
    
    printf("---------------------------------------------------------------\n");
    printf("TONG DOANH THU HANG THANG: %.2f USD\n", total_revenue);

    return 0;
}
