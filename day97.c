// Q147.c
#include <stdio.h>

typedef struct {
    char name[50];
    int id;
    float salary;
} Employee;

int main(void) {
    Employee arr[2] = { {"Ann",101,50000}, {"Ben",102,60000} };
    FILE *fp = fopen("employees.bin", "wb");
    if (!fp) { perror("employees.bin"); return 1; }
    fwrite(arr, sizeof(Employee), 2, fp);
    fclose(fp);

    Employee read_arr[2];
    fp = fopen("employees.bin", "rb");
    if (!fp) { perror("employees.bin"); return 1; }
    size_t n = fread(read_arr, sizeof(Employee), 2, fp);
    fclose(fp);

    for (size_t i = 0; i < n; i++)
        printf("%s %d %.2f\n", read_arr[i].name, read_arr[i].id, read_arr[i].salary);
    return 0;
}