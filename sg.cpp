Test case 1
5	
8 -9 4 5 -11	
-1·-5·9·-6·-11·

#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
int a[n], b[n];
for (int i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
for (int i = 0; i < n- 1; i++) {
b[i] = a[i] + a[i + 1];
}
b[n- 1] = a[n- 1];
for (int i = 0; i < n; i++) {
printf("%d ", b[i]);
}
return 0;
}