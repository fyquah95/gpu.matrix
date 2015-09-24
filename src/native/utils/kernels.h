#ifndef KERNELS_H
#define KERNELS_H

#include <assert.h>
#include <string.h>
#include <stdio.h>

#include <jni.h>
#include "../libs/cl.h" 
#include "files.h"

typedef const unsigned kernel_type_t;

#define KERNEL_ADD 0
#define KERNEL_ADD_SCALAR 1
#define KERNEL_SUB 2
#define KERNEL_SUB_SCALAR 3
#define KERNEL_MUL 4
#define KERNEL_MUL_SCALAR 5
#define KERNEL_DIV 6
#define KERNEL_DIV_SCALAR 7

void gpu_matrix_kernel_set_jvm(JNIEnv *);
char * get_file_contents(const char *);
const char * get_program_file_name(kernel_type_t);
const char * get_cl_function_name(kernel_type_t);
char * get_file_contents(const char * filename);
cl_kernel kernels_get(cl_context, cl_device_id, kernel_type_t);

#endif
