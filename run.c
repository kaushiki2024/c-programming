 main(){
    float num1,num2;
    float result;
    char op;
    printf("enter the number: \n");
    scanf(" %f",&num1);
    printf("enter the operator: \n");
    scanf(" %c",&op);
    printf("enter the number: \n ");
    scanf(" %f",&num2);
    switch(op){
        case'-':
        result==num1-num2;
        printf("%f",result);
        break;
        case'+':
        result==num1+num2;
        printf("%f",result);
        break;
        case'*':
        result==num1*num2;
        printf("%f",result);
        break;
        case'/':
        result==num1/num2;
        printf("%f",result);
        break;
        default:
        printf("the operation is not valid");    
    }
    
}
