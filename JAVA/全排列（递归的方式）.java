import java.util.List;
import java.util.Vector;
//Java使用全排列 使用递归来实现
//思路的分析 就是相当于前面的第一个不动 然后 后面的不停的进行各种排列
//得出所有的结果
//先定义一个集合 用来存放所有的排列好的字符串
//Vector就是一个长度不确定的数组 可以随着长度的变化而变化

public class Test {
    public static List f(String str) {

//        System.out.println("sunchenchao".substring(0,5));
        List lst = new Vector();
        //这个是循环出去的条件
        //就是当进入的字符串的长度只剩下一个的时候 就是跳出这个循环
        if (str.length() == 1) {
            lst.add(str);
            //添加的那个lst并不是最外面的那个lst
            //所以就是和外面的是不一样的
            System.out.println(str);

            return lst;
        }
        //这里先开始操作·
        //上面所有的数据都是返给l
        for (int i = 0; i < str.length(); i++) {
            char a = str.charAt(i);
            List l = f(str.substring(0, i) + str.substring(i + 1));
            for (int ii = 0; ii < l.size(); ii++) {
                lst.add("" + a + l.get(ii));
            }
        }
        //最开始就是先进入
        //假如是ABC
        //对ABC进行全排列
        // ABC  BC C

        return lst;
    }
    public static void main(String[] args){
        List all=f("ABCDE");
        for(int i=0;i<all.size();i++){
            System.out.println(all.get(i));
        }
        System.out.println(all.size());
    }
}
