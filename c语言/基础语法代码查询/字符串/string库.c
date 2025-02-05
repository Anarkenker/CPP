#include<stdio.h>
#include<string.h>
/*string.h是C语言中的字符串处理库，包含了许多有用的函数。

字符串长度函数strlen
• 功能：计算给定字符串的长度，不包括字符串结尾的'\0'字符。

• 示例：char str[] = "Hello";，size_t len = strlen(str);，这里len的值为5。
strcspn(str,"o")返回值是4。

字符串复制函数strcpy和strncpy
• strcpy：

• 功能：将源字符串复制到目标字符串中，包括'\0'字符。源字符串必须以'\0'结尾。

• 示例：char dest[20]; char src[] = "World"; strcpy(dest, src);，这会将src中的World复制到dest中。

• strncpy：

• 功能：把源字符串的前n个字符复制到目标字符串中。如果n大于源字符串长度，会在目标字符串后面补'\0'。

• 示例：char dest[10]; char src[] = "1234"; strncpy(dest, src, 3);，会将123复制到dest中。

字符串拼接函数strcat和strncat

• strcat：

• 功能：将源字符串连接到目标字符串的末尾，目标字符串必须有足够的空间容纳连接后的字符串，包括'\0'。

• 示例：char dest[20] = "Hello"; char src[] = " World"; strcat(dest, src);，结果是dest变为Hello World。

• strncat：

• 功能：把源字符串的前n个字符连接到目标字符串的末尾。

• 示例：char dest[10] = "Hi"; char src[] = " there"; strncat(dest, src, 3);，dest变为Hi the。

字符串比较函数strcmp和strncmp

• strcmp：

• 功能：比较两个字符串的大小。按字典序比较，从两个字符串的第一个字符开始，遇到不同字符或者'\0'结束。返回值为0表示两个字符串相等；小于0表示第一个字符串小于第二个字符串；大于0表示第一个字符串大于第二个字符串。
按字典序比较？ASCLL码来比较
• 示例：char str1[] = "abc"; char str2[] = "abd"; int result = strcmp(str1, str2);，result为-1。

• strncmp：

• 功能：比较两个字符串的前n个字符的大小，规则同strcmp。

• 示例：char str1[] = "abcde"; char str2[] = "abcdz"; int result = strncmp(str1, str2, 4);，result为0。
在C语言的string.h库中有几个用于字符串搜索的函数。

strstr

• 功能：在一个字符串（称为主字符串）中查找另一个字符串（称为子字符串）第一次出现的位置。如果找到子字符串，返回主字符串中该子字符串起始位置的指针；如果未找到，则返回NULL。

• 示例：
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "This is a test string";
    char substr[] = "test";
    char *result = strstr(str, substr);
    if (result!= NULL) {
        printf("Substring found at position: %ld\n", result - str);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
在这个例子中，程序在str字符串中查找substr字符串，若找到则输出其在str中的位置（从0开始计数）。

strchr和strrchr

• 功能：

• strchr：在一个字符串中查找给定字符第一次出现的位置，返回指向该字符的指针，若未找到则返回NULL。

• strrchr：在一个字符串中查找给定字符最后一次出现的位置，返回指向该字符的指针，若未找到则返回NULL。

• 示例：
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    char *first_result = strchr(str, ch);
    char *last_result = strrchr(str, ch);
    if (first_result!= NULL) {
        printf("First occurrence of '%c' at position: %ld\n", ch, first_result - str);
    }
    if (last_result!= NULL) {
        printf("Last occurrence of '%c' at position: %ld\n", ch, last_result - str);
    }
    return 0;
}
在这个例子中，strchr用于找到字符'o'在str中的第一次出现位置，strrchr用于找到最后一次出现位置，然后输出相应位置信息。
*/