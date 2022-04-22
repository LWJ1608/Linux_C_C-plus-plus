package test01;

import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class studentTest {
    public static <Student> void main(String[] args)
            throws ClassNotFoundException, NoSuchMethodException, IllegalAccessException, InvocationTargetException, InstantiationException, NoSuchFieldException {
//      通过字符串传参来获取反射对象
        Class student = Class.forName("test01.student");

//      利用反射对象来生成目标对象
//       获取成员变量

        Student LWJ = (Student) student.getConstructor(String.class,int.class,String.class).newInstance("LWJ",12,"04190000");
        System.out.println(LWJ);

//      获取成员变量
//        getDeclaredField()用于获取私有、受保护或公有的属性都可以
//        暴力破解，将private修饰的属性也可以访问修改

        Field t = student.getDeclaredField("class_id");
        t.setAccessible(true);
//        将LWJ的对象中的class_id属性值设置为21
//        age=21
        t.set(LWJ,21);
        System.out.println(LWJ);

    }
}




