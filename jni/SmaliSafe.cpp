#include <jni.h>

void findView_after_native(JNIEnv *env, jobject obj){
    jclass cls = env->GetObjectClass(obj);
    jmethodID callback = env->GetMethodID(cls,"findView_after","()V");
    (void)env->CallVoidMethod(obj,callback);
}

void onActivityResult_after_native(JNIEnv *env, jobject obj,jint arg0,jint arg1,jobject arg2){
    jclass cls = env->GetObjectClass(obj);
    jmethodID callback = env->GetMethodID(cls,"onActivityResult_after","(IILandroid/content/Intent;)V");
    (void)env->CallVoidMethod(obj,callback,arg0,arg1,arg2);
}

void onClick_after_native(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->GetObjectClass(obj);
    jmethodID callback = env->GetMethodID(cls,"onClick_after","(Landroid/view/View;)V");
    (void)env->CallVoidMethod(obj,callback,arg0);
}

void onCreate_after_native(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->GetObjectClass(obj);
    jmethodID callback = env->GetMethodID(cls,"onCreate_after","(Landroid/os/Bundle;)V");
    (void)env->CallVoidMethod(obj,callback,arg0);
}

void onItemClick_after_native(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jint arg2,jlong arg3){
    jclass cls = env->GetObjectClass(obj);
    jmethodID callback = env->GetMethodID(cls,"onItemClick_after","(Landroid/widget/AdapterView;Landroid/view/View;IJ)V");
    (void)env->CallVoidMethod(obj,callback,arg0,arg1,arg2,arg3);
}

void refreshList_after_native(JNIEnv *env, jobject obj){
    jclass cls = env->GetObjectClass(obj);
    jmethodID callback = env->GetMethodID(cls,"refreshList_after","()V");
    (void)env->CallVoidMethod(obj,callback);
}

static const JNINativeMethod MainArr[] = {
    {"findView", "()V", (void*)findView_after_native},
    {"onActivityResult", "(IILandroid/content/Intent;)V", (void*)onActivityResult_after_native},
    {"onClick", "(Landroid/view/View;)V", (void*)onClick_after_native},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)onCreate_after_native},
    {"onItemClick", "(Landroid/widget/AdapterView;Landroid/view/View;IJ)V", (void*)onItemClick_after_native},
    {"refreshList", "()V", (void*)refreshList_after_native},
};

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved){
    JNIEnv* env; 
    jclass cls; 
    vm->GetEnv((void**)&env, JNI_VERSION_1_4); 
    cls = env->FindClass("com/hoimk/jian/MainActivity"); 
    env->RegisterNatives(cls,MainArr,sizeof(MainArr)/sizeof(MainArr[0])); 
    return JNI_VERSION_1_4; 

}