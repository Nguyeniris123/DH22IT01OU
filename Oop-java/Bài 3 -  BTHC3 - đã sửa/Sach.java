/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;

/**
 *
 * @author admin
 */
public class Sach extends SanPham {
    private int soTrang;
    public Sach(String tenSanPham, double giaSanPham, int soTrang) {
        super(tenSanPham, giaSanPham);
        this.soTrang = soTrang;
    }
    
    public Sach() {
        
    }

    @Override
    public void hienThi() {
        super.hienThi();
        System.out.printf("So trang: %d\n", this.soTrang);
    }

    @Override
    public void nhap1Sp() {
        super.nhap1Sp();
        System.out.print("So trang: ");
        this.soTrang = Integer.parseInt(CauHinh.SC.nextLine());
    }
    
    
} 
