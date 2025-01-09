#### 选择
```c
i=0 <n-1;j=i+1 <n
```
#### 插入
```c
i=1 <n{t=a[i];move=i-1;
    while(move>=0&&t<a[move])a[move+1]=a[move],move--;a[move+1]=t;}
```
#### 冒泡
```c
i=1 <n;j=0 <n-i a[j]与a[j+1] 大的换去后面
```
#### 二分
```c
left(0) right(n-1) mid 
while(left<=right){  left=mid+1/right=mid-1}
```