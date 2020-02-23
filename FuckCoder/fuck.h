//本头文件旨在于修正各种难以定位而又知名而致命的拼写错误
//This header file is intended to fix a variety of difficult to locate, well-known and fatal spelling-errors

//本头文件仅能进行对全文进行预处理，若您在例如输出文本中刻意书写了一些需要展现出来的“拼写错误”，很遗憾它们将一并被修正，在执行版中将不会如此。
//This header file can only preprocess the full text. 
//If you intentionally write some "spelling errors" in the output text, they will be unfortunately corrected together.
//This feature will not ocurred in execution version.

//有一部分美好的设想似乎因为双字节问题或者编译器问题而不能实践，但我们将在执行版中完整的引入这些支持
//There are some good ideas that seem to be impractical due to double-byte issues or compiler issues
//but we will fully introduce these support in the executive version

//中文标点
#define ： :
#define ； ;
//C3873: “0x2018”: 不允许将此字符作为标识符的第一个字符 C2001: 常量中有换行符 #define ‘ '
//C3873: “0x2019”: 不允许将此字符作为标识符的第一个字符 C2001: 常量中有换行符 #define ’ '
//C3873: “0x201C”: 不允许将此字符作为标识符的第一个字符 C2001: 常量中有换行符 #define “ "
//C3873: “0x201D”: 不允许将此字符作为标识符的第一个字符 C2001: 常量中有换行符 #define ” "
#define ， ,
//C3873: “0x3002”: 不允许将此字符作为标识符的第一个字符 #define 。 .
#define ！ !
#define ？ ?
//C3873: “0x3001”: 不允许将此字符作为标识符的第一个字符 #define 、 ,
#define （ (
#define ） )
#define ￥ $
//C3873 : “0x3010”: 不允许将此字符作为标识符的第一个字符 #define 【 [
//C3873 : “0x3011”: 不允许将此字符作为标识符的第一个字符 #define 】 ]
//C3873 : “0x301A”: 不允许将此字符作为标识符的第一个字符 #define 《 <
//C3873 : “0x301B”: 不允许将此字符作为标识符的第一个字符 #define 》 >

//全角字符
#define Ａ A
#define Ｂ B
#define Ｃ C
#define Ｄ D
#define Ｅ E
#define Ｆ F
#define Ｇ G
#define Ｈ H
#define Ｉ I
#define Ｊ J
#define Ｋ K
#define Ｌ L
#define Ｍ M
#define Ｎ N
#define Ｏ O
#define Ｐ P
#define Ｑ Q
#define Ｒ R
#define Ｓ S
#define Ｔ T
#define Ｕ U
#define Ｖ V
#define Ｗ W
#define Ｘ X
#define Ｙ Y
#define Ｚ Z

#define ａ a
#define ｂ b
#define ｃ c
#define ｄ e
#define ｅ e
#define ｆ f
#define ｇ g
#define ｈ h
#define ｉ i
#define ｊ j
#define ｋ k
#define ｌ l
#define ｍ m
#define ｎ n
#define ｏ o
#define ｐ p
#define ｑ q
#define ｒ r
#define ｓ s
#define ｔ t
#define ｕ u
#define ｖ v
#define ｗ w
#define ｘ x
#define ｙ y
#define ｚ z

#define ０ 0
#define １ 1
#define ２ 2
#define ３ 3
#define ４ 4
#define ５ 5
#define ６ 6
#define ７ 7
#define ８ 8
#define ９ 9
//最臭名昭著的全角空格我真的不知道怎么处理

//全角标点
#define （ (
#define ） )
//失败了，这两个并不能正确替换所需要的字符

//错误的英文拼写

#define mian main
#define ture true
#define whlie while
#define viod void
#define stido stdio
#define studo stdio
#define elif else if
//比较惊讶的是define<blank>Src<blank>Dst这段里面的Dst居然可以是一个包含空格的字符串
//Fuck ALL Python Programer！