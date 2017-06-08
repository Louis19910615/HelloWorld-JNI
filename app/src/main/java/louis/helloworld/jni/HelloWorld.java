package louis.helloworld.jni;

/**
 * Created by louis on 2017/6/5.
 */

public class HelloWorld {

    public native void print();

    static { System.loadLibrary("native-lib");
    }

}
