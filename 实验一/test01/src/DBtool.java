

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBtool {
    private static final String DBURL = "jdbc:mysql://127.0.0.1:3306/test?useUnicode=true&characterEncoding=utf-8&serverTimezone=GMT";
    private static final String DBUSER = "root";
    private static final String DBPASSWORD = "5422847";
    private static final String DBDRIVER = "com.mysql.cj.jdbc.Driver";

    public DBtool() {
        try {
            Class.forName(DBDRIVER);//加载数据库驱动
        } catch (ClassNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }


    public Connection getCon() throws Exception {
        Connection conn = null;
        try {
            conn = DriverManager.getConnection(DBURL, DBUSER, DBPASSWORD);
        } catch (SQLException e) {
            System.err.print(e);
        }
        return conn;
    }

    public static void main(String[] args) {
        DBtool dbUtil = new DBtool();
        Connection conn = null;
        try {
            conn = dbUtil.getCon();
            if (conn != null)
                System.out.println("连接成功");
            else
                System.out.println("连接失败");

            dbUtil.closeCon(conn);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void closeCon(Connection conn) throws Exception {
        // TODO Auto-generated method stub
        if (conn != null) {
            conn.close();
        }
    }
}