#include <stdio.h>
#include <math.h>
int cost_price, selling_price, profit_percentage, loss_percentage, profit, loss;
int main() {
    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d", &cost_price, &selling_price);
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        profit_percentage = (profit * 100) / cost_price;
        printf("Profit Percentage: %d%%\n", profit_percentage);
        printf("Profit: %d\n", profit);
    }
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        loss_percentage = (loss * 100) / cost_price;
        printf("Loss Percentage: %d%%\n", loss_percentage);
        printf("Loss: %d\n", loss);
    }
    else {
        printf("No Profit No Loss\n");
    }
}