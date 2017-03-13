#include <jni.h>

struct Regnative{ 
    char* className; 
    int size; 
    JNINativeMethod* method;};

jobject sub_782_260(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumCardListFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_583_55","(Ljava/lang/String;)Lcom/coolapk/market/view/main/AlbumCardListFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback,arg0);
}

jobject sub_19_810(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumCardListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_505_14","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

jobject sub_857_435(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumCardListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_752_312","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_128_63(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumCardListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_274_855","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

void sub_346_288(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumCardListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_528_105","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_534_404(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_487_234","()Lcom/coolapk/market/view/main/AlbumListFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

jint sub_921_322(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_268_493","(I)I");
    return (jint)env->CallIntMethod(obj,callback,arg0);
}

jobject sub_895_325(JNIEnv *env, jobject obj,jobject arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_474_300","(Landroid/view/ViewGroup;I)Lcom/coolapk/market/i/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

jobject sub_960_953(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_235_588","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

void sub_637_241(JNIEnv *env, jobject obj,jboolean arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_437_578","(ZLjava/lang/Throwable;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

jboolean sub_16_501(JNIEnv *env, jobject obj,jboolean arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_456_553","(ZLcom/coolapk/market/network/Result;)Z");
    return (jboolean)env->CallBooleanMethod(obj,callback,arg0,arg1);
}

jobject sub_702_663(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_20_364","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jboolean sub_849_457(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_935_362","()Z");
    return (jboolean)env->CallBooleanMethod(obj,callback);
}

void sub_298_244(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_965_577","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_364_608(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_216_533","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_173_370(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_125_731","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_147_613(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_400_120","(Lcom/coolapk/market/e/l;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_658_756(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AppListFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_949_721","(Ljava/lang/String;)Lcom/coolapk/market/view/main/AppListFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback,arg0);
}

jobject sub_165_119(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AppListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_111_180","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

jobject sub_470_861(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AppListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_20_162","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_253_44(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AppListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_64_237","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

void sub_396_177(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/AppListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_918_570","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_495_947(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/b");
    jmethodID callback = env->GetMethodID(cls,"sub_842_887","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

jint sub_948_829(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_601_461","()I");
    return (jint)env->CallIntMethod(obj,callback);
}

void sub_316_106(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_773_97","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_213_372(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_710_759","(Ljava/lang/String;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_473_587(JNIEnv *env, jobject obj,jobject arg0,jint arg1,jint arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_542_739","(Ljava/lang/String;II)V");
    env->CallVoidMethod(obj,callback,arg0,arg1,arg2);
}

void sub_564_854(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_570_294","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_772_447(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_722_36","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_266_679(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_333_925","(Ljava/lang/String;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jboolean sub_627_216(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_391_321","()Z");
    return (jboolean)env->CallBooleanMethod(obj,callback);
}

void sub_308_149(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_639_239","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_258_269(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/d");
    jmethodID callback = env->GetMethodID(cls,"sub_733_382","()V");
    env->CallVoidMethod(obj,callback);
}

jobject sub_720_432(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_134_369","()Lcom/coolapk/market/view/main/DiscoveryFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

void sub_335_582(JNIEnv *env, jobject obj,jobject arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_501_113","(Landroid/app/Fragment;I)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

void sub_341_867(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_74_631","()V");
    env->CallVoidMethod(obj,callback);
}

jobject sub_15_91(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_274_383","(I)Landroid/app/Fragment;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0);
}

jobject sub_239_438(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_83_755","()Landroid/support/v4/view/ViewPager$OnPageChangeListener;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

void sub_933_5(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_474_681","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_534_268(JNIEnv *env, jobject obj,jboolean arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_33_838","(Z)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_956_831(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_88_714","(I)Landroid/app/Fragment;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0);
}

void sub_98_587(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_390_189","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_764_495(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_243_612","(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1,arg2);
}

void sub_332_689(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_414_239","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_691_508(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_692_843","(Lcom/coolapk/market/e/ac;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_834_368(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_620_59","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_261_635(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryListFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_886_801","()Lcom/coolapk/market/view/main/DiscoveryListFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

jint sub_189_538(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_621_264","(I)I");
    return (jint)env->CallIntMethod(obj,callback,arg0);
}

jobject sub_797_946(JNIEnv *env, jobject obj,jobject arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_367_675","(Landroid/view/ViewGroup;I)Lcom/coolapk/market/i/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

void sub_595_521(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/DiscoveryListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_852_559","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_861_217(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/f");
    jmethodID callback = env->GetMethodID(cls,"sub_650_75","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

void sub_64_990(JNIEnv *env, jobject obj,jfloat arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_518_792","(F)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_810_617(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_539_563","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_803_495(JNIEnv *env, jobject obj,jfloat arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_641_914","(F)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_770_169(JNIEnv *env, jobject obj,jfloat arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_215_807","(F)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_563_356(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_465_96","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_572_226(JNIEnv *env, jobject obj,jfloat arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_57_474","(F)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_10_326(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_86_431","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_937_572(JNIEnv *env, jobject obj,jfloat arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_165_804","(F)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jboolean sub_610_523(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_160_864","()Z");
    return (jboolean)env->CallBooleanMethod(obj,callback);
}

void sub_285_383(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_340_346","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_165_52(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_188_667","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_535_755(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_738_330","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_595_357(JNIEnv *env, jobject obj,jint arg0,jint arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_575_877","(IILandroid/content/Intent;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1,arg2);
}

void sub_411_874(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_899_668","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_189_308(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_484_237","(Landroid/view/View;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_599_705(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/FeedEntranceActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_123_26","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_153_800(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/g");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_174_791","(I)Landroid/app/Fragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback,arg0);
}

void sub_492_895(JNIEnv *env, jobject obj,jobject arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/g");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_168_838","(Landroid/app/Fragment;I)V");
    env->CallStaticVoidMethod(cls,callback,arg0,arg1);
}

jobject sub_189_597(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_268_378","()Lcom/coolapk/market/view/main/GroupFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

void sub_161_337(JNIEnv *env, jobject obj,jobject arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_802_325","(Landroid/app/Fragment;I)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

void sub_99_364(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_610_723","(Ljava/lang/String;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_147_524(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_831_737","(I)Landroid/app/Fragment;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0);
}

jobject sub_903_893(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_168_438","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

void sub_839_150(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_176_123","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_835_883(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_634_167","()V");
    env->CallVoidMethod(obj,callback);
}

jobject sub_820_391(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_165_54","()Ljava/lang/Integer;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_156_277(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_239_162","()Landroid/support/v4/view/ViewPager$OnPageChangeListener;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_225_372(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_45_342","(I)Landroid/app/Fragment;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0);
}

void sub_44_69(JNIEnv *env, jobject obj,jfloat arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_863_592","(F)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_609_648(JNIEnv *env, jobject obj,jboolean arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_93_240","(Z)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_807_174(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_635_665","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_652_967(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_625_605","(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1,arg2);
}

void sub_455_328(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_426_756","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_244_773(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/GroupFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_855_960","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_407_197(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_753_7","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_220_344(JNIEnv *env, jobject obj,jobject arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_282_556","(Ljava/lang/String;I)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

jobject sub_601_340(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_364_690","()Lcom/coolapk/market/view/main/HeadlinesFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

void sub_690_511(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_817_393","()V");
    env->CallVoidMethod(obj,callback);
}

jobject sub_687_97(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_957_948","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_686_483(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_801_142","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_974_69(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_592_742","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

void sub_299_309(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_113_388","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_904_843(JNIEnv *env, jobject obj,jint arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_459_950","(ILjava/lang/Throwable;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

void sub_972_889(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jint arg2,jint arg3){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_166_494","(Landroid/support/v7/widget/RecyclerView$ViewHolder;Landroid/view/View;II)V");
    env->CallVoidMethod(obj,callback,arg0,arg1,arg2,arg3);
}

void sub_768_840(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_114_979","(Lcom/coolapk/market/view/main/c$a;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_331_324(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_520_835","(Ljava/lang/String;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_619_403(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_284_329","(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Throwable;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1,arg2);
}

void sub_634_52(JNIEnv *env, jobject obj,jobject arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_235_826","(Ljava/util/List;Ljava/lang/Throwable;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

jboolean sub_670_960(JNIEnv *env, jobject obj,jboolean arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_707_435","(ZLjava/util/List;)Z");
    return (jboolean)env->CallBooleanMethod(obj,callback,arg0,arg1);
}

void sub_229_243(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_28_415","(Ljava/lang/String;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jint sub_180_207(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_66_189","(I)I");
    return (jint)env->CallIntMethod(obj,callback,arg0);
}

void sub_58_764(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jint arg2,jint arg3){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_734_152","(Landroid/support/v7/widget/RecyclerView$ViewHolder;Landroid/view/View;II)V");
    env->CallVoidMethod(obj,callback,arg0,arg1,arg2,arg3);
}

void sub_460_424(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_18_489","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_177_824(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_111_155","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_134_351(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_542_264","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_564_739(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_709_241","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_19_780(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_26_801","(Lcom/coolapk/market/e/l;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_619_986(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_692_995","(Lcom/coolapk/market/e/n;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_714_822(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_972_57","(Lcom/coolapk/market/e/m;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_412_853(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_662_758","(Lcom/coolapk/market/e/r;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_463_886(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_643_922","(Lcom/coolapk/market/e/t;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_624_105(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_637_390","(Lcom/coolapk/market/e/s;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_316_217(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_345_215","(Lcom/coolapk/market/e/u;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_273_517(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_93_475","(Lcom/coolapk/market/e/o;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_75_889(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_615_697","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_684_824(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_463_41","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_4_224(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_20_26","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_614_768(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_200_7","(Lcom/coolapk/market/e/ai;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_632_896(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_242_776","(Lcom/coolapk/market/e/aj;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_981_75(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_791_739","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_583_248(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_71_920","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_681_967(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_887_821","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_377_241(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/HeadlinesFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_857_903","()V");
    env->CallVoidMethod(obj,callback);
}

jobject sub_316_507(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/LatestListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_849_849","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

jobject sub_568_50(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/LatestListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_51_479","(Lcom/coolapk/market/model/ServiceApp;)Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0);
}

void sub_173_93(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_645_255","(Landroid/content/Intent;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_341_138(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_267_771","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_358_731(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_332_161","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_329_281(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_520_743","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_290_493(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_514_697","(Lcom/coolapk/market/AppTheme;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_676_680(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_865_172","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_797_471(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_20_69","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_493_493(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_125_322","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_801_566(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainActivity");
    jmethodID callback = env->GetMethodID(cls,"sub_67_90","()V");
    env->CallVoidMethod(obj,callback);
}

jobject sub_295_907(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainCategoryFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_376_279","()Lcom/coolapk/market/view/main/MainCategoryFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

jint sub_323_877(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainCategoryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_783_356","(I)I");
    return (jint)env->CallIntMethod(obj,callback,arg0);
}

jobject sub_349_633(JNIEnv *env, jobject obj,jobject arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainCategoryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_34_704","(Landroid/view/ViewGroup;I)Lcom/coolapk/market/i/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

void sub_285_396(JNIEnv *env, jobject obj,jboolean arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainCategoryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_886_964","(ZLjava/lang/Throwable;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

jboolean sub_335_652(JNIEnv *env, jobject obj,jboolean arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainCategoryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_81_439","(ZLcom/coolapk/market/network/Result;)Z");
    return (jboolean)env->CallBooleanMethod(obj,callback,arg0,arg1);
}

void sub_637_607(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainCategoryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_347_622","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_561_63(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainCategoryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_521_791","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_141_682(JNIEnv *env, jobject obj,jobject arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainCategoryFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_641_979","(Landroid/view/View;Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

jobject sub_275_304(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_190_129","()Lcom/coolapk/market/view/main/MainFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

void sub_656_792(JNIEnv *env, jobject obj,jint arg0,jobject arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_933_880","(ILandroid/app/FragmentManager;Landroid/app/FragmentTransaction;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1,arg2);
}

void sub_386_579(JNIEnv *env, jobject obj,jobject arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_84_688","(Landroid/app/Fragment;I)V");
    env->CallStaticVoidMethod(cls,callback,arg0,arg1);
}

void sub_240_155(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_159_547","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_672_441(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_623_317","(I)Landroid/app/Fragment;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0);
}

void sub_218_445(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_4_355","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_771_155(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_238_971","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_965_51(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_527_171","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_776_400(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_267_561","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_665_523(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_334_688","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_79_476(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_610_322","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_388_70(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_556_556","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_413_15(JNIEnv *env, jobject obj,jint arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_251_343","(II)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

void sub_214_349(JNIEnv *env, jobject obj,jobject arg0,jint arg1,jboolean arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_270_376","(Landroid/view/View;IZ)V");
    env->CallVoidMethod(obj,callback,arg0,arg1,arg2);
}

jboolean sub_710_572(JNIEnv *env, jobject obj,jint arg0,jboolean arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_746_54","(IZ)Z");
    return (jboolean)env->CallBooleanMethod(obj,callback,arg0,arg1);
}

jobject sub_562_890(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_934_322","()Lcom/coolapk/market/view/a/a;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_23_43(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_716_718","()Landroid/app/Fragment;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jint sub_48_545(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_39_162","()I");
    return (jint)env->CallIntMethod(obj,callback);
}

void sub_43_247(JNIEnv *env, jobject obj,jint arg0,jint arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_387_627","(IILandroid/content/Intent;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1,arg2);
}

void sub_423_1(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_93_219","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_621_181(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_646_241","(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1,arg2);
}

void sub_753_323(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_998_153","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_74_696(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_168_187","(Lcom/coolapk/market/f/j;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_764_189(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_9_570","(Lcom/coolapk/market/e/y;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_87_129(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_901_393","(Lcom/coolapk/market/manager/a;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_138_997(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_910_47","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_501_230(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_25_51","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_484_330(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_841_848","(Lcom/coolapk/market/e/ae;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_410_485(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_937_859","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_742_621(JNIEnv *env, jobject obj,jobject arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MainFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_53_26","(Landroid/view/View;Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

jobject sub_966_876(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_135_280","()Lcom/coolapk/market/view/main/MarketFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

void sub_243_930(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_331_725","()V");
    env->CallVoidMethod(obj,callback);
}

jint sub_320_979(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_166_869","()I");
    return (jint)env->CallIntMethod(obj,callback);
}

void sub_411_357(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_47_799","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_762_424(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_711_250","()V");
    env->CallVoidMethod(obj,callback);
}

jobject sub_228_148(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_220_347","()Landroid/support/v4/view/ViewPager$OnPageChangeListener;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_633_131(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_835_821","()Lcom/coolapk/market/view/main/HeadlinesFragment;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

void sub_747_817(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_614_275","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_619_221(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_803_137","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_146_809(JNIEnv *env, jobject obj,jint arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_623_879","(ILjava/lang/Throwable;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

void sub_157_525(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_309_415","(Ljava/lang/String;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_286_316(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_61_10","(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Throwable;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1,arg2);
}

void sub_271_905(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_448_278","(Ljava/util/ArrayList;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_562_751(JNIEnv *env, jobject obj,jobject arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_796_484","(Ljava/util/List;Ljava/lang/Throwable;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

void sub_350_304(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_945_772","(Ljava/lang/String;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_498_980(JNIEnv *env, jobject obj,jboolean arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_354_922","(Z)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_505_169(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_826_927","(I)Landroid/app/Fragment;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0);
}

void sub_470_490(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_166_215","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jint sub_312_23(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_128_597","()I");
    return (jint)env->CallIntMethod(obj,callback);
}

void sub_48_161(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_46_379","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_709_903(JNIEnv *env, jobject obj,jint arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_468_625","(I)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_734_591(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_885_505","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_669_866(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_961_15","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_542_413(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_444_678","(Landroid/view/View;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_690_253(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_836_609","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_88_602(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_76_288","(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1,arg2);
}

void sub_82_783(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_82_723","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_649_767(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_426_858","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_43_815(JNIEnv *env, jobject obj,jobject arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MarketFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_118_668","(Landroid/view/View;Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

jobject sub_27_232(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MorePageFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_362_17","()Lcom/coolapk/market/view/main/MorePageFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

jobject sub_415_154(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/MorePageFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_12_269","(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1,arg2);
}

jobject sub_919_315(JNIEnv *env, jobject obj,jobject arg0,jobject arg1,jobject arg2){
    jclass cls = env->FindClass("com/coolapk/market/view/main/NavigationLeftFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_950_691","(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1,arg2);
}

jboolean sub_881_383(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/NavigationLeftFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_412_172","(Landroid/view/MenuItem;)Z");
    return (jboolean)env->CallBooleanMethod(obj,callback,arg0);
}

jobject sub_904_773(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/NewestListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_44_298","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

jobject sub_779_327(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/NewestListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_588_597","(Lcom/coolapk/market/model/ServiceApp;)Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0);
}

void sub_207_314(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/PaddingFeedListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_417_491","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_33_910(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetStaticMethodID(cls,"sub_863_246","()Lcom/coolapk/market/view/main/RankFragment;");
    return (jobject)env->CallStaticObjectMethod(cls,callback);
}

jobject sub_432_769(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_974_52","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

void sub_618_81(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_960_993","(Landroid/support/v7/widget/RecyclerView$Adapter;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_906_28(JNIEnv *env, jobject obj,jboolean arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_647_758","(ZLjava/lang/Throwable;)V");
    env->CallVoidMethod(obj,callback,arg0,arg1);
}

jboolean sub_709_920(JNIEnv *env, jobject obj,jboolean arg0,jobject arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_260_332","(ZLjava/util/List;)Z");
    return (jboolean)env->CallBooleanMethod(obj,callback,arg0,arg1);
}

jobject sub_775_587(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_199_664","()Ljava/util/List;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jboolean sub_168_248(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_605_25","()Z");
    return (jboolean)env->CallBooleanMethod(obj,callback);
}

void sub_396_431(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_150_680","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_206_266(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_334_610","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

void sub_15_478(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_834_175","()V");
    env->CallVoidMethod(obj,callback);
}

void sub_151_962(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RankFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_139_39","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_359_875(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RecommendAlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_819_213","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

jobject sub_711_580(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RecommendAlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_153_959","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_622_444(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RecommendAlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_434_559","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

void sub_25_948(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RecommendAlbumListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_426_841","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

jobject sub_221_11(JNIEnv *env, jobject obj,jboolean arg0,jint arg1){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RecommendAppListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_837_625","(ZI)Lc/e;");
    return (jobject)env->CallObjectMethod(obj,callback,arg0,arg1);
}

jobject sub_31_612(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RecommendAppListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_703_840","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

jobject sub_942_895(JNIEnv *env, jobject obj){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RecommendAppListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_788_121","()Ljava/lang/String;");
    return (jobject)env->CallObjectMethod(obj,callback);
}

void sub_738_154(JNIEnv *env, jobject obj,jobject arg0){
    jclass cls = env->FindClass("com/coolapk/market/view/main/RecommendAppListFragment");
    jmethodID callback = env->GetMethodID(cls,"sub_650_328","(Landroid/os/Bundle;)V");
    env->CallVoidMethod(obj,callback,arg0);
}

static JNINativeMethod arr_479_670[] = {
    {"a", "(Ljava/lang/String;)Lcom/coolapk/market/view/main/AlbumCardListFragment;", (jobject*)sub_782_260},
    {"a", "(ZI)Lc/e;", (jobject*)sub_19_810},
    {"b", "()Ljava/lang/String;", (jobject*)sub_857_435},
    {"d", "()Ljava/lang/String;", (jobject*)sub_128_63},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_346_288},
};

static JNINativeMethod arr_901_167[] = {
    {"n", "()Lcom/coolapk/market/view/main/AlbumListFragment;", (jobject*)sub_534_404},
    {"a", "(I)I", (jint*)sub_921_322},
    {"a", "(Landroid/view/ViewGroup;I)Lcom/coolapk/market/i/e;", (jobject*)sub_895_325},
    {"a", "()Ljava/lang/String;", (jobject*)sub_960_953},
    {"a", "(ZLjava/lang/Throwable;)V", (void*)sub_637_241},
    {"a", "(ZLcom/coolapk/market/network/Result;)Z", (jboolean*)sub_16_501},
    {"b", "()Ljava/lang/String;", (jobject*)sub_702_663},
    {"e_", "()Z", (jboolean*)sub_849_457},
    {"onActivityCreated", "(Landroid/os/Bundle;)V", (void*)sub_298_244},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_364_608},
    {"onDestroy", "()V", (void*)sub_173_370},
    {"onFeedDeleted", "(Lcom/coolapk/market/e/l;)V", (void*)sub_147_613},
};

static JNINativeMethod arr_505_573[] = {
    {"a", "(Ljava/lang/String;)Lcom/coolapk/market/view/main/AppListFragment;", (jobject*)sub_658_756},
    {"a", "(ZI)Lc/e;", (jobject*)sub_165_119},
    {"b", "()Ljava/lang/String;", (jobject*)sub_470_861},
    {"d", "()Ljava/lang/String;", (jobject*)sub_253_44},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_396_177},
};

static JNINativeMethod arr_224_333[] = {
    {"a", "(ZI)Lc/e;", (jobject*)sub_495_947},
};

static JNINativeMethod arr_217_735[] = {
    {"a", "()I", (jint*)sub_948_829},
    {"a", "(Landroid/os/Bundle;)V", (void*)sub_316_106},
    {"a", "(Ljava/lang/String;)V", (void*)sub_213_372},
    {"a", "(Ljava/lang/String;II)V", (void*)sub_473_587},
    {"b", "()V", (void*)sub_564_854},
    {"b", "(Landroid/os/Bundle;)V", (void*)sub_772_447},
    {"b", "(Ljava/lang/String;)V", (void*)sub_266_679},
    {"c", "()Z", (jboolean*)sub_627_216},
    {"d", "()V", (void*)sub_308_149},
    {"e", "()V", (void*)sub_258_269},
};

static JNINativeMethod arr_342_144[] = {
    {"a", "()Lcom/coolapk/market/view/main/DiscoveryFragment;", (jobject*)sub_720_432},
    {"a", "(Landroid/app/Fragment;I)V", (void*)sub_335_582},
    {"b", "()V", (void*)sub_341_867},
    {"c", "(I)Landroid/app/Fragment;", (jobject*)sub_15_91},
    {"c", "()Landroid/support/v4/view/ViewPager$OnPageChangeListener;", (jobject*)sub_239_438},
    {"a", "(I)V", (void*)sub_933_5},
    {"a_", "(Z)V", (void*)sub_534_268},
    {"b", "(I)Landroid/app/Fragment;", (jobject*)sub_956_831},
    {"onActivityCreated", "(Landroid/os/Bundle;)V", (void*)sub_98_587},
    {"onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;", (jobject*)sub_764_495},
    {"onDestroy", "()V", (void*)sub_332_689},
    {"onPageChangeEnevtChanged", "(Lcom/coolapk/market/e/ac;)V", (void*)sub_691_508},
    {"onSaveInstanceState", "(Landroid/os/Bundle;)V", (void*)sub_834_368},
};

static JNINativeMethod arr_359_26[] = {
    {"s", "()Lcom/coolapk/market/view/main/DiscoveryListFragment;", (jobject*)sub_261_635},
    {"a", "(I)I", (jint*)sub_189_538},
    {"a", "(Landroid/view/ViewGroup;I)Lcom/coolapk/market/i/e;", (jobject*)sub_797_946},
    {"onActivityCreated", "(Landroid/os/Bundle;)V", (void*)sub_595_521},
};

static JNINativeMethod arr_215_700[] = {
    {"a", "(ZI)Lc/e;", (jobject*)sub_861_217},
};

static JNINativeMethod arr_226_543[] = {
    {"b", "(F)V", (void*)sub_64_990},
    {"c", "()V", (void*)sub_810_617},
    {"c", "(F)V", (void*)sub_803_495},
    {"d", "(F)V", (void*)sub_770_169},
    {"e", "()V", (void*)sub_563_356},
    {"e", "(F)V", (void*)sub_572_226},
    {"f", "()V", (void*)sub_10_326},
    {"f", "(F)V", (void*)sub_937_572},
    {"a", "()Z", (jboolean*)sub_610_523},
    {"b_", "()V", (void*)sub_285_383},
    {"c_", "()V", (void*)sub_165_52},
    {"finish", "()V", (void*)sub_535_755},
    {"onActivityResult", "(IILandroid/content/Intent;)V", (void*)sub_595_357},
    {"onBackPressed", "()V", (void*)sub_411_874},
    {"onClick", "(Landroid/view/View;)V", (void*)sub_189_308},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_599_705},
};

static JNINativeMethod arr_372_369[] = {
    {"a", "(I)Landroid/app/Fragment;", (jobject*)sub_153_800},
    {"a", "(Landroid/app/Fragment;I)V", (void*)sub_492_895},
};

static JNINativeMethod arr_243_9[] = {
    {"a", "()Lcom/coolapk/market/view/main/GroupFragment;", (jobject*)sub_189_597},
    {"a", "(Landroid/app/Fragment;I)V", (void*)sub_161_337},
    {"a", "(Ljava/lang/String;)V", (void*)sub_99_364},
    {"b", "(I)Landroid/app/Fragment;", (jobject*)sub_147_524},
    {"b", "()Ljava/lang/String;", (jobject*)sub_903_893},
    {"c", "()V", (void*)sub_839_150},
    {"d", "()V", (void*)sub_835_883},
    {"f", "()Ljava/lang/Integer;", (jobject*)sub_820_391},
    {"g", "()Landroid/support/v4/view/ViewPager$OnPageChangeListener;", (jobject*)sub_156_277},
    {"a", "(I)Landroid/app/Fragment;", (jobject*)sub_225_372},
    {"a", "(F)V", (void*)sub_44_69},
    {"a_", "(Z)V", (void*)sub_609_648},
    {"onActivityCreated", "(Landroid/os/Bundle;)V", (void*)sub_807_174},
    {"onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;", (jobject*)sub_652_967},
    {"onDestroyView", "()V", (void*)sub_455_328},
    {"onSaveInstanceState", "(Landroid/os/Bundle;)V", (void*)sub_244_773},
};

static JNINativeMethod arr_310_205[] = {
    {"D", "()V", (void*)sub_407_197},
    {"b", "(Ljava/lang/String;I)V", (void*)sub_220_344},
    {"v", "()Lcom/coolapk/market/view/main/HeadlinesFragment;", (jobject*)sub_601_340},
    {"A", "()V", (void*)sub_690_511},
    {"B", "()Ljava/lang/String;", (jobject*)sub_687_97},
    {"C", "()Ljava/lang/String;", (jobject*)sub_686_483},
    {"a", "(ZI)Lc/e;", (jobject*)sub_974_69},
    {"a", "()V", (void*)sub_299_309},
    {"a", "(ILjava/lang/Throwable;)V", (void*)sub_904_843},
    {"a", "(Landroid/support/v7/widget/RecyclerView$ViewHolder;Landroid/view/View;II)V", (void*)sub_972_889},
    {"a", "(Lcom/coolapk/market/view/main/c$a;)V", (void*)sub_768_840},
    {"a", "(Ljava/lang/String;)V", (void*)sub_331_324},
    {"a", "(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Throwable;)V", (void*)sub_619_403},
    {"a", "(Ljava/util/List;Ljava/lang/Throwable;)V", (void*)sub_634_52},
    {"a", "(ZLjava/util/List;)Z", (jboolean*)sub_670_960},
    {"a_", "(Ljava/lang/String;)V", (void*)sub_229_243},
    {"b", "(I)I", (jint*)sub_180_207},
    {"b", "(Landroid/support/v7/widget/RecyclerView$ViewHolder;Landroid/view/View;II)V", (void*)sub_58_764},
    {"f_", "()V", (void*)sub_460_424},
    {"onActivityCreated", "(Landroid/os/Bundle;)V", (void*)sub_177_824},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_134_351},
    {"onDestroy", "()V", (void*)sub_564_739},
    {"onFeedDeleted", "(Lcom/coolapk/market/e/l;)V", (void*)sub_19_780},
    {"onFeedFavoriteChagne", "(Lcom/coolapk/market/e/n;)V", (void*)sub_619_986},
    {"onFeedRecommendEvent", "(Lcom/coolapk/market/e/m;)V", (void*)sub_714_822},
    {"onFeedRemoveFromHeadline", "(Lcom/coolapk/market/e/r;)V", (void*)sub_412_853},
    {"onFeedReply", "(Lcom/coolapk/market/e/t;)V", (void*)sub_463_886},
    {"onFeedReplyDelete", "(Lcom/coolapk/market/e/s;)V", (void*)sub_624_105},
    {"onFragmentChangedEvent", "(Lcom/coolapk/market/e/u;)V", (void*)sub_316_217},
    {"onLikeChange", "(Lcom/coolapk/market/e/o;)V", (void*)sub_273_517},
    {"onPause", "()V", (void*)sub_75_889},
    {"onResume", "()V", (void*)sub_684_824},
    {"onSaveInstanceState", "(Landroid/os/Bundle;)V", (void*)sub_4_224},
    {"onUserBlockedEvent", "(Lcom/coolapk/market/e/ai;)V", (void*)sub_614_768},
    {"onWifiEventChanged", "(Lcom/coolapk/market/e/aj;)V", (void*)sub_632_896},
    {"w", "()V", (void*)sub_981_75},
    {"x", "()V", (void*)sub_583_248},
    {"y", "()V", (void*)sub_681_967},
    {"z", "()V", (void*)sub_377_241},
};

static JNINativeMethod arr_611_648[] = {
    {"a", "(ZI)Lc/e;", (jobject*)sub_316_507},
    {"a", "(Lcom/coolapk/market/model/ServiceApp;)Ljava/lang/String;", (jobject*)sub_568_50},
};

static JNINativeMethod arr_177_831[] = {
    {"a", "(Landroid/content/Intent;)V", (void*)sub_173_93},
    {"c", "()V", (void*)sub_341_138},
    {"e", "()V", (void*)sub_358_731},
    {"b_", "()V", (void*)sub_329_281},
    {"onAppThemeChange", "(Lcom/coolapk/market/AppTheme;)V", (void*)sub_290_493},
    {"onBackPressed", "()V", (void*)sub_676_680},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_797_471},
    {"onDestroy", "()V", (void*)sub_493_493},
    {"onResume", "()V", (void*)sub_801_566},
};

static JNINativeMethod arr_997_342[] = {
    {"b", "()Lcom/coolapk/market/view/main/MainCategoryFragment;", (jobject*)sub_295_907},
    {"a", "(I)I", (jint*)sub_323_877},
    {"a", "(Landroid/view/ViewGroup;I)Lcom/coolapk/market/i/e;", (jobject*)sub_349_633},
    {"a", "(ZLjava/lang/Throwable;)V", (void*)sub_285_396},
    {"a", "(ZLcom/coolapk/market/network/Result;)Z", (jboolean*)sub_335_652},
    {"onActivityCreated", "(Landroid/os/Bundle;)V", (void*)sub_637_607},
    {"onSaveInstanceState", "(Landroid/os/Bundle;)V", (void*)sub_561_63},
    {"onViewCreated", "(Landroid/view/View;Landroid/os/Bundle;)V", (void*)sub_141_682},
};

static JNINativeMethod arr_192_712[] = {
    {"a", "()Lcom/coolapk/market/view/main/MainFragment;", (jobject*)sub_275_304},
    {"a", "(ILandroid/app/FragmentManager;Landroid/app/FragmentTransaction;)V", (void*)sub_656_792},
    {"a", "(Landroid/app/Fragment;I)V", (void*)sub_386_579},
    {"b", "(I)V", (void*)sub_240_155},
    {"c", "(I)Landroid/app/Fragment;", (jobject*)sub_672_441},
    {"d", "(I)V", (void*)sub_218_445},
    {"e", "(I)V", (void*)sub_771_155},
    {"g", "()V", (void*)sub_965_51},
    {"h", "()V", (void*)sub_776_400},
    {"i", "()V", (void*)sub_665_523},
    {"j", "()V", (void*)sub_79_476},
    {"a", "(I)V", (void*)sub_388_70},
    {"a", "(II)V", (void*)sub_413_15},
    {"a", "(Landroid/view/View;IZ)V", (void*)sub_214_349},
    {"a", "(IZ)Z", (jboolean*)sub_710_572},
    {"b", "()Lcom/coolapk/market/view/a/a;", (jobject*)sub_562_890},
    {"c", "()Landroid/app/Fragment;", (jobject*)sub_23_43},
    {"d", "()I", (jint*)sub_48_545},
    {"onActivityResult", "(IILandroid/content/Intent;)V", (void*)sub_43_247},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_423_1},
    {"onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;", (jobject*)sub_621_181},
    {"onDestroy", "()V", (void*)sub_753_323},
    {"onLoginEvent", "(Lcom/coolapk/market/f/j;)V", (void*)sub_74_696},
    {"onMainPageChangeEnevtChanged", "(Lcom/coolapk/market/e/y;)V", (void*)sub_764_189},
    {"onNotificationEvent", "(Lcom/coolapk/market/manager/a;)V", (void*)sub_87_129},
    {"onPause", "()V", (void*)sub_138_997},
    {"onSaveInstanceState", "(Landroid/os/Bundle;)V", (void*)sub_501_230},
    {"onSettingEvent", "(Lcom/coolapk/market/e/ae;)V", (void*)sub_484_330},
    {"onTrimMemory", "(I)V", (void*)sub_410_485},
    {"onViewCreated", "(Landroid/view/View;Landroid/os/Bundle;)V", (void*)sub_742_621},
};

static JNINativeMethod arr_240_659[] = {
    {"c", "()Lcom/coolapk/market/view/main/MarketFragment;", (jobject*)sub_966_876},
    {"f", "()V", (void*)sub_243_930},
    {"g", "()I", (jint*)sub_320_979},
    {"h", "()V", (void*)sub_411_357},
    {"i", "()V", (void*)sub_762_424},
    {"j", "()Landroid/support/v4/view/ViewPager$OnPageChangeListener;", (jobject*)sub_228_148},
    {"k", "()Lcom/coolapk/market/view/main/HeadlinesFragment;", (jobject*)sub_633_131},
    {"a", "()V", (void*)sub_747_817},
    {"a", "(I)V", (void*)sub_619_221},
    {"a", "(ILjava/lang/Throwable;)V", (void*)sub_146_809},
    {"a", "(Ljava/lang/String;)V", (void*)sub_157_525},
    {"a", "(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Throwable;)V", (void*)sub_286_316},
    {"a", "(Ljava/util/ArrayList;)V", (void*)sub_271_905},
    {"a", "(Ljava/util/List;Ljava/lang/Throwable;)V", (void*)sub_562_751},
    {"a_", "(Ljava/lang/String;)V", (void*)sub_350_304},
    {"a_", "(Z)V", (void*)sub_498_980},
    {"b", "(I)Landroid/app/Fragment;", (jobject*)sub_505_169},
    {"c", "(I)V", (void*)sub_470_490},
    {"d", "()I", (jint*)sub_312_23},
    {"d", "(I)V", (void*)sub_48_161},
    {"e", "(I)V", (void*)sub_709_903},
    {"f_", "()V", (void*)sub_734_591},
    {"onActivityCreated", "(Landroid/os/Bundle;)V", (void*)sub_669_866},
    {"onClick", "(Landroid/view/View;)V", (void*)sub_542_413},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_690_253},
    {"onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;", (jobject*)sub_88_602},
    {"onDestroyView", "()V", (void*)sub_82_783},
    {"onSaveInstanceState", "(Landroid/os/Bundle;)V", (void*)sub_649_767},
    {"onViewCreated", "(Landroid/view/View;Landroid/os/Bundle;)V", (void*)sub_43_815},
};

static JNINativeMethod arr_837_912[] = {
    {"a", "()Lcom/coolapk/market/view/main/MorePageFragment;", (jobject*)sub_27_232},
    {"onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;", (jobject*)sub_415_154},
};

static JNINativeMethod arr_793_152[] = {
    {"onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;", (jobject*)sub_919_315},
    {"onNavigationItemSelected", "(Landroid/view/MenuItem;)Z", (jboolean*)sub_881_383},
};

static JNINativeMethod arr_334_464[] = {
    {"a", "(ZI)Lc/e;", (jobject*)sub_904_773},
    {"a", "(Lcom/coolapk/market/model/ServiceApp;)Ljava/lang/String;", (jobject*)sub_779_327},
};

static JNINativeMethod arr_795_932[] = {
    {"onActivityCreated", "(Landroid/os/Bundle;)V", (void*)sub_207_314},
};

static JNINativeMethod arr_854_164[] = {
    {"b", "()Lcom/coolapk/market/view/main/RankFragment;", (jobject*)sub_33_910},
    {"a", "(ZI)Lc/e;", (jobject*)sub_432_769},
    {"a", "(Landroid/support/v7/widget/RecyclerView$Adapter;)V", (void*)sub_618_81},
    {"a", "(ZLjava/lang/Throwable;)V", (void*)sub_906_28},
    {"a", "(ZLjava/util/List;)Z", (jboolean*)sub_709_920},
    {"d", "()Ljava/util/List;", (jobject*)sub_775_587},
    {"e_", "()Z", (jboolean*)sub_168_248},
    {"onActivityCreated", "(Landroid/os/Bundle;)V", (void*)sub_396_431},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_206_266},
    {"onDestroyView", "()V", (void*)sub_15_478},
    {"onSaveInstanceState", "(Landroid/os/Bundle;)V", (void*)sub_151_962},
};

static JNINativeMethod arr_454_736[] = {
    {"a", "(ZI)Lc/e;", (jobject*)sub_359_875},
    {"b", "()Ljava/lang/String;", (jobject*)sub_711_580},
    {"d", "()Ljava/lang/String;", (jobject*)sub_622_444},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_25_948},
};

static JNINativeMethod arr_901_359[] = {
    {"a", "(ZI)Lc/e;", (jobject*)sub_221_11},
    {"b", "()Ljava/lang/String;", (jobject*)sub_31_612},
    {"d", "()Ljava/lang/String;", (jobject*)sub_942_895},
    {"onCreate", "(Landroid/os/Bundle;)V", (void*)sub_738_154},
};

static const  Regnative reg[] = { 
         {"com/coolapk/market/view/main/AlbumCardListFragment",5,arr_479_670}, 
         {"com/coolapk/market/view/main/AlbumListFragment",12,arr_901_167}, 
         {"com/coolapk/market/view/main/AppListFragment",5,arr_505_573}, 
         {"com/coolapk/market/view/main/b",1,arr_224_333}, 
         {"com/coolapk/market/view/main/d",10,arr_217_735}, 
         {"com/coolapk/market/view/main/DiscoveryFragment",13,arr_342_144}, 
         {"com/coolapk/market/view/main/DiscoveryListFragment",4,arr_359_26}, 
         {"com/coolapk/market/view/main/f",1,arr_215_700}, 
         {"com/coolapk/market/view/main/FeedEntranceActivity",16,arr_226_543}, 
         {"com/coolapk/market/view/main/g",2,arr_372_369}, 
         {"com/coolapk/market/view/main/GroupFragment",16,arr_243_9}, 
         {"com/coolapk/market/view/main/HeadlinesFragment",39,arr_310_205}, 
         {"com/coolapk/market/view/main/LatestListFragment",2,arr_611_648}, 
         {"com/coolapk/market/view/main/MainActivity",9,arr_177_831}, 
         {"com/coolapk/market/view/main/MainCategoryFragment",8,arr_997_342}, 
         {"com/coolapk/market/view/main/MainFragment",30,arr_192_712}, 
         {"com/coolapk/market/view/main/MarketFragment",29,arr_240_659}, 
         {"com/coolapk/market/view/main/MorePageFragment",2,arr_837_912}, 
         {"com/coolapk/market/view/main/NavigationLeftFragment",2,arr_793_152}, 
         {"com/coolapk/market/view/main/NewestListFragment",2,arr_334_464}, 
         {"com/coolapk/market/view/main/PaddingFeedListFragment",1,arr_795_932}, 
         {"com/coolapk/market/view/main/RankFragment",11,arr_854_164}, 
         {"com/coolapk/market/view/main/RecommendAlbumListFragment",4,arr_454_736}, 
         {"com/coolapk/market/view/main/RecommendAppListFragment",4,arr_901_359}, 
};

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved){
    JNIEnv* env; 
    jclass cls; 
    vm->GetEnv((void**)&env, JNI_VERSION_1_4); 
    for(int i = 0; i < sizeof(reg)/sizeof(Regnative);i++ ) {
        cls = env->FindClass(reg[i].className);
        env->RegisterNatives(cls, reg[i].method,reg[i].size);
    }
return JNI_VERSION_1_4;

}