int main() {
    int principal, rate, time, simple_interest;

    printf("Enter Principal: ");
    scanf("%d", &principal);

    printf("Enter Rate: ");
    scanf("%d", &rate);

    printf("Enter Time: ");
    scanf("%d", &time);

    simple_interest = principal * rate * time / 100;

    printf("Simple Interest = %d\n", simple_interest);

    return 0;
}
