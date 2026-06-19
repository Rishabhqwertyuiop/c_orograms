
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number>=18) {
        printf("Elligible to vote");
    } else {
        printf("Not Elligible to vote");
    }

    return 0;
}