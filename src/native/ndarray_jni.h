/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gpu_matrix_NDArray */

#ifndef _Included_gpu_matrix_NDArray
#define _Included_gpu_matrix_NDArray
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     gpu_matrix_NDArray
 * Method:    sample
 * Signature: ()Lgpu/matrix/NDArray;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_NDArray_sample
  (JNIEnv *, jclass);

/*
 * Class:     gpu_matrix_NDArray
 * Method:    createFromShape
 * Signature: ([J)Lgpu/matrix/NDArray;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_NDArray_createFromShape
  (JNIEnv *, jclass, jlongArray);

/*
 * Class:     gpu_matrix_NDArray
 * Method:    newInstance
 * Signature: ([DJ[J[J)Lgpu/matrix/NDArray;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_NDArray_newInstance
  (JNIEnv *, jclass, jdoubleArray, jlong, jlongArray, jlongArray);

/*
 * Class:     gpu_matrix_NDArray
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gpu_matrix_NDArray_init
  (JNIEnv *, jclass);

/*
 * Class:     gpu_matrix_NDArray
 * Method:    add
 * Signature: (Lgpu/matrix/NDArray;)Lgpu/matrix/NDArray;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_NDArray_add
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_NDArray
 * Method:    clone
 * Signature: ()Lgpu/matrix/NDArray;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_NDArray_clone
  (JNIEnv *, jobject);

/*
 * Class:     gpu_matrix_NDArray
 * Method:    print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gpu_matrix_NDArray_print
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
