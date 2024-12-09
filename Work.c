#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for the linked list node
typedef struct Book {
    char title[100];
    float price;
    int pages;
    char language[50];
    float weight;
    int year;
    struct Book* next;
} Book;

// Function to create a new book node
Book* createBook(const char* title, float price, int pages, const char* language, float weight, int year) {
    Book* newBook = (Book*)malloc(sizeof(Book));
    if (!newBook) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    strcpy(newBook->title, title);
    newBook->price = price;
    newBook->pages = pages;
    strcpy(newBook->language, language);
    newBook->weight = weight;
    newBook->year = year;
    newBook->next = NULL;
    return newBook;
}

// Function to print the book details
void printBooks(Book* head) {
    Book* current = head;
    while (current != NULL) {
        printf("Title: %s\n", current->title);
        printf("Price: $%.2f\n", current->price);
        printf("Pages: %d\n", current->pages);
        printf("Language: %s\n", current->language);
        printf("Weight: %.2f kg\n", current->weight);
        printf("Year: %d\n", current->year);
        printf("-----------------------\n");
        current = current->next;
    }
}

int main() {
    // Create linked list nodes for books
    Book* book1 = createBook("Harry Potter and the Philosopher's Stone", 19.99, 223, "English", 0.45, 1997);
    Book* book2 = createBook("Harry Potter and the Chamber of Secrets", 20.99, 251, "English", 0.5, 1998);
    Book* book3 = createBook("Harry Potter and the Prisoner of Azkaban", 22.99, 317, "English", 0.6, 1999);

    // Link the nodes
    book1->next = book2;
    book2->next = book3;

    // Print the linked list
    printf("Harry Potter Book Series:\n");
    printf("-----------------------\n");
    printBooks(book1);

    // Free allocated memory
    free(book1);
    free(book2);
    free(book3);

    return 0;
}


