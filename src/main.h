#define CLASH_RL_BUFSIZE 1024
#define CLASH_TOKEN_BUFSIZE 64
#define CLASH_TOKEN_DELIM " \t\r\n\a"

int get_clash_builtin_cmd_count();
char *get_dir_name();

int clash_launch(char **args);
int clash_execute(char **args);
void clash_loop(void);

char *clash_read_line(void);
char **clash_split_line(char *line);

int clash_echo(char **args);
int clash_cd(char **args);
int clash_pwd(char **args);
int clash_mkdir(char **args);
int clash_touch(char **args);
int clash_ls(char **args);
int clash_exit(char **args);
