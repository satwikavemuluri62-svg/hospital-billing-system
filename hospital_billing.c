#include <stdio.h>

int main() {
    char name[30];
    float room, medicine, doctor, total, payment;

    printf("***** Hospital Billing System *****\n");

    printf("Enter Patient Name: ");
    scanf("%s", name);

    printf("Enter Room Charges: ");
    scanf("%f", &room);

    printf("Enter Medicine Charges: ");
    scanf("%f", &medicine);

    printf("Enter Doctor Fee: ");
    scanf("%f", &doctor);

    total = room + medicine + doctor;

    printf("\n---- BILL SUMMARY ----\n");
    printf("Patient Name: %s\n", name);
    printf("Total Bill = %.2f\n", total);

    printf("\nEnter Payment Amount: ");
    scanf("%f", &payment);

    if(payment >= total) {
        printf("Payment Successful ?\n");
        printf("Return Amount = %.2f\n", payment - total);
    } else {
        printf("Insufficient Payment ?\n");
        printf("Remaining Amount = %.2f\n", total - payment);
    }

    return 0;
}