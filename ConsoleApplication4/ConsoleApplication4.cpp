// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

void Merge(int c[], int a[], int m, int b[], int n)
{
    int i =0 ,j =0, k = 0;
    for (; i < m && j < n; k++)
        c[k] = (a[i] <= b[j]) ? a[i++] : b[j++];
    for (; i < m;)
        c[k++] = a[i++];
    for (; j < n;)
        c[k + 1] = b[j + 1];

}

void MergeSort(int a[], int b[], int l, int r)
{
    int i, j, k, m;
    if (l < r) {

        for (i = 0; i < 9; i++)
            cout << a[i] << " ";
        cout << endl;

        m = (l + r) / 2;
        MergeSort(a, b, l, m);
        MergeSort(a,b,m + 1, r);
        for (i = l; i <= m; i++)
            b[i] = a[i];
        for (j = m + 1; j <= r; j++)
            b[r + (m - j + 1)] = a[j];
        for (i = l, j = r, k = l; k <= r; k++)
            a[k] = (b[i] <= b[j]) ? b[i++] : b[j--];

    }
}
int a[] = { 9,12,17,21,37 };
int b[] = { 3,11,20,55,67,71,89 };
int c[12] = { 0 };
int a1[] = { 37,41,19,81,41,25,56,61,49 };
int b1[9] = { 0 };

int main()
{
    MergeSort(a1, b1, 0, 8);
    for (int i = 0; i < 9; i++)
        cout << a1[i] << " ";
    cout << endl;
    std::cout << "Hello World!\n";
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
