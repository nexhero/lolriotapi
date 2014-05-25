lolriotapi
==========

Implementation of Riot API - League Of Legends.

The main class is based in: http://github.com/kevinohashi/php-riot-api - Kevin Ohashi. (I changed somethings).

Remenber add your API Key.
http://localhost/#overlay=admin/config/lol_config

Now you are ready to use riotapi class. 
Example: 
  $riotkey=variable_get('lol_api_key', ''); 
  $myobject=riotapi($riotkey,'lan'); 
  $result=$myobject->getSummonerByName($summoner_name);
