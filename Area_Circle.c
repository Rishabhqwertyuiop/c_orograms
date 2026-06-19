int main() {
    float pi = 3.14, area;
    int r;

    printf("Enter radius: ");
    scanf("%d", &r);

    area = pi * r * r;

    printf("Area = %.2f\n", area);

    return 0;
}
