#include <stdio.h>

typedef struct {
    int book_id;
    char title[100];
    char author[100];
    float price;
} Book;

void printBook(Book b) {
    printf("\nBook Details:\n");
    printf("ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    Book b;
    printf("Enter book ID, title, author, and price:\n");
    scanf("%d", &b.book_id);
    scanf(" %[^\n]", b.title);
    scanf(" %[^\n]", b.author);
    scanf("%f", &b.price);

    printBook(b);
    return 0;
}