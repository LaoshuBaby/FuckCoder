//��ͷ�ļ�ּ���������������Զ�λ����֪����������ƴд����
//This header file is intended to fix a variety of difficult to locate, well-known and fatal spelling-errors

//��ͷ�ļ����ܽ��ж�ȫ�Ľ���Ԥ������������������ı��п�����д��һЩ��Ҫչ�ֳ����ġ�ƴд���󡱣����ź����ǽ�һ������������ִ�а��н�������ˡ�
//This header file can only preprocess the full text. 
//If you intentionally write some "spelling errors" in the output text, they will be unfortunately corrected together.
//This feature will not ocurred in execution version.

//��һ�������õ������ƺ���Ϊ˫�ֽ�������߱��������������ʵ���������ǽ���ִ�а���������������Щ֧��
//There are some good ideas that seem to be impractical due to double-byte issues or compiler issues
//but we will fully introduce these support in the executive version

//���ı��
#define �� :
#define �� ;
//C3873: ��0x2018��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� C2001: �������л��з� #define �� '
//C3873: ��0x2019��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� C2001: �������л��з� #define �� '
//C3873: ��0x201C��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� C2001: �������л��з� #define �� "
//C3873: ��0x201D��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� C2001: �������л��з� #define �� "
#define �� ,
//C3873: ��0x3002��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� #define �� .
#define �� !
#define �� ?
//C3873: ��0x3001��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� #define �� ,
#define �� (
#define �� )
#define �� $
//C3873 : ��0x3010��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� #define �� [
//C3873 : ��0x3011��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� #define �� ]
//C3873 : ��0x301A��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� #define �� <
//C3873 : ��0x301B��: ���������ַ���Ϊ��ʶ���ĵ�һ���ַ� #define �� >

//ȫ���ַ�
#define �� A
#define �� B
#define �� C
#define �� D
#define �� E
#define �� F
#define �� G
#define �� H
#define �� I
#define �� J
#define �� K
#define �� L
#define �� M
#define �� N
#define �� O
#define �� P
#define �� Q
#define �� R
#define �� S
#define �� T
#define �� U
#define �� V
#define �� W
#define �� X
#define �� Y
#define �� Z

#define �� a
#define �� b
#define �� c
#define �� e
#define �� e
#define �� f
#define �� g
#define �� h
#define �� i
#define �� j
#define �� k
#define �� l
#define �� m
#define �� n
#define �� o
#define �� p
#define �� q
#define �� r
#define �� s
#define �� t
#define �� u
#define �� v
#define �� w
#define �� x
#define �� y
#define �� z

#define �� 0
#define �� 1
#define �� 2
#define �� 3
#define �� 4
#define �� 5
#define �� 6
#define �� 7
#define �� 8
#define �� 9
//�����������ȫ�ǿո�����Ĳ�֪����ô����

//ȫ�Ǳ��
#define �� (
#define �� )
//ʧ���ˣ���������������ȷ�滻����Ҫ���ַ�

//�����Ӣ��ƴд

#define mian main
#define ture true
#define whlie while
#define viod void
#define stido stdio
#define studo stdio
#define elif else if
//�ȽϾ��ȵ���define<blank>Src<blank>Dst��������Dst��Ȼ������һ�������ո���ַ���
//Fuck ALL Python Programer��