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
 // Display details(book1);
return 0;
{
