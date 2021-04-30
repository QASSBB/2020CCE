# 第十周隨堂作業
## 1. 今天發現考試有同學還是不會, 所以從簡單重新練習。瘋狂程設-(左上角)CPE顆星廣場-CPE一顆星, 最上面 UVA10008, 先能讀入 n 行的字串, 再馬上印出來... 小心, 跳行 ![week10-1](https://github.com/QASSBB/2020CCE/blob/gh-pages/week10/week10-1.png?raw=true)

## 2.接上題, 能每個字母做大小寫轉換嗎? 先能判斷「大寫」 「小寫」 「其他」 ![week10-2](https://github.com/QASSBB/2020CCE/blob/gh-pages/week10/week10-2.png?raw=true)

## 3. 接上題, 做對應的統計 ans[ c-'A' ] ++ 或 ans[ c-'a' ] ++ ![week10-3](https://github.com/QASSBB/2020CCE/blob/gh-pages/week10/week10-3.png?raw=true)

## 4. 接上題, 用個很難的排序, 把答案算出來 ![week10-4](https://github.com/QASSBB/2020CCE/blob/gh-pages/week10/week10-4.png?raw=true)

## 5. 接上題, 改用 qsort() 配資料結構 struct 來寫出來。好像變簡單, 其實還是很難 XD ![week10-5](https://github.com/QASSBB/2020CCE/blob/gh-pages/week10/week10-5.png?raw=true)

```C
#include <stdio.h>
#include <stdlib.h>
char line [10000];
typedef struct
{
	int ans;
	char c;
}BOX;
BOX array[26];
int compare(const void *p1,const void *p2)
{
	if(((BOX*)p1)->ans > ((BOX*)p2)->ans) return -1;
	else if(((BOX*)p1)->ans < ((BOX*)p2)->ans) return +1;
	else if(((BOX*)p1)->c   < ((BOX*)p2)->c) return -1;
	else if(((BOX*)p1)->c   > ((BOX*)p2)->c) return +1;
	else return 0;
}
int main ()
{
	for (int i=0 ; i<26 ; i++) array[i].c='A'+i;
	int n;
	scanf("%d\n",&n);
	for(int i=0 ; i<n ; i++)
	{
		gets(line);
		for(int k=0 ; line[k]!=0 ; k++)
		{
			char c = line[k];
```
