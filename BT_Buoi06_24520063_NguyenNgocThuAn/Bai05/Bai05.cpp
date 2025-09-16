//Ma so sinh vien: 24520063
//Ho va ten sinh vien: Nguyen Ngoc Thu An
//Ngay sinh: 17/09/2006
//Lop: IT002.P26.1

#include <iostream>
#include "cNongTrai.h"
#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"

using namespace std;

int main() {
	
	cNongTrai a;
	a.nhap_nongtrai();

	a.nongtrai_doi();

	a.thongke_sau_1lua();



	return 0;




}
// ưu điểm khi sử dụng liên kết động (đa hình):
// - Dễ mở rộng (thêm loài mới thì chỉ cần tạo 1 lớp con)
// - Tối ưu hóa quán lý đối tượng (dễ dàng xử lý toàn bộ danh sách bằng vòng lặp con trỏ đa hình)
// - Code gọn gàng, có tổ chức 
