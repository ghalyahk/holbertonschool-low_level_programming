# Functions, Nested Loops - Task 0: _putchar

## الوصف (Arabic)
برنامج بسيط يطبع `_putchar` متبوع بسطر جديد. الهدف من التمرين هو تعويدك على إنشاء دالة _putchar التي تكتب حرف واحد إلى stdout واستخدامها في `main`.

## Description (English)
Simple program that prints `_putchar` followed by a new line. The exercise practices creating a helper `_putchar` function that writes a single character to `stdout` and using it in `main`.

## الملفات (Files)
- `_putchar.c` — دالة تكتب حرف واحد إلى المخرج القياسي (يستخدم `write`).  
- `0-putchar.c` — دالة `main` التي تطبع `_putchar` حرفًا حرفًا ثم سطر جديد.  
- `main.h` — (اختياري) يحتوي على بروتوتايب `_putchar`.

## تركيب / Compilation
شغّلي هذا الأمر في مجلد المشروع:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
