/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;

/**
 *
 * @author admin
 */
public class BangDia extends SanPham {
    private int doDai;
    public BangDia(String tenSanPham, double giaSanPham, int doDai) {
        super(tenSanPham, doDai);
        this.doDai = doDai;
    }
    
    public BangDia() {
        
    }

    @Override
    public void hienThi() {
        super.hienThi();
        System.out.printf("Do dai: %d\n", this.doDai);
    }
    
    @Override
    public void nhap1Sp() {
        super.nhap1Sp();
        System.out.print("Do dai: ");
        this.doDai = Integer.parseInt(CauHinh.SC.nextLine());
    }
}
