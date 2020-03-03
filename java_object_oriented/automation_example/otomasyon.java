import static java.lang.System.exit;
import java.util.Scanner;
import java.util.Arrays;

class Personel {

    private String ad;
    private String soyad;
    private int sicil_numarasi;
    private String unvan;
    private int gunluk_ucret = 100;
    private int kalan_izin_gun = 20;
    private static int numarator = 1;
    private int calistigi_gun;

    Personel(String newAd, String newSoyad, int newCalistigi_gun) {
        this.ad = newAd;
        this.soyad = newSoyad;
        this.calistigi_gun = newCalistigi_gun;
        this.sicil_numarasi = numarator++;

    }

    public double maas_hesapla() {
        return this.getCalistigi_gun() * this.getGunluk_ucret();
    }

    public void bilgileri_goruntule() {
        System.out.println(getUnvan() + " " + getAd() + " " + getSoyad());
        System.out.println("Sicil no: " + getSicil_numarasi());
        System.out.println("Maas: " + maas_hesapla());
        System.out.println("Kalan izin: : " + getKalan_izin_gun());
    }

    public String getAd() {
        return ad;
    }

    public void setAd(String ad) {
        this.ad = ad;
    }

    public String getSoyad() {
        return soyad;
    }

    public void setSoyad(String soyad) {
        this.soyad = soyad;
    }

    public int getSicil_numarasi() {
        return sicil_numarasi;
    }

    public void setSicil_numarasi(int sicil_numarasi) {
        this.sicil_numarasi = sicil_numarasi;
    }

    public String getUnvan() {
        return unvan;
    }

    public void setUnvan(String unvan) {
        this.unvan = unvan;
    }

    public int getGunluk_ucret() {
        return gunluk_ucret;
    }

    public void setGunluk_ucret(int gunluk_ucret) {
        this.gunluk_ucret = gunluk_ucret;
    }

    public int getKalan_izin_gun() {
        return kalan_izin_gun;
    }

    public void setKalan_izin_gun(int kalan_izin_gun) {
        this.kalan_izin_gun = kalan_izin_gun;
    }

    public static int getNumarator() {
        return numarator;
    }

    public static void setNumarator(int aNumarator) {
        numarator = aNumarator;
    }

    public int getCalistigi_gun() {
        return calistigi_gun;
    }

    public void setCalistigi_gun(int calistigi_gun) {
        this.calistigi_gun = calistigi_gun;
    }

}

class Yonetici extends Personel {

    public Yonetici(String ad, String soyad, int calistigi_gun) {
        super(ad, soyad, calistigi_gun);
    }

    @Override
    public double maas_hesapla() {
        return super.maas_hesapla() + (super.maas_hesapla() * 20 / 100);

    }

}

class Temsilci extends Personel {

    public Temsilci(String ad, String soyad, int calistigi_gun) {
        super(ad, soyad, calistigi_gun);
    }

    public double maas_hesapla() {
        return super.maas_hesapla() + (super.maas_hesapla() * 15 / 100);

    }
}

public class otomasyon{

    public static void izinden_dus(Personel[] dizi, int sicil_no, int gun) {

        dizi[sicil_no - 1].setKalan_izin_gun(dizi[sicil_no - 1].getKalan_izin_gun() - gun);

    }

    public static void main(String[] args) {

        Scanner giris = new Scanner(System.in);
        Personel[] array = new Personel[1];
        int sayac = 0;

        while (1 < 2) {
            System.out.println("\n" + "-----------------");
            System.out.println("1- Yonetici Ekle");
            System.out.println("2- Temsilci Ekle");
            System.out.println("3- Personel Ekle");
            System.out.println("4- Maaslari Hesapla");
            System.out.println("5- Izinden Dus");
            System.out.println("6- Tum Personel bilgilerini Goruntule");
            System.out.println("7- Cikis");
            System.out.print("Secim: ");
            int secim = giris.nextInt();
            System.out.println("-----------------" + "\n");

            // Yonetici
            if (secim == 1) {
                System.out.print("Yonetici Bilgilerini Giriniz" + "\n" + "Ad: ");
                String adi = giris.next();
                System.out.print("Soyad: ");
                String soyadi = giris.next();
                System.out.print("Calistigi gun: ");
                int gun = giris.nextInt();
                Yonetici yonetici = new Yonetici(adi, soyadi, gun);
                yonetici.setUnvan("Yonetici");
                array[sayac] = yonetici;
                array = Arrays.copyOf(array, array.length + 1);
                sayac++;
            } //Temsilci
            else if (secim == 2) {
                System.out.print("Temsilci Bilgilerini Giriniz" + "\n" + "Ad: ");
                String adi = giris.next();
                System.out.print("Soyad: ");
                String soyadi = giris.next();
                System.out.print("Calistigi gun: ");
                int gun = giris.nextInt();
                Temsilci temsilci = new Temsilci(adi, soyadi, gun);
                temsilci.setUnvan("Temsilci");
                array[sayac] = temsilci;
                array = Arrays.copyOf(array, array.length + 1);
                sayac++;
            } //Personel
            else if (secim == 3) {
                System.out.print("Personel Bilgilerini Giriniz" + "\n" + "Ad: ");
                String adi = giris.next();
                System.out.print("Soyad: ");
                String soyadi = giris.next();
                System.out.print("Calistigi gun: ");
                int gun = giris.nextInt();
                Personel personel = new Personel(adi, soyadi, gun);
                personel.setUnvan("Personel");
                array[sayac] = personel;
                array = Arrays.copyOf(array, array.length + 1);
                sayac++;
            } //Maas Hesapla
            else if (secim == 4) {
                for (int i = 0; i < sayac; i++) {
                    Personel array1 = array[i];
                    System.out.println(array1.getSicil_numarasi() + "- " + array1.getAd() + " maas: " + array1.maas_hesapla());
                }
            } //Izinden dus
            else if (secim == 5) {
                System.out.print("Sicil No: ");
                int sicil = giris.nextInt();
                System.out.print("Dusulecek Izin Gun Sayisi: ");
                int izing = giris.nextInt();
                izinden_dus(array, sicil, izing);

            } //Yazdir
            else if (secim == 6) {
                for (int i = 0; i < sayac + 1; i++) {
                    Personel array1 = array[i];
                    if (array1 != null) {
                        array1.bilgileri_goruntule();
                        System.out.println("----------------------");
                    }

                }

            } else if (secim == 7) {
                exit(0);
            } else {
                System.out.println("1-7 arası deger giriniz.");
            }
        }
    }

}
