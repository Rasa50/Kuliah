# ===== Class BahanAksesoris =====
class BahanAksesoris:
    def __init__(self, nama_bahan, deskripsi):
        self.nama_bahan = nama_bahan
        self.deskripsi = deskripsi

    def __str__(self):
        return f"{self.nama_bahan} - {self.deskripsi}"


# ===== Class Kain (inherit BahanAksesoris) =====
class Kain(BahanAksesoris):
    def __init__(self, nama_bahan, deskripsi, jenis_serat):
        super().__init__(nama_bahan, deskripsi)
        self.jenis_serat = jenis_serat

    def __str__(self):
        return f"{self.nama_bahan} ({self.jenis_serat}) - {self.deskripsi}"


# ===== Class Aksesoris =====
class Aksesoris:
    def __init__(self, jenis, pangsa_pasar, harga, bahan: BahanAksesoris, deskripsi=""):
        self.jenis = jenis
        self.pangsa_pasar = pangsa_pasar
        self.harga = harga
        self.bahan = bahan
        self.deskripsi = deskripsi

    def __str__(self):
        return (f"Aksesoris: {self.jenis}, Pasar: {self.pangsa_pasar}, Harga: {self.harga}, "
                f"Bahan: {self.bahan}, Deskripsi: {self.deskripsi}")


# ===== Class IndustriKreatif =====
class IndustriKreatif:
    def __init__(self, no_izin, nama, kota, deskripsi=""):
        self.no_izin = no_izin
        self.nama = nama
        self.kota = kota
        self.deskripsi = deskripsi

    def __str__(self):
        return f"Industri Kreatif {self.nama} ({self.kota}) - Izin: {self.no_izin}"


# ===== Class PengusahaAksesoris =====
class PengusahaAksesoris:
    def __init__(self, kode, industri: IndustriKreatif):
        self.kode = kode
        self.industri = industri
        self.aksesoris_list = []  # agregasi dengan Aksesoris

    def tambah_aksesoris(self, aksesoris: Aksesoris):
        self.aksesoris_list.append(aksesoris)

    def __str__(self):
        result = f"Pengusaha {self.kode}, Industri: {self.industri.nama}\nProduk:\n"
        for a in self.aksesoris_list:
            result += f"  - {a}\n"
        return result


# ======== DEMO PROGRAM ========
if __name__ == "__main__":
    # Buat industri kreatif
    industri = IndustriKreatif("IZN001", "Kreasi Bandung", "Bandung", "Fokus pada fashion dan aksesoris")

    # Buat pengusaha
    pengusaha = PengusahaAksesoris("P001", industri)

    # Buat bahan
    kain_batik = Kain("Batik", "Motif tradisional Jawa", "Katun")
    manik = BahanAksesoris("Manik-manik", "Manik kaca warna-warni")

    # Buat aksesoris
    gelang = Aksesoris("Gelang", "Remaja", 50000, manik, "Cocok untuk gaya kasual")
    syal = Aksesoris("Syal Batik", "Wanita", 120000, kain_batik, "Bisa untuk acara formal")

    # Tambahkan produk ke pengusaha
    pengusaha.tambah_aksesoris(gelang)
    pengusaha.tambah_aksesoris(syal)

    # Tampilkan data
    print(industri)
    print()
    print(pengusaha)
