function setup()//設定只做一次
{
    createCanvas(400,200);
}
function draw()//畫圖，每秒60貞
{
    let s = second();//0--59秒
    if(s%2==0) //if後面一定要加大括號
    {
      background(45,20,180);
    }
    else background(58,114,191);
}
