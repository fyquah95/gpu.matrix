/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gpu_matrix_Vector */

#ifndef _Included_gpu_matrix_Vector
#define _Included_gpu_matrix_Vector
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     gpu_matrix_Vector
 * Method:    axpy
 * Signature: (DLgpu/matrix/Vector;)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_axpy
  (JNIEnv *, jobject, jdouble, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    scal
 * Signature: (D)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_scal
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gpu_matrix_Vector
 * Method:    clone
 * Signature: ()Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_clone
  (JNIEnv *, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    dot
 * Signature: (Lgpu/matrix/Vector;)D
 */
JNIEXPORT jdouble JNICALL Java_gpu_matrix_Vector_dot
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    nrm2
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_gpu_matrix_Vector_nrm2
  (JNIEnv *, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    asum
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_gpu_matrix_Vector_asum
  (JNIEnv *, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    add
 * Signature: (Lgpu/matrix/NDArray;)Lgpu/matrix/NDArray;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_add__Lgpu_matrix_NDArray_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    add
 * Signature: (Lgpu/matrix/Vector;)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_add__Lgpu_matrix_Vector_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    add
 * Signature: (D)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_add__D
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gpu_matrix_Vector
 * Method:    sub
 * Signature: (Lgpu/matrix/NDArray;)Lgpu/matrix/NDArray;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_sub__Lgpu_matrix_NDArray_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    sub
 * Signature: (Lgpu/matrix/Vector;)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_sub__Lgpu_matrix_Vector_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    sub
 * Signature: (D)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_sub__D
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gpu_matrix_Vector
 * Method:    mul
 * Signature: (Lgpu/matrix/NDArray;)Lgpu/matrix/NDArray;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_mul__Lgpu_matrix_NDArray_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    mul
 * Signature: (Lgpu/matrix/Vector;)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_mul__Lgpu_matrix_Vector_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    mul
 * Signature: (D)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_mul__D
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gpu_matrix_Vector
 * Method:    div
 * Signature: (Lgpu/matrix/NDArray;)Lgpu/matrix/NDArray;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_div__Lgpu_matrix_NDArray_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    div
 * Signature: (Lgpu/matrix/Vector;)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_div__Lgpu_matrix_Vector_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    div
 * Signature: (D)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_div__D
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gpu_matrix_Vector
 * Method:    length
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_gpu_matrix_Vector_length
  (JNIEnv *, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    get
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_gpu_matrix_Vector_get
  (JNIEnv *, jobject, jlong);

/*
 * Class:     gpu_matrix_Vector
 * Method:    set
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_gpu_matrix_Vector_set
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     gpu_matrix_Vector
 * Method:    print
 * Signature: ()Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_print
  (JNIEnv *, jobject);

/*
 * Class:     gpu_matrix_Vector
 * Method:    newInstance
 * Signature: ([D)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_newInstance___3D
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     gpu_matrix_Vector
 * Method:    newInstance
 * Signature: (J)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_newInstance__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gpu_matrix_Vector
 * Method:    newInstance
 * Signature: (JD)Lgpu/matrix/Vector;
 */
JNIEXPORT jobject JNICALL Java_gpu_matrix_Vector_newInstance__JD
  (JNIEnv *, jclass, jlong, jdouble);

/*
 * Class:     gpu_matrix_Vector
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gpu_matrix_Vector_finalize
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
