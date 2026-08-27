# OOP_Intro
Giới thiệu về lập trình hướng đối tượng
-thành phần private và public
+Thành phần public: là vùng của lớp mà vùng bên ngoài có thể truy cập có thể chia sẻ với các chương trình và đối tượng bên ngoài.
Nó thường chứa set/get để thay đổi/lấy dữ liệu của thuộc tính và các phương thức trung gian/hàm phụ phục vụ để thực hiện chức năng của dối tượng 
+Thành phần private: là khu vực chỉ được truy cập trong nội bộ của lớp,bên ngoài lớp không được truy cập trực tiếp.
Thành phần private thường chứa tất cả các thuộc tính dữ liệu của lớp vì không muốn bên ngoài tự ý thay đổi và các phương thức trung gian được sử dụng như các bước tính toán đệm cho các phương thức khác đó là những hàm phụ đứng phía sau để giúp các hàm khác làm việc
VD1:
-Private:
+tiền trong két
+đồ cá nhân
+ dữ liệu quan trọng
-Public:
+ cửa ra vào
+ những thứ cho khách dùng
VD2:
class: SinhVien{
private:
    float diem;
public:
    void setDiem(float d) {
    diem = d;
  float getDiem() {
     return diem;
  }
};
