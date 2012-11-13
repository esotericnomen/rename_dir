/*
*	Program to change movie directory name as 
*   Change Log :
*       Version: 0.0.1
*           building skeleton
*   
*/
#include "../include/rename_dir.h"

void listdir(const char *name)
{
    DIR *dir;
    struct dirent *entry;

    if (!(dir = opendir(name)))
        return;
    if (!(entry = readdir(dir)))
        return;

    do {
        if (entry->d_type == DT_DIR) {
            char path[1024];
            int len = snprintf(path, sizeof(path)-1, "%s/%s", name, entry->d_name);
            path[len] = 0;
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
                continue;
            printf("%*s[%s]\n","", entry->d_name);
            listdir(path);
        }
        else
            printf("%*s- %s\n","", entry->d_name);
    } while (entry = readdir(dir));
    closedir(dir);
}
