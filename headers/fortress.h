#ifndef FORTRESS_H
#define FORTRESS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define LI long int
# define INT_MAX_LENGTH 10
# define BOOL char
# define SIZE unsigned int
# define BUFFSIZE 10

/*
**Makes it easier to keep track of the size of a string on heavy usage of a single string? #DRY
*/
typedef	struct	string_s
{
	char	*content;
	SIZE	length;
}				string_t;

/*
**string manipulation
*/
void	put_chr(const char c);
void	put_str(const char* s);
void	dry_put_str(const char* str, SIZE length);
void	put_arrow(const char* str, SIZE s);
void	msg_and_func(const char* msg, void(*func)(void));
void	put_endl_str(const char* s);
SIZE	len_str(const char* s);
void	copy_str(const char* source, char* dest);
void	copy_str_till_n(const char* src, char* dest, SIZE length);
void	fill_with_n_c_str(char* str, char c, SIZE s);
SIZE	compare_str(const char* str1, const char *str2);
BOOL	str_match(const char* str1, const char *str2);
BOOL	str_perfect_match(const char* str1, const char *str2);
BOOL	str_equals_any(char* str, char** candidates);
void	set_buffer(string_t* buffer, char* bufstr);
void	disp_buf(string_t* buffer);
void	buf_chr(const char c, string_t* buffer);
void	buf_chr_check(const char c, string_t* buffer);
void	buf_str(const char* str, string_t* buffer);
void	buf_str_n(const char* str, string_t* buffer, SIZE str_length);
void	buf_str_n_c(string_t* buffer, const char* str, SIZE length, char c);
void	buf_str_n_c_check(string_t* buffer, const char* str, SIZE length, char c);
void	buf_str_n_check(const char* str, string_t* buffer, SIZE str_length);
void	buf_int_check(const int n, string_t* buffer, int* mult_and_size);
void	quick_buf_int_check(const int n, string_t* buffer);
void	buf_int(const int n, string_t* buffer);
void	disp_and_buf_str_n(const char* str, string_t* buffer, SIZE str_length);
void	fill_and_disp_buff(const char* str, string_t* buffer, SIZE s);
void	do_and_progress_str(void(*func)(char*, SIZE), char* str, const SIZE length, SIZE *progress);
void	do_and_progress_const_str(void(*func)(const char*, SIZE), const char* str, const SIZE length, SIZE *progress);

/*
**file manipulation
*/
int		open_and_read_n(const char* file_name, char* buffer, SIZE len_str);

/*
**Exit
*/
void	exit_msg(const char *to_disp);
void	test_exit(void*	test_ptr, const char *msg);
void	exit_arrow(const char* str, SIZE s, const char* msg);

/*
**Conversion
*/
int		get_size_nb(int n);
int		get_mult_nb(const int n);
void	get_mult_and_size(const int n, int* mult_and_size);
void	int_to_str(int n, char* to_fill, SIZE n_size);

#endif
