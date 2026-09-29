# week04 · 字符串（D5，10/3）

## 目标
字符数组与字符串的区别、`\0` 结束符、`gets/puts/scanf` 的坑；手写常用字符串函数。

## 要交的东西
- `mystring.c` —— 不用库函数，手写 `my_strlen` / `my_strcpy` / `my_strcmp` / `my_strcat`，并写 main 逐个测试

## 自测
1. `char s[] = "abc"` 这个数组长度是 3 还是 4？为什么？
2. `char *p = "abc"` 和 `char s[] = "abc"` 有什么本质区别？哪个能修改内容？
3. 手写 `strcpy` 时，循环条件为什么用 `*dst++ = *src++` 就能停？
4. 为什么 `scanf("%s", s)` 读不到带空格的字符串？

## 硬截止
**今天必须完成 GitHub 注册 + 首次 push。**否则面试时"代码都在 GitHub 上"这句话不成立。

## 提交
```
git add . && git commit -m "feat: 手写 strlen/strcpy/strcmp/strcat"
```
