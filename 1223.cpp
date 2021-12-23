#define	_CRT_SECURE_NO_WARNINGS 1



//最长公共子序列

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	int a[10] = { 1,2,3,4,5 };
//	int i;
//	for (i = 2; i<=4; i++)
//		a[i - 1] = a[i];
//	for (i = 0; i < 4; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	for (i = 2; i < 5; i++) {
//		a[i + 1] = a[i];
//	}
//	a[2] = 0;
//	for (i = 0; i < 5; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}


////数塔
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define N 10010
//int dp[N][N], T[N][N];
//int main() {
//	int i, j, n;
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			cin >> T[i][j];
//		}
//	}
//	for (i = 1; i <= n; i++) {
//		dp[n][i] = T[n][i];
//	}
//	for (i = n-1; i >= 1; i--) {
//		for (j = n-1; j >= 1; j--) {
//			dp[i][j] = max(dp[i + 1][j] + T[i][j], dp[i + 1][j + 1] + T[i][j]);
//		}
//	}
//	cout << dp[1][1] << endl;
//}

//#include<iostream>
//using namespace std;
//void delet(int a[], int n, int x) {
//	int i, j;
//	for (i = 0; i < n; i++) {
//		if (a[i] == x) {
//			for (j = i; j < n - 1; j++)
//				a[j] = a[j + 1];
//		}
//	}
//}
//int main() {
//	int a[100], n, i, j;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	for (i = 0, j = n - 1; i < j; i++, j--) {
//		int temp = a[i];
//		a[i] = a[j];
//		a[j] = temp;
//	}
//	delet(a, n, 4);
//	for (i = 0; i < n-1; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define N 1000005
//int s[N],e[N];
//int main() {
//	int k, i, j, sum = 0;
//	cin >> k;
//	for (i = 0; i < k; i++) {
//		cin >> s[i] >> e[i];
//	}
//	sort(s, s + k);
//	sort(e, e + k);
//	j = 0;
//	for (i = 0; i < k; i++) {
//		if (e[j] > s[i])
//			sum++;
//		else
//			j++;
//	}
//	cout << sum << endl;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	int start;
//	int end;
//	int belong;
//}act[100005];
//bool cmp(node a, node b) {
//	if (a.end == b.end)
//		return a.start < b.start;
//	else
//		return a.end < b.end;
//}
//int main() {
//	int k, i, j, sum;
//	cin >> k;
//	for (i = 0; i < k; i++) {
//		cin >> act[i].start >> act[i].end;
//		act[i].belong = 0;
//	}
//	sort(act, act + k, cmp);
//	i = 0;
//	sum = 1;
//	act[0].belong = 1;
//	for (i = 0; i < k; i++) {
//		if (act[i].belong == 0) {
//			sum++;
//			act[i].belong = sum;
//		}
//		int t = act[i].end;
//		for (j = i + 1; j < k; j++) {
//			if (act[j].start >= t&&act[j].belong==0) {
//				t = act[j].end;
//				act[j].belong = sum;
//			}
//		}
//	}
//	cout << sum << endl;
//}