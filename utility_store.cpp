#include <stdio.h>
#include <time.h>

int main() {
    // 1. Welcome to Adam Khan store
    printf("***************************************\n");
    printf("WELCOME TO SMART UTILITY & SHOPPING HUB\n");
    printf("****************************************\n");

    // 2. Current Date & Time
    time_t tm;
    time(&tm);
    printf(" Current Date/Time = %s\n", ctime(&tm));

    // ---------------- Grocery Section ----------------
    float ricePrice = 300, sugarPrice = 200, potatoPrice = 150, applePrice = 400;
    float riceQty, sugarQty, potatoQty, appleQty;
    float riceTotal, sugarTotal, potatoTotal, appleTotal, groceryTotal;

    printf("--- Grocery Section ---\n");

    // User input
    printf("Enter Rice quantity (KG): ");
    scanf("%f", &riceQty);

    printf("Enter Sugar quantity (KG): ");
    scanf("%f", &sugarQty);

    printf("Enter Potatoes quantity (KG): ");
    scanf("%f", &potatoQty);

    printf("Enter Apples quantity (KG): ");
    scanf("%f", &appleQty);

    // Totals
    riceTotal = riceQty * ricePrice;
    sugarTotal = sugarQty * sugarPrice;
    potatoTotal = potatoQty * potatoPrice;
    appleTotal = appleQty * applePrice;
    groceryTotal = riceTotal + sugarTotal + potatoTotal + appleTotal;

    // Print bill
    printf("Rice (%.1f KG @ %.0f) = %.0f\n", riceQty, ricePrice, riceTotal);
    printf("Sugar (%.1f KG @ %.0f) = %.0f\n", sugarQty, sugarPrice, sugarTotal);
    printf("Potatoes (%.1f KG @ %.0f) = %.0f\n", potatoQty, potatoPrice, potatoTotal);
    printf("Apples (%.1f KG @ %.0f) = %.0f\n", appleQty, applePrice, appleTotal);
    printf("Grocery Subtotal = %.0f\n", groceryTotal);

    // ---------------- Electricity Section ----------------
    int units;
    int bill = 0, electricityBill;
    int fixedTax = 500;

    printf("--- Electricity Section ---\n");
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 300) {
        bill = (100 * 10) + (units - 100) * 15;
    } else {
        bill = (100 * 10) + (200 * 15) + (units - 300) * 20;
    }

    electricityBill = bill + fixedTax;

    printf("Units Consumed: %d", units);
    printf("Total Electricity Bill = %d\n", electricityBill);

    // ---------------- Final Summary ----------------
    int grandTotal, paid = 10000, balance;
    grandTotal = groceryTotal + electricityBill;
    balance = paid - grandTotal;

    printf("--------------------------------------\n");
    printf("Grand Total = %d\n", grandTotal);
    printf("Amount Paid = %d\n", paid);
    printf("Balance Returned = %d\n", balance);

    // Breakdown of notes
    int n5000, n1000, n500, n200, n100, n50, n20, n10, n5, n2, n1;

    n5000 = balance / 5000; balance %= 5000;
    n1000 = balance / 1000; balance %= 1000;
    n500 = balance / 500; balance %= 500;
    n200 = balance / 200; balance %= 200;
    n100 = balance / 100; balance %= 100;
    n50 = balance / 50; balance %= 50;
    n20 = balance / 20; balance %= 20;
    n10 = balance / 10; balance %= 10;
    n5 = balance / 5; balance %= 5;
    n2 = balance / 2; balance %= 2;
    n1 = balance / 1; balance %= 1;

    printf("Notes:\n");
    printf("5000 = %d\n", n5000);
    printf("1000 = %d\n", n1000);
    printf("500 = %d\n", n500);
    printf("200 = %d\n", n200);
    printf("100 = %d\n", n100);
    printf("50 = %d\n", n50);
    printf("20 = %d\n", n20);
    printf("10 = %d\n", n10);
    printf("5 = %d\n", n5);
    printf("2 = %d\n", n2);
    printf("1 = %d\n", n1);

    printf("--------------------------------------\n");
    printf("THANK YOU FOR USING SMART HUB!\n");

    return 0;
}