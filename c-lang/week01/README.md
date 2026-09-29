# week01 · 环境 + 语法骨架（D1–D2，9/29–9/30）

## 目标
装好 VS Code + MinGW，跑通 Hello World；掌握变量、数据类型、输入输出、运算符、if/switch、for/while。

## 要交的东西
- `hello.c` —— 第一行代码，验证环境
- `calc.c` —— 四则计算器（输入两个数和一个运算符，输出结果）
- `guess.c` —— 猜数字游戏（随机生成 1–100，循环猜，提示大了/小了，统计次数）

## 自测（不查资料能答出来才算过）
1. `int` / `float` / `char` / `double` 各占多少字节？怎么用 `sizeof` 验证？
2. `scanf("%d", &n)` 里的 `&` 是什么？去掉会怎样？
3. `i++` 和 `++i` 在单独一行时有区别吗？在 `printf("%d", i++)` 里呢？
4. `break` 和 `continue` 的区别？

## 提交
```
git add . && git commit -m "feat: 猜数字游戏（分支+循环）"
```
