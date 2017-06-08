//
// Created by Louis Liu on 2017/6/5.
//

#include <jni.h>
#include<stdio.h>
#include "louis_helloworld_jni_HelloWorld.h"
JNIEXPORT void JNICALL Java_louis_helloworld_jni_HelloWorld_print
        (JNIEnv *env, jobject obj) {
    printf("Hello World!\n");
    return;
}