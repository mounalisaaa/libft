#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *str;
	
	str = malloc (count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
/*int main() {
    // Test Case 1: Allocating and initializing an array of integers
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr != NULL) {
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);  // Expected Output: 0 0 0 0 0
        }
        printf("\n");
        free(arr);
    }

    // Test Case 2: Allocating and initializing a string
    char *str = (char *)ft_calloc(10, sizeof(char));
    if (str != NULL) {
        strcpy(str, "Hello");
        printf("%s\n", str);  // Expected Output: Hello
        free(str);
    }

    // Test Case 3: Allocating zero elements (should return NULL)
    int *empty_arr = (int *)ft_calloc(0, sizeof(int));
    if (empty_arr == NULL) {
        printf("Empty array: NULL\n");  // Expected Output: Empty array: NULL
    }

    // Test Case 4: Allocating zero bytes (should return NULL)
    char *empty_str = (char *)ft_calloc(5, 0);
    if (empty_str == NULL) {
        printf("Empty string: NULL\n");  // Expected Output: Empty string: NULL
    }

    return 0;
}*/
