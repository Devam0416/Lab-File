#include <stdio.h>


int global_counter = 10;


void access_global();
void modify_global();
void local_shadow();


int main() {
    printf("Initial State: Global Counter = %d\n", global_counter);

   
    access_global();
 
    modify_global();
    printf("After modify_global: Global Counter = %d\n", global_counter);

    
    local_shadow();
    printf("After local_shadow: Global Counter = %d\n", global_counter); 

    return 0;
}



void access_global() {
    
    printf("Inside access_global (Read): Global Counter = %d\n", global_counter);
}

void modify_global() {
   
    global_counter = 50;
    printf("Inside modify_global (Modify): Global Counter set to %d\n", global_counter);
}

void local_shadow() {
    
    int global_counter = 5; 
    printf("Inside local_shadow (Local): Local Counter = %d\n", global_counter);
   
}
