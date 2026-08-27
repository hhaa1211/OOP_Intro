# OOP_Intro
## Giới thiệu về lập trình hướng đối tượng

## Nhóm 5
 - Nguyễn Kim Hoàng Hà 
 - Nguyễn Hiền Phương
 - Mào Thị Phương Loan
 - Nguyễn Thị Ngọc Anh
 - Lý Bảo Trâm

## 

## 1. Phương pháp tiếp cận truyền thống 
### a. Lập trình tuyến tính 
* **Khái niệm:** Là phương pháp tổ chức mã nguồn theo luồng thực thi đơn giản, chạy tuyến tính từ trên xuống dưới mà không chia nhỏ thành các hàm hay khối lệnh phức tạp.
* **Đặc điểm:** Cấu trúc đơn luồng, Luồng chạy trực diện, cực kỳ dễ đọc. Nhưng khi quy mô chương trình mở rộng, mã nguồn nhanh chóng trở nên rườm rà, khó quản lý và không thể áp dụng cho các hệ thống phần mềm phức tạp.

### b. Lập trình cấu trúc 
* **Khái niệm:** Phương pháp chia nhỏ hệ thống lớn thành các hàm/chương trình con tự chứa, kết hợp với các cấu trúc điều khiển chuẩn (vòng lặp, rẽ nhánh).
* **Đặc điểm:** Xoay quanh tư duy "Chương trình = Cấu trúc dữ liệu + Giải thuật", giúp mã nguồn mạch lạc, dễ truy vết lỗi; các hàm con có thể gọi lại nhiều lần trong cùng một chương trình. Nhưng dữ liệu và giải thuật bị tách rời, khả năng tái sử dụng code giữa các dự án khác nhau kém; dễ bị phá vỡ cấu trúc khi xây dựng phần mềm quy mô lớn.

---

## 2. Phương pháp tiếp cận hướng đối tượng

### a. Lập trình hướng đối tượng 
* **Khái niệm:** Lấy "đối tượng" làm trung tâm, kết hợp cả dữ liệu (thuộc tính) và hành vi (phương thức) vào trong cùng một thực thể độc lập.
* **Vai trò:** Giải quyết triệt để các nhược điểm của lập trình cấu trúc nhờ các tính chất cốt lõi:
  * **Đóng gói:** Bảo vệ dữ liệu nội bộ, tránh bị thay đổi tự do từ bên ngoài.
  * **Tái sử dụng:** Dễ dàng dùng lại hoặc mở rộng mã nguồn sang các dự án khác mà không cần viết lại từ đầu.

### b. Phân tích và Thiết kế hướng đối tượng
* **Khái niệm:** Quy trình chuẩn hóa giúp chuyển đổi yêu cầu thực tế thành kiến trúc phần mềm hướng đối tượng qua các bước bài bản:
  1. Mô tả chi tiết bài toán.
  2. Đặc tả chính xác các yêu cầu.
  3. Nhận diện các đối tượng tham gia vào hệ thống.
  4. Mô hình hoá các đối tượng.
  5. Bắt đầu từ thiết kế kiến trúc tổng quan đến chi tiết từng phương thức/dữ liệu.