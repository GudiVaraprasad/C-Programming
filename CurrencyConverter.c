// Program to create a Currency Converter
#include <stdio.h>

int main() 
{
    float inr;
    float usd, eu, yen, riyal;
    int converter;
    printf("\n-------- MY CURRENCY CONVERTER PROGRAM ------------\n");

    printf("\nEnter your value in Indian Rupees  : Rs. ");
    scanf("%f",&inr);

    printf("\nNow, you want to convert INR to ?");
    printf("\n1. US Dollars ($)\n2. European Union (EU)\n3. Japanese Yen (Y)\n4. Saudi Riyal (SR)");
    printf("\nChoose your currency : ");
    scanf("%d",&converter);
    while((converter<1) || (converter>4))
    {
        printf("\nTry Again! Invalid currency choosen.. ");
        printf("\nChoose your currency : ");
        scanf("%i",&converter);
    }

    if(converter==1)
    {
        usd = inr*0.013;
        printf("Rs. %.2f = $ %.2f",inr,usd);
    }
    else if(converter==2)
    {
        eu = inr*0.012;
        printf("Rs. %.2f = EU %.2f",inr,eu);
    }
    else if(converter==3)
    {
        yen = inr*1.51;
        printf("Rs. %.2f = Y %.2f",inr,yen);
    }
    else if(converter==4)
    {
        riyal = inr*0.050;
        printf("Rs. %.2f = SR %.2f",inr,riyal);
    }
    else
    {
        printf("\nTry Again! Invalid option choosen..");
        main();
    }
    return 0;
}