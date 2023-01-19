# Libft

***Libft*** is a library of C functions, I've learned to code and to use. I have to use this library to do my 42's school projects.
I've added to this library the ***ft_printf*** I've learned to code and to use in the same way, as a 42's school project.
And also added the ***get_next_line*** function used to return each line of a file, done as a 42's school project too.

### ➢ Libft process

Many of the libft functions are the essentials to use like :
- ft_strlen
- ft_memcpy and other related functions
- ft_isalpha and other related functions
- ft_calloc
- ft_strdup
and so on...

There is also custom functions to use as tool in bigger projects like :
- ft_split : split the given string to each occurence of the given character
- ft_striteri : apply the given function to each character of the given string
and so on...

And function to manipulate linked lists like :
- ft_lstnew
- ft_lstadd_back
and so on...
I've to say I didn't use libft linked list functions that much and prefered to code adapted linked function to my current project.

Libft learn to read the man properly, teach to think what to do if wrong arguments are given to the function and how to build tools I need.

### ➢ ft_printf process

Mainly to learn how to use the stdarg library to write functions with variable arguments. Without all the conversions to recode and without the flags, the project is pretty simple.
Here the doc I read to understand the project :
- [va_arg va_start va_end](https://learn.microsoft.com/fr-fr/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?view=msvc-170)
- [printf format identifers](https://www.lix.polytechnique.fr/~liberti/public/computing/prog/c/C/FUNCTIONS/format.html)

### ➢ get_next_line

This project learns how to deal with memory allocation and de-allocation. It also learns how to write a code and test/debug it progressively to check what works or not, instead of wait until the end to don't know what doesn't work and rewrite it all from the start.
