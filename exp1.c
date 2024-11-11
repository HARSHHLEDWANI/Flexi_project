#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//1)decimal to binary 

void decimal_to_binary(int decimal){
    int binary[50],i=0;
    if (decimal == 0){
        printf("binary number is 0");
    }

    //loop 1) while loop to convert decimal into binary and store it in an array

    while(decimal>0){
        binary[i++]=decimal % 2;
        decimal /= 2;
    } 
    printf("the binary number is : ");
    //loop 2 for loop to reverse the array 
    for(int j = i-1;j>=0;j--){
        printf("%d",binary[j]);
    }

}

//2) binary to decimal 
void binary_to_decimal(char* binary){
    int decimal = 0 , base = 1 , len=strlen(binary);
    //loop tp convert binary to decimal
    for(int i = len - 1;i >=0;i--){
        if(binary[i]== '1'){
            decimal += base;
        }
        base*=2;
    }
    printf("decimal number is  %d",decimal );
}

//3) decimal to octal
void decimal_to_octal(int decimal){
    int octal[50],i=0;
    if (decimal == 0){
        printf("octal number is 0");
    }

    //loop 1) while loop to convert decimal into binary and store it in an array

    while(decimal>0){
        octal[i++]=decimal % 8;
        decimal /= 8;
    } 
    printf("the octal number is : ");
    //loop 2 for loop to reverse the array 
    for(int j = i-1;j>=0;j--){
        printf("%d",octal[j]);
    }

}
//4) octal to decimal 
void octal_to_decimal(char* octal){
    int decimal=0,base=1,len=strlen(octal);
    for(int i = len-1; i>=0; i--){
        decimal +=(octal[i]-'0')*base;
        base*=8;
    }
    printf("decimal number is %d\n",decimal);
}
void hexadecimalToDecimal(char *hexadecimal) {
    int decimal = 0, base = 1, len = strlen(hexadecimal);
    for (int i = len - 1; i >= 0; i--) {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            decimal += (hexadecimal[i] - '0') * base;
        } else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            decimal += (hexadecimal[i] - 'A' + 10) * base;
        }
        base *= 16;
    }
    printf("Decimal: %d\n", decimal);   
}

//main function 
int main(){
    int decimal,choice;
    char number[50];

    do{
        printf("\n");
        printf("1) decimal to binary\n");
        printf("2) binary to decimal\n");
        printf("3) decimal to octal \n");
        printf("4) octal to decimal\n");
        printf("5. Decimal to Hexadecimal\n");
        printf("6. Hexadecimal to Decimal\n");
        printf("7) exit\n");
        printf("enter a choice : ");
        scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("Enter decimal number : ");
            scanf("%d",&decimal);
            decimal_to_binary(decimal);
            break;
        case 2:
            printf("Enter binary number : ");
            scanf("%s",number);
            binary_to_decimal(number);
            break;
        case 3:
            printf("enter decimal number : ");
            scanf("%d",&decimal);
            decimal_to_octal(decimal);
            break;
        case 4:
            printf("enter octal number : ");
            scanf("%s",number);
            octal_to_decimal(number);
            break;
        case 5:
                printf("Enter a decimal number: ");
                scanf("%d", &decimal);
                decimalToHexadecimal(decimal);
                break;
            case 6:
                printf("Enter a hexadecimal number: ");
                scanf("%s", number);
                hexadecimalToDecimal(number);
                break;
        case 7:
            printf("exitting");
            break;
    }

    }   while(choice!=7);

    return 0;

}

