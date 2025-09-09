class Main{
    public static void main(String[] args){
        Manusia kmanusia;
        Karyawan kkaryawan;
        
        kmanusia = new Manusia();
        
        kmanusia.setNama("Gina");
        kmanusia.setAlamat("Bandung");
        kmanusia.setNoKtp("320.120.777");
        kmanusia.setNoTelepon("08188899977");
        System.out.println(kmanusia.getNama());
        System.out.println(kmanusia.getAlamat());
        System.out.println(kmanusia.getNoKtp());
        System.out.println(kmanusia.getNoTelepon());
        
        kkaryawan = new Karyawan();
        
        kkaryawan.setNama("Gina");
        kkaryawan.setAlamat("Bandung");
        kkaryawan.setNoKtp("320.120.777");
        kkaryawan.setNoTelepon("08188899977");
        kkaryawan.setNomorPegawai("13202020");
        kkaryawan.setJabatan("-");
        kkaryawan.setDepartemen("-");
        
        System.out.println(kkaryawan.getNama());
        System.out.println(kkaryawan.getAlamat());
        System.out.println(kkaryawan.getNoKtp());
        System.out.println(kkaryawan.getNoTelepon());
        System.out.println(kkaryawan.getNomorPegawai());
        System.out.println(kkaryawan.getJabatan());
        System.out.println(kkaryawan.getDepartemen());
    }
}