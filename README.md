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
* **Đặc điểm:** + Cấu trúc đơn luồng, luồng dữ liệu đi thẳng.
                + Luồng chạy trực diện, cực kỳ dễ đọc và phù hợp để viết các kịch bản (script) ngắn hoặc bài toán nhỏ.
                + Khi quy mô chương trình mở rộng, mã nguồn nhanh chóng trở nên rườm rà, khó quản lý và không thể áp dụng cho các hệ thống phần mềm phức tạp.

### b. Lập trình cấu trúc 
* **Khái niệm:** Phương pháp chia nhỏ hệ thống lớn thành các hàm/chương trình con (functions/procedures) tự chứa, kết hợp với các cấu trúc điều khiển chuẩn (vòng lặp, rẽ nhánh).
* **Đặc điểm:** + Xoay quanh tư duy **"Chương trình = Cấu trúc dữ liệu + Giải thuật"**.
                + Giúp mã nguồn mạch lạc, dễ truy vết lỗi; các hàm con có thể gọi lại nhiều lần trong cùng một chương trình.
                + Dữ liệu và giải thuật bị tách rời, khả năng tái sử dụng code giữa các dự án khác nhau kém; dễ bị phá vỡ cấu trúc khi xây dựng phần mềm quy mô lớn.

---

## 2. Phương pháp tiếp cận hướng đối tượng (Object-Oriented Approaches)

### a. Lập trình hướng đối tượng (OOP)
* **Khái niệm:** Lấy "đối tượng" làm trung tâm, kết hợp cả dữ liệu (thuộc tính) và hành vi (phương thức) vào trong cùng một thực thể độc lập.
* **Vai trò:** Giải quyết triệt để các nhược điểm của lập trình cấu trúc nhờ các tính chất cốt lõi:
  * **Đóng gói (Encapsulation):** Bảo vệ dữ liệu nội bộ, tránh bị thay đổi tự do từ bên ngoài.
  * **Tái sử dụng (Reusability):** Dễ dàng dùng lại hoặc mở rộng mã nguồn sang các dự án khác mà không cần viết lại từ đầu.

### b. Phân tích và Thiết kế hướng đối tượng (OOAD)
* **Khái niệm:** Quy trình chuẩn hóa giúp chuyển đổi yêu cầu thực tế thành kiến trúc phần mềm hướng đối tượng qua các bước bài bản:
  1. **Khảo sát & Khái quát:** Mô tả chi tiết bài toán và xác định phạm vi hệ thống.
  2. **Thu thập yêu cầu:** Đặc tả chính xác các tính năng hệ thống cần đáp ứng.
  3. **Trích xuất đối tượng:** Nhận diện các thực thể chính tham gia vào hệ thống.
  4. **Mô hình hóa:** Đóng gói đối tượng thành các Lớp (Class) và xác định mối quan hệ giữa chúng.
  5. **Thực thi thiết kế:** Bắt đầu từ thiết kế kiến trúc tổng quan (High-level) đến chi tiết từng phương thức/dữ liệu (Low-level) trước khi tiến hành viết code.