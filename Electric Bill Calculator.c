#include <stdio.h>

int main()
{
    int units, cust_no;
    float amount;
    float surcharge;
    printf("\nELECTRIC BILL CALCULATOR by Nitsh\n\n##################################\n Units               Rate of charge\n\n0   - 200           Rs 0.50/unit\n201 - 400           Rs 100 + 0.65/unit\n401 - 600           Rs 230 + 0.80/unit\n601 & above         Rs 390 + 1.00/unit");
    
    printf("\nEnter your costomer id: ");
    scanf("%d", &cust_no);
    printf("Enter your consumed unit: ");
    scanf("%d", &units);

    if (units<=200){
        amount = (units*0.50);
    }
    else if (units<=400 && units>200) {
        amount = 100 + (0.65*(units-200));
    }
    else if (units<=600 && units>400) {
        amount= 230 + (0.80*(units-400));
        printf("case3");
    }
    else {
        amount=390+(1.00*(units-600));
    }
    printf("\nCustomer   id: %d", cust_no);
    printf("\nUnit consumed: %d", units);
    printf("\nAmount: Rs %f", amount);
    return 0;
}
