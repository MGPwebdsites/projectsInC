<?php

require("../includes/config.php");

if($_SERVER["REQUEST_METHOD"] == "POST")
{

	$_POST = lookup($_POST["symbol"]);
	 if($_POST === false)
	 {
	 	apologize("No such stock available");
	 }
	 render("../views/quote.php", ["title" => "Quote"]);
}
else
{
  render("quote_form.php", ["title" => "Quote"]);
}


?>