#include <iostream>
#include <string>

using namespace std;

// ============================================================================
// PHẦN 1: MÀO THỊ PHƯƠNG LOAN
// ============================================================================
class  PhongKhachSan{
    private: //Thuoc tinh
    	string MaPhong;
    	string LoaiPhong;
    	int Tang;
    	int SucChua;
    	double GiaThue;
   		bool TrangThai;

    public: 
    //Constructors
    	PhongKhachSan(){
    	MaPhong = "";
    	LoaiPhong = "";
    	Tang = 0;
    	SucChua = 0;
    	GiaThue = 0;
    	TrangThai = false;
	}

    //Getters
    	string getMaPhong(){
    	return MaPhong;
	}
		string getLoaiPhong(){
   	 	return LoaiPhong;
	}
		int getTang(){
    	return Tang;
	}
		int getSucChua(){
    	return SucChua;
	}
		double getGiaThue(){
    	return GiaThue;
	}
		bool getTrangThai(){
    	return TrangThai;
	}

    //Setters
    	void setMaPhong(string maPhong){
    		MaPhong = maPhong;
	}
		void setLoaiPhong(string loaiPhong){
    		LoaiPhong = loaiPhong;
	}
		void setTang(int tang){
   			 Tang = tang;
	}
		void setSucChua(int sucChua){
   			 SucChua = sucChua;
	}
		void setGiaThue(double giaThue){
    		GiaThue = giaThue;
	}
		void setTrangThai(bool trangThai){
    		TrangThai = trangThai;
	}	

    //Phuong thuc
    	// Nhap thong tin phong
		void nhap(){
    		cout << "Nhap ma phong: ";
    		cin >> MaPhong;
    		cout << "Nhap loai phong: ";
    		cin >> LoaiPhong;
    	do{
       		cout << "Nhap tang (> 0): ";
        	cin >> Tang;
    	}while(Tang <= 0);
    	do{
        	cout << "Nhap suc chua (> 0): ";
        	cin >> SucChua;
    	}while(SucChua <= 0);
    	do{
        	cout << "Nhap gia thue (> 0): ";
        	cin >> GiaThue;
    	}while(GiaThue <= 0);
    	int trangThai;
    	do{
        	cout << "Nhap trang thai (0: Con trong, 1: Da thue): ";
        	cin >> trangThai;
    	}while(trangThai != 0 && trangThai != 1);

    	TrangThai = (trangThai == 1);
}

		// Xuat thong tin phong
		void xuat(){
    		cout << "Ma phong: " << MaPhong << endl;
    		cout << "Loai phong: " << LoaiPhong << endl;
    		cout << "Tang: " << Tang << endl;
    		cout << "Suc chua: " << SucChua << endl;
    		cout << "Gia thue: " << GiaThue << endl;

    		cout << "Trang thai: ";
   	 	if(TrangThai)
        	cout << "Da thue" << endl;
    	else
        	cout << "Con trong" << endl;
}
};

// ============================================================================
// KHUNG LỚP QUẢN LÝ KHÁCH SẠN
// ============================================================================
class QuanLyKhachSan{
    private:

    public: 
    // ========================================================================
    // PHẦN 2: LÝ BẢO TRÂM
    // ========================================================================

    // ========================================================================
    // PHẦN 3: NGUYỄN HIỀN PHƯƠNG
    // ========================================================================

    // ========================================================================
    // PHẦN 4: NGUYỄN THỊ NGỌC ANH
    // ========================================================================
};

// ============================================================================
// PHẦN 5: NGUYỄN KIM HOÀNG HÀ (Nhóm trưởng)
// ============================================================================
int main(){
    return 0;

}
