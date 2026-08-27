# OOP_Intro
Giới thiệu về lập trình hướng đối tượng
1. Trừu tượng hóa đối tượng là gì?
- Trừu tượng hóa là việc chúng ta chỉ tập chung vào những thông tin và chức năng quan trọng của một đối tượng, còn những chi tiết bên trong không cần thiết thì bỏ qua.
có thể trừu tượng hóa đối tượng theo hai hướng: Theo chức năng và Theo dữ liệu
2. Trừu tượng hóa đối tượng theo chức năng
- là quá trình mô hình hóa phương thức của lớp dựa trên các hành động của đối tượng
  ví dụ: một chiếc ô tô có thể: khởi động máy, chạy, dừng lại,  tắt máy
  đây đều là hành động, hay còn gọi là chức năng của ô tô
3. Các bước thực hiện
  B1: tập hợp tất cả các hành động có thể có của các đối tượng
       vd: chúng ta có nhiều loại ô tô: Toyota, Honda, Ford
           mỗi chiếc xe có thể có các hành động như: Khởi động, chạy, dừng lại, tắt máy, bật đèn, phát tín hiệu cảnh báo
  B2: nhóm các đối tượng có hoạt động tương tự nhau
      Toyota, Honda, Ford là những loại xe khác nhau nhưng đều có chức năng chung: khởi động máy, chạy, dừng lại,  tắt máy
            vì vậy, chúng ta có thể gom những chức năng chung này vào một nhóm là ô tô
  B3: mỗi nhóm đối tượng đề xuất một lớp tương ứng
        Ta tạo một lớp: Lớp oto
  B4: các hành động chung trở thành  phương thức của lớp
      Các hành động: khởi động, chạy, dừng, tắt máy sẽ trở thành các phương thức của lớp oto
  Trong lập trình có thể viết đơn giản:
   class oto{
         void KhoiDong();
         void Chay();
         void Dung();
         void TatMay();
  };
  3. Trừu tượng hóa đối tượng theo dữ liệu
  là quá trình mô hình hóa các thuộc tính của lớp dữ liệu dựa trên các thuộc tính của các đối tượng tương ứng
     ví dụ với oto: Một chiếc xe có: nhãn hiệu, màu sắc, giá bán, công suất động cơ -> Đây chính là dữ liệu hay thuộc tính của ô tô
     ví dụ cụ thể về dữ liệu của ô tô: Giả sử chúng ta có 3 chiếc xe:
     xe 1 - toyota                       
     nhãn hiệu: toyota                  
     màu sắc: đen                       
     giá bán: 700 triệu                 
     công suất: 150HP
     xe 2 - honda                      
     nhãn hiệu: honda                  
     màu sắc: đỏ                     
     giá bán: 650 triệu                 
     công suất: 160HP                
     xe 2 - ford                     
     nhãn hiệu: ford                  
     màu sắc: trắng                   
     giá bán: 800 triệu                 
     công suất: 170HP                  
   Mặc dù giá trị xe khác nhau nhưng chúng đều có chung: Nhãn hiệu, Màu sắc, Giá bán, Công suất động cơ
     
   
