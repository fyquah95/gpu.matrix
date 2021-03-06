#ifndef KERNELS_H
#define KERNELS_H

#include <assert.h>
#include <string.h>
#include <stdio.h>

#include <jni.h>
#include "../types.h"
#include "../libs/cl.h" 
#include "files.h"

#define KERNELS_COUNT 31
#define KERNEL_ADD 0
#define KERNEL_ADD_SCALAR 1
#define KERNEL_SUB 2
#define KERNEL_SUB_SCALAR 3
#define KERNEL_MUL 4
#define KERNEL_MUL_SCALAR 5
#define KERNEL_DIV 6
#define KERNEL_DIV_SCALAR 7
#define KERNEL_MMUL 8
#define KERNEL_VECTOR_AXPY 9
#define KERNEL_VECTOR_AXPY_BANG 10
#define KERNEL_VECTOR_SCAL_BANG 11
#define KERNEL_VECTOR_ASUM_BANG 12
#define KERNEL_VECTOR_SQUARE_BANG 13
#define KERNEL_VECTOR_ROT_BANG 14
#define KERNEL_VECTOR_ABS_BANG 15
#define KERNEL_VECTOR_MIN_BANG 16
#define KERNEL_VECTOR_MAX_BANG 17
#define KERNEL_VECTOR_IMIN_BANG 18
#define KERNEL_VECTOR_IMAX_BANG 19
#define KERNEL_VECTOR_RANGE 20
#define KERNEL_VECTOR_MUL_SCALAR_BANG 21
#define KERNEL_VECTOR_MUL_BANG 22
#define KERNEL_VECTOR_ADD_SCALAR_BANG 23
#define KERNEL_VECTOR_ADD_BANG 24
#define KERNEL_VECTOR_SUB_SCALAR_BANG 25
#define KERNEL_VECTOR_SUB_BANG 26
#define KERNEL_VECTOR_DIV_SCALAR_BANG 27
#define KERNEL_VECTOR_DIV_BANG 28
#define KERNEL_VECTOR_SUM_BANG 29
#define KERNEL_VECTOR_POW_BANG 30

static const char * gpu_matrix_kernel_names[] = {
    "add",
    "add_scalar",
    "sub",
    "sub_scalar",
    "mul",
    "mul_scalar",
    "div",
    "div_scalar",
    "mmul",
    "vector_axpy",
    "vector_axpy_bang",
    "vector_scal_bang",
    "vector_asum_bang",
    "vector_square_bang",
    "vector_rot_bang",
    "vector_abs_bang",
    "vector_min_bang",
    "vector_max_bang",
    "vector_imin_bang",
    "vector_imax_bang",
    "vector_range",
    "vector_mul_scalar_bang",
    "vector_mul_bang",
    "vector_add_scalar_bang",
    "vector_add_bang",
    "vector_sub_scalar_bang",
    "vector_sub_bang",
    "vector_div_scalar_bang",
    "vector_div_bang",
    "vector_sum_bang",
    "vector_pow_bang"
};

// Compiles the program and cahce it in a global buffer
static cl_program compile_program(cl_context, cl_device_id);

// Compiles a kernel and cache it in a global buffer, will run
// compile_prgram if a instance of a non-null program buffer 
// cannot be found
static cl_kernel compile_kernel(cl_context, cl_device_id, kernel_type_t);

// retrieves the program, runs compilation if a program cannot be found
cl_program program_get(cl_context, cl_device_id);

// retrieve a kernel, as defined by the kernel_id. If a kernel cannot
// be found, it will be compiled
cl_kernel kernels_get(cl_context, cl_device_id, kernel_type_t);

// set the global jvm buffer
void gpu_matrix_kernel_set_jvm(JNIEnv *);

// get file contents of the name specified by the directory
// given the arg <filename>:
// (if (defined? jvm-pointer)
//   (str jvm-resource-path "opencl/" filename)
//   (str SOURCE_PREFIX "opencl/" filename))
static char * get_file_contents(const char *);

// Get the relevant function / kernel name for a given openCL kernel_type_t
const char * get_cl_function_name(kernel_type_t);

// load compilation options
static char * get_compilation_options();

// TODO:
// Precompiles all the specified kernels
void gpu_matrix_kernel_precompile();

#endif
