# eeclassDownloader
eeclass只要教師上傳的是PPT，會自動轉檔成圖片檔放在上面，除非使用附件上傳，不然無法下載下來。
基本上沒什麼用途，只是將投影片全部載下來。提供給教授傳了一堆圖片，然後懶得找教授拿PPT，又覺得一張一張載很麻煩的人。
## Usage
First compile using your favorite compiler, then execute the executable as
```
    <Executable_Name> <EECLASS_URL> <Save Location Name> <Amount>
```

~~The program won't work if any argument is missing.~~<br/>
Now work with three modes:
- Only URL, default download directory is ./Download, default download amount is 200
- URL, and specify directory, default download amount is 200
- URL, and specify directory and download amount<br/>
The folder prefix is set to be same as the directory of the executable.

URL example:
```
    http://eeclass.utaipei.edu.tw/sysdata/doc/<hash_prefix>/<hash>/images/
```

