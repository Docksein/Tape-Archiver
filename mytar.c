#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

char* get_tar_name(int argc, char ** argv)
{
	for (int i = 0; i < (argc - 1); ++i) {
		if (strcmp("-f", argv[i]) == 0) {
			return (argv[i + 1]);
		}
	}
	return NULL;
}

int main (int argc, char **argv)
{
	char* tar_name = get_tar_name(argc, argv);
}
