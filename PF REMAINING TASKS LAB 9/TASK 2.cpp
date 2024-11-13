#include <stdio.h>

int main() {
    int bolts; 
      int nuts;
	 int washers;
    int cost;

   
    const int bolt_price = 5;
    const int nut_price = 3;
    const int washer_price = 1;

    
    printf("Number of bolts: ");
    scanf("%d", &bolts);

    printf("Number of nuts: ");
    scanf("%d", &nuts);

    printf("Number of washers: ");
    scanf("%d", &washers);

    
    cost = (bolts * bolt_price) + (nuts * nut_price) + (washers * washer_price);

    
    if (nuts < bolts) {
        printf("Check the Order: too few nuts\n");
    }
    if (washers < 2 * bolts) {
        printf("Check the Order: too few washers\n");
    }
    if (nuts >= bolts && washers >= 2 * bolts) {
        printf("Order is OK.\n");
    }

    printf("Total cost: %d cents\n", cost);

    return 0;
}

