#include <stdio.h>
struct Book {
    char title[100];
    char author[100];
    int year;
    };
void displayDetails(struct Book b) {
    printf("Book Details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Publication Year: %d\n", b.year);
   }
int main() {
    
    struct Book book1 = {"Romeo and Juliet","william Shakespeare",1969,};
 // Display detai
void displayDetails(struct Book b) {
    printf("Book Details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Publication Year: %d\n", b.year);
    printf("Genre: %s\n", b.genre);
    printf("ISBN: %s\n", b.isbn);
}

int main() {
    // Create two book instances and initialize them
    struct Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 1925, "Fiction
