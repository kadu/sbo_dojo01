<HTML>
<HEAD>
 <TITLE>DOJO</TITLE>
</HEAD>
<BODY>
<pre style="background-color:#EBEBEB;">
<?php
  function testeVazio(){
    if(valida("") != "Erro, parametros vazios!") {
      echo "Passou vazio e não detectou erro ............. FAIL";
    } else {
      echo "Teste valida com parametros vazios ........... OK";
    }
    echo "<br />";
  }

  function testaEspacoEmBranco() {
    if(valida(" ") != "Erro, espacos em branco detectado!") {
      echo "Passou espacos em branco e nao detectou erro . FAIL";
    } else {
      echo "Teste valida espacos em branco ............... OK";
    }
    echo "<br />";
  }
  
  function testaDoisEspacosBrancos(){
    if(valida("  ") != "Erro, espacos em branco detectado!")
      echo "Passou dois espacos em branco nao detectados . FAIL";
    else
      echo "Passou no teste dos dois espacos em branco.... OK<br/>";
  }
  
  function testaProtocolo() {
    $teste = array(
      "protocolo" => "http",
      "host" => "teste",
    );
    
    if(valida("http://teste") != $teste ) {
      echo "Erro, Retornou array invalido ................ FAIL";
    } else {
      echo "Array semelhante, passou ..................... OK";
    }
  }
  
  function valida($param){
    if ($param == "")
      return ("Erro, parametros vazios!");
      
    $url = trim($param);
    if ($url == ""){
      return "Erro, espacos em branco detectado!";
    } /*else {
      return "Passou no teste dos espacos em brancos...... OK<br/>";
    }*/
    
    return array("protocolo"=>"http",
                 "host"=>"teste"
    );

  
  }


  testeVazio();
  testaEspacoEmBranco();
  testaDoisEspacosBrancos();
  testaProtocolo();
?>
</pre>
</BODY>
</HTML>
