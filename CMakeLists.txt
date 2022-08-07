cmake_minimum_required(VERSION 3.23.2)
project(simple_shell)
set(CMAKE_C 89)
add_executable(simple_shell aux_error1.c aux_error2.c
         aux_help.c aux_help2.c aux_lists.c aux_lists2.c aux_mem.c aux_stdlib.c aux_str.c aux_str2.c aux_str3.c shell_loop.c cd_shell.c
        get_error.c get_builtin.c get_help.c get_line.c env1.c env2.c cd.c check_syntax_error.c get_sigint.c split.c rep_var.c read_line.c exec_line.c exit_shell.c cmd_exec.c main.c)
