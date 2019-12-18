# Hash Table

## 哈希表（hash table)
哈希表（hash table）：根据设定的哈希函数H(key)和冲突处理的方法将一组关键字映像到一个有限的连续的地址集上，并以关键字在地址集中的“像”作为在表中的存储位置，这种表便称为哈希表，或散列表。这一映像过程称为哈希造表或散列表。所得的存储位置称为哈希地址或散列地址。
* 哈希函数（hash function）：是从关键字集合到地址集合的映像，也称为散列函数。在一般情况下，哈希函数是一个映像压缩，这就不可避免产生冲突。
* 哈希冲突（hash collision）：对不同的关键字可能得到同一哈希地址，这种现象称为哈希冲突。具有相同函数值得关键字对该哈希函数来说称做同义词（synonym）。

## 哈希函数的构造方法
一个好的哈希函数可以使一组关键字的哈希地址均匀的分布在整个地址区间中，从而减少冲突。若对关键字集合中的任一关键字，经哈希函数映像到地址集合中任何一个地址的概率是相等的，则称此类哈希函数为均匀哈希函数（uniform hash function）。常用的构造哈希函数的方法有：
1. 直接定地法：取关键字的或关键字的某个线性函数值为哈希地址。
2. 数字分析法：假定关键字是以r为基的数，并且哈希表中可能出现的关键字都是事先知道的，则可取关键字的若干位数组成哈希地址。
3. 平方取中法：取关键字平方后的中间几位为哈希地址。
4. 折叠法：将关键字分割成位数相同的几部分，然后取这几部分的折叠和作为哈希地址，这种方法称为折叠法（folding）。
5. 除留余数法：取关键字被某个不大于哈希表表长的数除后所得余数为哈希地址。
6. 随机数法：选择一个随机函数，取关键字的随机函数值为它的哈希地址。

## 哈希冲突的处理方法
冲突处理是为该关键字的记录找到一个空的哈希地址。
1. 开放定址法：(H(key)+di) mod m；其中H(key)为哈希函数，di为增量序列，m为哈希表表长。
2. 再哈希法：在同义词产生地址冲突时计算另一个哈希函数的地址，知道冲突不再发生。
3. 链表法：将所有关键字为同义词的记录存储在同一线性链表中。

## 哈希表查找
在哈希表上进行查找的过程和哈希造表的过程基本一致。给定K值，根据造表时设定的哈希函数求得哈希地址，若表中此位置上没有记录，则查找不成功；否则比较关键字，若和给定值相等，则查找成功；否则根据造表时设定的处理冲突的方法找“下一地址”，直至哈希表中某个位置为空或者表中所填记录的关键字等于给定值时为止。