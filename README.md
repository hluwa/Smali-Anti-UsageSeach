# Smali-Anti-UsageSeach
简单来说就是C+ 和Java层交互调用

## 简单说明
利用native层回调java层方法来使大部分工具的交叉引用查找失效
此工具用于自动化修改smali文件和生成cpp文件(待实现自动编译)

(这里的smali框架有的地方写的不好，上传太麻烦了，移步https://github.com/Hoimk/Smali-RestoreString)


## 使用方法
1. 使用apktool d 反编译apk
2. 运行java -jar smalisafe.jar "要处理的smali文件名"
3. 使用ndk-build编译jni下的SmaliSafe.cpp(注:此时smali文件已被修改)
4. 将编译生成的libs文件夹改名lib移动至apktool工程中(注:只保留需要的abi,不然会导致如：arm64位的手机找不到原apk其他so)
5. apktool b dir 回编译


## Usage
` -p <Apktool Project Dir>`
  `--f <PageName>`
  
` -s <SmaliFile>`

## 想法
1. 把java方法名，native数组名，native方法名混淆打乱。(Added)
2. 稍微改改可以实现全工程~ (Added)
3. 添加包名过滤(Added)
4. 加入随机参数
5. 方法路径保护


## 已知问题：
1. smali中已存在clinit的话要自己手动添加load (Fixed)
2. 性能损耗未知........
3. 使用SafeProject会造成N种问题,如：方法太多so库太大，调用太多无法回编...所以待添加过滤。(Fixed)
4. 调用太多无法回编可以试试多Dex。
4. 待添加。

##Sample
[酷安(+字符串混淆)](http://www.hoimk.com/usr/uploads/2017/03/2197925685.apk)
(不要问我字符串混淆哪来的,https://github.com/Qrilee/obfuseSmaliText)

## 效果图：
以下是smalisafe.jar -p coolapk --f com.coolapk.market.view.main后的处理结果

![](http://i1.piimg.com/1949/038d71238bcb9a7b.png)
![](http://i1.piimg.com/1949/b3aa41ce2a187338.png)
