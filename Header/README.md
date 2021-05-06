# Index

## README

本系列头文件旨在于修正各种难以定位而又知名而致命的拼写错误
This header file series is intended to fix a variety of difficult to locate, well-known and fatal spelling-errors

本系列头文件仅能进行对全文进行预处理，若您在例如输出文本中刻意书写了一些需要展现出来的“拼写错误”，很遗憾它们将一并被修正，在执行版中将不会如此。
This header file series can only preprocess the full text. 
If you intentionally write some "spelling errors" in the output text, they will be unfortunately corrected together.
This feature will not ocurred in execution version.

有一部分美好的设想似乎因为双字节问题或者编译器问题而不能实践，但我们将在执行版中完整的引入这些支持
There are some good ideas that seem to be impractical due to double-byte issues or compiler issues
but we will fully introduce these support in the executive version

注意，形如```#define<blank>Src<blank>Dst```的形式，```Dst```居然可以是一个包含空格的字符串
Note that in the form of ```#define<blank>Src<blank>Dst```, ```Dst``` can actually be a string containing spaces

-----

## List of Header

### fuck_ChinesePunctuation.h

中文标点
+ 有效8组
+ 共计18组

ChineseSyntax
+ 8Vaild
+ 18Total

### fuck_FullwidthCharacters.h

全角字符
+ 有效64组
+ 共计64组
+ 待收录1组（最臭名昭著的全角空格）

Full-width characters
+ 64 Vaild
+ 64 Total
+ 1 To be included (the most notorious full-width space)

### fuck_Classic.h

经典错误
+ 有效6组
+ 共计6组

Classic
+ 6 Vaild
+ 6 Total

### fuck_MultiLanguage.h

多语言混用
+ 有效2组（Python 1组，Java 1组）
+ 共计2组

MultiLanguage
+ 2 Vaild(1 Python, 1  Java)
+ 2 Total

### fuck_FullwidthPuncuation.h

全角标点
+ 有效0组（这两组并不能正确替换所需要的字符）
+ 共计2组

FullwidthPuncuation
+ 0 Vaild(These two groups cannot replace the required characters correctly)
+ 2 Total

### fuck_Optional.h

可选的
+ 有效5组
+ 共计6组

Optional
+ 5 Vaild
+ 6 Total