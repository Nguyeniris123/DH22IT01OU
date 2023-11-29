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
        HocVien h1 = new HocVien("Ho Chi nguyen", LocalDate.of(2004, 12, 9));
        HocVien h2 = new HocVien("nguyen Van A", "14/03/2001");
//        h1.hienThi();
//        h2.hienThi();
        QuanLiHocVien ql = new QuanLiHocVien();
        ql.themHv(h1,h2);
        ql.themHv();
        ql.docDsHv();
        ql.hienThiDs();
    }
}
