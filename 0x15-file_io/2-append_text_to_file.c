#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file
 *
 * @filename: fiel name to be read.
 * @text_content: content added o the textfile.
 *
 * Return: 1 if the file exist and -1 if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
        int fd;
        int n_letters;
        int rwr;

        if (filename == NULL)
        {
                return (-1);
        }

        fd = open(filename, O_WRONLY | O_APPEND);

        if (fd == -1)
        {
                return (-1);
        }

        if (text_content)
        {
                n_letters = 0;
                while (text_content[n_letters] != '\0')
                {
                        n_letters++;
                }

                rwr = write(fd, text_content, n_letters);

                if (rwr == -1)
                {
                        return (-1);
                }
        }

        close(fd);

        return (1);
}
