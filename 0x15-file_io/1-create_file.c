#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: file name to be read.
 * @text_content: content write in the file.
 *
 * Return: 1 if it is success - fi file exist
 *          -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
        int fd;
        int rwr;
        int n_letters;

        if (filename == NULL)
        {
                return (-1);
        }

        fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

        if (fd == -1)
        {
                return (-1);
        }

        if (text_content == NULL)
        {
                text_content = "";
        }

        n_letters  = 0;

        while (text_content[n_letters] != '\0')
        {
                n_letters++;
        }

        rwr = write(fd, text_content, n_letters);

        if (rwr == -1)
        {
                return (-1);
        }

        close(fd);

        return (1);
}
