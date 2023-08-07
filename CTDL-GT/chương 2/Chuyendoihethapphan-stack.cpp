#include<iostream>
using namespace std;
 
/*
Đổi 1 số nguyên sang cơ số 2 8 16
*/
 
/* khai báo Node */
struct node
{
    int data;
    struct node *pNext;
};
typedef struct node NODE;
 
/* khai báo cấu trúc của Stack */
struct stack
{
    NODE *pTop; // con trỏ quản lí đầu stack
};
typedef struct stack STACK;
 
/* hàm khởi tạo Stack */
void KhoiTaoStack(STACK &s)
{
    s.pTop = NULL;
}
 
/* hàm khởi tạo 1 cái node */
NODE *KhoiTaoNode(int x)
{
  //tạo mới một NODE
    NODE *p = new NODE();
    if (p == NULL)
    {
        cout << "\nKhông đủ bộ nhớ để cấp phát !";
        return NULL;
    }
  // đưa dữ liệu của biến x vào trong cái data của node p
    p->data = x; 
    p->pNext = NULL;
    return p;
}
 
/* hàm kiểm tra Stack rỗng*/
bool IsEmpty(STACK s)
{
    // nếu stack rỗng
    if (s.pTop == NULL)
    {
        return false;
    }
    return true;
}
 
/* Thêm phần tử vào đầu Stack (top)*/
bool Push(STACK &s, NODE *p)
{
    // node p đang rỗng
    if (p == NULL)
    {
        return false;
    }
 
    // nếu danh sách rỗng
    if (IsEmpty(s) == false)
    {
    // node p cũng chính là node pTop <=>chính là node đầu stack
        s.pTop = p;
    }
    else
    {
    // B1: cho con trỏ của node p trỏ đến node pTop
        p->pNext = s.pTop; 
    // B2: cập nhật lại node đầu chính là node p
        s.pTop = p;
    }
  // thêm thành công
    return true;
}
 
/* Lấy phần tử đầu danh sách và hủy nó đi */
bool Pop(STACK &s, int &x) // x chính là giá trị cần lấy ra
{
    // nếu danh sách rỗng
    if (IsEmpty(s) == false)
    {
    // lấy thất bại <=> danh sách đang rỗng
        return false; 
    }
  // gán node đầu danh sách vào node p <=> node p chính là node mà tí nữa ta sẽ xóa nó
    NODE *p = s.pTop; 
   // cập nhật lại node đầu 
    s.pTop = s.pTop->pNext;
  // lấy giá trị của node đầu ra gán vào biến x
    x = p->data; 
  // lấy phần tử thành công
    return true; 
}
 
/* Xem thông tin của node đầu danh sách */
bool Top(STACK s, int &x) 
// x chính là giá trị cần xem
{
    // nếu danh sách rỗng
 
    if (IsEmpty(s) == false)
    {
        return false;
    }
    x = s.pTop->data;
    return true;
}
 
/* Hàm đổi cơ số 10 sang các cơ số 2, 8, 16 */
void Chuyen_Co_So(STACK &s, int cosocandoi, int hethapphan)
{
    while (hethapphan != 0)
    {
        int x = hethapphan % cosocandoi;
    // thêm x vào node p
        NODE *p = KhoiTaoNode(x); 
    // thêm node p vào stack
        Push(s, p);
    //tiếp tục chia đến hết
        hethapphan /= cosocandoi;
    }
}
 
/* xuất danh sách stack */
void XuatStack(STACK &s)
{
    while (IsEmpty(s) == true)
    {
        int x;
        Pop(s, x);
    //nếu x < 10 thi xuất bình thường
        if (x < 10)
        {
            cout << x;
        }
    //nếu x >= 10 thì xuất chữ cái tương ứng
        else
        {
            if (x == 10)
            {
                cout << "A";
            }
            else if (x == 11)
            {
                cout << "B";
            }
            else if (x == 12)
            {
                cout << "C";
            }
            else if (x == 13)
            {
                cout << "D";
            }
            else if (x == 14)
            {
                cout << "E";
            }
            else if (x == 15)
            {
                cout << "F";
            }
        }
    }
}
 
int main()
{
    STACK s;
    KhoiTaoStack(s);
     
    int hethapphan,cosocandoi;
    cout << "Nhap gia tri thap phan can chuyen: ";
    cin >> hethapphan;
  do {
    cout << "Nhap co so can chuyen (2, 8, 16):  ";
      cin >> cosocandoi;
  } while (cosocandoi != 2 && cosocandoi != 8 && cosocandoi != 16);
 
    Chuyen_Co_So(s, cosocandoi, hethapphan);
	cout << "Ket qua: ";
    XuatStack(s);
    cout << endl;
}