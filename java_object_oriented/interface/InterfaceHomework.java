import java.lang.reflect.*;

interface Interface {

}

class A1 implements Interface {

    int a1Int;
    String a1Str;

    public A1(int a1Int, String a1Str) {
        this.a1Int = a1Int;
        this.a1Str = a1Str;
    }

    public void a1Function(int a) {

    }

}

class A2 implements Interface {

    int a2Int;
    String a2Str;

    public A2(int a2Int, String a2Str) {
        this.a2Int = a2Int;
        this.a2Str = a2Str;
    }

    public void a2Function(int a) {

    }

}

class A3 implements Interface {

    int a3Int;
    String a3Str;

    public A3(int a3Int, String a3Str) {
        this.a3Int = a3Int;
        this.a3Str = a3Str;
    }

    public void a3Function(int a) {

    }

}

class A4 implements Interface {

    int a4Int;
    String a4Str;

    public A4(int a4Int, String a4Str) {
        this.a4Int = a4Int;
        this.a4Str = a4Str;
    }

    public void a4Function(int a) {

    }

}

class A5 implements Interface {

    int a5Int;
    String a5Str;

    public A5(int a5Int, String a5Str) {
        this.a5Int = a5Int;
        this.a5Str = a5Str;
    }

    public void a5Function(int a) {

    }

}

public class InterfaceHomework {

    public static void main(String[] args) {

        Interface a1 = new A1(9, "test1");
        Interface a2 = new A2(8, "test2");
        Interface a3 = new A3(7, "test3");
        Interface a4 = new A4(6, "test4");
        Interface a5 = new A5(5, "test5");

        yazdir(a1);
        System.out.println("-----------------");
        yazdir(a2);
        System.out.println("-----------------");
        yazdir(a3);
        System.out.println("-----------------");
        yazdir(a4);
        System.out.println("-----------------");
        yazdir(a5);

    }

    public static void yazdir(Interface x) {

        System.out.println("Sinif adi: " + x.getClass().getSimpleName());

        System.out.println("Degiskenler: ");
        int i = 1;
        for (Field f : x.getClass().getDeclaredFields()) {
            System.out.println("\t" + i + "- " + f);
            i++;
        }

        System.out.println("Methodlar: ");
        i = 1;
        for (Method m : x.getClass().getDeclaredMethods()) {
            System.out.println("\t" + i + "- " + m);
        }

    }

}