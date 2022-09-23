import json, argparse, os, sys, requests, random, wget

description = argparse.ArgumentParser(description='This program for parse user json file and find the winner!')
description.add_argument('-l', '--link', action='store', type=str, help='url of file')
args = description.parse_args()

if (args.link != None):
    #print("args.link: ", args.link)
    URL = args.link
    getJsonFile = requests.get(URL)
    jsonFile = getJsonFile.text
    jsonData = json.loads(jsonFile)
    userlist = list(jsonData)
    idList = list()

    for i in userlist:
      #print(i, end='\n')
      userDict = dict(i)
      #print(userDict['id'])
      idList.append(userDict['id'])

#print(idList)

    winnerId = random.randint(1, 10)
    print("Winner is number", winnerId)
else:
    description.print_help()


'https://bit.ly/3Uqh4zt'



'''ЦЕ КОД ДЛЯ ЗАВАНТАЖЕННЯ ФАЙЛА, АЛЕ У МЕНЕ НЕ ПРАЦЮЄ


Traceback (most recent call last):
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/urllib/request.py", line 1348, in do_open
    h.request(req.get_method(), req.selector, req.data, headers,
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/http/client.py", line 1282, in request
    self._send_request(method, url, body, headers, encode_chunked)
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/http/client.py", line 1328, in _send_request
    self.endheaders(body, encode_chunked=encode_chunked)
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/http/client.py", line 1277, in endheaders
    self._send_output(message_body, encode_chunked=encode_chunked)
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/http/client.py", line 1037, in _send_output
    self.send(msg)
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/http/client.py", line 975, in send
    self.connect()
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/http/client.py", line 1454, in connect
    self.sock = self._context.wrap_socket(self.sock,
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/ssl.py", line 513, in wrap_socket
    return self.sslsocket_class._create(
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/ssl.py", line 1071, in _create
    self.do_handshake()
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/ssl.py", line 1342, in do_handshake
    self._sslobj.do_handshake()
ssl.SSLCertVerificationError: [SSL: CERTIFICATE_VERIFY_FAILED] certificate verify failed: unable to get local issuer certificate (_ssl.c:997)

During handling of the above exception, another exception occurred:

Traceback (most recent call last):
  File "/Users/dmytromastierov/ITEA-test/home-assessment/task_9.py", line 10, in <module>
    downloadFile = wget.download(URL, fileName)
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/site-packages/wget.py", line 526, in download
    (tmpfile, headers) = ulib.urlretrieve(binurl, tmpfile, callback)
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/urllib/request.py", line 241, in urlretrieve
    with contextlib.closing(urlopen(url, data)) as fp:
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/urllib/request.py", line 216, in urlopen
    return opener.open(url, data, timeout)
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/urllib/request.py", line 519, in open
    response = self._open(req, data)
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/urllib/request.py", line 536, in _open
    result = self._call_chain(self.handle_open, protocol, protocol +
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/urllib/request.py", line 496, in _call_chain
    result = func(*args)
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/urllib/request.py", line 1391, in https_open
    return self.do_open(http.client.HTTPSConnection, req,
  File "/Library/Frameworks/Python.framework/Versions/3.10/lib/python3.10/urllib/request.py", line 1351, in do_open
    raise URLError(err)
urllib.error.URLError: <urlopen error [SSL: CERTIFICATE_VERIFY_FAILED] certificate verify failed: unable to get local issuer certificate (_ssl.c:997)>
dmytromastierov@MacBook-Pro-Dmytro home-assessment % 


fileName = "pollres.json"
downloadFile = wget.download(URL, fileName)
'''