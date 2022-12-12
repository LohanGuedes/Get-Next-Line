<h1 align="center">Welcome to GNL 👋</h1>
<p>🪡 Return the next line of given file descriptor every time you call the function</p>

# GNL
Get Next Line Project for ecole42.
Because Reading a Line from a file descriptor is way too tedious.

## Goals:
This Project will allow me to add a very convenient function to my collection.
[libft](https://github.com/LohanGuedes/libft) but will also make me learn Static Variables and how to work with them.

---

- Status: Finished
- Result: 125%

---

## Install

```sh
git clone https://github.com/peguimasid/42-GNL get_next_line
```

## Usage

1. Inside project dir create a text file (`file.txt`)

```
this is the first line
this is the second line
how many times you gonna call me?
```

2. Create a `main.c` file

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd)); // this is the first line
	printf("%s", get_next_line(fd)); // this is the second line
	printf("%s", get_next_line(fd)); // how many times you gonna call me?
	close(fd);
}
```

## Run

```sh
gcc get_next_line.c get_next_line.h get_next_line_utils.c main.c && ./a.out
```

## Author

👤 **Lohan Guedes**

- Github: [@lguedes](https://github.com/lohanguedes)
- LinkedIn: [@lohan-guedes](https://www.linkedin.com/in/lohan-guedes-0349b5239/)

## Show your support
