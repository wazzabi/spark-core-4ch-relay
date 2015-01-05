<!DOCTYPE HTML>
<html>
  <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.3.2/jquery.min.js" type="text/javascript" charset="utf-8"></script>
<body>

    <br><br>
    <button id="verde" style="background:green" onclick="switcher('dev1')">DEVICE 1</button>
    <button id="rojo" style="background:red" onclick="switcher('dev2')">DEVICE 2</button>
    <button id="azul" style="background:blue" onclick="switcher('dev3')">DEVICE 3</button>
    <button id="rainbow" style="background:white" onclick="switcher('dev4')">DEVICE 4</button>
    <button id="apagar" style="background:grey" onclick="switcher('turnon')">TURN ON</button>
    <button id="apagar" style="background:black" onclick="switcher('turnoff')">TURN OFF</button>
    <br><br>
    <script type="text/javascript">
	var deviceID    = ""; // set with your Spark Core device ID :)

	function switcher(dev) {
		var funcion = 'switcher';
		var paramStr = dev.toString();

		var requestURL = deviceID + "/" + funcion ;
		$.post( 'proxy.php?' + requestURL , { params: dev });
	}

	
    </script>
</body>
</html>