#include <iostream>
#include <string>

using namespace std;

// ============================================================================
// PHẦN 1: MÀO THỊ PHƯƠNG LOAN
// ============================================================================
class PhongKhachSan {
private: // Thuoc tinh
    string MaPhong;
    string LoaiPhong;
    int Tang;
    int SucChua;
    double GiaThue;
    bool TrangThai;

public: 
    // Constructors
    PhongKhachSan() {
        MaPhong = "";
        LoaiPhong = "";
        Tang = 0;
        SucChua = 0;
        GiaThue = 0;
        TrangThai = false;
    }

    // Getters
    string getMaPhong() { return MaPhong; }
    string getLoaiPhong() { return LoaiPhong; }
    int getTang() { return Tang; }
    int getSucChua() { return SucChua; }
    double getGiaThue() { return GiaThue; }
    bool getTrangThai() { return TrangThai; }

    // Setters
    void setMaPhong(string maPhong) { MaPhong = maPhong; }
    void setLoaiPhong(string loaiPhong) { LoaiPhong = loaiPhong; }
    void setTang(int tang) { Tang = tang; }
    void setSucChua(int sucChua) { SucChua = sucChua; }
    void setGiaThue(double giaThue) { GiaThue = giaThue; }
    void setTrangThai(bool trangThai) { TrangThai = trangThai; }

    // Phuong thuc
    // Nhap thong tin phong
    void nhap() {
        cout << "Nhap ma phong: ";
        cin >> MaPhong;
        cout << "Nhap loai phong: ";
        cin.ignore();
        getline(cin, LoaiPhong);
                
        do {
            cout << "Nhap tang (> 0): ";
            cin >> Tang;
        } while (Tang <= 0);

        do {
            cout << "Nhap suc chua (> 0): ";
            cin >> SucChua;
        } while (SucChua <= 0);

        do {
            cout << "Nhap gia thue (> 0): ";
            cin >> GiaThue;
        } while (GiaThue <= 0);

        int trangThai;
        do {
            cout << "Nhap trang thai (0: Con trong, 1: Da thue): ";
            cin >> trangThai;
        } while (trangThai != 0 && trangThai != 1);

        TrangThai = (trangThai == 1);
    }

    // Xuat thong tin phong
    void xuat() {
        cout << "Ma phong: " << MaPhong << endl;
        cout << "Loai phong: " << LoaiPhong << endl;
        cout << "Tang: " << Tang << endl;
        cout << "Suc chua: " << SucChua << endl;
        cout << "Gia thue: " << GiaThue << endl;
        cout << "Trang thai: " << (TrangThai ? "Da thue" : "Con trong") << endl;
    }
};

// ============================================================================
// KHUNG LỚP QUẢN LÝ KHÁCH SẠN
// ============================================================================
class QuanLyKhachSan {
private:
    PhongKhachSan dsPhong[200];
    int n;

public: 
    // ========================================================================
    // PHẦN 2: LÝ BẢO TRÂM
    // ========================================================================
    // Constructor
    QuanLyKhachSan() {
        n = 0;
    }

    // Kiem tra ma phong da ton tai trong cac phong tu 0 den (viTriHienTai - 1)
    bool trungMaPhong(string maPhong, int viTriHienTai) {
        for (int i = 0; i < viTriHienTai; i++) {
            if (dsPhong[i].getMaPhong() == maPhong) {
                return true;
            }
        }
        return false;
    }

    // Nhap danh sach n phong
    void nhapDanhSach() {
        do {
            cout << "Nhap so luong phong (0 < n < 200): ";
            cin >> n;

            if (n <= 0 || n >= 200) {
                cout << "So luong phong khong hop le! Vui long nhap lai.\n";
            }
        } while (n <= 0 || n >= 200);

        for (int i = 0; i < n; i++) {
            cout << "\n========== NHAP PHONG THU " << i + 1 << " ==========\n";
            dsPhong[i].nhap();

            // Kiem tra ma phong trung voi cac phong da nhap truoc do
            while (trungMaPhong(dsPhong[i].getMaPhong(), i)) {
                cout << "Ma phong da ton tai! Vui long nhap lai phong nay.\n";
                dsPhong[i].nhap();
            }
        }

        cout << "\nNhap danh sach phong thanh cong!\n";
    }

    // Xuat danh sach phong
    void xuatDanhSach() {
        if (n == 0) {
            cout << "\nDanh sach phong dang rong!\n";
            return;
        }

        cout << "\n========== DANH SACH PHONG KHACH SAN ==========\n";
        for (int i = 0; i < n; i++) {
            cout << "\n---------- PHONG THU " << i + 1 << " ----------\n";
            dsPhong[i].xuat();
        }
    }

    // Kiem tra du lieu danh sach
    bool kiemTraDuLieu() {
        if (n <= 0 || n >= 200) {
            cout << "Du lieu khong hop le: so luong phong phai 0 < n < 200.\n";
            return false;
        }

        for (int i = 0; i < n; i++) {
            if (dsPhong[i].getMaPhong() == "") {
                cout << "Du lieu khong hop le: phong thu " 
                     << i + 1 << " chua co ma phong.\n";
                return false;
            }

            if (dsPhong[i].getTang() <= 0) {
                cout << "Du lieu khong hop le: tang cua phong " 
                     << dsPhong[i].getMaPhong() << " phai > 0.\n";
                return false;
            }

            if (dsPhong[i].getSucChua() <= 0) {
                cout << "Du lieu khong hop le: suc chua cua phong " 
                     << dsPhong[i].getMaPhong() << " phai > 0.\n";
                return false;
            }

            if (dsPhong[i].getGiaThue() <= 0) {
                cout << "Du lieu khong hop le: gia thue cua phong " 
                     << dsPhong[i].getMaPhong() << " phai > 0.\n";
                return false;
            }

            for (int j = i + 1; j < n; j++) {
                if (dsPhong[i].getMaPhong() == dsPhong[j].getMaPhong()) {
                    cout << "Du lieu khong hop le: ma phong " 
                         << dsPhong[i].getMaPhong() 
                         << " bi trung.\n";
                    return false;
                }
            }
        }

        cout << "Du lieu danh sach phong hop le!\n";
        return true;
    }

    // ========================================================================
    // PHẦN 3: NGUYỄN HIỀN PHƯƠNG
    // ========================================================================
    // Sap xep danh sach theo gia thue tang dan
    void sapXepTheoGiaTangDan() {
        if (n == 0) {
            cout << "\nDanh sach phong dang rong, khong the sap xep!\n";
            return;
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (dsPhong[i].getGiaThue() > dsPhong[j].getGiaThue()) {
                    PhongKhachSan temp = dsPhong[i];
                    dsPhong[i] = dsPhong[j];
                    dsPhong[j] = temp;
                }
            }
        }
        cout << "\nDa sap xep danh sach phong theo gia thue tang dan thanh cong!\n";
    }

    // Tim kiem theo ma phong
    void timTheoMa() {
        if (n == 0) {
            cout << "\nDanh sach phong dang rong!\n";
            return;
        }
        string ma;
        bool timThay = false;
        cout << "Nhap ma phong can tim: ";
        cin >> ma;

        for (int i = 0; i < n; i++) {
            if (dsPhong[i].getMaPhong() == ma) {
                cout << "\n---------- THONG TIN PHONG TIM THAY ----------\n";
                dsPhong[i].xuat();
                timThay = true;
                break;
            }
        }

        if (!timThay) {
            cout << "Khong tim thay phong co ma: " << ma << endl;
        }
    }

    // Tim kiem theo trang thai (0: Con trong, 1: Da thue)
    void timTheoTrangThai() {
        if (n == 0) {
            cout << "\nDanh sach phong dang rong!\n";
            return;
        }
        int tt;
        do {
            cout << "Nhap trang thai can tim (0: Con trong, 1: Da thue): ";
            cin >> tt;
        } while (tt != 0 && tt != 1);

        bool timThay = false;
        bool loaiTrangThai = (tt == 1);

        cout << "\n========== DANH SACH PHONG (" << (loaiTrangThai ? "DA THUE" : "CON TRONG") << ") ==========\n";
        for (int i = 0; i < n; i++) {
            if (dsPhong[i].getTrangThai() == loaiTrangThai) {
                cout << "\n----------------------------------------\n";
                dsPhong[i].xuat();
                timThay = true;
            }
        }

        if (!timThay) {
            cout << "Khong co phong nao o trang thai nay!\n";
        }
    }

    // ========================================================================
    // PHẦN 4: NGUYỄN THỊ NGỌC ANH
    // ========================================================================
    // Them phong vao vi tri
    void themPhong(int viTri) {
        if (n >= 200) {
            cout << "\nDanh sach phong da day!\n";
            return;
        }
        if (viTri < 0 || viTri > n) {
            cout << "\nVi tri khong hop le!\n";
            return;
        }
        for (int i = n; i > viTri; i--) {
            dsPhong[i] = dsPhong[i - 1];
        }
        cout << "\nNhap thong tin phong moi:\n";
        dsPhong[viTri].nhap();
        n++;
        cout << "\nThem phong thanh cong!\n";
    }
    // Xoa phong tai vi tri
    void xoaPhong(int viTri) {
        if (n == 0) {
            cout << "\nDanh sach phong dang rong!\n";
            return;
        }
        if (viTri < 0 || viTri >= n) {
            cout << "\nVi tri khong hop le!\n";
            return;
        }
        for (int i = viTri; i < n - 1; i++) {
            dsPhong[i] = dsPhong[i + 1];
        }
        n--;
        cout << "\nXoa phong thanh cong!\n";
    }
    // Menu
    void menu() {
        int luaChon;
        do {
            cout << "\n========== MENU QUAN LY PHONG KHACH SAN ==========\n";
            cout << "1. Nhap danh sach phong\n";
            cout << "2. Xuat danh sach phong\n";
            cout << "3. Sap xep theo gia thue tang dan\n";
            cout << "4. Tim phong theo ma\n";
            cout << "5. Tim phong theo trang thai\n";
            cout << "6. Them phong tai vi tri\n";
            cout << "7. Xoa phong tai vi tri\n";
            cout << "0. Thoat\n";
            cout << "Nhap lua chon: ";
            cin >> luaChon;
            switch (luaChon) {
                case 1:
                    nhapDanhSach();
                    break;
                case 2:
                    xuatDanhSach();
                    break;
                case 3:
                    sapXepTheoGiaTangDan();
                    break;
                case 4:
                    timTheoMa();
                    break;
                case 5:
                    timTheoTrangThai();
                    break;
                case 6: {
                    int viTri;
                    cout << "Nhap vi tri can them: ";
                    cin >> viTri;
                    themPhong(viTri);
                    break;
                }
                case 7: {
                    int viTri;
                    cout << "Nhap vi tri can xoa: ";
                    cin >> viTri;
                    xoaPhong(viTri);
                    break;
                }
                case 0:
                    cout << "\nKet thuc chuong trinh!\n";
                    break;
                default:
                    cout << "\nLua chon khong hop le!\n";
            }
        } while (luaChon != 0);
    }
};

// ============================================================================
// PHẦN 5: NGUYỄN KIM HOÀNG HÀ (Nhóm trưởng)
// ============================================================================
int main() {
    return 0;
}