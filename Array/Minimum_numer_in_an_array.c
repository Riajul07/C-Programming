/* output cannot count first input*/
#include <stdio.h>
int main(){
    int array[100], minimum, size,i,location =1;
    printf("Enter the number of elements of Array\n");
    scanf("%d", &size);
    printf("Enter %d interger\n", size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    minimum = array[0];
    for ( i = 0; i < size; i++)
    {
        if (array[i]< minimum)
        {
            minimum = array[i];
            location = i+1;
        }
        
    }
    printf("Minimum element is is present %d and its value is %d", location, array[location]);
    return 0;
    
}