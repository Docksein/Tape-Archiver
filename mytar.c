#include <stdio.h>
#include <string.h>
#include <err.h>
#include <stdbool.h> 

/*
 * Parses the program arguments, if the -f option is found,
 * returns the string after the -f option. 
 * In case of wrong file name or missing -f option, returns null pointer.
 */
char* get_tar_name(int argc, char ** argv)
{
	for (int i = 0; i < (argc - 1); ++i) {
		if (strcmp("-f", argv[i]) == 0) {
			if (argv[i+1][0] == '-') {
				return NULL;
			}
			return (argv[i + 1]);
		}
	}
	return NULL;
}

int main (int argc, char **argv)
{
	char* tar_name = get_tar_name(argc, argv);
	if (tar_name == NULL)
		err(2, "Error while parsing tar archive name");
}
