#include #include #include #include int main(int argc,char **argv) { struct dirent **namelist; int n; if(argc < 1) { exit(EXIT_FAILURE); } else if (argc == 1) { n=scandir(“.”,&namelist,NULL,alphasort); } else { n = scandir(argv[1], &namelist, NULL, alphasort); } if(n < 0) { perror(“scandir”); exit(EXIT_FAILURE); } else { while (n–) { printf(“%s\n”,namelist[n]->d_name); free(namelist[n]); } free(namelist); } exit(EXIT_SUCCESS); }
Attribution link: https://latesthackingnews.com/2017/03/22/c-program-implement-ls-command/