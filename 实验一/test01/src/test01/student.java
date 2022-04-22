package test01;

public class student {
    private String name;// 姓名
    private int class_id;// 班级
    private String student_id;// 学号

    public String toString() {
        return "Person " + "name= " + name + ",   class_id= " + class_id + ",   student_id= " + student_id + ' ';
    }

    public student() {
    }
    public student(String name, int class_id, String student_id) {
        this.name = name;
        this.class_id = class_id;
        this.student_id = student_id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getClass_id() {
        return class_id;
    }

    public void setClass_id(int class_id) {
        this.class_id = class_id;
    }

    public String getStudent_id() {
        return student_id;
    }

    public void setClass_id(String class_id) {
        this.student_id = class_id;
    }

}
