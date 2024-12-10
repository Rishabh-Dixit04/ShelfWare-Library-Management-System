#ifndef LIBRARY_SERVER_H
#define LIBRARY_SERVER_H

#include <stdio.h>
#include <stdlib.h>


int admin_check(char buffer[]);

int add_new_book(char buffer[]);

int remove_book(char buffer[]);

int search_book(char buffer[], int new_socket);

int modify_book_count(char buffer[]);

int display_books(char buffer[], int new_socket);

int display_members(char buffer[], int new_socket);

int remove_member(char buffer[]);

int borrow_book(char buffer[]);

int return_book(char buffer[]);

int add_member(char buffer[]);

int login_member(char buffer[]);

void * handle_client(void * socket_fd);

#endif 