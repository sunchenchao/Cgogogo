import java.util.List;
import java.util.Vector;
//Javaʹ��ȫ���� ʹ�õݹ���ʵ��
//˼·�ķ��� �����൱��ǰ��ĵ�һ������ Ȼ�� ����Ĳ�ͣ�Ľ��и�������
//�ó����еĽ��
//�ȶ���һ������ ����������е����кõ��ַ���
//Vector����һ�����Ȳ�ȷ�������� �������ų��ȵı仯���仯

public class Test {
    public static List f(String str) {

//        System.out.println("sunchenchao".substring(0,5));
        List lst = new Vector();
        //�����ѭ����ȥ������
        //���ǵ�������ַ����ĳ���ֻʣ��һ����ʱ�� �����������ѭ��
        if (str.length() == 1) {
            lst.add(str);
            //��ӵ��Ǹ�lst��������������Ǹ�lst
            //���Ծ��Ǻ�������ǲ�һ����
            System.out.println(str);

            return lst;
        }
        //�����ȿ�ʼ������
        //�������е����ݶ��Ƿ���l
        for (int i = 0; i < str.length(); i++) {
            char a = str.charAt(i);
            List l = f(str.substring(0, i) + str.substring(i + 1));
            for (int ii = 0; ii < l.size(); ii++) {
                lst.add("" + a + l.get(ii));
            }
        }
        //�ʼ�����Ƚ���
        //������ABC
        //��ABC����ȫ����
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
