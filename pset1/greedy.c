#include <stdio.h>
#include <cs50.h>


int main(void) {
    float change;
    int coins = 0;
    do {
        printf("Change: ");
        change = GetFloat();
    }
    while (change < 0);
    change = change * 100;
    int newChange = (int)change;
    printf("change is: %d\n", newChange);
    // determine how many 25 cents coins are required
    if (newChange < 5) {
        coins = newChange;
        
        
    }
    if (newChange == 5) {
        coins = 1;
    }
    
    if (newChange < 10) {
        coins = 1 + (newChange - 5);
    }
    
    if (newChange == 10) {
        coins = 1;
    }
    
    if (newChange < 25) {
        coins = (int)(newChange / 10) + newChange % 5;
    }
    
    if (newChange == 25) {
        coins = (int)(newChange / 25);
        printf("coins are %d\n", coins);
    }
   
    printf("%d", coins);
    
}
