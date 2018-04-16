<?php

    require("../includes/config.php"); 
	
	$id = $_SESSION["id"];
	
	$history = query("SELECT symbol, status, shares, price, date FROM history WHERE user_id = $id ORDER BY date DESC");
	
    render("history_form.php", ["title" => "History", "history" => $history]);

?>