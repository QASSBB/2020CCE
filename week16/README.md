# 第16周隨堂作業

## 1. step01-1_畫出圓盤,用ellipse(圓心x,y, 寬,高) 配合void setup()及void draw()還有background() ![week16-1](https://github.com/QASSBB/2020CCE/blob/gh-pages/week16/week16-1.png?raw=true)

## 2. step01-2_畫出圓弧arc,參與很像ellipse()的圓心、寬高,但多了2個不明參數,我們利用fill()不同色彩來看結果,並利用mouseX來算出一個magic number ![week16-2](https://github.com/QASSBB/2020CCE/blob/gh-pages/week16/week16-2.png?raw=true)

## 3. step01-3_嘗試arc()的參數,重點在了解 start 的意思,它可以讓圓弧轉動 ![week16-3](https://github.com/QASSBB/2020CCE/blob/gh-pages/week16/week16-3.png?raw=true)

## 4. step02-1_利用for迴圈,來畫出24片細細的小片,換算出角度,換算出shift位移量,再利用餘數來決定色彩,完成會轉動的大轉盤 ![week16-4](https://github.com/QASSBB/2020CCE/blob/gh-pages/week16/week16-4.png?raw=true)

## 5. step02-2_利用if(i==0)來挑出最前面的i,把它設成橘色 ![week16-5](https://github.com/QASSBB/2020CCE/blob/gh-pages/week16/week16-5.png?raw=true)

## 6. step02-3_我們改利用外面的global變數float start=0,再於draw()裡,if(start比10小)start+=0.01來讓它轉動 ![week16-6](https://github.com/QASSBB/2020CCE/blob/gh-pages/week16/week16-6.png?raw=true)

## 7. step03-1_利用速度v來讓start位置會改變, 只要速度夠快,就繼續轉 start += v;  v變0.99倍 ![week16-7](https://github.com/QASSBB/2020CCE/blob/gh-pages/week16/week16-7.png?raw=true)

## 8. step03-2_為了讓每次轉動都有變化,我們在mousePressed()裡,利用random()亂數來決定一開始的速度,速度不同,轉動的結果就會不同 ![week16-8](https://github.com/QASSBB/2020CCE/blob/gh-pages/week16/week16-8.png?raw=true)

