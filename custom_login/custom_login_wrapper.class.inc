<?php

/**
 * @file
 * Implementacao do Framework WSIF
 **/

class CustomLoginWrapper extends CustomLoginAPI implements WSIFInterface {
  
  public function wsifCheckConnection(){
  	try{
  	  $response = $this->getData();
  	  return true;
  	}catch(Exception $e){
  	  watchdog_expetion('custom_login', $e);
  	}
  	return false;
  }

  public function wsifGetVersion(){
  	try{
  	  return $this->getVersion();
  	}catch(Exception $e){
  	  watchdog_expetion('custom_login', $e);
  	}
    return 'Unknown';
  }
  
}