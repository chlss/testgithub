#include <jni.h>
#include <string>



extern "C" {
jstring
Java_com_example_chenhong_hellojni_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
JNIEXPORT jint JNICALL
Java_com_example_chenhong_hellojni_MainActivity_addJNI(JNIEnv *env, jobject instance, jint a,
                                                       jint b) {
    int k = a+b;
    return k;
}

}

