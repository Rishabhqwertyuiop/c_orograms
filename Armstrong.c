int main() {
    int num, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    while(num > 0){
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
        }
        
    if(sum == original)
        printf("%d This is a Armstrong number",original);
    else
        printf("%d This is not a Armstrong number",original);

    return 0;
}