# Smali-Anti-UsageSeach
简单来说就是C+ 和Java层交互调用


## 修改Smali+生成cpp
1. 复制一个smali文件
2. 执行smalisafe.jar \<smali文件\>
3. jni/SmaliSafe.cpp已生成，smali文件已修改

## 编译so文件
1. 进入jni文件夹
2. 修改Android.mk(如果需要的话)
2. ndk-build

## 导入so，回编译
1. 将build之后的libs文件夹改成lib
2. 将lib文件夹移动到apktool反编译工程中
3. 替换修改后的smali文件
4. apktool b


## 建议
1. 把java方法名，native数组名，native方法名混淆打乱。(已加入)
2. 稍微改改可以实现全工程~


# 已知问题：
1. smali中已存在clinit的话要自己手动添加load
2. 性能损耗未知........
待添加。
