<?php

require("../includes/config.php");

if($_SERVER["REQUEST_METHOD"] == "POST")
{	
	
	if(empty($_POST["stock"]))
	{
		apologize("You need to specify which stock to sell.");
	}else{
		$id = $_SESSION["id"];
		$stock = $_POST["stock"];
	if(!$shares = query("SELECT shares FROM portfolio WHERE id = $id AND symbol = '$stock'")){
		apologize("You don't own any shares of this stock");
	}else{
	 	$value = lookup("$stock");
	 	$shares = $shares[0]["shares"];
	 	$price = $value["price"];
	 	$profit = $shares*$price;
	 	$transaction = mysqli_num_rows($shares);
	 	
	 	query("DELETE FROM portfolio WHERE id = $id AND symbol = '$stock'");
	 	query("UPDATE users SET cash = cash + $profit WHERE id = $id");
	 	query("INSERT INTO history (user_id, symbol, status, shares, price) 
	 	VALUES($id, '$stock', 'SELL', $shares, $price)");
	 	render("../views/sell.php", ["title" => "Sell", "value" => $value , "profit" => $profit]);
	 }
	}
}
else
{
  render("sell_form.php", ["title" => "Sell"]);
}
?>