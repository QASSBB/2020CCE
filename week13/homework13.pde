void setup()//開新的
{
  size(1024,400);
  textFont( createFont("標楷體",80));
}
void draw()
{
    background(#6A6A95);//色碼
    int s = second(); //Values from= 0-59
    int m = minute(); //Values from 0-59
    int h = hour(); //Values form 0-23
    textSize(80);
    text(h  + ":" + m  +":"+  s ,100,200);
    int  total = s + 60*m + 60*60*h;//總秒數
    int closeH=17, closeM=40, closeS=0;
    int tota12=closeS + 60*closeM + 60*60*closeH;//目標總秒數
    int ans = tota12 -total;
    text("剩下幾秒:" + ans ,100 ,100);
    int ansH=ans/60/60%60 ,ansM=ans/60%60 ,ansS=ans%60;//找零錢
    text(ansH + ":" +ansM +":" +ansS ,100 ,300);
}//    數字   字串 數字 字串 數字
