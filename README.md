# ESP32_quisk_SDR_testing
AM收音機, 不是用來聽廣播節目, 就是玩它的接收原理, 所謂SDR, 就是軟件定義無線電. 不需要 LC TANK

都是抄來的, 不需要自己發明輪子, 但是有些地方因為手邊有些小問題或者零件不同, 小改動  

### 準備, 硬體
ESP32, 純粹產生震盪頻率, 另外還需要跟 PC 端的 QUISK 溝通, 設定頻率  
CD4051, 旋轉開關, 把無線電訊號一個週期分成四等份, 送到運放 MC4558   
MC4558, 雙運算放大器, 連結成兩個差分放大器, 輸出兩個訊號 I 和 Q  
PC, 運行 QUISK 軟體, 要有 MIC-IN / LINE-IN, 一般 2011 年以後的 PC 都是標配  
一根10米的幼電線, 用報廢馬達拆的漆包線也可以, 拖到室外當作天線

### 需要的準備, 軟體 / OS
Win10 / home / pro
python, for Windows installer (64-bit), https://www.python.org/ftp/python/3.11.9/python-3.11.9-amd64.exe  
quisk, 作者網站有教學 [https://james.ahlstrom.name/quisk/](https://james.ahlstrom.name/quisk/docs.html#Installation)  

### 安裝軟體
python-3.11.9-amd64.exe, 執行安裝, 全部內定選項, 不改免麻煩  
安裝完畢, 執行 CMD, 打開一個 DOSBOX, 再來安裝 quisk, 以下指令
```
python -m pip install --upgrade pip
python -m pip install --upgrade setuptools
python -m pip install --upgrade wxPython
python -m pip install --upgrade pyserial
python -m pip install --upgrade quisk 
```

