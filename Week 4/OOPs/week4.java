interface Test{
    int square(int n);
}

class Arithmetic implements Test{
    public int square(int n){
        return n * n;
    }
}

class ToTestInt{
    public static void main(String[] args){
        Arithmetic obj = new Arithmetic();
        System.out.println("Square= " + obj.square(10));
    }
}

class Outer{
    void display(){
        System.out.println("Outer class");
    }

    class Inner{
        void display(){
            System.out.println("Inner class");
        }
    }
}

class T{
    public static void main(String[] args){
        Outer obj = new Outer();
        obj.display();

        Outer.Inner in = obj.new Inner();
        in.display();
    }
}

class Point{
    private int x, y;
    Point(){
        x = 0;
        y = 0;
    }

    Point(int x,int y){
        this.x = x;
        this.y = y;
    }

    void setX(int x){
        this.x = x;
    }

    void setY(int y){
        this.y = y;
    }

    void setXY(int x,int y){
        this.x = x;
        this.y = y;
    }

    void display(){
        System.out.println("(" + x + "," + y + ")");
    }
}

class Print{
    public static void main(String[] args){
        Point p = new Point(10, 20);
        p.display();

        p.setXY(3, 4);
        p.display();
    }
}

class Box{
    double l, b;

    Box(double l1, double b1){
        l = l1;
        b = b1;
    }

    double area(){
        return l * b;
    }
}

class Box3D extends Box{
    double height;

    Box3D(double l,double b,double h){
        super(l, b);
        height = h;
    }

    double volume(){
        return l * b * height;
    }
}

class Demo{
    public static void main(String[] args){
        Box3D b = new Box3D(10, 5, 4);
        System.out.println("Area = " + b.area());
        System.out.println("Volume = " + b.volume());
    }
}
