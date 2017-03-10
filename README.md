# Smali-Anti-UsageSeach
简单来说就是C+ 和Java层交互调用

## 简单说明
利用native层回调java层方法来使大部分工具的交叉引用查找失效
此工具用于自动化修改smali文件和生成cpp文件(待实现自动编译)

## 使用方法
1. 使用apktool d 反编译apk
2. 运行java -jar smalisafe.jar "要处理的smali文件名"
3. 使用ndk-build编译jni下的SmaliSafe.cpp(注:此时smali文件已被修改)
4. 将编译生成的libs文件夹改名lib移动至apktool工程中(注:只保留需要的abi,不然会导致如：arm64位的手机找不到原apk其他so)
5. apktool b dir 回编译


## Usage
` -p <Apktool Project Dir>`


` -s <SmaliFile>`

## 建议
1. 把java方法名，native数组名，native方法名混淆打乱。(已加入随机名)
2. 稍微改改可以实现全工程~

# 已知问题：
1. smali中已存在clinit的话要自己手动添加load (已Fix，待上传)
2. 性能损耗未知........
3. 待添加。
