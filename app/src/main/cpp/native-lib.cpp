#include <jni.h>
#include <string>
extern "C"
JNIEXPORT jstring JNICALL

Java_com_ndktest_MainActivity_stringFromNDKHello(JNIEnv *env, jobject /* this */) {

    // TODO
    std::string hello="123456789";
    char a;
//    for(int i=0;i< sizeof(hello)/2;i++){
//        a=hello[i];
//        hello[i]=hello[sizeof(hello)-i];
//        hello[sizeof(hello)-i]=a;
//    }


    return env->NewStringUTF(hello.c_str());
}

jstring
Java_com_ndktest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "从C++出来的你好";
//    for(int i=0;i<hello.length()/2;i++){
//        char ch=hello[i];
//        hello[i]=hello[hello.length()-i];
//        hello[hello.length()-i]=ch;
//    }
    if(hello.empty()){
        hello="kongde";
    }
    return env->NewStringUTF(hello.c_str());
}


