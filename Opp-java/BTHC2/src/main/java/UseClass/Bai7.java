/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package UseClass;
import BuildClass.HocVien;
import BuildClass.QuanLiHocVien;
import java.io.FileNotFoundException;
import java.time.LocalDate;


/**
 *
 * @author admin
 */
public class Bai7 {
    public static void main(String[] args) throws FileNotFoundException {
        HocVien h1 = new HocVien("Ho Chi Nguyen", LocalDate.of(2004, 12, 9));
        HocVien h2 = new HocVien("nguyen Van A", "14/03/2001");
//        h1.hienThi();
//        h2.hienThi();
        QuanLiHocVien ql = new QuanLiHocVien();
        ql.themHv(h1,h2);
        //them Hv bang cach nhap
//        ql.themHv();
//        ql.docDsHv();
        ql.nhapDiemDs();
        ql.hienThiDs();
        System.out.println("Sap Xep giam dan: ");
        ql.sapxep();
        ql.hienThiDs();
        
        //tim kiem 1 hv theo id
        System.out.println("Tim kiem hv co ma Hv la 1");
        HocVien h3 = ql.timKiem(1);
        h3.hienThi();
        
        //tim kiem 1 hv theo keyword
        System.out.println("Tim Kiem hv co ten: Ho Chi Nguyen");
        ql.timKiem("Ho Chi Nguyen").forEach(h -> h.hienThi());
        
        //Sinh vien dat hb - o day nen ghi zô 1 file txt
        System.out.println("==== Hoc Bong ====");
        ql.timKiemHb().forEach(h -> h.hienThi());
        
        ql.thongKeTuoiDs();
    }
}
